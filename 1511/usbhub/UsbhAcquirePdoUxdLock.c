/*
 * XREFs of UsbhAcquirePdoUxdLock @ 0x1C00088D8
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C00069A4 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 */

__int64 __fastcall UsbhAcquirePdoUxdLock(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = PdoExt(a2);
  KeWaitForSingleObject((PVOID)(v2 + 2544), Executive, 0, 0, 0LL);
  return 0LL;
}
