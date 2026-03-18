/*
 * XREFs of ?IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0009B08
 * Callers:
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C00A4670 (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::IsSyncObjectLockExclusiveOwner(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(this[39]) != 0;
}
