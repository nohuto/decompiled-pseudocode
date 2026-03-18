/*
 * XREFs of UsbhAcquirePdoUxdLock @ 0x1C0006C48
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C0005860 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 */

__int64 __fastcall UsbhAcquirePdoUxdLock(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = PdoExt(a2);
  KeWaitForSingleObject((PVOID)(v2 + 2536), Executive, 0, 0, 0LL);
  return 0LL;
}
