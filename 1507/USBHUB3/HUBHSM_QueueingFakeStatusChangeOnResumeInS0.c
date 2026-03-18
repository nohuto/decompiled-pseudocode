/*
 * XREFs of HUBHSM_QueueingFakeStatusChangeOnResumeInS0 @ 0x1C0007010
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_SignalPnpPowerEvent @ 0x1C000AAD8 (HUBFDO_SignalPnpPowerEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHSM_QueueingFakeStatusChangeOnResumeInS0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 *v4; // rsi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_QWORD *)(v1 + 2280);
  *(_DWORD *)(v1 + 2248) = *(_DWORD *)(v1 + 2276);
  while ( 1 )
  {
    v3 = v2 - 248;
    v4 = (__int64 *)(v3 + 248);
    if ( v1 + 2280 == v3 + 248 )
      break;
    _InterlockedOr((volatile signed __int32 *)(v3 + 264), 1u);
    (*(void (__fastcall **)(__int64, __int64))(v3 + 1240))(v3, 3030LL);
    v2 = *v4;
  }
  HUBFDO_SignalPnpPowerEvent(v1);
  return 2053LL;
}
