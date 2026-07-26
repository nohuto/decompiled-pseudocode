/*
 * XREFs of ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00147E0
 * Callers:
 *     <none>
 * Callees:
 *     IFBLOCK_DECREMENT_REF @ 0x1C0014E64 (IFBLOCK_DECREMENT_REF.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00A2B60 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisNsiQueuedIfBlockRodChangeNotification(struct _NDIS_WORK_ITEM *a1, _QWORD *a2)
{
  void *v2; // rsi
  KIRQL v4; // bl
  __int64 v5; // r8
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = (void *)a2[10];
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(144LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, v2);
  v7 = 0LL;
  v6[0] = 0LL;
  v6[1] = a2[11];
  v7 = a2[12];
  LODWORD(v6[0]) = 1;
  ndisNsiNotifyClientInterfaceChange(v2, 0LL, v6);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v2);
  KeReleaseSpinLock(&ndisIfListLock, v4);
  ExFreePoolWithTag(a2, 0);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_(145LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, v5);
}
