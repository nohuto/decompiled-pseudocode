/*
 * XREFs of KiCustomRecurseRoutine3 @ 0x14018D840
 * Callers:
 *     KiCustomRecurseRoutine2 @ 0x14018CEB0 (KiCustomRecurseRoutine2.c)
 *     KiCustomAccessRoutine3 @ 0x14018D860 (KiCustomAccessRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x14018CC70 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomRecurseRoutine3(int a1, unsigned int *a2)
{
  int v2; // ecx

  v2 = a1 - 1;
  if ( v2 )
    KiCustomRecurseRoutine4(v2, a2);
  return *a2;
}
