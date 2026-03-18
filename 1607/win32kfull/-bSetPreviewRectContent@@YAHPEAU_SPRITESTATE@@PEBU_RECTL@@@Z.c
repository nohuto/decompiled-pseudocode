/*
 * XREFs of ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C026C910
 * Callers:
 *     bMoveDevPreviewRect @ 0x1C0278C38 (bMoveDevPreviewRect.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C026930C (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
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
  struct _LUID *v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+80h] [rbp-80h] BYREF
  __int64 v16; // [rsp+88h] [rbp-78h] BYREF
  char v17; // [rsp+90h] [rbp-70h]
  int v18; // [rsp+94h] [rbp-6Ch]
  int v19; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v20; // [rsp+9Ch] [rbp-64h]
  __int128 v21; // [rsp+A4h] [rbp-5Ch]
  int v22; // [rsp+B4h] [rbp-4Ch]
  struct PALETTE *v23; // [rsp+B8h] [rbp-48h] BYREF
  int v24; // [rsp+C0h] [rbp-40h]
  struct _RECTL v25; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v26[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-10h] BYREF
  char v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+FCh] [rbp-4h]
  struct PALETTE *v31; // [rsp+100h] [rbp+0h] BYREF
  int v32; // [rsp+108h] [rbp+8h]
  struct _RECTL si128; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v34[6]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v35[2]; // [rsp+150h] [rbp+50h] BYREF
  int v36; // [rsp+160h] [rbp+60h]
  unsigned __int64 v37; // [rsp+164h] [rbp+64h]
  unsigned __int64 v38; // [rsp+16Ch] [rbp+6Ch]

  v3 = a2->right - a2->left;
  v4 = a2->bottom - a2->top;
  v20 = 0LL;
  updated = 0;
  v21 = 0uLL;
  v22 = 0;
  v19 = 0;
  LODWORD(v27) = v3;
  HIDWORD(v27) = v4;
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 24LL), a2);
  v8 = (HDC)CompatibleDC;
  if ( CompatibleDC )
  {
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 1LL);
    DCOBJ::DCOBJ((DCOBJ *)v34, v8);
    if ( v34[0] )
    {
      v32 = 0;
      v31 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v31, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v24 = 0;
        v23 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v23, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          v24 = 1;
          v19 = 6;
          v20 = __PAIR64__(v4, v3);
          LODWORD(v21) = 0;
          *(_QWORD *)((char *)&v21 + 4) = *(_QWORD *)v23;
          HIDWORD(v21) = 1;
          v16 = 0LL;
          v17 = 0;
          v18 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v16, (struct _DEVBITMAPINFO *)&v19, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            && v16 )
          {
            LOBYTE(v9) = 5;
            HmgSetOwner(*(_QWORD *)(v16 + 32), 0LL, v9);
            v35[0] = 0x8C0038708C003870uLL;
            v35[1] = 0x8C0038708C003870uLL;
            v37 = 0x8C0038708C003870uLL;
            v38 = 0x8C0038708C003870uLL;
            v20 = 0x300000003LL;
            v36 = 1174412344;
            v19 = 6;
            LODWORD(v21) = 36;
            *(_QWORD *)((char *)&v21 + 4) = *(_QWORD *)v23;
            HIDWORD(v21) = 1;
            v28 = 0LL;
            v29 = 0;
            v30 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v28, (struct _DEVBITMAPINFO *)&v19, v35, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              if ( v28 )
              {
                v26[0] = 0x100000001LL;
                v26[1] = 0x100000001LL;
                *(_QWORD *)&v25.left = 0LL;
                v25.right = v3;
                v25.bottom = v4;
                si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                updated = EngNineGridHelper(
                            (struct XDCOBJ *)v34,
                            v23,
                            v31,
                            (struct _SURFOBJ *)(v16 + 24),
                            (struct _SURFOBJ *)(v28 + 24),
                            &v25,
                            &si128,
                            (struct _MARGINS *)v26);
                if ( updated )
                {
                  v10 = *(_QWORD *)(v16 + 32);
                  *(_DWORD *)(v16 + 112) |= 0x4000000u;
                  LODWORD(v15) = 33488896;
                  v11 = GreSelectBitmap(v8, v10);
                  v26[0] = 0LL;
                  *(_DWORD *)(v16 + 112) &= ~0x4000000u;
                  v25.left = a2->left;
                  v25.top = a2->top;
                  HDEV = (HDEV)UserGetHDEV();
                  LODWORD(v14) = 0;
                  updated = GreUpdateSprite(
                              HDEV,
                              0LL,
                              a1[146],
                              0LL,
                              (struct tagPOINT *)&v25,
                              (struct tagSIZE *)&v27,
                              v8,
                              (struct tagPOINT *)v26,
                              0,
                              (struct _BLENDFUNCTION *)&v15,
                              2u,
                              0LL,
                              0LL,
                              1,
                              v14);
                  *(_DWORD *)(v16 + 112) |= 0x4000000u;
                  GreSelectBitmap(v8, v11);
                  *(_DWORD *)(v16 + 112) &= ~0x4000000u;
                }
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v28);
          }
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v23);
          SURFMEM::~SURFMEM((SURFMEM *)&v16);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v23);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v31);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v34);
    GreSetDCOwnerEx(v8, 2147483650LL, 0LL, 1LL);
    GreDeleteDC(v8);
  }
  return updated;
}
