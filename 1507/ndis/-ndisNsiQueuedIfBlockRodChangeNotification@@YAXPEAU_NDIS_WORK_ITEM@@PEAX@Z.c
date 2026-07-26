/*
 * XREFs of ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C001A730
 * Callers:
 *     <none>
 * Callees:
 *     IFBLOCK_DECREMENT_REF @ 0x1C001A110 (IFBLOCK_DECREMENT_REF.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00A7548 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisNsiQueuedIfBlockRodChangeNotification(struct _NDIS_WORK_ITEM *a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  KIRQL v4; // bl
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)a2[10];
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(144LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, v2);
  v6 = 0LL;
  v5[0] = 0LL;
  v5[1] = a2[11];
  v6 = a2[12];
  ndisNsiNotifyClientInterfaceChange(v2, 0LL, v5, 1LL, 1LL);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v2, 0xAu);
  KeReleaseSpinLock(&ndisIfListLock, v4);
  ExFreePoolWithTag(a2, 0);
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_(145LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids);
}
