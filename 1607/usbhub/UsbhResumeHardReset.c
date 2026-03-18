/*
 * XREFs of UsbhResumeHardReset @ 0x1C0003158
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0002BA0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046020 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 */

__int64 __fastcall UsbhResumeHardReset(int a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11

  Log(a1, 8, 1381192818, 0, 0LL);
  return UsbhDispatch_HardResetEvent(v3, v2, (unsigned int)(v1 + 11));
}
