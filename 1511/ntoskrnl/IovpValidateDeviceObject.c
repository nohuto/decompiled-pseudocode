/*
 * XREFs of IovpValidateDeviceObject @ 0x1406B59E0
 * Callers:
 *     IovCallDriver @ 0x1406B4C6C (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1406B5404 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall IovpValidateDeviceObject(__int64 a1)
{
  return a1 && *(_WORD *)a1 == 3 && *(_QWORD *)(a1 + 8) && *(int *)(a1 + 4) >= 0;
}
