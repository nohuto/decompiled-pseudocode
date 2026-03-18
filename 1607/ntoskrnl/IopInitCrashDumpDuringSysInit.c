/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x1407AB1C0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopInitializeOfflineCrashDump @ 0x14013D3BC (IopInitializeOfflineCrashDump.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     __report_rangecheckfailure @ 0x1401B1250 (__report_rangecheckfailure.c)
 *     SecureDump_Init @ 0x1401CBA9C (SecureDump_Init.c)
 *     RtlQueryRegistryValuesEx @ 0x1404F6E7C (RtlQueryRegistryValuesEx.c)
 *     IoInitializeCrashDump @ 0x14056916C (IoInitializeCrashDump.c)
 *     MmInitializeMemoryLimits @ 0x1407AB404 (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(__int64 a1, ULONG a2)
{
  unsigned int v2; // ebx
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

  v2 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  IopReportBugCheckProgress = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))HalSetEnvironmentVariableEx;
  v7 = 0;
  v8 = 0;
  if ( !ForceDumpDisabled )
    ForceDumpDisabled = (int)SecureDump_Init(a1, a2) < 0;
  if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
    IopReportBugCheckProgress = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))VslReportBugCheckProgress;
  v4 = 0;
  v5 = 0LL;
  do
  {
    if ( v5 >= 0x23 )
      _report_rangecheckfailure();
    v13[v5] = 0;
    ++v4;
    ++v5;
  }
  while ( v4 < 0x23 );
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
  RtlQueryRegistryValuesEx(2LL, (__int64)L"Session Manager\\Memory Management", (__int64)v12);
  if ( !v7 )
    v2 = IoInitializeCrashDump(0LL) == 0 ? 0xC0000001 : 0;
  IopInitializeOfflineCrashDump(*(_QWORD *)(a1 + 240));
  return v2;
}
