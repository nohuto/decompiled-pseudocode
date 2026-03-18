/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C0264220
 * Callers:
 *     <none>
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C0012A30 (UserGetRedirectedWindowOrigin.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     DxEngSelectPaletteToSurface @ 0x1C00EB124 (DxEngSelectPaletteToSurface.c)
 *     DxEngSetPaletteState @ 0x1C00EB1A8 (DxEngSetPaletteState.c)
 *     NtGdiTransparentBlt @ 0x1C01058C0 (NtGdiTransparentBlt.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
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
        __int64 a13)
{
  unsigned int v13; // r15d
  HPALETTE v17; // rax
  HPALETTE v18; // rdi
  HBITMAP Bitmap; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  SURFOBJ *v22; // rax
  SURFOBJ *v23; // rbx
  __int64 v24; // rax
  __int64 DisplayDC; // rax
  DC *v26; // rcx
  int *v27; // rsi
  int v28; // ebx
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // r8
  int v32; // r9d
  int v33; // r8d
  unsigned int v34; // ebx
  int v35; // edi
  unsigned int v36; // edi
  int RedirectedWindowOrigin; // eax
  int v38; // r8d
  int v39; // r15d
  int v40; // r10d
  int v41; // r14d
  unsigned int v42; // esi
  LONG v43; // r10d
  LONG v44; // edx
  int v45; // r11d
  LONG v46; // r8d
  int v47; // r9d
  int v48; // ecx
  int v49; // ecx
  int v50; // r9d
  unsigned int v51; // eax
  int v52; // r9d
  __int64 v53; // rcx
  int v54; // ebx
  int v55; // esi
  int v56; // r14d
  unsigned int v57; // edi
  int v58; // r9d
  unsigned int v59; // eax
  unsigned int v61; // [rsp+70h] [rbp-90h]
  char v62; // [rsp+74h] [rbp-8Ch]
  HDC sizl; // [rsp+78h] [rbp-88h]
  int v64[2]; // [rsp+80h] [rbp-80h] BYREF
  int v65; // [rsp+88h] [rbp-78h]
  int v66; // [rsp+8Ch] [rbp-74h]
  unsigned int v67; // [rsp+90h] [rbp-70h]
  int v68; // [rsp+98h] [rbp-68h] BYREF
  int v69; // [rsp+9Ch] [rbp-64h]
  int *v70; // [rsp+A0h] [rbp-60h]
  int v71; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v72; // [rsp+ACh] [rbp-54h]
  int v73; // [rsp+B4h] [rbp-4Ch]
  HPALETTE hpal; // [rsp+B8h] [rbp-48h]
  HDC v75; // [rsp+C0h] [rbp-40h]
  unsigned int v76; // [rsp+C8h] [rbp-38h]
  HBITMAP v77; // [rsp+D0h] [rbp-30h]
  __int64 v78; // [rsp+D8h] [rbp-28h]
  DC *v79[6]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v80; // [rsp+110h] [rbp+10h] BYREF
  __int64 v81; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v82; // [rsp+128h] [rbp+28h]
  unsigned int v83; // [rsp+12Ch] [rbp+2Ch]
  int v84[2]; // [rsp+130h] [rbp+30h] BYREF
  int v85; // [rsp+138h] [rbp+38h]
  int v86; // [rsp+13Ch] [rbp+3Ch]
  int v87; // [rsp+140h] [rbp+40h] BYREF
  int v88; // [rsp+144h] [rbp+44h]
  int v89; // [rsp+148h] [rbp+48h]
  int v90; // [rsp+14Ch] [rbp+4Ch]

  v13 = 0;
  *(_QWORD *)v64 = a12;
  *(_QWORD *)v84 = a13;
  v78 = a4;
  v75 = a2;
  v61 = 0;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v79, a2);
    if ( !v79[0] )
      goto LABEL_74;
    v17 = a9
        ? EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu)
        : EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
    hpal = v17;
    if ( !v17 )
      goto LABEL_74;
    v18 = hpal;
    Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
    v77 = Bitmap;
    DxEngSetPaletteState(hpal, v20, v21);
    if ( !Bitmap )
    {
LABEL_73:
      EngDeletePalette(v18);
LABEL_74:
      DCOBJ::~DCOBJ((DCOBJ *)v79);
      return v13;
    }
    v22 = EngLockSurface((HSURF)Bitmap);
    v23 = v22;
    if ( !v22
      || (DxEngSelectPaletteToSurface((__int64)v22, hpal),
          v24 = SURFOBJ_TO_SURFACE(v23),
          *(_DWORD *)(v24 + 112) |= 0x104200u,
          EngUnlockSurface(v23),
          DisplayDC = GreCreateDisplayDC(*((_QWORD *)v79[0] + 6), 1LL),
          (sizl = (HDC)DisplayDC) == 0LL) )
    {
LABEL_72:
      EngDeleteSurface((HSURF)Bitmap);
      goto LABEL_73;
    }
    if ( !hbmSelectBitmap(DisplayDC, Bitmap, 0LL) )
    {
LABEL_71:
      bDeleteDCInternal(sizl, 1LL, 0LL);
      goto LABEL_72;
    }
    v26 = v79[0];
    v27 = 0LL;
    v70 = 0LL;
    v67 = *(_DWORD *)(*((_QWORD *)v79[0] + 10) + 312LL);
    v76 = v67 & 7;
    if ( (v67 & 7) != 0 )
    {
      DC::dwSetLayout(v79[0], -1, 0);
      v26 = v79[0];
    }
    GreLockVisRgnShared(*((_QWORD *)v26 + 6));
    if ( !a3 )
    {
      v80 = *((_OWORD *)v79[0] + 89);
      v28 = v80;
      goto LABEL_20;
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      if ( (*((_DWORD *)v79[0] + 9) & 0x4000) != 0 )
        LODWORD(v27) = 1;
      v80 = *((_OWORD *)v79[0] + 89);
      if ( (*((_DWORD *)v79[0] + 9) & 0x4000) != 0
        && (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v68) )
      {
        DWORD2(v80) += v68;
        v28 = v68 + v80;
        v36 = v69 + DWORD1(v80);
        HIDWORD(v80) += v69;
        DWORD1(v80) += v69;
        LODWORD(v80) = v68 + v80;
      }
      else
      {
        v36 = DWORD1(v80);
        v28 = v80;
      }
      if ( (_DWORD)v27 )
      {
        RedirectedWindowOrigin = UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v68);
        v28 = v80;
        v36 = DWORD1(v80);
        if ( RedirectedWindowOrigin )
        {
          DWORD2(v80) += v68;
          v28 = v68 + v80;
          v36 = v69 + DWORD1(v80);
          HIDWORD(v80) += v69;
          DWORD1(v80) += v69;
          LODWORD(v80) = v68 + v80;
        }
      }
      IntersectRect(&v71, (int *)&v80, a3);
      if ( v28 != v71 || __PAIR64__(DWORD2(v80), v36) != v72 || HIDWORD(v80) != v73 )
      {
        v70 = a3;
        v71 -= v28;
        HIDWORD(v72) -= v28;
        LODWORD(v72) = v72 - v36;
        v73 -= v36;
        v27 = a3;
        goto LABEL_20;
      }
    }
    else
    {
      v80 = *(_OWORD *)a3;
      v28 = v80;
    }
    v27 = 0LL;
LABEL_20:
    v29 = a1 + 32;
    DWORD2(v80) -= v28;
    HIDWORD(v80) -= DWORD1(v80);
    v82 = a7;
    v83 = a8;
    v30 = *(_DWORD *)(a1 + 88);
    *(_QWORD *)&v80 = 0LL;
    v81 = 0LL;
    if ( (v30 & 0x40) == 0 )
      v29 = 0LL;
    v31 = a1 + 48;
    if ( (v30 & 0x80u) == 0 )
      v31 = 0LL;
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int128 *, __int64, __int64))v84)(&v81, &v80, v31, v29)
      && (v32 = DWORD2(v80)) != 0
      && (v33 = HIDWORD(v80)) != 0 )
    {
      if ( !a3 || *(_QWORD *)(a1 + 8) )
      {
        v35 = DWORD1(v80);
        v34 = v80;
      }
      else
      {
        v34 = *a3 + v80;
        v35 = a3[1] + DWORD1(v80);
        v32 = *a3 + DWORD2(v80);
        v33 = a3[1] + HIDWORD(v80);
        *(_QWORD *)&v80 = __PAIR64__(v35, v34);
        *((_QWORD *)&v80 + 1) = __PAIR64__(v33, v32);
      }
      v38 = v33 - v35;
      v39 = HIDWORD(v81);
      v40 = v83 - HIDWORD(v81);
      v41 = v81;
      if ( v38 == v83 - HIDWORD(v81) && v32 - v34 == v82 - (_DWORD)v81 )
      {
        v42 = 0;
        if ( *(_DWORD *)(a1 + 64) )
        {
          while ( 1 )
          {
            IntersectRect(v64, (int *)(v78 + 16LL * v42), (int *)&v81);
            v43 = v64[0];
            v44 = v34 - v41 + v64[0];
            v64[0] = v44;
            v45 = v64[1];
            v46 = v35 - v39 + v64[1];
            v64[1] = v46;
            v47 = v34 - v41 + v65;
            v65 = v47;
            v48 = v35 - v39 + v66;
            v66 = v48;
            if ( v70 )
            {
              IntersectRect(v64, v64, &v71);
              v44 = v64[0];
              v46 = v64[1];
              v48 = v66;
              v47 = v65;
              v43 = v41 + v64[0] - v34;
              v45 = v39 + v64[1] - v35;
            }
            v49 = v48 - v46;
            v50 = v47 - v44;
            v51 = a10
                ? NtGdiTransparentBlt(v75, v44, v46, v50, v49, sizl, v43, v45, v50, v49, a11)
                : NtGdiBitBltInternal(v75, v44, v46, v50, v49, sizl, v43, v45, 0x80CC0020, 0, 0);
            if ( ++v42 >= *(_DWORD *)(a1 + 64) )
              break;
            v35 = DWORD1(v80);
            v34 = v80;
            v39 = HIDWORD(v81);
            v41 = v81;
          }
          v13 = v51;
        }
        else
        {
          v13 = 0;
        }
      }
      else
      {
        v52 = v32 - v34;
        v53 = *((_QWORD *)v79[0] + 10);
        v62 = *(_BYTE *)(v53 + 75);
        v54 = (v52 << 16) / (int)(v82 - v81);
        v68 = v54;
        LODWORD(v75) = (v38 << 16) / v40;
        if ( v27 )
        {
          v55 = (int)((v82 - (_DWORD)v81) << 16) / v52;
          v56 = (v40 << 16) / v38;
        }
        else
        {
          v55 = v67;
          v56 = v67;
        }
        v57 = 0;
        for ( *(_BYTE *)(v53 + 75) = 3; v57 < *(_DWORD *)(a1 + 64); v61 = v59 )
        {
          IntersectRect(&v87, (int *)(v78 + 16LL * v57), (int *)&v81);
          (*(void (__fastcall **)(__int128 *, __int64 *, int *, int *, int, _DWORD))v64)(
            &v80,
            &v81,
            v84,
            &v87,
            v54,
            (_DWORD)v75);
          if ( v70 && (unsigned int)IntersectRect(v84, v84, &v71) )
            (*(void (__fastcall **)(__int64 *, __int128 *, int *, int *, int, int))v64)(&v81, &v80, &v87, v84, v55, v56);
          v58 = v85 - v84[0];
          if ( a10 )
            v59 = NtGdiTransparentBlt(a2, v84[0], v84[1], v58, v86 - v84[1], sizl, v87, v88, v89 - v87, v90 - v88, a11);
          else
            v59 = GreStretchBltInternal(
                    a2,
                    v84[0],
                    v84[1],
                    v58,
                    v86 - v84[1],
                    sizl,
                    v87,
                    v88,
                    v89 - v87,
                    v90 - v88,
                    -2134114272,
                    0,
                    0);
          v54 = v68;
          ++v57;
        }
        v13 = v61;
        *(_BYTE *)(*((_QWORD *)v79[0] + 10) + 75LL) = v62;
      }
    }
    else
    {
      v13 = 1;
    }
    GreUnlockVisRgn(*((_QWORD *)v79[0] + 6));
    if ( v76 )
      DC::dwSetLayout(v79[0], -1, v67);
    Bitmap = v77;
    v18 = hpal;
    goto LABEL_71;
  }
  return v13;
}
