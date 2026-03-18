/*
 * XREFs of IovpValidateDeviceObject @ 0x140735CC4
 * Callers:
 *     IovCallDriver @ 0x140734C6C (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1407355F4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall IovpValidateDeviceObject(__int64 a1)
{
  return a1 && *(_WORD *)a1 == 3 && *(_QWORD *)(a1 + 8) && *(int *)(a1 + 4) >= 0;
}
