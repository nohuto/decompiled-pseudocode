/*
 * XREFs of ProcessSystemSleepStateNotify @ 0x1C0001790
 * Callers:
 *     <none>
 * Callees:
 *     AcquireBiosPpmControl @ 0x1C00018FC (AcquireBiosPpmControl.c)
 */

__int64 __fastcall ProcessSystemSleepStateNotify(int a1, __int64 a2, char a3)
{
  if ( (a1 == 3 || a1 == 6) && !a3 && (__int64 *)qword_1C000DD18 != &qword_1C000DD18 && qword_1C000DD18 != 32 )
    AcquireBiosPpmControl(qword_1C000DD18 - 32);
  return 0LL;
}
