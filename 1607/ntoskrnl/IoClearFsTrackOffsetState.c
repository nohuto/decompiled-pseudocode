/*
 * XREFs of IoClearFsTrackOffsetState @ 0x1401CA2F8
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x1400B1764 (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x1400CF278 (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoClearFsTrackOffsetState(__int64 a1)
{
  int v1; // edx
  __int64 v2; // r9

  if ( !IopIrpHasExtensionType(a1, 5u) )
    return 3221226021LL;
  IopFreeIrpExtension(v2, v1, 0);
  return 0LL;
}
