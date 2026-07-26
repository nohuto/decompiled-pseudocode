/*
 * XREFs of ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00699BC
 * Callers:
 *     ndisPowerSaveStop @ 0x1C009BE34 (ndisPowerSaveStop.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x1C00A1AC8 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisCancelWaitWake @ 0x1C001BD44 (ndisCancelWaitWake.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_dq @ 0x1C0046274 (WPP_SF_dq.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0069414 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0069488 (-ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0069604 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C006AC20 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall ndisAoAcStop(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_SS_STOP_REASON a2, enum CallRunMode a3)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v7; // bp
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // eax
  int v15; // ebx

  AoAc = a1->AoAc;
  v7 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v8 = a2 - 1;
  if ( !v8 )
  {
    AoAc->StopFlags.Value |= 1u;
    goto LABEL_16;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    AoAc->StopFlags.Value |= 2u;
    goto LABEL_14;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    AoAc->StopFlags.Value |= 4u;
    AoAc->DeviceGone = 1;
    goto LABEL_14;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    AoAc->StopFlags.Value |= 8u;
    goto LABEL_16;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    AoAc->StopFlags.Value |= 0x10u;
LABEL_14:
    ndisAoAcCleanup(AoAc);
    goto LABEL_16;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 == 2 )
      AoAc->StopFlags.Value |= 0x80u;
  }
  else
  {
    AoAc->StopFlags.Value |= 0x20u;
  }
LABEL_16:
  if ( AoAc->TempRefReason )
  {
    AoAc->TempRefReason = NdisAoAcTempRefNone;
    ndisAoAcActiveRefSubtract(AoAc, NdisPMComponentUnspecified, 1);
    if ( KeCancelTimer(&AoAc->TempRefTimer.Timer) )
      ndisDereferenceMiniport((__int64)a1, 2u);
  }
  if ( AoAc->ActiveState )
  {
    KeReleaseSpinLock(&AoAc->Lock, v7);
    if ( (unsigned __int8)byte_1C0085315 >= 4u )
      WPP_SF_q(0x21u, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids, (__int64)a1);
    ndisCancelWaitWake((__int64)a1);
    v14 = ndisRequestNicActive(a1, a3);
    v15 = v14;
    if ( v14 && v14 != 259 )
    {
      ndisAoAcCompleteQueuedIrps(a1, v14);
      if ( (unsigned __int8)byte_1C0085315 >= 2u )
        WPP_SF_dq(0x22u, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids, v15, a1);
    }
  }
  else
  {
    KeReleaseSpinLock(&AoAc->Lock, v7);
  }
}
