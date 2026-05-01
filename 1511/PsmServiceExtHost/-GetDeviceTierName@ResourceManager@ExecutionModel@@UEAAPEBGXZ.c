/*
 * XREFs of ?GetDeviceTierName@ResourceManager@ExecutionModel@@UEAAPEBGXZ @ 0x1800238F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180023AE0 (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 */

const unsigned __int16 *__fastcall ExecutionModel::ResourceManager::GetDeviceTierName(
        ExecutionModel::ResourceManager *this)
{
  unsigned int DeviceTier; // eax

  DeviceTier = RmpGetDeviceTier(this);
  return (const unsigned __int16 *)RmpGetDeviceTierNameEx(DeviceTier);
}
