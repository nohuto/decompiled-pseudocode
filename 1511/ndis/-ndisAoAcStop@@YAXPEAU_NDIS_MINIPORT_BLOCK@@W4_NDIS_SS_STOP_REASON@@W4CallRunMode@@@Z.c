/*
 * XREFs of ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0068A9C
 * Callers:
 *     ndisPowerSaveStop @ 0x1C0099100 (ndisPowerSaveStop.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00A2B8C (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisCancelWaitWake @ 0x1C0024E7C (ndisCancelWaitWake.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00684E4 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0068558 (-ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00686E4 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0069D1C (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
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
  int v14; // edi
  int v15; // eax
  int v16; // ebx

  AoAc = a1->AoAc;
  v7 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v8 = a2 - 1;
  if ( !v8 )
  {
    AoAc->StopFlags.Value |= 1u;
    goto LABEL_18;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    AoAc->StopFlags.Value |= 2u;
    goto LABEL_16;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    AoAc->StopFlags.Value |= 4u;
    AoAc->DeviceGone = 1;
    goto LABEL_16;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    AoAc->StopFlags.Value |= 8u;
    goto LABEL_18;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    AoAc->StopFlags.Value |= 0x10u;
LABEL_16:
    ndisAoAcCleanup(AoAc);
    goto LABEL_18;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 2;
    if ( v14 )
    {
      if ( v14 == 4 )
        AoAc->StopFlags.Value |= 0x400u;
    }
    else
    {
      AoAc->StopFlags.Value |= 0x80u;
    }
  }
  else
  {
    AoAc->StopFlags.Value |= 0x20u;
  }
LABEL_18:
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
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
      WPP_SF_q(0x21u, &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids, (__int64)a1);
    ndisCancelWaitWake((__int64)a1);
    v15 = ndisRequestNicActive(a1, a3);
    v16 = v15;
    if ( v15 && v15 != 259 )
    {
      ndisAoAcCompleteQueuedIrps(a1, v15);
      if ( (unsigned __int8)byte_1C0083715 >= 2u )
        WPP_SF_dq(0x22u, &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids, v16, a1);
    }
  }
  else
  {
    KeReleaseSpinLock(&AoAc->Lock, v7);
  }
}
