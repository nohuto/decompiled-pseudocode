/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1C005B360
 * Callers:
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005B1A0 (pConvertDfbSurfaceToDibInternal.c)
 * Callees:
 *     IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported_0 @ 0x1C0001618 (IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported_0.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap_0 @ 0x1C0001620 (SFMLOGICALSURFACE_CreateHLSURFCloneWrap_0.c)
 *     IsvSpDwmMigrateSpriteLSurfReferenceSupported_0 @ 0x1C0001628 (IsvSpDwmMigrateSpriteLSurfReferenceSupported_0.c)
 *     vSpDwmMigrateSpriteLSurfReferenceWrap_0 @ 0x1C0001630 (vSpDwmMigrateSpriteLSurfReferenceWrap_0.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported_0 @ 0x1C0001638 (IsvSpDwmMigrateLSurfShapeReferenceSupported_0.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap_0 @ 0x1C0001640 (vSpDwmMigrateLSurfShapeReferenceWrap_0.c)
 *     IsMulReplaceRedirectionChildSupported_0 @ 0x1C0001648 (IsMulReplaceRedirectionChildSupported_0.c)
 *     MulReplaceRedirectionChild_0 @ 0x1C0001650 (MulReplaceRedirectionChild_0.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0031C80 (DEC_SHARE_REF_CNT.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00320A0 (HmgIncrementShareReferenceCount.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0035AB4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0036050 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C0036ED0 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C0036F00 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C0046200 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C005BA6C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C005BA94 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     HmgSwapLockedHandleContents @ 0x1C005BAE0 (HmgSwapLockedHandleContents.c)
 *     HmgShareLock @ 0x1C005C9B0 (HmgShareLock.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ??1SURFREFVIEW@@QEAA@XZ @ 0x1C00A8C5C (--1SURFREFVIEW@@QEAA@XZ.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(SURFACE *this, SURFACE *a2, struct SURFACE *a3)
{
  int v4; // eax
  SURFACE *v7; // r13
  unsigned int v8; // r14d
  struct _SURFOBJ *v9; // rdx
  void *v10; // rdx
  struct DC *v11; // r8
  int v12; // eax
  SURFACE *v13; // r15
  __int64 v14; // rbx
  BOOL (__stdcall *v15)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v16; // rcx
  void *v17; // rdx
  struct DC *v18; // r8
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // r9d
  __int64 v24; // rcx
  int v25; // r12d
  HLSURF HLSURFCloneWrap_0; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int128 v37; // xmm0
  __int128 v38; // xmm3
  __int64 v39; // xmm2_8
  __int128 v40; // xmm4
  __int128 v41; // xmm5
  __int128 v42; // xmm6
  __int128 v43; // xmm7
  __int128 v44; // xmm0
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rax
  HLSURF v51; // rdx
  __int64 v52; // rax
  _DWORD *v53; // rbx
  void *v54; // rdx
  struct DC *v55; // r8
  __int64 v56; // rax
  void *v57; // rdx
  struct DC *v58; // r8
  void *v59; // rdx
  struct DC *v60; // r8
  int v62; // [rsp+48h] [rbp-79h]
  int v63; // [rsp+4Ch] [rbp-75h]
  struct SURFACE *v64; // [rsp+50h] [rbp-71h] BYREF
  SURFACE *v65[2]; // [rsp+58h] [rbp-69h] BYREF
  int v66; // [rsp+68h] [rbp-59h]
  int v67; // [rsp+6Ch] [rbp-55h]
  int v68; // [rsp+70h] [rbp-51h]
  SURFACE *v69[2]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v70; // [rsp+88h] [rbp-39h] BYREF
  int v71; // [rsp+90h] [rbp-31h]
  __int64 v72; // [rsp+98h] [rbp-29h] BYREF
  int v73; // [rsp+A0h] [rbp-21h]
  __int64 v74; // [rsp+A8h] [rbp-19h] BYREF
  int v75; // [rsp+B0h] [rbp-11h]
  int v76; // [rsp+B4h] [rbp-Dh]

  v75 = *((_DWORD *)this + 14);
  v4 = *((_DWORD *)this + 15);
  v64 = a3;
  v7 = 0LL;
  v76 = v4;
  v74 = 0LL;
  v8 = 1;
  v65[0] = 0LL;
  SURFREFVIEW::bMap((SURFREFVIEW *)v65, (struct _SURFOBJ *)((char *)this + 24));
  v9 = 0LL;
  if ( a2 )
    v9 = (struct _SURFOBJ *)((char *)a2 + 24);
  v69[0] = 0LL;
  SURFREFVIEW::bMap((SURFREFVIEW *)v69, v9);
  *(_DWORD *)a3 = 0;
  v12 = *((_DWORD *)this + 28);
  if ( (v12 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate(v69, v10, v11);
    v69[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate(v65, v59, v60);
    v65[0] = 0LL;
    goto LABEL_76;
  }
  if ( *((_WORD *)this + 50) == 3 )
  {
LABEL_7:
    v13 = this;
    goto LABEL_10;
  }
  if ( *((_WORD *)a2 + 50) != 3 )
  {
    if ( (v12 & 0x400000) != 0 )
      goto LABEL_7;
    if ( (*((_DWORD *)a2 + 28) & 0x400000) == 0 )
    {
LABEL_76:
      v8 = 0;
      goto LABEL_77;
    }
  }
  v13 = a2;
LABEL_10:
  v14 = *((_QWORD *)v13 + 6);
  if ( (*(_DWORD *)(v14 + 56) & 0x20000) != 0 )
    *((_DWORD *)this + 29) |= 0x10u;
  if ( (*((_DWORD *)v13 + 28) & 0x400) != 0 )
    v15 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v14 + 2872);
  else
    v15 = EngCopyBits_0;
  v16 = 0LL;
  if ( a2 )
    v16 = (char *)a2 + 24;
  if ( ((unsigned int (__fastcall *)(char *, char *, _QWORD, XLATEOBJ *, __int64 *, __int64 *))v15)(
         v16,
         (char *)this + 24,
         0LL,
         &xloIdent,
         &v74,
         &v74) )
  {
    if ( (*(_DWORD *)(v14 + 56) & 0x20000) != 0 )
      *((_DWORD *)this + 29) &= ~0x10u;
    v19 = *(_QWORD *)this;
    v67 = *((_DWORD *)this + 29) & 0x80;
    v20 = v19 & 0x800000;
    if ( !v20 || (v62 = 1, (*((_WORD *)this + 51) & 0x200) == 0) )
      v62 = 0;
    if ( !v20 || (v63 = 1, (*((_WORD *)this + 51) & 0x400) == 0) )
      v63 = 0;
    v21 = *((_QWORD *)a2 + 4);
    v22 = (unsigned __int16)*((_DWORD *)a2 + 8);
    v66 = *(_DWORD *)(*((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)*((_DWORD *)this + 8)) + 8LL);
    v23 = *(_DWORD *)(*((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * v22) + 8LL);
    v24 = *((_QWORD *)this + 4);
    v68 = v23;
    if ( !(unsigned int)HmgSwapLockedHandleContents(v24, v66, v21, v23, 5) )
    {
      v8 = 0;
      goto LABEL_66;
    }
    v70 = 0LL;
    v25 = 0;
    v71 = 0;
    HLSURFCloneWrap_0 = 0LL;
    FirstLSurf = SURFACE::GetFirstLSurf(this);
    v7 = FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_33;
    v25 = -__CFSHR__(*((_DWORD *)FirstLSurf + 62), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 62), 3) )
      goto LABEL_33;
    if ( (int)IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported_0() >= 0 )
      HLSURFCloneWrap_0 = (HLSURF)SFMLOGICALSURFACE_CreateHLSURFCloneWrap_0();
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v70, HLSURFCloneWrap_0);
    if ( !v70 )
    {
      v7 = 0LL;
      v8 = 0;
    }
    else
    {
LABEL_33:
      *((_DWORD *)this + 2) = v66;
      *((_DWORD *)a2 + 2) = v68;
      v28 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 61) = a2;
      *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
      v29 = *((_QWORD *)a2 + 17);
      *((_QWORD *)a2 + 4) = v28;
      v30 = *((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v29;
      v31 = *((_QWORD *)a2 + 19);
      *((_QWORD *)a2 + 17) = v30;
      v32 = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = v31;
      LODWORD(v31) = *((_DWORD *)a2 + 40);
      *((_QWORD *)a2 + 19) = v32;
      LODWORD(v32) = *((_DWORD *)this + 40);
      *((_DWORD *)this + 40) = v31;
      v33 = *((_QWORD *)a2 + 21);
      *((_DWORD *)a2 + 40) = v32;
      v34 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = v33;
      *((_QWORD *)a2 + 21) = v34;
      v35 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = *((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 18) = v35;
      v36 = *((_QWORD *)this + 15);
      *((_QWORD *)this + 15) = *((_QWORD *)a2 + 15);
      LODWORD(v35) = *((_DWORD *)a2 + 78);
      *((_QWORD *)a2 + 15) = v36;
      LODWORD(v36) = *((_DWORD *)this + 78);
      *((_DWORD *)this + 78) = v35;
      LODWORD(v35) = *((_DWORD *)a2 + 79);
      *((_DWORD *)a2 + 78) = v36;
      LODWORD(v36) = *((_DWORD *)this + 79);
      *((_DWORD *)this + 79) = v35;
      v37 = *((_OWORD *)a2 + 20);
      *((_DWORD *)a2 + 79) = v36;
      v38 = *((_OWORD *)this + 20);
      v39 = *((_QWORD *)this + 50);
      v40 = *((_OWORD *)this + 21);
      v41 = *((_OWORD *)this + 22);
      v42 = *((_OWORD *)this + 23);
      v43 = *((_OWORD *)this + 24);
      *((_OWORD *)this + 20) = v37;
      *((_OWORD *)this + 21) = *((_OWORD *)a2 + 21);
      *((_OWORD *)this + 22) = *((_OWORD *)a2 + 22);
      *((_OWORD *)this + 23) = *((_OWORD *)a2 + 23);
      *((_OWORD *)this + 24) = *((_OWORD *)a2 + 24);
      *((_QWORD *)this + 50) = *((_QWORD *)a2 + 50);
      v44 = *(_OWORD *)((char *)a2 + 408);
      *((_OWORD *)a2 + 20) = v38;
      *((_OWORD *)a2 + 21) = v40;
      *((_OWORD *)a2 + 22) = v41;
      *((_OWORD *)a2 + 23) = v42;
      *((_OWORD *)a2 + 24) = v43;
      *((_QWORD *)a2 + 50) = v39;
      v45 = *(_OWORD *)((char *)this + 408);
      v46 = *(_OWORD *)((char *)this + 424);
      *(_OWORD *)((char *)this + 408) = v44;
      *(_OWORD *)((char *)this + 424) = *(_OWORD *)((char *)a2 + 424);
      *(_OWORD *)((char *)a2 + 408) = v45;
      *(_OWORD *)((char *)a2 + 424) = v46;
      LODWORD(v36) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28) ^ (*((_DWORD *)a2 + 28) ^ v36) & 0x3B5EF;
      *((_DWORD *)a2 + 28) = v36 ^ (v36 ^ *((_DWORD *)a2 + 28)) & 0x3B5EF;
      LODWORD(v36) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v36 ^ (*((_DWORD *)a2 + 29) ^ v36) & 0xFFF;
      *((_DWORD *)a2 + 29) ^= (*((_DWORD *)a2 + 29) ^ v36) & 0xFFF;
      LODWORD(v36) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = v36 ^ (*((_DWORD *)a2 + 28) ^ v36) & 0x400000;
      *((_DWORD *)a2 + 28) ^= (v36 ^ *((_DWORD *)a2 + 28)) & 0x400000;
      LODWORD(v36) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v36 ^ (*((_DWORD *)a2 + 29) ^ v36) & 0x909;
      v47 = *((_QWORD *)a2 + 72);
      *((_DWORD *)a2 + 29) ^= (*((_DWORD *)a2 + 29) ^ v36) & 0x909;
      v48 = *((_QWORD *)this + 72);
      SURFACE::vAppContainerOwner(this, v47);
      SURFACE::vAppContainerOwner(a2, v48);
      if ( v62 )
      {
        *((_WORD *)this + 51) &= ~0x200u;
        v50 = *(_QWORD *)a2 & 0x800000LL;
        if ( (*(_QWORD *)a2 & 0x800000) != 0 )
        {
          v49 = 512LL;
          *((_WORD *)a2 + 51) |= 0x200u;
        }
        if ( v63 && v50 )
          *((_WORD *)a2 + 51) |= 0x400u;
        *(_DWORD *)v64 = 1;
      }
      if ( v7 )
      {
        v51 = *(HLSURF *)v7;
        v72 = 0LL;
        v73 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v72, v51);
        v7 = 0LL;
        if ( v25 && (int)IsvSpDwmMigrateSpriteLSurfReferenceSupported_0() >= 0 )
          vSpDwmMigrateSpriteLSurfReferenceWrap_0();
        while ( SURFACE::GetFirstLSurf(this) )
        {
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported_0() >= 0 )
            vSpDwmMigrateLSurfShapeReferenceWrap_0();
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v72);
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        LOBYTE(v49) = 5;
        v52 = HmgShareLock(*((_QWORD *)a2 + 17), v49);
        v53 = (_DWORD *)v52;
        if ( v52 )
        {
          if ( *(SURFACE **)(v52 + 24) != v7 && (int)IsMulReplaceRedirectionChildSupported_0() >= 0 )
            MulReplaceRedirectionChild_0();
          HmgDecrementShareReferenceCount(v53);
        }
      }
      if ( v67 != (_DWORD)v7 )
      {
        HmgDecrementShareReferenceCount(this);
        HmgIncrementShareReferenceCount(a2);
      }
      if ( *((_DWORD *)this + 2) != (_DWORD)v7 )
      {
        *(_DWORD *)v64 = 1;
LABEL_64:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v70);
LABEL_66:
        if ( !v8 && v62 != (_DWORD)v7 )
        {
          *((_WORD *)a2 + 51) &= ~0x200u;
          v56 = *(_QWORD *)this & 0x800000LL;
          if ( (*(_QWORD *)this & 0x800000) != 0 )
            *((_WORD *)this + 51) |= 0x200u;
          if ( v63 != (_DWORD)v7 && v56 )
            *((_WORD *)this + 51) |= 0x400u;
        }
        goto LABEL_74;
      }
      v64 = (struct SURFACE *)HmgShareLockCheck(*((_QWORD *)this + 4), 5);
      SURFREFVIEW::bUnMapImmediate(v65, v54, v55);
      v65[0] = v7;
      v8 = SURFREF::bDeleteSurface(&v64, 0);
      if ( !v8 )
        *((_QWORD *)this + 61) = v7;
      if ( v64 )
        DEC_SHARE_REF_CNT(v64);
      if ( v8 )
        goto LABEL_64;
    }
    HmgSwapLockedHandleContents(
      *((_QWORD *)a2 + 4),
      *(_DWORD *)(*((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)*((_DWORD *)a2 + 8)) + 8LL),
      *((_QWORD *)this + 4),
      *(_DWORD *)(*((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)*((_DWORD *)this + 8)) + 8LL),
      5);
    goto LABEL_64;
  }
  v8 = 0;
LABEL_74:
  SURFREFVIEW::bUnMapImmediate(v69, v17, v18);
  v69[0] = v7;
  SURFREFVIEW::bUnMapImmediate(v65, v57, v58);
  v65[0] = v7;
LABEL_77:
  SURFREFVIEW::~SURFREFVIEW((SURFREFVIEW *)v69);
  SURFREFVIEW::~SURFREFVIEW((SURFREFVIEW *)v65);
  return v8;
}
