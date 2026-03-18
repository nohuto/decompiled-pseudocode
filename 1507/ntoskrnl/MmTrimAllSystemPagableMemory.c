/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x14021B88C
 * Callers:
 *     MmShutdownSystem @ 0x140402FFC (MmShutdownSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
