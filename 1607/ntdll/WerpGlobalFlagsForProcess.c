/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x1800075CC
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180007310 (RtlReportSilentProcessExit.c)
 * Callees:
 *     WerpPathTail @ 0x1800077F0 (WerpPathTail.c)
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeToString @ 0x180013C90 (RtlAppendUnicodeToString.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // esi
  _QWORD v8[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v11; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+5Ah] [rbp-AEh]
  int v13; // [rsp+62h] [rbp-A6h]
  __int16 v14; // [rsp+66h] [rbp-A2h]
  _QWORD v15[3]; // [rsp+68h] [rbp-A0h] BYREF
  int v16; // [rsp+80h] [rbp-88h]
  __int128 v17; // [rsp+88h] [rbp-80h]
  _QWORD ProcessInformation[68]; // [rsp+98h] [rbp-70h] BYREF
  int v19; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v20; // [rsp+2BCh] [rbp+1B4h]
  __int64 v21; // [rsp+2C4h] [rbp+1BCh]

  Handle = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  v19 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v2 = 0;
  v13 = 0;
  v14 = 0;
  memset(v8, 0, sizeof(v8));
  if ( (NtQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)43, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v4 = WerpPathTail(ProcessInformation[1]);
    v5 = v4;
    if ( v4 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( *(_WORD *)(v4 + 2 * v6) );
      v7 = 2 * v6 + 202;
      LOWORD(v8[0]) = 0;
      v8[1] = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7);
      if ( v8[1] )
      {
        WORD1(v8[0]) = v7;
        if ( (int)RtlAppendUnicodeToString(
                    v8,
                    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && (int)RtlAppendUnicodeToString(v8, v5) >= 0 )
        {
          LODWORD(v15[0]) = 48;
          v15[2] = v8;
          v15[1] = 0LL;
          v16 = 64;
          v17 = 0LL;
          if ( (int)NtOpenKey(&Handle, 1LL, v15) >= 0 )
          {
            v10 = 0;
            if ( (RtlInitUnicodeStringEx(&v11, L"GlobalFlag") & 0xC0000000) != 0xC0000000
              && (int)NtQueryValueKey(Handle, &v11, 2LL, &v19, 20, &v10) >= 0
              && (_DWORD)v20 == 4 )
            {
              v2 = v21;
            }
          }
        }
      }
    }
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v8[1] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8[1]);
  return v2;
}
