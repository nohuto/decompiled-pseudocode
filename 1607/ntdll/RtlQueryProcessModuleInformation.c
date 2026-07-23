/*
 * XREFs of RtlQueryProcessModuleInformation @ 0x18006D5D4
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18006D3A0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x18006D8F0 (LdrQueryProcessModuleInformationEx.c)
 *     RtlpCommitQueryDebugInfo @ 0x18006DF7C (RtlpCommitQueryDebugInfo.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800D08A4 (LdrQueryProcessModuleInformationEx2.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800D5714 (RtlpDeCommitQueryDebugInfo.c)
 */

__int64 __fastcall RtlQueryProcessModuleInformation(__int64 a1, __int16 a2, __int64 a3)
{
  int v4; // r14d
  int v5; // ebp
  int v6; // r15d
  unsigned int ProcessModuleInformationEx2; // eax
  unsigned int v8; // r10d
  void *DebugInfo; // rax
  void *v10; // rbx
  int ProcessModuleInformation; // eax
  char v13; // [rsp+50h] [rbp+8h] BYREF
  size_t Size; // [rsp+58h] [rbp+10h] BYREF

  v4 = a1;
  v5 = (a1 == 0 ? 2 : 0) | ((unsigned __int8)a2 >> 6) & 1;
  v6 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx2(a1, v5, 0, 0, (__int64)&Size);
  else
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx(a1, v5, 0, 0, (__int64)&Size);
  v8 = ProcessModuleInformationEx2;
  if ( ProcessModuleInformationEx2 == -1073741820 )
  {
    DebugInfo = (void *)RtlpCommitQueryDebugInfo(a3, (unsigned int)Size);
    v10 = DebugInfo;
    if ( DebugInfo )
    {
      memset(DebugInfo, 0, (unsigned int)Size);
      if ( v6 )
        ProcessModuleInformation = LdrQueryProcessModuleInformationEx2(v4, v5, (_DWORD)v10, Size, (__int64)&v13);
      else
        ProcessModuleInformation = LdrQueryProcessModuleInformationEx(v4, v5, (_DWORD)v10, Size, (__int64)&v13);
      if ( ProcessModuleInformation >= 0 )
      {
        *(_QWORD *)(a3 + 96) = v10;
        return 0LL;
      }
      RtlpDeCommitQueryDebugInfo(a3, v10, (unsigned int)Size);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v8;
}
