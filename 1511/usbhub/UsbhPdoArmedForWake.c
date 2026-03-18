/*
 * XREFs of UsbhPdoArmedForWake @ 0x1C004638C
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 */

bool __fastcall UsbhPdoArmedForWake(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return PdoExt(a1, a2, a3, a4)[586] > -1;
}
