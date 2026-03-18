/*
 * XREFs of ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0262130
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C0263250 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0037A14 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0068398 (GreDeleteSpriteOverlapPresent.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00686A0 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00FAE80 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C026B7A0 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C026C9C4 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
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
  HRGN hrgn; // [rsp+30h] [rbp-49h]
  unsigned int v20; // [rsp+38h] [rbp-41h]
  unsigned int v21; // [rsp+3Ch] [rbp-3Dh]
  _QWORD v23[3]; // [rsp+48h] [rbp-31h] BYREF
  HANDLE hrgnSrc2; // [rsp+60h] [rbp-19h]
  _QWORD v25[3]; // [rsp+68h] [rbp-11h] BYREF
  struct tagRECT prcl; // [rsp+80h] [rbp+7h] BYREF

  hrgnSrc2 = a3;
  v4 = 0;
  v20 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v23, a3, 0);
  if ( !v23[0] )
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
  if ( RGNOBJ::bInside((RGNOBJ *)v23, (struct _RECTL *)&prcl) == 2 )
  {
LABEL_4:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v23);
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
              v21 = 0;
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
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v25, RectRgn, 0);
                RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v23, hrgn, 1);
                *(_QWORD *)&prcl.left = *((_QWORD *)a1 + 100);
                if ( v25[0] && v23[0] )
                  v21 = RGNOBJAPI::iCombine((RGNOBJAPI *)v25, (struct RGNOBJ *)v23, (struct RGNOBJ *)&prcl, 4);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v23);
                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v25);
                if ( v21 > 1 )
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
                    if ( (unsigned int)EngCombineRgn(hrgn, RectRgn, hrgnSrc2, 1) <= 1 )
                    {
                      if ( v16 )
                        GreAddSpriteOverlapPresent(a1, a2);
                    }
                    else
                    {
                      v20 = 1;
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
    return v20;
  }
  else
  {
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v23);
  }
  return v4;
}
