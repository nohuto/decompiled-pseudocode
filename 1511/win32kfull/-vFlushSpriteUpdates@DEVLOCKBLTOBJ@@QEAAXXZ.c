/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C01C30D8
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0263C28 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00326B0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::vFlushSpriteUpdates(DEVLOCKBLTOBJ *this)
{
  __int64 v1; // r8
  int v2; // edx

  v1 = *((_QWORD *)this + 10);
  if ( v1 )
  {
    v2 = *((_DWORD *)this + 18);
    if ( (v2 & 0x1000) != 0 && (*(_DWORD *)(v1 + 36) & 0x4000) != 0 && *(_QWORD *)(v1 + 488) )
    {
      if ( *(_DWORD *)(v1 + 504) )
        GreUpdateSpriteDevLockEnd((DEVLOCKBLTOBJ *)((char *)this + 80), v2 & 0x400000);
    }
  }
}
