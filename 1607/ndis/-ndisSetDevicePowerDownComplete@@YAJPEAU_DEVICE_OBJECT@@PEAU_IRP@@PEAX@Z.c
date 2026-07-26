/*
 * XREFs of ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012970
 * Callers:
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 * Callees:
 *     ndisCancelMediaDisconnectTimer @ 0x1C00183D8 (ndisCancelMediaDisconnectTimer.c)
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSetDevicePowerDownComplete(struct _DEVICE_OBJECT *a1, struct _IRP *a2, char *a3)
{
  if ( a2 && (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_qD(86LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a3, (unsigned int)a2->IoStatus.Status);
  ndisLogMiniportEvent(a3, 14LL);
  ndisCancelMediaDisconnectTimer(a3);
  if ( (*((_DWORD *)a3 + 30) & 0x80u) != 0 )
    KeResetEvent(*((PRKEVENT *)a3 + 684));
  *((_QWORD *)a3 + 707) = a2;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 5592), CriticalWorkQueue);
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(87LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a3);
  return 3221225494LL;
}
