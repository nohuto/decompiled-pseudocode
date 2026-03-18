/*
 * XREFs of HUBMUX_QueueStopToAllPSMs @ 0x1C000CA64
 * Callers:
 *     HUBHSM_NotifyingHubStopToPortsOnReset @ 0x1C0007520 (HUBHSM_NotifyingHubStopToPortsOnReset.c)
 *     HUBHSM_WaitingForPortsToReleaseReferenceOnResetOnResume @ 0x1C0007540 (HUBHSM_WaitingForPortsToReleaseReferenceOnResetOnResume.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueueStopToAllPSMs(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r14
  bool v4; // di
  __int64 i; // rcx
  __int64 v6; // rcx
  __int64 *v7; // rsi

  if ( !*(_DWORD *)(a1 + 2300) )
    goto LABEL_8;
  v2 = *(_DWORD *)(a1 + 2288);
  v3 = a1 + 2304;
  *(_DWORD *)(a1 + 2276) = v2;
  v4 = v2 == 0;
  for ( i = *(_QWORD *)(a1 + 2304); ; i = *v7 )
  {
    v6 = i - 248;
    v7 = (__int64 *)(v6 + 248);
    if ( v3 == v6 + 248 )
      break;
    if ( (*(_DWORD *)(v6 + 264) & 8) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v6 + 264), 4u);
    (*(void (__fastcall **)(__int64, __int64))(v6 + 1240))(v6, 3034LL);
  }
  if ( v4 )
LABEL_8:
    HUBSM_AddEvent(a1 + 1208, 0x80Au);
}
