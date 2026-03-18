/*
 * XREFs of MiFinalizeDriverImage @ 0x140576DFC
 * Callers:
 *     MiCompactServiceTable @ 0x140571924 (MiCompactServiceTable.c)
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 * Callees:
 *     VfDriverLoadImage @ 0x140732114 (VfDriverLoadImage.c)
 */

__int64 __fastcall MiFinalizeDriverImage(__int64 a1)
{
  VfDriverLoadImage(a1, 0LL, 0LL, 0LL);
  return KseDriverLoadImage(a1);
}
