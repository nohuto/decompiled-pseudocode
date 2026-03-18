/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x140572944
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1407B82F0 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

__int64 ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}
