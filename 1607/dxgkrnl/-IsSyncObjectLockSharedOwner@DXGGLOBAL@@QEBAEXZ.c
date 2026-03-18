/*
 * XREFs of ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0009CD0
 * Callers:
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C0143E0C (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::IsSyncObjectLockSharedOwner(PERESOURCE *this)
{
  return ExIsResourceAcquiredSharedLite(this[39]) != 0;
}
