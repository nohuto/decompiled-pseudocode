/*
 * XREFs of GreDeleteSpriteOverlapPresent @ 0x14001B174
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x140348168 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001BDBC (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001DA44 (-vUnlockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z @ 0x140186368 (-vSpUpdateSpriteOverlapPresent@@YAXPEAUHDEV__@@H@Z.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x14031796C (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

void __fastcall GreDeleteSpriteOverlapPresent(HDEV a1, __int64 a2)
{
  unsigned int v2; // esi
  int v5; // r14d
  SPRITERANGELOCK *v6; // rbx
  __int64 j; // rdx
  unsigned int v8; // ebx
  __int64 v9; // r12
  HDEV v10; // rcx
  __int64 i; // rdx
  void *v12; // rdx
  void *v13; // rdx
  __int64 v14; // rbx

  v2 = 0;
  v5 = 0;
  if ( *((_DWORD *)a1 + 35) )
  {
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * v8);
      SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v9 + 200));
      if ( a2 )
      {
        v10 = *(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v8);
        for ( i = *((_QWORD *)v10 + 20); i; i = *(_QWORD *)(i + 8) )
        {
          if ( *(_QWORD *)i == a2 )
          {
            vSpRemovePresent(v10, (struct _PRESENT *)i);
            Win32FreePool(v12);
            v5 = 1;
            break;
          }
        }
      }
      SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v9 + 200));
      ++v8;
    }
    while ( v8 < *((_DWORD *)a1 + 35) );
    v6 = (SPRITERANGELOCK *)(a1 + 50);
  }
  else
  {
    v6 = (SPRITERANGELOCK *)(a1 + 50);
    SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 50));
    if ( a2 )
    {
      for ( j = *((_QWORD *)a1 + 20); j; j = *(_QWORD *)(j + 8) )
      {
        if ( *(_QWORD *)j == a2 )
        {
          vSpRemovePresent(a1, (struct _PRESENT *)j);
          Win32FreePool(v13);
          v5 = 1;
          break;
        }
      }
    }
    SPRITERANGELOCK::vUnlockExclusive(v6);
  }
  if ( v5 )
  {
    if ( *((_DWORD *)a1 + 35) )
    {
      do
      {
        v14 = *(_QWORD *)(*((_QWORD *)a1 + 18) + 8LL * v2);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v14 + 200));
        vSpUpdateSpriteOverlapPresent(*(HDEV *)(*((_QWORD *)a1 + 18) + 8LL * v2), 0);
        SPRITERANGELOCK::vUnlockExclusive((SPRITERANGELOCK *)(v14 + 200));
        ++v2;
      }
      while ( v2 < *((_DWORD *)a1 + 35) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive(v6);
      vSpUpdateSpriteOverlapPresent(a1, 0);
      SPRITERANGELOCK::vUnlockExclusive(v6);
    }
  }
}
