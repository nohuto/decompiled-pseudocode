/*
 * XREFs of ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0010CB0
 * Callers:
 *     ndisSetDevicePower @ 0x1C000F10C (ndisSetDevicePower.c)
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C001455C (ndisScheduleWorkItemInternal.c)
 *     ndisLogMiniportEvent @ 0x1C0017694 (ndisLogMiniportEvent.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001923C (ndisCancelMediaDisconnectTimer.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSetDevicePowerDownComplete(struct _DEVICE_OBJECT *a1, struct _IRP *a2, PRKEVENT *a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rsi

  if ( a2 && (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_qD(85LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a3, (unsigned int)a2->IoStatus.Status);
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
      KeResetEvent(a3[686]);
    ndisScheduleWorkItemInternal(v6);
  }
  else if ( a2 )
  {
    a2->IoStatus.Status = -1073741670;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    *((_DWORD *)a3 + 1374) = -1073741670;
  }
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_q(86LL, &WPP_c4e795ca9bdbbe3c2f2c5e0647b399a0_Traceguids, a3);
  return 3221225494LL;
}
