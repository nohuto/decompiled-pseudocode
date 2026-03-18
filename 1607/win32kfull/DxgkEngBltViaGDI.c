/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C0260390
 * Callers:
 *     <none>
 * Callees:
 *     DxEngSetPaletteState @ 0x1C0008140 (DxEngSetPaletteState.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C00499E8 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C00632E0 (UserGetRedirectedWindowOrigin.c)
 *     DxEngSelectPaletteToSurface @ 0x1C00F0558 (DxEngSelectPaletteToSurface.c)
 *     NtGdiTransparentBlt @ 0x1C013A310 (NtGdiTransparentBlt.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C025FF8C (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall DxgkEngBltViaGDI(
        __int64 a1,
        HDC a2,
        int *a3,
        __int64 a4,
        PVOID pvBits,
        unsigned int lWidth,
        unsigned int a7,
        unsigned int a8,
        char a9,
        char a10,
        unsigned int a11,
        __int64 a12,
        unsigned int (__fastcall *a13)(int *, __int128 *, __int64, __int64))
{
  unsigned int v14; // ebx
  HPALETTE Palette; // rax
  SURFOBJ *LockedBitmap; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  HBITMAP hsurf; // r14
  HPALETTE v21; // rbx
  char v22; // di
  DYNAMICMODECHANGESHARELOCK *v23; // rcx
  SURFOBJ *v24; // rax
  SURFOBJ *v25; // rbx
  __int64 v26; // rax
  HDC DisplayDC; // rax
  DC *v28; // rcx
  int v29; // r14d
  __int128 v30; // xmm0
  int v31; // ebx
  unsigned int v32; // edi
  int RedirectedWindowOrigin; // eax
  int *v34; // r14
  int v35; // rax^4
  int v36; // eax
  __int64 v37; // r9
  __int64 v38; // r8
  int v39; // r9d
  int v40; // r8d
  unsigned int v41; // ebx
  int v42; // edi
  int v43; // r8d
  int v44; // r12d
  int v45; // r10d
  int v46; // r15d
  unsigned int v47; // r14d
  LONG v48; // r10d
  LONG v49; // edx
  int v50; // r11d
  LONG v51; // r8d
  int v52; // r9d
  int v53; // ecx
  int v54; // ecx
  int v55; // r9d
  int v56; // eax
  int v57; // r9d
  __int64 v58; // rcx
  int v59; // ebx
  int v60; // r14d
  int v61; // r15d
  unsigned int v62; // edi
  void (__fastcall *v63)(int *, __int128 *, int *, int *, int, int); // rbx
  int v64; // r9d
  int v65; // eax
  int flGreen; // [rsp+20h] [rbp-E0h]
  _BYTE v68[4]; // [rsp+70h] [rbp-90h] BYREF
  int v69; // [rsp+74h] [rbp-8Ch]
  SIZEL sizl; // [rsp+78h] [rbp-88h]
  int v71[2]; // [rsp+80h] [rbp-80h] BYREF
  int v72; // [rsp+88h] [rbp-78h]
  int v73; // [rsp+8Ch] [rbp-74h]
  int v74; // [rsp+90h] [rbp-70h] BYREF
  int v75; // [rsp+94h] [rbp-6Ch]
  unsigned int v76; // [rsp+98h] [rbp-68h]
  int *v77; // [rsp+A0h] [rbp-60h]
  HDC v78; // [rsp+A8h] [rbp-58h]
  HDC v79; // [rsp+B0h] [rbp-50h]
  int v80; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v81; // [rsp+BCh] [rbp-44h]
  int v82; // [rsp+C4h] [rbp-3Ch]
  HPALETTE hpal; // [rsp+C8h] [rbp-38h]
  unsigned int (__fastcall *v84)(int *, __int128 *, __int64, __int64); // [rsp+D0h] [rbp-30h]
  unsigned int v85; // [rsp+D8h] [rbp-28h]
  __int64 v86; // [rsp+E0h] [rbp-20h]
  SURFOBJ *pso; // [rsp+E8h] [rbp-18h]
  DC *v88[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v89[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v90[32]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v91; // [rsp+140h] [rbp+40h]
  __int128 v92; // [rsp+148h] [rbp+48h] BYREF
  int v93; // [rsp+158h] [rbp+58h] BYREF
  int v94; // [rsp+15Ch] [rbp+5Ch]
  unsigned int v95; // [rsp+160h] [rbp+60h]
  unsigned int v96; // [rsp+164h] [rbp+64h]
  int v97; // [rsp+168h] [rbp+68h] BYREF
  int v98; // [rsp+16Ch] [rbp+6Ch]
  int v99; // [rsp+170h] [rbp+70h]
  int v100; // [rsp+174h] [rbp+74h]
  int v101; // [rsp+178h] [rbp+78h] BYREF
  int v102; // [rsp+17Ch] [rbp+7Ch]
  int v103; // [rsp+180h] [rbp+80h]
  int v104; // [rsp+184h] [rbp+84h]

  v14 = 0;
  *(_QWORD *)v71 = a12;
  v84 = a13;
  v86 = a4;
  v78 = a2;
  v69 = 0;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v88, a2);
    if ( !v88[0] )
    {
LABEL_90:
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v88);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v89);
      return v14;
    }
    if ( a9 )
      Palette = EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu);
    else
      Palette = EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
    hpal = Palette;
    if ( !Palette )
    {
LABEL_89:
      v14 = v69;
      goto LABEL_90;
    }
    pso = 0LL;
    sizl = (SIZEL)__PAIR64__(a8, a7);
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1029904698_60425937_FeatureDescriptorDetails) )
    {
      LockedBitmap = (SURFOBJ *)EngCreateLockedBitmap(__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1LL, pvBits);
      pso = LockedBitmap;
      if ( LockedBitmap )
        hsurf = (HBITMAP)LockedBitmap->hsurf;
      else
        hsurf = 0LL;
    }
    else
    {
      hsurf = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
    }
    v21 = hpal;
    sizl = (SIZEL)hsurf;
    DxEngSetPaletteState(hpal, v18, v19);
    if ( !hsurf )
    {
LABEL_88:
      EngDeletePalette(v21);
      goto LABEL_89;
    }
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_Servicing_DynamicModeChange_31627929_31627929_FeatureDescriptorDetails) )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v68);
      SURFREF::SURFREF((SURFREF *)v90);
      SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v90, (HSURF)hsurf);
      if ( DWMSPRITEREF::bValid((DWMSPRITEREF *)v90) )
      {
        v22 = 1;
        DxEngSelectPaletteToSurface(v91 + 24, v21);
        *(_DWORD *)(v91 + 112) |= 0x100000u;
        *(_DWORD *)(v91 + 112) |= 0x4000u;
        *(_DWORD *)(v91 + 112) |= 0x200u;
      }
      else
      {
        v22 = 0;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v90);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v23);
    }
    else
    {
      v24 = EngLockSurface((HSURF)hsurf);
      v25 = v24;
      if ( !v24 )
      {
LABEL_85:
        if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1029904698_60425937_FeatureDescriptorDetails) )
          EngUnlockSurface(pso);
        EngDeleteSurface((HSURF)hsurf);
        v21 = hpal;
        goto LABEL_88;
      }
      v22 = 1;
      DxEngSelectPaletteToSurface((__int64)v24, hpal);
      v26 = SURFOBJ_TO_SURFACE(v25);
      *(_DWORD *)(v26 + 112) |= 0x104200u;
      EngUnlockSurface(v25);
    }
    if ( !v22 )
      goto LABEL_85;
    DisplayDC = (HDC)GreCreateDisplayDC(*((_QWORD *)v88[0] + 6), 1LL);
    v79 = DisplayDC;
    if ( !DisplayDC )
      goto LABEL_85;
    if ( !hbmSelectBitmap(DisplayDC, hsurf, 0LL, 1LL) )
    {
LABEL_84:
      bDeleteDCInternal(v79, 1LL, 0LL, 1LL);
      goto LABEL_85;
    }
    v28 = v88[0];
    v29 = 0;
    v77 = 0LL;
    v76 = *(_DWORD *)(*((_QWORD *)v88[0] + 10) + 312LL);
    v85 = v76 & 7;
    if ( (v76 & 7) != 0 )
    {
      DC::dwSetLayout(v88[0], -1, 0);
      v28 = v88[0];
    }
    GreLockVisRgnShared(*((_QWORD *)v28 + 6));
    if ( a3 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (*((_DWORD *)v88[0] + 9) & 0x4000) != 0 )
          v29 = 1;
        v92 = *((_OWORD *)v88[0] + 89);
        if ( (*((_DWORD *)v88[0] + 9) & 0x4000) != 0
          && (unsigned int)UserGetRedirectedWindowOrigin((__int64)v78, (__int64)&v74) )
        {
          DWORD2(v92) += v74;
          v31 = v74 + v92;
          v32 = v75 + DWORD1(v92);
          HIDWORD(v92) += v75;
          DWORD1(v92) += v75;
          LODWORD(v92) = v74 + v92;
        }
        else
        {
          v32 = DWORD1(v92);
          v31 = v92;
        }
        if ( v29 )
        {
          RedirectedWindowOrigin = UserGetRedirectedWindowOrigin((__int64)v78, (__int64)&v74);
          v31 = v92;
          v32 = DWORD1(v92);
          if ( RedirectedWindowOrigin )
          {
            DWORD2(v92) += v74;
            v31 = v74 + v92;
            v32 = v75 + DWORD1(v92);
            HIDWORD(v92) += v75;
            DWORD1(v92) += v75;
            LODWORD(v92) = v74 + v92;
          }
        }
        IntersectRect(&v80, (int *)&v92, a3);
        if ( v31 != v80 || __PAIR64__(DWORD2(v92), v32) != v81 || HIDWORD(v92) != v82 )
        {
          v77 = a3;
          v80 -= v31;
          HIDWORD(v81) -= v31;
          LODWORD(v81) = v81 - v32;
          v82 -= v32;
          v34 = a3;
LABEL_45:
          v35 = DWORD1(v92);
          DWORD2(v92) -= v31;
          *(_QWORD *)&v92 = 0LL;
          v94 = 0;
          v93 = 0;
          HIDWORD(v92) -= v35;
          v96 = a8;
          v36 = *(_DWORD *)(a1 + 88);
          v95 = a7;
          if ( (v36 & 0x40) != 0 )
            v37 = a1 + 32;
          else
            v37 = 0LL;
          if ( (v36 & 0x80u) == 0 )
            v38 = 0LL;
          else
            v38 = a1 + 48;
          if ( v84(&v93, &v92, v38, v37) && (v39 = DWORD2(v92)) != 0 && (v40 = HIDWORD(v92)) != 0 )
          {
            if ( !a3 || *(_QWORD *)(a1 + 8) )
            {
              v42 = DWORD1(v92);
              v41 = v92;
            }
            else
            {
              v41 = *a3 + v92;
              v42 = a3[1] + DWORD1(v92);
              v39 = *a3 + DWORD2(v92);
              v40 = a3[1] + HIDWORD(v92);
              *(_QWORD *)&v92 = __PAIR64__(v42, v41);
              *((_QWORD *)&v92 + 1) = __PAIR64__(v40, v39);
            }
            v43 = v40 - v42;
            v44 = v94;
            v45 = v96 - v94;
            v46 = v93;
            if ( v43 == v96 - v94 && v39 - v41 == v95 - v93 )
            {
              v47 = 0;
              if ( *(_DWORD *)(a1 + 64) )
              {
                while ( 1 )
                {
                  IntersectRect(v71, (int *)(v86 + 16LL * v47), &v93);
                  v48 = v71[0];
                  v49 = v41 - v46 + v71[0];
                  v71[0] = v49;
                  v50 = v71[1];
                  v51 = v42 - v44 + v71[1];
                  v71[1] = v51;
                  v52 = v41 - v46 + v72;
                  v72 = v52;
                  v53 = v42 - v44 + v73;
                  v73 = v53;
                  if ( v77 )
                  {
                    IntersectRect(v71, v71, &v80);
                    v49 = v71[0];
                    v51 = v71[1];
                    v53 = v73;
                    v52 = v72;
                    v48 = v46 + v71[0] - v41;
                    v50 = v44 + v71[1] - v42;
                  }
                  v54 = v53 - v51;
                  v55 = v52 - v49;
                  v56 = a10
                      ? NtGdiTransparentBlt(v78, v49, v51, v55, v54, v79, v48, v50, v55, v54, a11)
                      : NtGdiBitBltInternal(v78, v49, v51, v55, v54, v79, v48, v50, 0x80CC0020, 0, 0);
                  ++v47;
                  v69 = v56;
                  if ( v47 >= *(_DWORD *)(a1 + 64) )
                    break;
                  v42 = DWORD1(v92);
                  v41 = v92;
                  v44 = v94;
                  v46 = v93;
                }
              }
            }
            else
            {
              v57 = v39 - v41;
              v58 = *((_QWORD *)v88[0] + 10);
              v68[0] = *(_BYTE *)(v58 + 75);
              v59 = (v57 << 16) / (int)(v95 - v93);
              v74 = v59;
              LODWORD(v84) = (v43 << 16) / v45;
              if ( v34 )
              {
                v60 = (int)((v95 - v93) << 16) / v57;
                v61 = (v45 << 16) / v43;
              }
              else
              {
                v60 = v76;
                v61 = v76;
              }
              v62 = 0;
              for ( *(_BYTE *)(v58 + 75) = 3; v62 < *(_DWORD *)(a1 + 64); v69 = v65 )
              {
                IntersectRect(&v101, (int *)(v86 + 16LL * v62), &v93);
                flGreen = v59;
                v63 = *(void (__fastcall **)(int *, __int128 *, int *, int *, int, int))v71;
                (*(void (__fastcall **)(__int128 *, int *, int *, int *, int, _DWORD))v71)(
                  &v92,
                  &v93,
                  &v97,
                  &v101,
                  flGreen,
                  (_DWORD)v84);
                if ( v77 && (unsigned int)IntersectRect(&v97, &v97, &v80) )
                  v63(&v93, &v92, &v101, &v97, v60, v61);
                v64 = v99 - v97;
                if ( a10 )
                  v65 = NtGdiTransparentBlt(
                          v78,
                          v97,
                          v98,
                          v64,
                          v100 - v98,
                          v79,
                          v101,
                          v102,
                          v103 - v101,
                          v104 - v102,
                          a11);
                else
                  v65 = GreStretchBltInternal(
                          v78,
                          v97,
                          v98,
                          v64,
                          v100 - v98,
                          v79,
                          v101,
                          v102,
                          v103 - v101,
                          v104 - v102,
                          -2134114272,
                          0,
                          0);
                v59 = v74;
                ++v62;
              }
              *(_BYTE *)(*((_QWORD *)v88[0] + 10) + 75LL) = v68[0];
            }
          }
          else
          {
            v69 = 1;
          }
          GreUnlockVisRgn(*((_QWORD *)v88[0] + 6));
          if ( v85 )
            DC::dwSetLayout(v88[0], -1, v76);
          hsurf = (HBITMAP)sizl;
          goto LABEL_84;
        }
LABEL_44:
        v34 = v77;
        goto LABEL_45;
      }
      v30 = *(_OWORD *)a3;
    }
    else
    {
      v30 = *((_OWORD *)v88[0] + 89);
    }
    v92 = v30;
    v31 = v30;
    goto LABEL_44;
  }
  return v14;
}
