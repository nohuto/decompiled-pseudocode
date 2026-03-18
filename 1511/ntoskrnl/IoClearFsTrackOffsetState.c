/*
 * XREFs of IoClearFsTrackOffsetState @ 0x1401BC398
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x140101C04 (IopIrpHasExtensionType.c)
 *     IopFreeIrpExtension @ 0x1401BC504 (IopFreeIrpExtension.c)
 */

__int64 __fastcall IoClearFsTrackOffsetState(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9

  if ( !IopIrpHasExtensionType(a1, 5u) )
    return 3221226021LL;
  IopFreeIrpExtension(v2, v1, 0LL, v2);
  return 0LL;
}
