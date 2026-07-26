/*
 * XREFs of ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0069E98
 * Callers:
 *     ndisCsResiliencyCallback @ 0x1C0049E90 (ndisCsResiliencyCallback.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0069800 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0069970 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x1C0069E7C (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 */

void __fastcall ndisCsResiliencyChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  unsigned __int8 v2; // bl
  KIRQL v3; // si
  _NDIS_NIC_ACTIVE_STATE ActiveState; // ecx
  _QWORD *v5; // rcx

  AoAc = a1->AoAc;
  v2 = ndisCsResiliency;
  v3 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( v2 )
  {
    ActiveState = AoAc->ActiveState;
    if ( ActiveState == NdisNicActive || ActiveState == NdisNicResuming )
    {
      ndisCloseTimeInterval(&AoAc->CurrentActiveStartTime, &AoAc->TotalCsActiveTime);
      *v5 = MEMORY[0xFFFFF78000000008];
    }
    ndisAoAcStartRefTimeStats(AoAc);
  }
  else if ( AoAc->CurrentActiveStartTime )
  {
    ndisAoAcPauseRefTimeStats(AoAc);
    AoAc->TotalCsResiliencyTime = AoAc->TotalCsResiliencyTime
                                - AoAc->CurrentActiveStartTime
                                + MEMORY[0xFFFFF78000000008];
  }
  KeReleaseSpinLock(&AoAc->Lock, v3);
}
