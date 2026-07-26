/*
 * XREFs of ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C001A860
 * Callers:
 *     <none>
 * Callees:
 *     IFBLOCK_DECREMENT_REF @ 0x1C001B2B0 (IFBLOCK_DECREMENT_REF.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C009FF84 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisNsiQueuedIfBlockRodChangeNotification(struct _NDIS_WORK_ITEM *a1, _QWORD *a2)
{
  void *v2; // rsi
  KIRQL v4; // bl
  __int64 v5; // r8
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = (void *)a2[10];
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(144LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, v2);
  v7 = 0LL;
  v6[0] = 0LL;
  v6[1] = a2[11];
  v7 = a2[12];
  ndisNsiNotifyClientInterfaceChange(v2, 0LL, v6, 1LL, 1LL);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v2);
  KeReleaseSpinLock(&ndisIfListLock, v4);
  ExFreePoolWithTag(a2, 0);
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_(145LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, v5);
}
