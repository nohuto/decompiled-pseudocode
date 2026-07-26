/*
 * XREFs of ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C006A390
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_LqZ @ 0x1C0043EEC (WPP_SF_LqZ.c)
 *     WPP_SF_dq @ 0x1C0046274 (WPP_SF_dq.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0069354 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0069414 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0069604 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C006AC20 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     Template_xqqq @ 0x1C006B73C (Template_xqqq.c)
 *     WPP_SF_DDL @ 0x1C006B840 (WPP_SF_DDL.c)
 */

__int64 __fastcall ndisNicActiveAcquire(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3,
        struct _IRP *a4)
{
  unsigned int v5; // edi
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v10; // al
  KIRQL v11; // r12
  unsigned __int64 v12; // rcx
  int ActiveRef; // r15d
  _LIST_ENTRY *p_ListEntry; // rdx
  _LIST_ENTRY *Blink; // r8
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-48h]

  v5 = 0;
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_DDL(11LL, a2, *((unsigned __int16 *)a3 + 7), (*((_QWORD *)a3 + 1) >> 24) & 0xFFFFFFLL, *((_DWORD *)a3 + 4));
  AoAc = a1->AoAc;
  v10 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ++*((_DWORD *)a2 + 7);
  v11 = v10;
  ndisAoAcActiveRefIncrement(AoAc, *((enum _NDIS_PM_COMPONENT_ID *)a3 + 4));
  if ( (unsigned int)(AoAc->TempRefReason - 3) <= 1 )
  {
    AoAc->TempRefReason = NdisAoAcTempRefNone;
    ndisAoAcActiveRefSubtract(AoAc, NdisPMComponentUnspecified, 1);
    if ( KeCancelTimer(&AoAc->TempRefTimer.Timer) )
      ndisDereferenceMiniport((__int64)a1, 2u);
  }
  if ( AoAc->TakeStartToRefTime )
  {
    AoAc->TakeStartToRefTime = 0;
    v12 = MEMORY[0xFFFFF78000000008] - AoAc->StartTime;
    if ( v12 / 0x2710 > ndisAoAcMaxStartToRefTime )
      ndisAoAcMaxStartToRefTime = v12 / 0x2710;
  }
  if ( AoAc->TakeWakeToRefTime )
  {
    AoAc->TakeWakeToRefTime = 0;
    v12 = MEMORY[0xFFFFF78000000014] - AoAc->LastWakeTime.QuadPart;
    if ( (__int64)v12 / 10000 > ndisAoAcMaxWakeToRefTime )
      ndisAoAcMaxWakeToRefTime = (__int64)v12 / 10000;
  }
  ActiveRef = AoAc->ActiveRef;
  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    Template_xqqq(
      v12,
      (unsigned int)&NicActiveAcquired,
      (_DWORD)a1 + 4064,
      *((_QWORD *)a3 + 1),
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 7),
      AoAc->ActiveRef);
  if ( AoAc->ActiveState == NdisNicActive || AoAc->StopFlags.Value )
  {
    KeReleaseSpinLock(&AoAc->Lock, v11);
  }
  else
  {
    if ( AoAc->ActiveRef == 1 && (unsigned __int8)byte_1C0085310 >= 4u )
      WPP_SF_LqZ(
        0xCu,
        &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids,
        *((_DWORD *)a3 + 4),
        a1,
        a1->pAdapterInstanceName);
    p_ListEntry = &a4->Tail.Overlay.ListEntry;
    a4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    Blink = AoAc->PendingIrpList.Blink;
    a4->Tail.Overlay.ListEntry.Flink = &AoAc->PendingIrpList;
    a4->Tail.Overlay.ListEntry.Blink = Blink;
    if ( Blink->Flink != &AoAc->PendingIrpList )
      __fastfail(3u);
    Blink->Flink = p_ListEntry;
    AoAc->PendingIrpList.Blink = p_ListEntry;
    ++AoAc->PendingIrpListCount;
    KeReleaseSpinLock(&AoAc->Lock, v11);
    v16 = ndisRequestNicActive(a1, RunAsynchronous);
    v5 = v16;
    if ( v16 != 259 )
    {
      if ( v16 && (unsigned __int8)byte_1C0085315 >= 2u )
        WPP_SF_dq(0xDu, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids, v16, a1);
      ndisAoAcCompleteQueuedIrps(a1, v5);
      v5 = 259;
    }
  }
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
  {
    LODWORD(v18) = v5;
    WPP_SF_qdD(0xEu, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids, (__int64)a1, ActiveRef, v18);
  }
  return v5;
}
