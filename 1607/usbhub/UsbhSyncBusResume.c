/*
 * XREFs of UsbhSyncBusResume @ 0x1C000BF24
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0003190 (UsbhFdoSetD0Cold.c)
 *     UsbhSshSuspendHub @ 0x1C0018F70 (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x1C0021F00 (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046020 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C000CF00 (UsbhDispatch_BusEvent.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall UsbhSyncBusResume(__int64 a1, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // r10d

  FdoExt(a1);
  Log(a1, 2048, 1346458174, 0, 0LL);
  v5 = UsbhDispatch_BusEvent(a1, a2, (unsigned int)(v4 + 8));
  Log(a1, 2048, 1346458172, 0, v5);
  return v6;
}
