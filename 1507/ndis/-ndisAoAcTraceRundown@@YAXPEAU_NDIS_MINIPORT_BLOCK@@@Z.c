/*
 * XREFs of ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0049018
 * Callers:
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0049214 (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_Zd @ 0x1C003E040 (WPP_SF_Zd.c)
 *     WPP_SF_Ld @ 0x1C0049870 (WPP_SF_Ld.c)
 *     WPP_SF_DDD @ 0x1C00609D0 (WPP_SF_DDD_ea_1C00609D0.c)
 */

void __fastcall ndisAoAcTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  KIRQL v5; // bp
  int TempRefReason; // r8d
  _LIST_ENTRY *i; // rbx
  KIRQL v8; // bp
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  int AoAcReferences; // r9d

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( byte_1C0085309 )
    WPP_SF_DDD(
      87LL,
      &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids,
      (unsigned int)AoAc->ActiveState,
      (unsigned int)AoAc->ActiveRef,
      AoAc->StopFlags.Value);
  TempRefReason = AoAc->TempRefReason;
  if ( TempRefReason && byte_1C0085309 )
    WPP_SF_d(0x58u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, TempRefReason);
  for ( i = AoAc->HandleList.Flink; i != &AoAc->HandleList; i = i->Flink )
  {
    if ( byte_1C0085309 )
      WPP_SF_Ld(v4, v3, LODWORD(i[1].Flink), HIDWORD(i[1].Flink));
  }
  KeReleaseSpinLock(&AoAc->Lock, v5);
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  OpenQueue = a1->OpenQueue;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 75021;
  while ( OpenQueue )
  {
    AoAcReferences = OpenQueue->AoAcReferences;
    if ( AoAcReferences && byte_1C0085309 )
      WPP_SF_Zd(
        0x5Au,
        &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids,
        (__int64 *)&OpenQueue->ProtocolHandle->Name,
        AoAcReferences);
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v8);
}
