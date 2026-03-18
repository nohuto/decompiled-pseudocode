/*
 * XREFs of HUBMUX_QueueStopToAllPSMs @ 0x1C000D50C
 * Callers:
 *     HUBHSM_NotifyingHubStopToPortsOnReset @ 0x1C0007910 (HUBHSM_NotifyingHubStopToPortsOnReset.c)
 *     HUBHSM_WaitingForPortsToReleaseReferenceOnResetOnResume @ 0x1C0007930 (HUBHSM_WaitingForPortsToReleaseReferenceOnResetOnResume.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueueStopToAllPSMs(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // rcx
  bool v5; // di
  __int64 v6; // rcx
  __int64 *v7; // r14

  if ( !*(_DWORD *)(a1 + 2324) )
    goto LABEL_8;
  v2 = *(_DWORD *)(a1 + 2312);
  v3 = a1 + 2328;
  *(_DWORD *)(a1 + 2300) = v2;
  v4 = *(_QWORD *)(a1 + 2328);
  v5 = v2 == 0;
  while ( 1 )
  {
    v6 = v4 - 248;
    v7 = (__int64 *)(v6 + 248);
    if ( v3 == v6 + 248 )
      break;
    if ( (*(_DWORD *)(v6 + 264) & 8) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v6 + 264), 4u);
    (*(void (__fastcall **)(__int64, __int64))(v6 + 1240))(v6, 3034LL);
    v4 = *v7;
  }
  if ( v5 )
LABEL_8:
    HUBSM_AddEvent(a1 + 1232, 2058);
}
