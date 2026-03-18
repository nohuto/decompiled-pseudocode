/*
 * XREFs of ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C026CCBC
 * Callers:
 *     GreHintSpriteShape @ 0x1C000FAE4 (GreHintSpriteShape.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C012BAD0 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C014A1F0 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0272F64 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0272FBC (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0273014 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C0273C00 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 */

__int64 __fastcall GdiHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, int a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r12d
  HDEV v8; // r13
  BOOL v9; // r15d
  struct _SPRITESTATE *v10; // rcx
  struct _METASPRITE *MetaSprite; // rsi
  int v12; // r9d
  __int64 v13; // rbx
  BOOL v14; // r12d
  __int128 *v15; // rcx
  __int64 v16; // r8
  struct SPRITE *Sprite; // rax
  struct SPRITE *v18; // rsi
  int v19; // ebx
  __int128 *v20; // rcx
  HDEV v22[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v23; // [rsp+30h] [rbp-50h]
  _BYTE v24[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v25; // [rsp+50h] [rbp-30h]
  __int128 v26; // [rsp+60h] [rbp-20h] BYREF
  __int128 v27; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v28; // [rsp+C0h] [rbp+40h]

  v22[0] = a1;
  v6 = 0;
  v7 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v24, (struct PDEVOBJ *)v22);
  v8 = v22[0];
  v9 = 0;
  v10 = (struct _SPRITESTATE *)(v22[0] + 24);
  if ( !*((_DWORD *)v22[0] + 41) )
  {
    Sprite = pSpGetSprite(v10, a2, 0LL);
    v18 = Sprite;
    if ( Sprite )
    {
      v19 = ~(*(_DWORD *)Sprite >> 9);
      v7 = pSpHintSpriteShape(Sprite, a3, a4);
      if ( (v19 & 1) != 0 )
        v9 = (*(_DWORD *)v18 & 0x200) != 0;
      if ( a5 && !ERECTL::bEmpty((struct SPRITE *)((char *)v18 + 80)) )
      {
        v23 = *v20;
        v27 = v23;
        vSpAddAndCompactDirtyRect(v18, &v27);
      }
LABEL_24:
      if ( v9 )
        _InterlockedAdd(&glDelayedHintShape, 1u);
    }
    goto LABEL_26;
  }
  MetaSprite = pSpGetMetaSprite(v10, a2, 0LL);
  if ( !MetaSprite || (LODWORD(v13) = 0, !v12) )
  {
LABEL_26:
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v24);
    return v7;
  }
  while ( 1 )
  {
    *(_QWORD *)&v23 = *((_QWORD *)MetaSprite + (unsigned int)v13 + 4);
    v14 = ((*(_DWORD *)v23 >> 9) & 1) == 0;
    v28 = pSpHintSpriteShape((struct SPRITE *)v23, a3, a4);
    if ( !v28 )
      break;
    if ( v14 && (*(_DWORD *)v23 & 0x200) != 0 )
      v9 = 1;
    if ( a5 && !ERECTL::bEmpty((ERECTL *)(v23 + 80)) )
    {
      v25 = *v15;
      v26 = v25;
      vSpAddAndCompactDirtyRect(v16, &v26);
    }
    LODWORD(v13) = v13 + 1;
    if ( (unsigned int)v13 >= *((_DWORD *)v8 + 41) )
    {
      v7 = v28;
      if ( a3 )
        *(_DWORD *)MetaSprite |= 0x40u;
      else
        *(_DWORD *)MetaSprite &= ~0x40u;
      goto LABEL_24;
    }
  }
  while ( (_DWORD)v13 )
  {
    v13 = (unsigned int)(v13 - 1);
    pSpHintSpriteShape(*((struct SPRITE **)MetaSprite + v13 + 4), 0LL, a4);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v24);
  return v6;
}
