/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x1401EA320
 * Callers:
 *     MmShutdownSystem @ 0x1403DEC00 (MmShutdownSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
