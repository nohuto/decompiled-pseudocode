/*
 * XREFs of ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004E1B4
 * Callers:
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004E304 (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     WPP_SF_Zd @ 0x1C0042CD8 (WPP_SF_Zd.c)
 *     WPP_SF_Ld @ 0x1C004EA80 (WPP_SF_Ld.c)
 *     WPP_SF_DDD @ 0x1C00644D0 (WPP_SF_DDD_ea_1C00644D0.c)
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
  if ( byte_1C00895C9 )
    WPP_SF_DDD(
      87LL,
      &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids,
      (unsigned int)AoAc->ActiveState,
      (unsigned int)AoAc->ActiveRef,
      AoAc->StopFlags.Value);
  TempRefReason = AoAc->TempRefReason;
  if ( TempRefReason && byte_1C00895C9 )
    WPP_SF_d(0x58u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, TempRefReason);
  for ( i = AoAc->HandleList.Flink; i != &AoAc->HandleList; i = i->Flink )
  {
    if ( byte_1C00895C9 )
      WPP_SF_Ld(v4, v3, LODWORD(i[1].Flink), HIDWORD(i[1].Flink));
  }
  KeReleaseSpinLock(&AoAc->Lock, v5);
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  OpenQueue = a1->OpenQueue;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 75064;
  while ( OpenQueue )
  {
    AoAcReferences = OpenQueue->AoAcReferences;
    if ( AoAcReferences && byte_1C00895C9 )
      WPP_SF_Zd(
        0x5Au,
        &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids,
        &OpenQueue->ProtocolHandle->Name.Length,
        AoAcReferences);
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v8);
}
