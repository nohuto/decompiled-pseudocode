/*
 * XREFs of Control_EP_ReclaimTransfers @ 0x1C0029020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     TR_TransfersReclaimed @ 0x1C002899C (TR_TransfersReclaimed.c)
 */

__int64 __fastcall Control_EP_ReclaimTransfers(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al
  bool v4; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v4 = *(_QWORD *)(a1 + 296) == 0LL;
  *(_BYTE *)(a1 + 96) = v3;
  if ( !v4 )
  {
    *(_DWORD *)(a1 + 304) |= 2u;
    v2 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v3);
  if ( v2 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 80));
  else
    return TR_TransfersReclaimed(a1);
}
