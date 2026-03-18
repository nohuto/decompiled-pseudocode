/*
 * XREFs of UsbhSyncBusResume @ 0x1C001C360
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhSshSuspendHub @ 0x1C0017B8C (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x1C001E7B0 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C70 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x1C0019640 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhSyncBusResume(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // r10d

  FdoExt((__int64)a1, a2, a3, a4);
  Log((__int64)a1, 2048, 1346458174, 0LL, 0LL);
  v7 = UsbhDispatch_BusEvent(a1, a2, (unsigned int)(v6 + 8), v6);
  Log((__int64)a1, 2048, 1346458172, 0LL, v7);
  return v8;
}
