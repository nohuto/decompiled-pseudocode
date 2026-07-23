/*
 * XREFs of IoIrpHasFsTrackOffsetExtensionType @ 0x1401CA35C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IoIrpHasFsTrackOffsetExtensionType(__int64 a1)
{
  return IopIrpHasExtensionType(a1, 5u);
}
