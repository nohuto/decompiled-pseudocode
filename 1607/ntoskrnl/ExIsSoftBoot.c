/*
 * XREFs of ExIsSoftBoot @ 0x14013CF78
 * Callers:
 *     EtwInitialize @ 0x140552C6C (EtwInitialize.c)
 * Callees:
 *     <none>
 */

__int64 ExIsSoftBoot()
{
  return ((unsigned __int8)qword_1402FD0D8 >> 2) & 1;
}
