/*
 * XREFs of RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x1C0019434
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C0019138 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C002F9A8 (StorpUnitInitializePoFxPower.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidStorPoFxDeviceVersionAndSizeIsValid(int *a1)
{
  int v1; // eax

  v1 = *a1;
  return (*a1 != 1 || (unsigned int)a1[1] >= 0x10)
      && (v1 != 2 || (unsigned int)a1[1] >= 0x18)
      && (v1 != 3 || (unsigned int)a1[1] >= 0x18)
      && (unsigned int)(v1 - 1) <= 2;
}
