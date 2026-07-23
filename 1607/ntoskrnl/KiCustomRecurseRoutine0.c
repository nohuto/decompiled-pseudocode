/*
 * XREFs of KiCustomRecurseRoutine0 @ 0x1401693C0
 * Callers:
 *     KiCustomRecurseRoutine9 @ 0x140169300 (KiCustomRecurseRoutine9.c)
 *     KiCustomAccessRoutine0 @ 0x1401693E0 (KiCustomAccessRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine1 @ 0x140168E80 (KiCustomRecurseRoutine1.c)
 */

__int64 __fastcall KiCustomRecurseRoutine0(int a1, unsigned int *a2)
{
  int v2; // ecx

  v2 = a1 - 1;
  if ( v2 )
    KiCustomRecurseRoutine1(v2, a2);
  return *a2;
}
