/*
 * XREFs of ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0069604
 * Callers:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00699BC (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C006A390 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C006A778 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 * Callees:
 *     ndisMoveLinkedList @ 0x1C00677B4 (ndisMoveLinkedList.c)
 */

void __fastcall ndisAoAcCompleteQueuedIrps(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  _IRP *v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  AoAc = a1->AoAc;
  KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ndisMoveLinkedList(v8, (__int64)&AoAc->PendingIrpList);
  AoAc->PendingIrpListCount = 0;
  KeReleaseSpinLock(&AoAc->Lock, v4);
  while ( 1 )
  {
    v5 = v8[0];
    if ( (_QWORD *)v8[0] == v8 )
      break;
    v6 = *(_QWORD *)v8[0];
    if ( *(_QWORD **)(v8[0] + 8LL) != v8 || *(_QWORD *)(v6 + 8) != v8[0] )
      __fastfail(3u);
    v8[0] = *(_QWORD *)v8[0];
    *(_QWORD *)(v6 + 8) = v8;
    v7 = (_IRP *)(v5 - 168);
    v7->IoStatus.Status = a2;
    IofCompleteRequest(v7, 0);
  }
}
