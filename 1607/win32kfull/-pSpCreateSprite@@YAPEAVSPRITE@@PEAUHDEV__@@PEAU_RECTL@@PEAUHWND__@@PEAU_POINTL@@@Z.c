/*
 * XREFs of ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C027027C
 * Callers:
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0269664 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026A628 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C026FE30 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C026FFEC (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027089C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C0270C64 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0055CE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0055D10 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C0274218 (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C027648C (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

struct SPRITE *__fastcall pSpCreateSprite(HDEV a1, struct _RECTL *a2, HWND a3, struct _POINTL *a4)
{
  _DWORD *v4; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  HDEV v10; // rdi
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  LONG x; // eax
  LONG y; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v20[16]; // [rsp+20h] [rbp-E8h] BYREF
  struct _SPRITESTATE *v21[24]; // [rsp+30h] [rbp-D8h] BYREF
  HDEV v22; // [rsp+110h] [rbp+8h] BYREF

  v4 = 0LL;
  v22 = a1;
  if ( ((_DWORD)a1[14] & 1) != 0 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v20, (struct PDEVOBJ *)&v22);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v21, (struct PDEVOBJ *)&v22, v8, v9);
    v10 = v22 + 24;
    v11 = PALLOCMEM2(0x110uLL, 544240455LL, 1);
    v4 = v11;
    if ( v11 )
    {
      if ( a2 )
      {
        v11[44] = a2->right - a2->left;
        v11[45] = a2->bottom - a2->top;
        if ( a4 )
          x = a4->x;
        else
          x = a2->left;
        v4[28] = x;
        if ( a4 )
          y = a4->y;
        else
          y = a2->top;
        v4[29] = y;
      }
      else
      {
        v11[44] = 0;
        v11[45] = 0;
        v11[28] = 0x80000000;
        v11[29] = 0x80000000;
      }
      *v4 = 0;
      *((_QWORD *)v4 + 2) = v10;
      v4[1] = 4;
      v4[21] = 0x80000000;
      v4[20] = 0x80000000;
      v4[23] = 0x80000000;
      v4[22] = 0x80000000;
      v17 = *((_QWORD *)v10 + 137);
      if ( *((_QWORD *)v10 + 2) == v17 )
      {
        *((_QWORD *)v4 + 3) = v17;
        if ( v17 )
          *(_QWORD *)(v17 + 32) = v4;
        else
          *((_QWORD *)v10 + 3) = v4;
        *((_QWORD *)v10 + 2) = v4;
      }
      else if ( v17 )
      {
        *(_QWORD *)(*(_QWORD *)(v17 + 32) + 24LL) = v4;
        *((_QWORD *)v4 + 4) = *(_QWORD *)(v17 + 32);
        *((_QWORD *)v4 + 3) = v17;
        *(_QWORD *)(v17 + 32) = v4;
      }
      else
      {
        *((_QWORD *)v4 + 4) = *((_QWORD *)v10 + 3);
        *(_QWORD *)(*((_QWORD *)v10 + 3) + 24LL) = v4;
        *((_QWORD *)v10 + 3) = v4;
      }
      vSpRenumberZOrder((struct _SPRITESTATE *)v10);
      v18 = *((_QWORD *)v10 + 4);
      *((_QWORD *)v10 + 4) = v4;
      *((_QWORD *)v4 + 5) = v18;
      if ( v18 )
        *(_QWORD *)(v18 + 48) = v4;
      *((_QWORD *)v4 + 9) = a3;
      vSpOrderInY((struct SPRITE *)v4);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS(v21, v12, v13, v14);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v20);
  }
  return (struct SPRITE *)v4;
}
