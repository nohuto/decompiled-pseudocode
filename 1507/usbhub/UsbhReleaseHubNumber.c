/*
 * XREFs of UsbhReleaseHubNumber @ 0x1C004B6D4
 * Callers:
 *     UsbhAddDevice @ 0x1C00094A0 (UsbhAddDevice.c)
 *     UsbhFdoPnp_RemoveDevice @ 0x1C004B370 (UsbhFdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseHubNumber(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx

  v4 = FdoExt(a1, a2, a3, a4);
  if ( v4[344] )
    USBD_ReleaseHubNumber();
  KeWaitForSingleObject(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  v5 = v4 + 1288;
  v6 = *((_QWORD *)v4 + 644);
  v7 = (_QWORD *)*((_QWORD *)v4 + 645);
  if ( *(_DWORD **)(v6 + 8) != v4 + 1288 || (_QWORD *)*v7 != v5 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *((_QWORD *)v4 + 645) = v4 + 1288;
  *v5 = v5;
  return KeSetEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0);
}
