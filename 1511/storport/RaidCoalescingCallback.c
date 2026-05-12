/*
 * XREFs of RaidCoalescingCallback @ 0x1C0025B50
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000AFB8 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000BBE4 (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0023C38 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0023C54 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     Template_qqqqq @ 0x1C0027520 (Template_qqqqq.c)
 */

__int64 __fastcall RaidCoalescingCallback(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int SystemPowerHint; // eax
  int SystemPowerResumeLatency; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  char v11; // r9
  char v12; // r10
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  char v17; // r10
  unsigned __int64 v18; // rcx
  int v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+48h] [rbp-18h]

  result = RaidIsAdapterControlSupported(a3, 12);
  if ( (_DWORD)result && *(_QWORD *)(a3 + 5096) && *(_QWORD *)(a3 + 5112) )
  {
    SystemPowerHint = RaidAdapterGetSystemPowerHint(a3);
    result = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
    if ( a1 == 1 )
    {
      *(_BYTE *)(a3 + 109) |= 1u;
      v19 = RaidAdapterGetSystemPowerHint(a3);
      SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v19);
      if ( StorEtwLoggingEnabled )
      {
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
          Template_qqqqq(v9, v8, v10, *(_DWORD *)(a3 + 56), v10, v12, v11, SystemPowerResumeLatency, 0x1000000001LL);
      }
      RaCallMiniportAdapterControl(a3 + 296);
      result = MEMORY[0xFFFFF78000000008];
      *(_QWORD *)(a3 + 5344) = MEMORY[0xFFFFF78000000008];
    }
    else if ( a1 == 2 )
    {
      *(_BYTE *)(a3 + 109) &= ~1u;
      LODWORD(v20) = RaidAdapterGetSystemPowerHint(a3);
      v13 = RaidAdapterGetSystemPowerResumeLatency(v20);
      HIDWORD(v20) = v13;
      if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        Template_qqqqq(v15, v14, v16, *(_DWORD *)(a3 + 56), v16, v17, v14, v13, 0x1000000001LL, v20);
      result = RaCallMiniportAdapterControl(a3 + 296);
      if ( *(_QWORD *)(a3 + 5344) )
      {
        v18 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a3 + 5344);
        result = 0x346DC5D63886594BLL * v18;
        *(_QWORD *)(a3 + 5352) += v18 / 0x2710;
        *(_QWORD *)(a3 + 5344) = 0LL;
      }
    }
  }
  return result;
}
