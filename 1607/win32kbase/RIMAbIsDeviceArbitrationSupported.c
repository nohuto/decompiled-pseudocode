/*
 * XREFs of RIMAbIsDeviceArbitrationSupported @ 0x1C00054AC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 *     RIMAbConfigureDeviceArbitration @ 0x1C00D1AAC (RIMAbConfigureDeviceArbitration.c)
 * Callees:
 *     RIMIsRunningOnSurfaceHub @ 0x1C0005494 (RIMIsRunningOnSurfaceHub.c)
 *     RIMGetOneCoreEdition @ 0x1C00054C8 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMAbIsDeviceArbitrationSupported()
{
  _BOOL8 result; // rax

  if ( (unsigned int)RIMGetOneCoreEdition() == 3 )
    return 1LL;
  result = RIMIsRunningOnSurfaceHub();
  if ( result )
    return 1LL;
  return result;
}
