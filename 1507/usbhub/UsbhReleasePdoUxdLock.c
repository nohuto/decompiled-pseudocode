/*
 * XREFs of UsbhReleasePdoUxdLock @ 0x1C000598C
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C0005860 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 */

__int64 __fastcall UsbhReleasePdoUxdLock(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = PdoExt(a2);
  KeReleaseSemaphore((PRKSEMAPHORE)(v2 + 2536), 16, 1, 0);
  return 0LL;
}
