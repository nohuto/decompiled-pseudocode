/*
 * XREFs of ?vSpPIDLockSpriteArea@@YA?AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x140317074
 * Callers:
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14026E8E4 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A62C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x14016A674 (-vUnlockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x140315238 (-pSpFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1403153AC (-pSpReverseFindInZForPidLock@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall vSpPIDLockSpriteArea(__int64 a1, struct _RECTL *a2)
{
  SPRITERANGELOCK *v2; // rbp
  unsigned int v4; // edi
  struct SPRITE *i; // rcx
  struct SPRITE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct SPRITE *v10; // rbx
  struct SPRITE *v11; // rax

  v2 = (SPRITERANGELOCK *)(a1 + 120);
  v4 = 0;
  SPRITERANGELOCK::vLockShared((HSEMAPHORE *)(a1 + 120));
  for ( i = *(struct SPRITE **)(a1 + 8); ; i = (struct SPRITE *)*((_QWORD *)v10 + 3) )
  {
    v7 = pSpFindInZForPidLock(i, a2);
    v10 = v7;
    if ( !v7 )
      break;
    v4 = SURFACE::Map(*((_QWORD *)v7 + 16) - 24LL, v8, v9);
    if ( v4 == 2 )
    {
      while ( 1 )
      {
        v11 = pSpReverseFindInZForPidLock(*((struct SPRITE **)v10 + 4), a2);
        v10 = v11;
        if ( !v11 )
          break;
        SURFACE::bUnMap((SURFACE *)(*((_QWORD *)v11 + 16) - 24LL));
      }
      SPRITERANGELOCK::vUnlockShared(v2);
      return v4;
    }
  }
  return v4;
}
