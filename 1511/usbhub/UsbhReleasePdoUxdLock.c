/*
 * XREFs of UsbhReleasePdoUxdLock @ 0x1C0006AD0
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C00069A4 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 */

__int64 __fastcall UsbhReleasePdoUxdLock(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = PdoExt(a2);
  KeReleaseSemaphore((PRKSEMAPHORE)(v2 + 2544), 16, 1, 0);
  return 0LL;
}
