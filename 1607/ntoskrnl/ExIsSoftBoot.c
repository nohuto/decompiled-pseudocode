/*
 * XREFs of ExIsSoftBoot @ 0x14013D4E8
 * Callers:
 *     EtwInitialize @ 0x1405531AC (EtwInitialize.c)
 * Callees:
 *     <none>
 */

__int64 ExIsSoftBoot()
{
  return ((unsigned __int8)qword_1402FD038 >> 2) & 1;
}
