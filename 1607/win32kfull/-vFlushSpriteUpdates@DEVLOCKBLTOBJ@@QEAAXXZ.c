/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C004694C
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C02617A8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DEVLOCKBLTOBJ::vFlushSpriteUpdates(DEVLOCKBLTOBJ *this)
{
  __int64 v1; // r8
  int v2; // edx

  v1 = *((_QWORD *)this + 15);
  if ( v1 )
  {
    v2 = *((_DWORD *)this + 28);
    if ( (v2 & 0x1000) != 0 && (*(_DWORD *)(v1 + 36) & 0x4000) != 0 && *(_QWORD *)(v1 + 488) )
    {
      if ( *(_DWORD *)(v1 + 504) )
        GreUpdateSpriteDevLockEnd((DEVLOCKBLTOBJ *)((char *)this + 120), v2 & 0x400000);
    }
  }
}
