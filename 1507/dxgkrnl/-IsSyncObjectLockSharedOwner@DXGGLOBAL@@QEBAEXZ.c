/*
 * XREFs of ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C000F904
 * Callers:
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C011E4C4 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::IsSyncObjectLockSharedOwner(PERESOURCE *this)
{
  return ExIsResourceAcquiredSharedLite(this[39]) != 0;
}
