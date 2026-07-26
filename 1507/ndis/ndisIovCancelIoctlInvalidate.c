/*
 * XREFs of ndisIovCancelIoctlInvalidate @ 0x1C0065270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisIovCancelIoctlInvalidate(__int64 a1, _IRP *a2)
{
  _QWORD *DriverObjectExtension; // rax
  __int64 v5; // rax
  KIRQL CancelIrql; // cl

  DriverObjectExtension = IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)(a1 + 8), (PVOID)0x4E4D4944);
  if ( DriverObjectExtension && (*((_BYTE *)DriverObjectExtension + 26) & 0x40) != 0 )
    v5 = (*(__int64 (__fastcall **)(__int64))(DriverObjectExtension[45] + 80LL))(a1);
  else
    v5 = *(_QWORD *)(a1 + 64);
  if ( *(_IRP **)(v5 + 4688) == a2 )
    *(_QWORD *)(v5 + 4688) = 0LL;
  CancelIrql = a2->CancelIrql;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = -1073741536;
  IoReleaseCancelSpinLock(CancelIrql);
  IofCompleteRequest(a2, 0);
}
