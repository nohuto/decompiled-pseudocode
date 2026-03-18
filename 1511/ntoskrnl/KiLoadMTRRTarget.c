/*
 * XREFs of KiLoadMTRRTarget @ 0x1403AA9CC
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x1403A5F74 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(__int64 Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
