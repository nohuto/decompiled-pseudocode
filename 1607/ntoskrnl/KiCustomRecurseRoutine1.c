/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x140168E80
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x140168EA0 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x1401693C0 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x140168F40 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}
