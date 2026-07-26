/*
 * XREFs of ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E444
 * Callers:
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C001C0F0 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C006D680 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     ndisSelectiveSuspendStop @ 0x1C006C56C (ndisSelectiveSuspendStop.c)
 *     ndisSubmitIdleRequest @ 0x1C006CB8C (ndisSubmitIdleRequest.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C006CE04 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C006D2E0 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00DCEDC (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisNicQuietCheckRef(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v3; // si
  KSPIN_LOCK *v4; // rcx
  KIRQL v5; // al
  int v6; // esi
  unsigned int v7; // esi
  KIRQL v8; // al
  KIRQL v9; // bl

  AoAc = a1->AoAc;
  v3 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( !ndisAoAcIsD0Required(AoAc) && AoAc->ActiveState == NdisNicActive )
  {
    AoAc->ActiveState = NdisNicSuspending;
    KeClearEvent(&AoAc->PowerSuspendCompleteEvent);
    KeClearEvent(&AoAc->NicQuietCheckCompleteEvent);
    KeReleaseSpinLock(&AoAc->Lock, v3);
    if ( a1->SelectiveSuspend
      && (ndisSelectiveSuspendStop(a1, 7), a1->SelectiveSuspend)
      && (a1->PnPFlags & 0x60) == 0x60
      && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2 )
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
      AoAc->SSIdleConfirmed = 0;
      KeReleaseSpinLock(&AoAc->Lock, v5);
      v6 = ndisSubmitIdleRequest(a1, 1u);
      if ( v6 == 259 )
      {
        v7 = 0;
LABEL_14:
        KeSetEvent(&AoAc->NicQuietCheckCompleteEvent, 0, 0);
        return v7;
      }
      NdisUnexpectedAoAcError(a1, 0x4FEu);
      if ( (unsigned __int8)byte_1C00895D5 >= 2u )
        WPP_SF_dq(0x17u, &WPP_1f3fc036deb630b8c59945bf71e899eb_Traceguids, v6, a1);
      v7 = -1073741823;
    }
    else
    {
      v7 = ndisRequestNicQuiet(a1, 0);
      if ( !v7 )
        goto LABEL_14;
    }
    v8 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    AoAc->ActiveState = NdisNicError;
    v9 = v8;
    KeSetEvent(&AoAc->PowerSuspendCompleteEvent, 0, 0);
    KeReleaseSpinLock(&AoAc->Lock, v9);
    goto LABEL_14;
  }
  KeReleaseSpinLock(v4, v3);
  return 0LL;
}
