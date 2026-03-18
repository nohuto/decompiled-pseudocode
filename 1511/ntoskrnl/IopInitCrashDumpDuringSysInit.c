/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x140760E7C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopInitializeOfflineCrashDump @ 0x140135E98 (IopInitializeOfflineCrashDump.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1401A8930 (__report_rangecheckfailure.c)
 *     RtlQueryRegistryValuesEx @ 0x1404C8798 (RtlQueryRegistryValuesEx.c)
 *     IoInitializeCrashDump @ 0x1405388F4 (IoInitializeCrashDump.c)
 *     MmInitializeMemoryLimits @ 0x140761084 (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // eax
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  char v7; // [rsp+30h] [rbp-69h] BYREF
  __int16 v8; // [rsp+40h] [rbp-59h]
  __int64 v9; // [rsp+42h] [rbp-57h]
  int v10; // [rsp+4Ah] [rbp-4Fh]
  __int16 v11; // [rsp+4Eh] [rbp-4Bh]
  _QWORD v12[14]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v13[30]; // [rsp+C0h] [rbp+27h] BYREF
  __int16 v14; // [rsp+DEh] [rbp+45h]
  char v15; // [rsp+E0h] [rbp+47h]

  v1 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  IopReportBugCheckProgress = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))HalSetEnvironmentVariableEx;
  v3 = *(_DWORD *)(a1 + 264);
  v7 = 0;
  v8 = 0;
  if ( (v3 & 2) != 0 )
    IopReportBugCheckProgress = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))HvlReportBugCheckProgress;
  v4 = 0;
  v5 = 0LL;
  do
  {
    if ( v5 >= 0x22 )
      _report_rangecheckfailure();
    v13[v5] = 0;
    ++v4;
    ++v5;
  }
  while ( v4 < 0x22 );
  v14 = 257;
  v13[6] = 1;
  v15 = 1;
  SpecialMemoryRanges = MmInitializeMemoryLimits(a1, v13);
  memset(v12, 0, sizeof(v12));
  LODWORD(v12[1]) = 4;
  v12[0] = &IopInitCrashDumpRegCallback;
  LODWORD(v12[4]) = 0;
  v12[2] = L"ExistingPageFiles";
  v12[3] = &v7;
  RtlQueryRegistryValuesEx(2LL, (__int64)L"Session Manager\\Memory Management", (__int64)v12, a1);
  if ( !v7 )
    v1 = IoInitializeCrashDump(0LL) == 0 ? 0xC0000001 : 0;
  IopInitializeOfflineCrashDump(*(_QWORD *)(a1 + 240));
  return v1;
}
