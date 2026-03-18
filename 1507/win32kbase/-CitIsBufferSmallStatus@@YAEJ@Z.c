/*
 * XREFs of ?CitIsBufferSmallStatus@@YAEJ@Z @ 0x1C007A96C
 * Callers:
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0079DA0 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C007A898 (-CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z.c)
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C00E3FD8 (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitIsBufferSmallStatus(int a1)
{
  return a1 == -1073741789 || a1 == -2147483643;
}
