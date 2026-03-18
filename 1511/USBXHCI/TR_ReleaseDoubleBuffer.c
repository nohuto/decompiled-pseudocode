/*
 * XREFs of TR_ReleaseDoubleBuffer @ 0x1C0004200
 * Callers:
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C0002898 (Bulk_Transfer_PrepareForCompletion.c)
 *     Control_TransferData_Free @ 0x1C00297C0 (Control_TransferData_Free.c)
 *     Bulk_CompleteTransfers @ 0x1C002D3BC (Bulk_CompleteTransfers.c)
 * Callees:
 *     <none>
 */

void __fastcall TR_ReleaseDoubleBuffer(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx

  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v4 = *(_QWORD **)(a1 + 224);
  *a2 = a1 + 216;
  a2[1] = v4;
  if ( *v4 != a1 + 216 )
    __fastfail(3u);
  *v4 = a2;
  *(_QWORD *)(a1 + 224) = a2;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
}
