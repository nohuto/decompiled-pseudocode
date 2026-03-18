/*
 * XREFs of KiCustomRecurseRoutine9 @ 0x140168D90
 * Callers:
 *     KiCustomRecurseRoutine8 @ 0x140168CD0 (KiCustomRecurseRoutine8.c)
 *     KiCustomAccessRoutine9 @ 0x140168DB0 (KiCustomAccessRoutine9.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x140168E50 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomRecurseRoutine9(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine0();
  return *a2;
}
