/*
 * XREFs of RtlQuerySystemTime @ 0x18007D8B0
 * Callers:
 *     ZwQuerySystemTime @ 0x1800A6F60 (ZwQuerySystemTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQuerySystemTime(_QWORD *a1)
{
  *a1 = MEMORY[0x7FFE0014];
  return 0LL;
}
