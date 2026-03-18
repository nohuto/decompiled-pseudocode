/*
 * XREFs of ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C026F414
 * Callers:
 *     bMoveDevPreviewRect @ 0x1C027B6F4 (bMoveDevPreviewRect.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C026C2DC (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall bSetPreviewRectContent(void **a1, const struct _RECTL *a2)
{
  LONG v3; // ebx
  LONG v4; // esi
  unsigned int updated; // r15d
  __int64 CompatibleDC; // rax
  HDC v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbx
  HDEV HDEV; // rax
  int v14; // [rsp+80h] [rbp-80h] BYREF
  __int64 v15; // [rsp+88h] [rbp-78h] BYREF
  char v16; // [rsp+90h] [rbp-70h]
  int v17; // [rsp+94h] [rbp-6Ch]
  int v18; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+9Ch] [rbp-64h]
  __int128 v20; // [rsp+A4h] [rbp-5Ch]
  int v21; // [rsp+B4h] [rbp-4Ch]
  struct PALETTE *v22; // [rsp+B8h] [rbp-48h] BYREF
  int v23; // [rsp+C0h] [rbp-40h]
  struct _RECTL v24; // [rsp+C8h] [rbp-38h] BYREF
  struct tagSIZE v25; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-20h] BYREF
  char v27; // [rsp+E8h] [rbp-18h]
  int v28; // [rsp+ECh] [rbp-14h]
  struct tagPOINT v29[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct PALETTE *v30; // [rsp+100h] [rbp+0h] BYREF
  int v31; // [rsp+108h] [rbp+8h]
  struct _RECTL si128; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v33[6]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v34[2]; // [rsp+150h] [rbp+50h] BYREF
  int v35; // [rsp+160h] [rbp+60h]
  unsigned __int64 v36; // [rsp+164h] [rbp+64h]
  unsigned __int64 v37; // [rsp+16Ch] [rbp+6Ch]

  v3 = a2->right - a2->left;
  v4 = a2->bottom - a2->top;
  v19 = 0LL;
  updated = 0;
  v20 = 0uLL;
  v21 = 0;
  v18 = 0;
  v25.cx = v3;
  v25.cy = v4;
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 24LL), a2);
  v8 = (HDC)CompatibleDC;
  if ( CompatibleDC )
  {
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 1LL);
    DCOBJ::DCOBJ((DCOBJ *)v33, v8);
    if ( v33[0] )
    {
      v31 = 0;
      v30 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v30, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v23 = 0;
        v22 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v22, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          v23 = 1;
          v18 = 6;
          v19 = __PAIR64__(v4, v3);
          LODWORD(v20) = 0;
          *(_QWORD *)((char *)&v20 + 4) = *(_QWORD *)v22;
          HIDWORD(v20) = 1;
          v15 = 0LL;
          v16 = 0;
          v17 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v15, (struct _DEVBITMAPINFO *)&v18, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            && v15 )
          {
            LOBYTE(v9) = 5;
            HmgSetOwner(*(_QWORD *)(v15 + 32), 0LL, v9);
            v34[0] = 0x8C0038708C003870uLL;
            v34[1] = 0x8C0038708C003870uLL;
            v36 = 0x8C0038708C003870uLL;
            v37 = 0x8C0038708C003870uLL;
            v19 = 0x300000003LL;
            v35 = 1174412344;
            v18 = 6;
            LODWORD(v20) = 36;
            *(_QWORD *)((char *)&v20 + 4) = *(_QWORD *)v22;
            HIDWORD(v20) = 1;
            v26 = 0LL;
            v27 = 0;
            v28 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v26, (struct _DEVBITMAPINFO *)&v18, v34, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              if ( v26 )
              {
                v29[0] = (struct tagPOINT)0x100000001LL;
                v29[1] = (struct tagPOINT)0x100000001LL;
                *(_QWORD *)&v24.left = 0LL;
                v24.right = v3;
                v24.bottom = v4;
                si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                updated = EngNineGridHelper(
                            (struct XDCOBJ *)v33,
                            v22,
                            v30,
                            (struct _SURFOBJ *)(v15 + 24),
                            (struct _SURFOBJ *)(v26 + 24),
                            &v24,
                            &si128,
                            (struct _MARGINS *)v29);
                if ( updated )
                {
                  v10 = *(_QWORD *)(v15 + 32);
                  *(_DWORD *)(v15 + 112) |= 0x4000000u;
                  v14 = 33488896;
                  v11 = GreSelectBitmap(v8, v10);
                  v29[0] = 0LL;
                  *(_DWORD *)(v15 + 112) &= ~0x4000000u;
                  v24.left = a2->left;
                  v24.top = a2->top;
                  HDEV = (HDEV)UserGetHDEV();
                  updated = GreUpdateSprite(
                              HDEV,
                              0LL,
                              a1[146],
                              0LL,
                              (struct tagPOINT *)&v24,
                              &v25,
                              v8,
                              v29,
                              0,
                              (struct _BLENDFUNCTION *)&v14,
                              2u,
                              0LL,
                              0LL,
                              1,
                              0);
                  *(_DWORD *)(v15 + 112) |= 0x4000000u;
                  GreSelectBitmap(v8, v11);
                  *(_DWORD *)(v15 + 112) &= ~0x4000000u;
                }
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v26);
          }
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v22);
          SURFMEM::~SURFMEM((SURFMEM *)&v15);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v22);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v30);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v33);
    GreSetDCOwnerEx(v8, 2147483650LL, 0LL, 1LL);
    GreDeleteDC(v8);
  }
  return updated;
}
