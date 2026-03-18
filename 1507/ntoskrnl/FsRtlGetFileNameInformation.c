/*
 * XREFs of FsRtlGetFileNameInformation @ 0x1405578C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 FsRtlGetFileNameInformation()
{
  if ( FltMgrCallbacks )
    return (*(__int64 (**)(void))(FltMgrCallbacks + 16))();
  else
    return 3221225659LL;
}
