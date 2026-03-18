/*
 * XREFs of FsRtlReleaseFileNameInformation @ 0x1404C23A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 FsRtlReleaseFileNameInformation()
{
  return (*(__int64 (**)(void))(FltMgrCallbacks + 24))();
}
