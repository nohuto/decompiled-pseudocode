/*
 * XREFs of FsRtlIsNonEmptyDirectoryReparsePointAllowed @ 0x1400B5278
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FsRtlIsNonEmptyDirectoryReparsePointAllowed(int a1)
{
  return (a1 & 0x10000000) != 0 || a1 == -2147483624;
}
