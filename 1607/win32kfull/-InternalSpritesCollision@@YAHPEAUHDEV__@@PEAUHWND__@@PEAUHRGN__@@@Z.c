/*
 * XREFs of ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C025FAF4
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C0260D60 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004BB88 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C00559D8 (GreDeleteSpriteOverlapPresent.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00566E8 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C011C8F4 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C0269C60 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C026AE7C (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall InternalSpritesCollision(HDEV a1, HWND a2, HRGN a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  LONG v6; // ecx
  LONG v7; // edx
  int v8; // eax
  LONG v9; // r8d
  int v10; // r9d
  HRGN RectRgn; // rsi
  HRGN v12; // r14
  HRGN v13; // rax
  HRGN v14; // r13
  HRGN v15; // r12
  int v16; // edi
  HRGN v17; // rax
  HRGN hrgn; // [rsp+30h] [rbp-89h]
  unsigned int v20; // [rsp+38h] [rbp-81h]
  unsigned int v21; // [rsp+3Ch] [rbp-7Dh]
  _QWORD v24[7]; // [rsp+50h] [rbp-69h] BYREF
  _QWORD v25[7]; // [rsp+88h] [rbp-31h] BYREF
  struct tagRECT prcl; // [rsp+C0h] [rbp+7h] BYREF

  v4 = 0;
  v21 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v24, a3, 0, 0);
  if ( !v24[0] )
    goto LABEL_4;
  v5 = *((_DWORD *)a1 + 652);
  v6 = v5 + *((_DWORD *)a1 + 36);
  v7 = v5 + *((_DWORD *)a1 + 38);
  v8 = *((_DWORD *)a1 + 653);
  v9 = v8 + *((_DWORD *)a1 + 37);
  v10 = *((_DWORD *)a1 + 39);
  prcl.left = v6;
  prcl.right = v7;
  prcl.top = v9;
  prcl.bottom = v8 + v10;
  if ( RGNOBJ::bInside((RGNOBJ *)v24, (struct _RECTL *)&prcl) == 2 )
  {
LABEL_4:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v24);
    if ( *((_DWORD *)a1 + 40) )
    {
      RectRgn = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
      if ( RectRgn )
      {
        hrgn = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v12 = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v13 = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
        v14 = hrgn;
        v15 = v13;
        if ( hrgn )
        {
          if ( v12 )
          {
            if ( v13 )
            {
              v20 = 0;
              if ( EngSetRectRgn(
                     hrgn,
                     *((_DWORD *)a1 + 36),
                     *((_DWORD *)a1 + 37),
                     *((_DWORD *)a1 + 38),
                     *((_DWORD *)a1 + 39)) )
              {
                SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 56));
                if ( *((_QWORD *)a1 + 143) )
                  vSpComputeUncoveredRegion((struct _SPRITESTATE *)(a1 + 24), 0);
                SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(a1 + 56));
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v25, RectRgn, 0, 0);
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v24, hrgn, 1, 0);
                *(_QWORD *)&prcl.left = *((_QWORD *)a1 + 100);
                if ( v25[0] && v24[0] )
                  v20 = RGNOBJAPI::iCombine((RGNOBJAPI *)v25, (struct RGNOBJ *)v24, (struct RGNOBJ *)&prcl, 4);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v24);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v25);
                if ( v20 > 1 )
                {
                  v16 = 0;
                  EngSetRectRgn(v12, 0, 0, 0, 0);
                  if ( !g_pDwmState )
                    GdiGetSpriteClipRgns(a1, v12);
                  EngGetRgnBox(v12, &prcl);
                  if ( !ERECTL::bEmpty((ERECTL *)&prcl) && (unsigned int)EngCombineRgn(v15, RectRgn, v12, 1) > 1 )
                  {
                    v17 = RectRgn;
                    v16 = 1;
                    RectRgn = v15;
                    v15 = v17;
                  }
                  if ( (unsigned int)EngOffsetRgn(RectRgn, *((_DWORD *)a1 + 652), *((_DWORD *)a1 + 653)) > 1 )
                  {
                    if ( (unsigned int)EngCombineRgn(hrgn, RectRgn, a3, 1) <= 1 )
                    {
                      if ( v16 )
                        GreAddSpriteOverlapPresent(a1, a2);
                    }
                    else
                    {
                      v21 = 1;
                      GreDeleteSpriteOverlapPresent(a1, a2);
                    }
                  }
                }
                v14 = hrgn;
              }
            }
          }
          EngDeleteRgn(v14);
        }
        if ( v12 )
          EngDeleteRgn(v12);
        if ( v15 )
          EngDeleteRgn(v15);
        EngDeleteRgn(RectRgn);
      }
    }
    return v21;
  }
  else
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v24);
  }
  return v4;
}
