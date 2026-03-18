/*
 * XREFs of ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C026C9C4
 * Callers:
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0262130 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00686A0 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C00686D0 (-pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00FA7B8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0271D04 (-pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C0277E94 (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

__int64 __fastcall GreAddSpriteOverlapPresent(_DWORD *a1, HWND a2)
{
  HDEV v2; // rsi
  BOOL v3; // edi
  __int64 v6; // r15
  unsigned int v7; // ebp
  __int64 v8; // r13
  HWND v9; // rdx
  HDEV v10; // rcx
  struct _PRESENT *Present; // r14
  __int64 v12; // r15
  __int64 v13; // r13
  struct _PRESENT *v14; // rax
  HDEV v15; // rcx
  __int64 v16; // rdx
  HWND v17; // rdx
  HDEV v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rbx

  v2 = (HDEV)(a1 + 24);
  v3 = 0;
  if ( a1[41] )
  {
    v6 = 0LL;
    v7 = 1;
    while ( 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)v2 + 9) + 8 * v6);
      SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 224));
      Present = pSpGetPresent(*(_QWORD **)(*((_QWORD *)v2 + 9) + 8 * v6), a2);
      if ( !Present )
      {
        Present = pSpCreatePresent(v10, v9);
        if ( !Present )
        {
          SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 224));
          v3 = 0;
          v12 = 0LL;
          if ( *((_DWORD *)v2 + 17) )
          {
            do
            {
              v13 = *(_QWORD *)(*((_QWORD *)v2 + 9) + 8 * v12);
              SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v13 + 224));
              v14 = pSpGetPresent(*(_QWORD **)(*((_QWORD *)v2 + 9) + 8 * v12), a2);
              Present = v14;
              if ( v14 )
              {
                vSpRemovePresent(v15, v14);
                Win32FreePool(v16);
              }
              SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v13 + 224));
              v12 = (unsigned int)(v12 + 1);
            }
            while ( (unsigned int)v12 < *((_DWORD *)v2 + 17) );
            goto LABEL_16;
          }
          return 0;
        }
        v3 = 1;
      }
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 224));
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)v2 + 17) )
        goto LABEL_16;
    }
  }
  SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 56));
  Present = pSpGetPresent(a1, a2);
  v7 = 1;
  if ( !Present )
  {
    Present = pSpCreatePresent(v18, v17);
    v3 = Present != 0LL;
  }
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v2 + 32));
LABEL_16:
  if ( v3 )
  {
    if ( *((_DWORD *)v2 + 17) )
    {
      v19 = 0LL;
      do
      {
        v20 = *(_QWORD *)(*((_QWORD *)v2 + 9) + 8 * v19);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v20 + 224));
        vSpComputeNoPresentRegion((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)v2 + 9) + 8 * v19) + 96LL), 0);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v20 + 224));
        v19 = (unsigned int)(v19 + 1);
      }
      while ( (unsigned int)v19 < *((_DWORD *)v2 + 17) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v2 + 32));
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)v2, 0);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v2 + 32));
    }
  }
  if ( !Present )
    return 0;
  return v7;
}
