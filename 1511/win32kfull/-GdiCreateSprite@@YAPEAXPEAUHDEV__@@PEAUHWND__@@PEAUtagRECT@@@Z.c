/*
 * XREFs of ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C026B1A4
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C007DA70 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00D3560 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C0271D50 (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0274DE8 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

struct SPRITE *__fastcall GdiCreateSprite(HDEV a1, HWND a2, struct _RECTL *a3)
{
  struct SPRITE *v6; // rbx
  HDEV v7; // rbp
  int v8; // ecx
  struct SPRITE *v9; // rdi
  unsigned int v10; // esi
  struct _POINTL *v11; // r9
  HDEV v12; // rcx
  struct SPRITE *Sprite; // rax
  int v14; // eax
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF
  HDEV v17; // [rsp+60h] [rbp+8h] BYREF
  struct _POINTL v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = a1;
  v6 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v16, (struct PDEVOBJ *)&v17);
  v7 = v17;
  v8 = *((_DWORD *)v17 + 41);
  if ( v8 )
  {
    v9 = (struct SPRITE *)PALLOCMEM2((unsigned int)(8 * v8 + 40), 1836086087LL, 0);
    if ( v9 )
    {
      v10 = 0;
      if ( *((_DWORD *)v7 + 41) )
      {
        while ( 1 )
        {
          v11 = 0LL;
          v12 = *(HDEV *)(*((_QWORD *)v7 + 21) + 8LL * v10);
          if ( a3 )
          {
            v11 = &v18;
            v18.x = a3->left - *((_DWORD *)v12 + 652);
            v18.y = a3->top - *((_DWORD *)v12 + 653);
          }
          Sprite = pSpCreateSprite(v12, a3, a2, v11);
          if ( !Sprite )
            break;
          *((_QWORD *)v9 + v10++ + 4) = Sprite;
          *((_QWORD *)Sprite + 1) = v9;
          if ( v10 >= *((_DWORD *)v7 + 41) )
            goto LABEL_8;
        }
        while ( v10 )
          vSpDeleteSprite(*((struct SPRITE **)v9 + --v10 + 4));
        Win32FreePool(v9);
      }
      else
      {
LABEL_8:
        *((_QWORD *)v9 + 1) = a2;
        v14 = *((_DWORD *)v7 + 41);
        *(_DWORD *)v9 = 0;
        v6 = v9;
        *((_DWORD *)v9 + 6) = v14;
        *((_QWORD *)v9 + 2) = *((_QWORD *)v7 + 22);
        *((_QWORD *)v7 + 22) = v9;
      }
    }
  }
  else
  {
    v6 = pSpCreateSprite(a1, a3, a2, 0LL);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v16);
  return v6;
}
