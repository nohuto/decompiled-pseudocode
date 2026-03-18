/*
 * XREFs of Control_WdfEvtDpcForTransferCompletion @ 0x1C0029CB0
 * Callers:
 *     <none>
 * Callees:
 *     Control_Transfer_CompleteCancelable @ 0x1C0001D4C (Control_Transfer_CompleteCancelable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     TR_TransfersReclaimed @ 0x1C002899C (TR_TransfersReclaimed.c)
 */

void __fastcall Control_WdfEvtDpcForTransferCompletion(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rax
  __int64 v3; // rdi
  KIRQL v4; // al
  bool v5; // zf

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 912))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v2,
         off_1C0041340);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
  v5 = *(_QWORD *)(v3 + 296) == 0LL;
  *(_BYTE *)(v3 + 96) = v4;
  if ( !v5 && (int)Control_Transfer_CompleteCancelable((_QWORD *)v3) >= 0 )
    v1 = (*(_BYTE *)(v3 + 304) & 2) != 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), *(_BYTE *)(v3 + 96));
  if ( v1 )
    TR_TransfersReclaimed(v3);
}
