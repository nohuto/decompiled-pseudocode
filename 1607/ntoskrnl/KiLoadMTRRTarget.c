/*
 * XREFs of KiLoadMTRRTarget @ 0x1403D6AD8
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x1403D2568 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(__int64 Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
