/*
 * XREFs of KiInterruptThunk @ 0x140168F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KiInterruptThunk()
{
  return FsRtlTruncateSmallMcb();
}
