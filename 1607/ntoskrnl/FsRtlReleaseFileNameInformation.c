/*
 * XREFs of FsRtlReleaseFileNameInformation @ 0x1404EC97C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 FsRtlReleaseFileNameInformation()
{
  return (*(__int64 (**)(void))(FltMgrCallbacks + 24))();
}
