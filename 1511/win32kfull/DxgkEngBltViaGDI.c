/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C0262980
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C007A940 (UserGetRedirectedWindowOrigin.c)
 *     DxEngSelectPaletteToSurface @ 0x1C007F4E0 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C007F560 (DxEngSetPaletteState.c)
 *     NtGdiTransparentBlt @ 0x1C00F0040 (NtGdiTransparentBlt.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngBltViaGDI(
        __int64 a1,
        HDC a2,
        int *a3,
        __int64 a4,
        PVOID pvBits,
        LONG lWidth,
        unsigned int a7,
        unsigned int a8,
        char a9,
        char a10,
        unsigned int a11,
        __int64 a12,
        unsigned int (__fastcall *a13)(int *, __int128 *, __int64, __int64))
{
  unsigned int v14; // ebx
  __int64 v16; // rsi
  HPALETTE Palette; // rax
  HPALETTE v18; // rdi
  HBITMAP Bitmap; // r14
  __int64 v20; // rdx
  __int64 v21; // r8
  SURFOBJ *v22; // rax
  SURFOBJ *v23; // rbx
  __int64 v24; // rax
  __int64 DisplayDC; // rax
  __int64 v26; // rax
  int v27; // r14d
  __int128 v28; // xmm0
  int v29; // ebx
  unsigned int v30; // edi
  int RedirectedWindowOrigin; // eax
  int *v32; // r14
  int v33; // rax^4
  int v34; // eax
  __int64 v35; // r9
  __int64 v36; // r8
  int v37; // r9d
  int v38; // r8d
  unsigned int v39; // ebx
  int v40; // edi
  int v41; // r8d
  int v42; // r12d
  int v43; // r10d
  int v44; // r15d
  unsigned int v45; // r14d
  int v46; // r10d
  int v47; // edx
  int v48; // r11d
  int v49; // r8d
  int v50; // r9d
  int v51; // ecx
  int v52; // ecx
  int v53; // r9d
  int v54; // eax
  __int64 v55; // rcx
  int v56; // r9d
  int v57; // ebx
  int v58; // r14d
  int v59; // r15d
  unsigned int v60; // edi
  HDC v61; // rsi
  int v62; // r9d
  int v63; // eax
  char v65; // [rsp+70h] [rbp-90h]
  int v66; // [rsp+74h] [rbp-8Ch]
  HDC sizl; // [rsp+78h] [rbp-88h]
  int v68[2]; // [rsp+80h] [rbp-80h] BYREF
  int v69; // [rsp+88h] [rbp-78h]
  int v70; // [rsp+8Ch] [rbp-74h]
  unsigned int v71; // [rsp+90h] [rbp-70h]
  int v72; // [rsp+98h] [rbp-68h] BYREF
  int v73; // [rsp+9Ch] [rbp-64h]
  int *v74; // [rsp+A0h] [rbp-60h]
  int v75; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v76; // [rsp+ACh] [rbp-54h]
  int v77; // [rsp+B4h] [rbp-4Ch]
  HPALETTE hpal; // [rsp+B8h] [rbp-48h]
  unsigned int v79; // [rsp+C0h] [rbp-40h]
  unsigned int (__fastcall *v80)(int *, __int128 *, __int64, __int64); // [rsp+C8h] [rbp-38h]
  __int64 v81; // [rsp+D0h] [rbp-30h]
  HBITMAP v82; // [rsp+D8h] [rbp-28h]
  _QWORD v83[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v84; // [rsp+F0h] [rbp-10h] BYREF
  HDC v85; // [rsp+100h] [rbp+0h] BYREF
  int v86; // [rsp+108h] [rbp+8h]
  int v87; // [rsp+10Ch] [rbp+Ch]
  int v88; // [rsp+110h] [rbp+10h] BYREF
  int v89; // [rsp+114h] [rbp+14h]
  unsigned int v90; // [rsp+118h] [rbp+18h]
  unsigned int v91; // [rsp+11Ch] [rbp+1Ch]
  int v92; // [rsp+120h] [rbp+20h] BYREF
  int v93; // [rsp+124h] [rbp+24h]
  int v94; // [rsp+128h] [rbp+28h]
  int v95; // [rsp+12Ch] [rbp+2Ch]

  v14 = 0;
  *(_QWORD *)v68 = a12;
  v80 = a13;
  v81 = a4;
  v85 = a2;
  v66 = 0;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v83, a2);
    v16 = v83[0];
    if ( !v83[0] )
    {
LABEL_78:
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v83);
      return v14;
    }
    if ( a9 )
      Palette = EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu);
    else
      Palette = EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
    hpal = Palette;
    if ( !Palette )
    {
LABEL_77:
      v14 = v66;
      goto LABEL_78;
    }
    v18 = hpal;
    Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
    v82 = Bitmap;
    DxEngSetPaletteState(hpal, v20, v21);
    if ( !Bitmap )
    {
LABEL_76:
      EngDeletePalette(v18);
      goto LABEL_77;
    }
    v22 = EngLockSurface((HSURF)Bitmap);
    v23 = v22;
    if ( !v22
      || (DxEngSelectPaletteToSurface((__int64)v22, hpal),
          v24 = SURFOBJ_TO_SURFACE(v23),
          *(_DWORD *)(v24 + 112) |= 0x104200u,
          EngUnlockSurface(v23),
          DisplayDC = GreCreateDisplayDC(*(_QWORD *)(v16 + 48), 1LL),
          (sizl = (HDC)DisplayDC) == 0LL) )
    {
LABEL_75:
      EngDeleteSurface((HSURF)Bitmap);
      goto LABEL_76;
    }
    if ( !hbmSelectBitmap(DisplayDC, Bitmap, 0LL, 1LL) )
    {
LABEL_74:
      bDeleteDCInternal(sizl, 1LL, 0LL);
      goto LABEL_75;
    }
    v26 = *(_QWORD *)(v16 + 80);
    v27 = 0;
    v74 = 0LL;
    v71 = *(_DWORD *)(v26 + 312);
    v79 = v71 & 7;
    if ( (v71 & 7) != 0 )
      DC::dwSetLayout((DC *)v16, -1, 0);
    GreLockVisRgnShared(*(_QWORD *)(v16 + 48));
    if ( a3 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (*(_DWORD *)(v16 + 36) & 0x4000) != 0 )
          v27 = 1;
        v84 = *(_OWORD *)(v16 + 1424);
        if ( (*(_DWORD *)(v16 + 36) & 0x4000) != 0
          && (unsigned int)UserGetRedirectedWindowOrigin((__int64)v85, (__int64)&v72) )
        {
          DWORD2(v84) += v72;
          v29 = v72 + v84;
          v30 = v73 + DWORD1(v84);
          HIDWORD(v84) += v73;
          DWORD1(v84) += v73;
          LODWORD(v84) = v72 + v84;
        }
        else
        {
          v30 = DWORD1(v84);
          v29 = v84;
        }
        if ( v27 )
        {
          RedirectedWindowOrigin = UserGetRedirectedWindowOrigin((__int64)v85, (__int64)&v72);
          v29 = v84;
          v30 = DWORD1(v84);
          if ( RedirectedWindowOrigin )
          {
            DWORD2(v84) += v72;
            v29 = v72 + v84;
            v30 = v73 + DWORD1(v84);
            HIDWORD(v84) += v73;
            DWORD1(v84) += v73;
            LODWORD(v84) = v72 + v84;
          }
        }
        IntersectRect(&v75, (int *)&v84, a3);
        if ( v29 != v75 || __PAIR64__(DWORD2(v84), v30) != v76 || HIDWORD(v84) != v77 )
        {
          v74 = a3;
          v75 -= v29;
          HIDWORD(v76) -= v29;
          LODWORD(v76) = v76 - v30;
          v77 -= v30;
          v32 = a3;
LABEL_33:
          v33 = DWORD1(v84);
          DWORD2(v84) -= v29;
          *(_QWORD *)&v84 = 0LL;
          v89 = 0;
          v88 = 0;
          HIDWORD(v84) -= v33;
          v91 = a8;
          v34 = *(_DWORD *)(a1 + 88);
          v90 = a7;
          if ( (v34 & 0x40) != 0 )
            v35 = a1 + 32;
          else
            v35 = 0LL;
          if ( (v34 & 0x80u) == 0 )
            v36 = 0LL;
          else
            v36 = a1 + 48;
          if ( v80(&v88, &v84, v36, v35) && (v37 = DWORD2(v84)) != 0 && (v38 = HIDWORD(v84)) != 0 )
          {
            if ( !a3 || *(_QWORD *)(a1 + 8) )
            {
              v40 = DWORD1(v84);
              v39 = v84;
            }
            else
            {
              v39 = *a3 + v84;
              v40 = a3[1] + DWORD1(v84);
              v37 = *a3 + DWORD2(v84);
              v38 = a3[1] + HIDWORD(v84);
              *(_QWORD *)&v84 = __PAIR64__(v40, v39);
              *((_QWORD *)&v84 + 1) = __PAIR64__(v38, v37);
            }
            v41 = v38 - v40;
            v42 = v89;
            v43 = v91 - v89;
            v44 = v88;
            if ( v41 == v91 - v89 && v37 - v39 == v90 - v88 )
            {
              v45 = 0;
              if ( *(_DWORD *)(a1 + 64) )
              {
                while ( 1 )
                {
                  IntersectRect(v68, (int *)(v81 + 16LL * v45), &v88);
                  v46 = v68[0];
                  v47 = v39 - v44 + v68[0];
                  v68[0] = v47;
                  v48 = v68[1];
                  v49 = v40 - v42 + v68[1];
                  v68[1] = v49;
                  v50 = v39 - v44 + v69;
                  v69 = v50;
                  v51 = v40 - v42 + v70;
                  v70 = v51;
                  if ( v74 )
                  {
                    IntersectRect(v68, v68, &v75);
                    v47 = v68[0];
                    v49 = v68[1];
                    v51 = v70;
                    v50 = v69;
                    v46 = v44 + v68[0] - v39;
                    v48 = v42 + v68[1] - v40;
                  }
                  v52 = v51 - v49;
                  v53 = v50 - v47;
                  v54 = a10
                      ? NtGdiTransparentBlt(v85, v47, v49, v53, v52, sizl, v46, v48, v53, v52, a11)
                      : NtGdiBitBltInternal(v85, v47, v49, v53, v52, sizl, v46, v48, 0x80CC0020, 0, 0);
                  v66 = v54;
                  if ( ++v45 >= *(_DWORD *)(a1 + 64) )
                    break;
                  v40 = DWORD1(v84);
                  v39 = v84;
                  v42 = v89;
                  v44 = v88;
                }
                v16 = v83[0];
              }
            }
            else
            {
              v55 = *(_QWORD *)(v16 + 80);
              v56 = v37 - v39;
              v65 = *(_BYTE *)(v55 + 75);
              v57 = (v56 << 16) / (int)(v90 - v88);
              v72 = v57;
              LODWORD(v80) = (v41 << 16) / v43;
              if ( v32 )
              {
                v58 = (int)((v90 - v88) << 16) / v56;
                v59 = (v43 << 16) / v41;
              }
              else
              {
                v58 = v71;
                v59 = v71;
              }
              v60 = 0;
              *(_BYTE *)(v55 + 75) = 3;
              if ( *(_DWORD *)(a1 + 64) )
              {
                v61 = v85;
                do
                {
                  IntersectRect(&v92, (int *)(v81 + 16LL * v60), &v88);
                  (*(void (__fastcall **)(__int128 *, int *, HDC *, int *, int, _DWORD))v68)(
                    &v84,
                    &v88,
                    &v85,
                    &v92,
                    v57,
                    (_DWORD)v80);
                  if ( v74 && (unsigned int)IntersectRect(&v85, (int *)&v85, &v75) )
                    (*(void (__fastcall **)(int *, __int128 *, int *, HDC *, int, int))v68)(
                      &v88,
                      &v84,
                      &v92,
                      &v85,
                      v58,
                      v59);
                  v62 = v86 - (_DWORD)v85;
                  if ( a10 )
                    v63 = NtGdiTransparentBlt(
                            v61,
                            (int)v85,
                            SHIDWORD(v85),
                            v62,
                            v87 - HIDWORD(v85),
                            sizl,
                            v92,
                            v93,
                            v94 - v92,
                            v95 - v93,
                            a11);
                  else
                    v63 = GreStretchBltInternal(
                            v61,
                            (int)v85,
                            SHIDWORD(v85),
                            v62,
                            v87 - HIDWORD(v85),
                            sizl,
                            v92,
                            v93,
                            v94 - v92,
                            v95 - v93,
                            -2134114272,
                            0,
                            0);
                  v57 = v72;
                  ++v60;
                  v66 = v63;
                }
                while ( v60 < *(_DWORD *)(a1 + 64) );
                v16 = v83[0];
              }
              *(_BYTE *)(*(_QWORD *)(v16 + 80) + 75LL) = v65;
            }
          }
          else
          {
            v66 = 1;
          }
          GreUnlockVisRgn(*(_QWORD *)(v16 + 48));
          if ( v79 )
            DC::dwSetLayout((DC *)v16, -1, v71);
          Bitmap = v82;
          v18 = hpal;
          goto LABEL_74;
        }
LABEL_32:
        v32 = v74;
        goto LABEL_33;
      }
      v28 = *(_OWORD *)a3;
    }
    else
    {
      v28 = *(_OWORD *)(v16 + 1424);
    }
    v84 = v28;
    v29 = v28;
    goto LABEL_32;
  }
  return v14;
}
