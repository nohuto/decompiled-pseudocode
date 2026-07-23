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

__int64 __fastcall IopInitCrashDumpDuringSysInit(PVOID Context)
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
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v13[30]; // [rsp+C0h] [rbp+27h] BYREF
  __int16 v14; // [rsp+DEh] [rbp+45h]
  char v15; // [rsp+E0h] [rbp+47h]

  v1 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  IopReportBugCheckProgress = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))HalSetEnvironmentVariableEx;
  v3 = *((_DWORD *)Context + 66);
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
  SpecialMemoryRanges = MmInitializeMemoryLimits(Context, v13);
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Flags = 4;
  QueryTable[0].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&IopInitCrashDumpRegCallback;
  QueryTable[0].DefaultType = 0;
  QueryTable[0].Name = L"ExistingPageFiles";
  QueryTable[0].EntryContext = &v7;
  RtlQueryRegistryValuesEx(2u, L"Session Manager\\Memory Management", QueryTable, Context, 0LL);
  if ( !v7 )
    v1 = IoInitializeCrashDump(0LL) == 0 ? 0xC0000001 : 0;
  IopInitializeOfflineCrashDump(*((_QWORD *)Context + 30));
  return v1;
}
