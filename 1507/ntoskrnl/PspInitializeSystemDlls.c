/*
 * XREFs of PspInitializeSystemDlls @ 0x1407E0EAC
 * Callers:
 *     PspInitPhase2 @ 0x1407E0C40 (PspInitPhase2.c)
 * Callees:
 *     LookupEntryPoint @ 0x1401535FC (LookupEntryPoint.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PsQuerySystemDllInfo @ 0x14054B934 (PsQuerySystemDllInfo.c)
 */

__int64 PspInitializeSystemDlls()
{
  int v0; // ebx
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r14
  unsigned int v5; // ebp
  __int64 v6; // r12
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0LL;
  v0 = 0;
  v1 = 0LL;
  do
  {
    result = PsQuerySystemDllInfo(v0);
    v4 = result;
    if ( result )
    {
      v5 = 0;
      v6 = *(_QWORD *)(v3 + 16 * v1);
      if ( *(_DWORD *)(v3 + 16 * v1 + 8) )
      {
        do
        {
          v7 = LookupEntryPoint(*(char **)(v4 + 32), *(_QWORD *)(v6 + 16LL * v5), &v9);
          v8 = *(_QWORD *)(v4 + 24) - *(_QWORD *)(v4 + 32) + v9;
          v9 = v8;
          if ( v7 < 0 )
            KeBugCheckEx(0x6Bu, v7, 6uLL, 0LL, 0LL);
          result = *(_QWORD *)(v6 + 16LL * v5 + 8);
          if ( v1 == 1 )
            *(_DWORD *)result = v8;
          else
            *(_QWORD *)result = v8;
          ++v5;
        }
        while ( v5 < LODWORD((&NtdllExportInformation)[2 * v1 + 1]) );
      }
      if ( v0 == 1 )
      {
        DWORD1(xmmword_14077F400) = *(_DWORD *)(v4 + 24);
        KeUserPopEntrySListEndWow64 = DWORD2(xmmword_14077F3F0);
        KeUserPopEntrySListFaultWow64 = (unsigned int)xmmword_14077F3F0;
        result = DWORD1(xmmword_14077F3F0);
        KeUserPopEntrySListResumeWow64 = DWORD1(xmmword_14077F3F0);
      }
    }
    ++v0;
    ++v1;
  }
  while ( v0 < 2 );
  return result;
}
