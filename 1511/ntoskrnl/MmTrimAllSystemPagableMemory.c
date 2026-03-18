/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x1401D87E0
 * Callers:
 *     MmShutdownSystem @ 0x1403B1F2C (MmShutdownSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
