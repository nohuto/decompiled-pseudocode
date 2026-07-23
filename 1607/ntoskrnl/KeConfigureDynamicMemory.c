/*
 * XREFs of KeConfigureDynamicMemory @ 0x1401D1DE8
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 * Callees:
 *     VslConfigureDynamicMemory @ 0x1401C260C (VslConfigureDynamicMemory.c)
 *     HvlpAddPhysicalMemory @ 0x14023CD50 (HvlpAddPhysicalMemory.c)
 */

NTSTATUS __fastcall KeConfigureDynamicMemory(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  NTSTATUS result; // eax

  if ( a1 > a2 )
    return -1073741811;
  if ( HvlHypervisorConnected && (HvlpFlags & 2) != 0 )
  {
    if ( !a3 )
    {
      result = HvlpAddPhysicalMemory(a1, a2 - a1 + 1);
      goto LABEL_10;
    }
    if ( (unsigned int)(a3 - 1) >= 2 )
    {
      result = -1073741811;
      goto LABEL_10;
    }
  }
  result = 0;
LABEL_10:
  if ( result >= 0 )
    return VslConfigureDynamicMemory();
  return result;
}
