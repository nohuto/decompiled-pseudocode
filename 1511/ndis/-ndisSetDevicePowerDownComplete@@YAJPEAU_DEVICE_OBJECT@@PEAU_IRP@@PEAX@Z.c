/*
 * XREFs of ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0012FB0
 * Callers:
 *     ndisSetDevicePower @ 0x1C001227C (ndisSetDevicePower.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C00194EC (ndisLogMiniportEvent.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001EBA8 (ndisCancelMediaDisconnectTimer.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001FFD8 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSetDevicePowerDownComplete(struct _DEVICE_OBJECT *a1, struct _IRP *a2, PRKEVENT *a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rsi

  if ( a2 && (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_qD(85LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3, (unsigned int)a2->IoStatus.Status);
  ndisLogMiniportEvent(a3, 14LL);
  ndisCancelMediaDisconnectTimer(a3);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6977444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = a3;
    PoolWithTag[1] = &ndisDevicePowerDown;
    PoolWithTag[10] = a2;
    if ( (*((_DWORD *)a3 + 30) & 0x80u) != 0 )
      KeResetEvent(a3[684]);
    ndisScheduleWorkItemInternal(v6);
  }
  else if ( a2 )
  {
    a2->IoStatus.Status = -1073741670;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    *((_DWORD *)a3 + 1370) = -1073741670;
  }
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_q(86LL, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3);
  return 3221225494LL;
}
