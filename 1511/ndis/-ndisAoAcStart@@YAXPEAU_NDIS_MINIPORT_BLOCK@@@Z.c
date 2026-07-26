/*
 * XREFs of ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D6CB4
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0068590 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall ndisAoAcStart(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdx
  unsigned __int64 v2; // rax

  AoAc = a1->AoAc;
  v2 = MEMORY[0xFFFFF78000000008];
  AoAc->StartTime = MEMORY[0xFFFFF78000000008];
  AoAc->CurrentActiveStartTime = v2;
  AoAc->TakeStartToRefTime = 1;
  if ( a1->AoAc )
    ndisAoAcClearStop(a1, NdisSSNotStarted);
}
