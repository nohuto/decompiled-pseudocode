/*
 * XREFs of LdrpApplyFileNameRedirection @ 0x18002108C
 * Callers:
 *     LdrpPreprocessDllName @ 0x180020EEC (LdrpPreprocessDllName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x180021380 (ApiSetResolveToHost.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180021564 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800248B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     LdrpGetFullPath @ 0x18003FC30 (LdrpGetFullPath.c)
 *     LdrpFreeUnicodeString @ 0x180042C80 (LdrpFreeUnicodeString.c)
 */

__int64 __fastcall LdrpApplyFileNameRedirection(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  _BYTE *v5; // r12
  struct _PEB *v6; // r13
  __int64 v8; // rdi
  int v9; // r14d
  char v10; // bp
  void *ApiSetMap; // rbx
  int v12; // eax
  __int16 v13; // r14
  int appended; // ebx
  char v15; // r15
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // edi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  _WORD v21[8]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v22[16]; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-38h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+18h] BYREF

  v24 = a3;
  v5 = a5;
  v6 = NtCurrentPeb();
  v8 = a2;
  v9 = 0;
  v10 = 1;
  *a5 = 0;
  if ( a1 )
    v9 = a1 + 88;
  ApiSetMap = v6->ApiSetMap;
  LdrpLogDllState(0LL, a2, 5328LL);
  v12 = ApiSetResolveToHost((_DWORD)ApiSetMap, v8, v9, (unsigned int)&v24, (__int64)v21);
  v13 = v21[0];
  appended = v12;
  v15 = v24;
  if ( v12 >= 0 && (_BYTE)v24 )
  {
    v17 = v8;
    if ( v21[0] )
      v16 = 5329LL;
    else
      v16 = 5330LL;
  }
  else
  {
    v16 = 5331LL;
    v17 = v8;
  }
  LdrpLogDllState(0LL, v17, v16);
  if ( !v15 )
    goto LABEL_7;
  if ( !v13 )
    return (unsigned int)-1073740671;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)0x7FFE0030);
  appended = LdrpAppendUnicodeStringToFilenameBuffer(a4, &DestinationString);
  if ( appended >= 0 )
  {
    appended = LdrpAppendUnicodeStringToFilenameBuffer(a4, &SlashSystem32SlashString);
    if ( appended >= 0 )
    {
      appended = LdrpAppendUnicodeStringToFilenameBuffer(a4, v21);
      ProcessParameters = v6->ProcessParameters;
      if ( !ProcessParameters || (v10 = 1, (ProcessParameters->Flags & 0x1000) == 0) )
        v10 = 0;
      LODWORD(v8) = a4;
LABEL_7:
      if ( appended >= 0 && v10 && !LdrpIsSecureProcess )
      {
        v18 = RtlDosApplyFileIsolationRedirection_Ustr(
                1,
                v8,
                (unsigned int)L"\b\n",
                0,
                (__int64)v22,
                0LL,
                0LL,
                0LL,
                0LL);
        if ( v18 >= 0 )
        {
          *v5 = 1;
          LdrpGetFullPath(v22, a4);
          LdrpFreeUnicodeString(v22);
        }
        if ( v18 != -1072365560 )
          return (unsigned int)v18;
      }
    }
  }
  return (unsigned int)appended;
}
