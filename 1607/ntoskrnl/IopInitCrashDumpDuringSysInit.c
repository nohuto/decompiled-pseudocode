/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x1407AB1C0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopInitializeOfflineCrashDump @ 0x14013D92C (IopInitializeOfflineCrashDump.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     SecureDump_Init @ 0x1401CB980 (SecureDump_Init.c)
 *     RtlQueryRegistryValuesEx @ 0x1404D9E08 (RtlQueryRegistryValuesEx.c)
 *     IoInitializeCrashDump @ 0x1405696AC (IoInitializeCrashDump.c)
 *     MmInitializeMemoryLimits @ 0x1407AB404 (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(__int64 Context, ULONG a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  char v7; // [rsp+30h] [rbp-69h] BYREF
  __int16 v8; // [rsp+40h] [rbp-59h]
  __int64 v9; // [rsp+42h] [rbp-57h]
  int v10; // [rsp+4Ah] [rbp-4Fh]
  __int16 v11; // [rsp+4Eh] [rbp-4Bh]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+50h] [rbp-49h] BYREF
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
    ForceDumpDisabled = (int)SecureDump_Init(Context, a2) < 0;
  if ( (*(_DWORD *)(Context + 264) & 2) != 0 )
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
  SpecialMemoryRanges = MmInitializeMemoryLimits(Context, v13);
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Flags = 4;
  QueryTable[0].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&IopInitCrashDumpRegCallback;
  QueryTable[0].DefaultType = 0;
  QueryTable[0].Name = L"ExistingPageFiles";
  QueryTable[0].EntryContext = &v7;
  RtlQueryRegistryValuesEx(2u, L"Session Manager\\Memory Management", QueryTable, (PVOID)Context, 0LL);
  if ( !v7 )
    v2 = IoInitializeCrashDump(0LL) == 0 ? 0xC0000001 : 0;
  IopInitializeOfflineCrashDump(*(_QWORD *)(Context + 240));
  return v2;
}
