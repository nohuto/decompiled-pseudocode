/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x180045C44
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180044890 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18001FA60 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     WerpPathTail @ 0x180045ED4 (WerpPathTail.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180093A70 (NtQueryValueKey.c)
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  unsigned int v1; // edi
  __int64 v3; // rax
  const void *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // esi
  unsigned __int64 v7[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  int v9; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v10; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+5Ah] [rbp-AEh]
  int v12; // [rsp+62h] [rbp-A6h]
  __int16 v13; // [rsp+66h] [rbp-A2h]
  _QWORD v14[3]; // [rsp+68h] [rbp-A0h] BYREF
  int v15; // [rsp+80h] [rbp-88h]
  __int128 v16; // [rsp+88h] [rbp-80h]
  _QWORD ProcessInformation[68]; // [rsp+98h] [rbp-70h] BYREF
  int v18; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v19; // [rsp+2BCh] [rbp+1B4h]
  __int64 v20; // [rsp+2C4h] [rbp+1BCh]

  Handle = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  v18 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v1 = 0;
  v12 = 0;
  v13 = 0;
  memset(v7, 0, sizeof(v7));
  if ( (NtQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)43, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = WerpPathTail(ProcessInformation[1]);
    v4 = (const void *)v3;
    if ( v3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(v3 + 2 * v5) );
      v6 = 2 * v5 + 202;
      LOWORD(v7[0]) = 0;
      v7[1] = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
      if ( v7[1] )
      {
        WORD1(v7[0]) = v6;
        if ( (int)RtlAppendUnicodeToString(
                    (unsigned __int16 *)v7,
                    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && (int)RtlAppendUnicodeToString((unsigned __int16 *)v7, v4) >= 0 )
        {
          LODWORD(v14[0]) = 48;
          v14[2] = v7;
          v14[1] = 0LL;
          v15 = 64;
          v16 = 0LL;
          if ( (int)NtOpenKey(&Handle, 1LL, v14) >= 0 )
          {
            v9 = 0;
            if ( (RtlInitUnicodeStringEx((__int64)&v10, (__int64)L"GlobalFlag") & 0xC0000000) != 0xC0000000
              && (int)NtQueryValueKey(Handle, &v10, 2LL, &v18, 20, &v9) >= 0
              && (_DWORD)v19 == 4 )
            {
              v1 = v20;
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
  if ( v7[1] )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7[1]);
  return v1;
}
