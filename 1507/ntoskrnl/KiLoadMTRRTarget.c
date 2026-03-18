/*
 * XREFs of KiLoadMTRRTarget @ 0x1403FB1B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x1403F6174 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(__int64 Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
