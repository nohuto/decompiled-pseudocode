/*
 * XREFs of MiFinalizeDriverImage @ 0x1403B66C0
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1403CD204 (MiDriverLoadSucceeded.c)
 *     MiCompactServiceTable @ 0x140506EA0 (MiCompactServiceTable.c)
 * Callees:
 *     VfDriverLoadImage @ 0x1406B20A4 (VfDriverLoadImage.c)
 */

__int64 __fastcall MiFinalizeDriverImage(__int64 a1)
{
  VfDriverLoadImage(a1, 0LL, 0LL, 0LL);
  return KseDriverLoadImage(a1);
}
