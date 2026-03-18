/*
 * XREFs of ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C026CEC4
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C001D740 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     ?pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0272F90 (-pSpGetMetaSpriteDelayDelete@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0272FE8 (-pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C0273014 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 */

__int64 __fastcall GdiHintSpriteShapeDelayDelete(HDEV a1, HWND a2, HBITMAP a3)
{
  unsigned int v4; // edi
  unsigned int v5; // r12d
  HDEV v7; // r13
  int v8; // r14d
  struct _SPRITESTATE *v9; // rcx
  struct _METASPRITE *v10; // rsi
  int v11; // r9d
  __int64 v12; // rbx
  struct SPRITE *v13; // rcx
  BOOL v14; // r15d
  struct SPRITE *v15; // rsi
  int v16; // ebx
  _BYTE v18[72]; // [rsp+20h] [rbp-48h] BYREF
  HDEV v19; // [rsp+70h] [rbp+8h] BYREF
  HBITMAP hsurf; // [rsp+80h] [rbp+18h]

  hsurf = a3;
  v19 = a1;
  v4 = 0;
  v5 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v18, (struct PDEVOBJ *)&v19);
  v7 = v19;
  v8 = 0;
  v9 = (struct _SPRITESTATE *)(v19 + 24);
  if ( !*((_DWORD *)v19 + 41) )
  {
    v15 = pSpGetSpriteDelayDelete(v9, a2, 0LL);
    v16 = ~(*(_DWORD *)v15 >> 9);
    v5 = pSpHintSpriteShape(v15, a3, 0);
    if ( (v16 & 1) != 0 && (*(_DWORD *)v15 & 0x200) != 0 )
    {
      v8 = 1;
LABEL_18:
      if ( v8 == 1 )
        _InterlockedAdd(&glDelayedHintShape, 1u);
    }
    goto LABEL_20;
  }
  v10 = pSpGetMetaSpriteDelayDelete(v9, a2, 0LL);
  if ( !v10 || (LODWORD(v12) = 0, !v11) )
  {
LABEL_20:
    v4 = v5;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v13 = (struct SPRITE *)*((_QWORD *)v10 + (unsigned int)v12 + 4);
    v14 = ((*(_DWORD *)v13 >> 9) & 1) == 0;
    v5 = pSpHintSpriteShape(v13, hsurf, 0);
    if ( !v5 )
      break;
    if ( v14 && (**((_DWORD **)v10 + (unsigned int)v12 + 4) & 0x200) != 0 )
      v8 = 1;
    LODWORD(v12) = v12 + 1;
    if ( (unsigned int)v12 >= *((_DWORD *)v7 + 41) )
    {
      if ( hsurf )
        *(_DWORD *)v10 |= 0x40u;
      else
        *(_DWORD *)v10 &= ~0x40u;
      goto LABEL_18;
    }
  }
  while ( (_DWORD)v12 )
  {
    v12 = (unsigned int)(v12 - 1);
    pSpHintSpriteShape(*((struct SPRITE **)v10 + v12 + 4), 0LL, 0);
  }
LABEL_21:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v18);
  return v4;
}
