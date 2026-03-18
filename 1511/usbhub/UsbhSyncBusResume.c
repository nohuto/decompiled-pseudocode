/*
 * XREFs of UsbhSyncBusResume @ 0x1C0021708
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhSshResumeDownstream @ 0x1C000AA90 (UsbhSshResumeDownstream.c)
 *     UsbhSshSuspendHub @ 0x1C001068C (UsbhSshSuspendHub.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045DA0 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x1C0021780 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhSyncBusResume(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r9d
  int v7; // eax
  unsigned int v8; // r10d

  FdoExt(a1, a2, a3, a4);
  Log(a1, 2048, 1346458174, 0LL, 0LL);
  v7 = UsbhDispatch_BusEvent(a1, a2, (unsigned int)(v6 + 8));
  Log(a1, 2048, 1346458172, 0LL, v7);
  return v8;
}
