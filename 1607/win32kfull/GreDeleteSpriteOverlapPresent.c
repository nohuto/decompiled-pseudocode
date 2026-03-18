/*
 * XREFs of GreDeleteSpriteOverlapPresent @ 0x1C00559D8
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C025FAF4 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00566E8 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0056798 (-pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C011C228 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C02763DC (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

void __fastcall GreDeleteSpriteOverlapPresent(HDEV a1, HWND a2)
{
  unsigned int v2; // esi
  HDEV v3; // rbp
  int v6; // r14d
  unsigned int v7; // edi
  __int64 v8; // r12
  struct _PRESENT *Present; // rdx
  HDEV v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _PRESENT *v13; // rdx
  HDEV v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx

  v2 = 0;
  v3 = a1 + 24;
  v6 = 0;
  if ( *((_DWORD *)a1 + 41) )
  {
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL * v7);
      SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 224));
      Present = pSpGetPresent(*(HDEV *)(*((_QWORD *)v3 + 9) + 8LL * v7), a2);
      if ( Present )
      {
        vSpRemovePresent(v10, Present);
        Win32FreePool(v11, v11, v12);
        v6 = 1;
      }
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 224));
      ++v7;
    }
    while ( v7 < *((_DWORD *)v3 + 17) );
  }
  else
  {
    SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 56));
    v13 = pSpGetPresent(a1, a2);
    if ( v13 )
    {
      vSpRemovePresent(v14, v13);
      Win32FreePool(v15, v15, v16);
      v6 = 1;
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v3 + 32));
  }
  if ( v6 )
  {
    if ( *((_DWORD *)v3 + 17) )
    {
      do
      {
        v17 = *(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL * v2);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v17 + 224));
        vSpComputeNoPresentRegion((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL * v2) + 96LL), 0);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v17 + 224));
        ++v2;
      }
      while ( v2 < *((_DWORD *)v3 + 17) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v3 + 32));
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)v3, 0);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v3 + 32));
    }
  }
}
