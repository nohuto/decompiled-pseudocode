/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1C005DCB0
 * Callers:
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005DAF0 (pConvertDfbSurfaceToDibInternal.c)
 * Callees:
 *     IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported_0 @ 0x1C0001678 (IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported_0.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap_0 @ 0x1C0001680 (SFMLOGICALSURFACE_CreateHLSURFCloneWrap_0.c)
 *     IsvSpDwmMigrateSpriteLSurfReferenceSupported_0 @ 0x1C0001688 (IsvSpDwmMigrateSpriteLSurfReferenceSupported_0.c)
 *     vSpDwmMigrateSpriteLSurfReferenceWrap_0 @ 0x1C0001690 (vSpDwmMigrateSpriteLSurfReferenceWrap_0.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported_0 @ 0x1C0001698 (IsvSpDwmMigrateLSurfShapeReferenceSupported_0.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap_0 @ 0x1C00016A0 (vSpDwmMigrateLSurfShapeReferenceWrap_0.c)
 *     IsMulReplaceRedirectionChildSupported_0 @ 0x1C00016A8 (IsMulReplaceRedirectionChildSupported_0.c)
 *     MulReplaceRedirectionChild_0 @ 0x1C00016B0 (MulReplaceRedirectionChild_0.c)
 *     HmgShareLock @ 0x1C0004350 (HmgShareLock.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C0024140 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C0024170 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0035640 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0039980 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0039EE0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C003A938 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C005E434 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C005E45C (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     HmgSwapLockedHandleContents @ 0x1C005E4B0 (HmgSwapLockedHandleContents.c)
 *     HmgIncrementShareReferenceCount @ 0x1C005E740 (HmgIncrementShareReferenceCount.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ??1SURFREFVIEW@@QEAA@XZ @ 0x1C00A408C (--1SURFREFVIEW@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00B0E60 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0?$HmgShareLockResult@VSURFACE@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00B71E8 (--0-$HmgShareLockResult@VSURFACE@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00B7234 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00B7264 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1C00B7284 (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(SURFACE *this, SURFACE *a2, _DWORD *a3)
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
  __int16 v33; // dx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int128 v39; // xmm0
  __int128 v40; // xmm3
  __int64 v41; // xmm2_8
  __int128 v42; // xmm4
  __int128 v43; // xmm5
  __int128 v44; // xmm6
  __int128 v45; // xmm7
  __int128 v46; // xmm2
  __int128 v47; // xmm3
  struct _EPROCESS *v48; // rdx
  struct _EPROCESS *v49; // rbx
  __int64 v50; // r8
  __int64 v51; // rax
  HLSURF v52; // rdx
  __int64 v53; // rax
  void *v54; // rdx
  struct DC *v55; // r8
  __int64 v56; // rax
  void *v57; // rdx
  struct DC *v58; // r8
  void *v59; // rdx
  struct DC *v60; // r8
  int v62; // [rsp+48h] [rbp-C0h]
  int v63; // [rsp+4Ch] [rbp-BCh]
  SURFACE *v64[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v65; // [rsp+60h] [rbp-A8h]
  int v66; // [rsp+64h] [rbp-A4h]
  __int64 v67; // [rsp+68h] [rbp-A0h]
  SURFACE *v68[2]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD *v69; // [rsp+80h] [rbp-88h]
  _QWORD v70[5]; // [rsp+88h] [rbp-80h] BYREF
  int v71; // [rsp+B0h] [rbp-58h]
  _BYTE v72[32]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v73; // [rsp+D8h] [rbp-30h]
  __int64 v74; // [rsp+E8h] [rbp-20h] BYREF
  int v75; // [rsp+F0h] [rbp-18h]
  int v76; // [rsp+F4h] [rbp-14h]

  v75 = *((_DWORD *)this + 14);
  v4 = *((_DWORD *)this + 15);
  v69 = a3;
  v7 = 0LL;
  v76 = v4;
  v74 = 0LL;
  v8 = 1;
  v64[0] = 0LL;
  SURFREFVIEW::bMap((SURFREFVIEW *)v64, (struct _SURFOBJ *)((char *)this + 24));
  v9 = 0LL;
  if ( a2 )
    v9 = (struct _SURFOBJ *)((char *)a2 + 24);
  v68[0] = 0LL;
  SURFREFVIEW::bMap((SURFREFVIEW *)v68, v9);
  *a3 = 0;
  v12 = *((_DWORD *)this + 28);
  if ( (v12 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate(v68, v10, v11);
    v68[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate(v64, v59, v60);
    v64[0] = 0LL;
    goto LABEL_74;
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
LABEL_74:
      v8 = 0;
      goto LABEL_75;
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
    LODWORD(v67) = *((_DWORD *)this + 29) & 0x80;
    v20 = v19 & 0x800000;
    if ( !v20 || (v63 = 1, (*((_WORD *)this + 51) & 0x200) == 0) )
      v63 = 0;
    if ( !v20 || (v62 = 1, (*((_WORD *)this + 51) & 0x400) == 0) )
      v62 = 0;
    v21 = *((_QWORD *)a2 + 4);
    v22 = (unsigned __int16)*((_DWORD *)a2 + 8);
    v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement
                                + 24LL * (unsigned __int16)*((_DWORD *)this + 8))
                    + 8LL);
    v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v22) + 8LL);
    v24 = *((_QWORD *)this + 4);
    v65 = v23;
    if ( !(unsigned int)HmgSwapLockedHandleContents(v24, v66, v21, v23, 5) )
    {
      v8 = 0;
      goto LABEL_64;
    }
    v25 = 0;
    HLSURFCloneWrap_0 = 0LL;
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v72);
    FirstLSurf = SURFACE::GetFirstLSurf(this);
    v7 = FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_33;
    v25 = -__CFSHR__(*((_DWORD *)FirstLSurf + 62), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 62), 3) )
      goto LABEL_33;
    if ( (int)IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported_0() >= 0 )
      HLSURFCloneWrap_0 = (HLSURF)SFMLOGICALSURFACE_CreateHLSURFCloneWrap_0();
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v72, HLSURFCloneWrap_0);
    if ( !v73 )
    {
      v7 = 0LL;
      v8 = 0;
    }
    else
    {
LABEL_33:
      *((_DWORD *)this + 2) = v66;
      *((_DWORD *)a2 + 2) = v65;
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
      v33 = *((_WORD *)a2 + 7);
      *((_QWORD *)a2 + 19) = v32;
      v34 = *((_WORD *)this + 7) & 0x8000;
      LOWORD(v32) = v33 & 0x8000 | *((_WORD *)this + 7) & 0x4000;
      *((_WORD *)this + 7) = v34 | v33 & 0x4000;
      LODWORD(v31) = *((_DWORD *)a2 + 40);
      *((_WORD *)a2 + 7) = v32;
      LODWORD(v32) = *((_DWORD *)this + 40);
      *((_DWORD *)this + 40) = v31;
      v35 = *((_QWORD *)a2 + 21);
      *((_DWORD *)a2 + 40) = v32;
      v36 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = v35;
      *((_QWORD *)a2 + 21) = v36;
      v37 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = *((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 18) = v37;
      v38 = *((_QWORD *)this + 15);
      *((_QWORD *)this + 15) = *((_QWORD *)a2 + 15);
      LODWORD(v37) = *((_DWORD *)a2 + 78);
      *((_QWORD *)a2 + 15) = v38;
      LODWORD(v38) = *((_DWORD *)this + 78);
      *((_DWORD *)this + 78) = v37;
      LODWORD(v37) = *((_DWORD *)a2 + 79);
      *((_DWORD *)a2 + 78) = v38;
      LODWORD(v38) = *((_DWORD *)this + 79);
      *((_DWORD *)this + 79) = v37;
      v39 = *((_OWORD *)a2 + 20);
      *((_DWORD *)a2 + 79) = v38;
      v40 = *((_OWORD *)this + 20);
      v41 = *((_QWORD *)this + 50);
      v42 = *((_OWORD *)this + 21);
      v43 = *((_OWORD *)this + 22);
      v44 = *((_OWORD *)this + 23);
      v45 = *((_OWORD *)this + 24);
      *((_OWORD *)this + 20) = v39;
      *((_OWORD *)this + 21) = *((_OWORD *)a2 + 21);
      *((_OWORD *)this + 22) = *((_OWORD *)a2 + 22);
      *((_OWORD *)this + 23) = *((_OWORD *)a2 + 23);
      *((_OWORD *)this + 24) = *((_OWORD *)a2 + 24);
      *((_QWORD *)this + 50) = *((_QWORD *)a2 + 50);
      *((_OWORD *)a2 + 20) = v40;
      *((_OWORD *)a2 + 21) = v42;
      *((_OWORD *)a2 + 22) = v43;
      *((_OWORD *)a2 + 23) = v44;
      *((_OWORD *)a2 + 24) = v45;
      *((_QWORD *)a2 + 50) = v41;
      v46 = *(_OWORD *)((char *)this + 408);
      v47 = *(_OWORD *)((char *)this + 424);
      *(_OWORD *)((char *)this + 408) = *(_OWORD *)((char *)a2 + 408);
      *(_OWORD *)((char *)this + 424) = *(_OWORD *)((char *)a2 + 424);
      LODWORD(v37) = *((_DWORD *)a2 + 28);
      *(_OWORD *)((char *)a2 + 408) = v46;
      *(_OWORD *)((char *)a2 + 424) = v47;
      LODWORD(v38) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28) ^ (v38 ^ v37) & 0x3B5EF;
      *((_DWORD *)a2 + 28) = v38 ^ (v38 ^ *((_DWORD *)a2 + 28)) & 0x3B5EF;
      LODWORD(v38) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v38 ^ (*((_DWORD *)a2 + 29) ^ v38) & 0xFFF;
      LODWORD(v37) = *((_DWORD *)a2 + 28);
      *((_DWORD *)a2 + 29) ^= (*((_DWORD *)a2 + 29) ^ v38) & 0xFFF;
      LODWORD(v38) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = v38 ^ (v38 ^ v37) & 0x400000;
      *((_DWORD *)a2 + 28) ^= (v38 ^ *((_DWORD *)a2 + 28)) & 0x400000;
      LODWORD(v38) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v38 ^ (*((_DWORD *)a2 + 29) ^ v38) & 0x909;
      v48 = (struct _EPROCESS *)*((_QWORD *)a2 + 72);
      *((_DWORD *)a2 + 29) ^= (*((_DWORD *)a2 + 29) ^ v38) & 0x909;
      v49 = (struct _EPROCESS *)*((_QWORD *)this + 72);
      SURFACE::vAppContainerOwner(this, v48, v34);
      SURFACE::vAppContainerOwner(a2, v49, v50);
      if ( v63 )
      {
        *((_WORD *)this + 51) &= ~0x200u;
        v51 = *(_QWORD *)a2 & 0x800000LL;
        if ( (*(_QWORD *)a2 & 0x800000) != 0 )
          *((_WORD *)a2 + 51) |= 0x200u;
        if ( v62 && v51 )
          *((_WORD *)a2 + 51) |= 0x400u;
        *v69 = 1;
      }
      if ( v7 )
      {
        UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(v70);
        v52 = *(HLSURF *)v7;
        v70[4] = 0LL;
        v71 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v70, v52);
        v7 = 0LL;
        if ( v25 && (int)IsvSpDwmMigrateSpriteLSurfReferenceSupported_0() >= 0 )
          vSpDwmMigrateSpriteLSurfReferenceWrap_0();
        while ( SURFACE::GetFirstLSurf(this) )
        {
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported_0() >= 0 )
            vSpDwmMigrateLSurfShapeReferenceWrap_0();
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v70);
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        v53 = HmgShareLock(*((_QWORD *)a2 + 17), 5);
        HmgShareLockResult<SURFACE>::HmgShareLockResult<SURFACE>(v70, v53);
        if ( HmgLockResultBase<DRVOBJ>::operator bool(v70)
          && *(SURFACE **)(v70[0] + 24LL) != v7
          && (int)IsMulReplaceRedirectionChildSupported_0() >= 0 )
        {
          MulReplaceRedirectionChild_0();
        }
        HmgShareLockResult<SURFACE>::~HmgShareLockResult<SURFACE>(v70);
      }
      if ( (_DWORD)v67 != (_DWORD)v7 )
      {
        DEC_SHARE_REF_CNT(this);
        HmgIncrementShareReferenceCount(a2);
      }
      if ( *((_DWORD *)this + 2) != (_DWORD)v7 )
      {
        *v69 = 1;
LABEL_62:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v72);
LABEL_64:
        if ( !v8 && v63 != (_DWORD)v7 )
        {
          *((_WORD *)a2 + 51) &= ~0x200u;
          v56 = *(_QWORD *)this & 0x800000LL;
          if ( (*(_QWORD *)this & 0x800000) != 0 )
            *((_WORD *)this + 51) |= 0x200u;
          if ( v62 != (_DWORD)v7 && v56 )
            *((_WORD *)this + 51) |= 0x400u;
        }
        goto LABEL_72;
      }
      SURFREF::SURFREF((SURFREF *)v70, *((HSURF *)this + 4));
      SURFREFVIEW::bUnMapImmediate(v64, v54, v55);
      v64[0] = v7;
      v8 = SURFREF::bDeleteSurface(v70, 0LL);
      if ( !v8 )
        *((_QWORD *)this + 61) = v7;
      SURFREF::~SURFREF((SURFREF *)v70);
      if ( v8 )
        goto LABEL_62;
    }
    HmgSwapLockedHandleContents(
      *((_QWORD *)a2 + 4),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL
                                                                           * (unsigned __int16)*((_DWORD *)a2 + 8))
                + 8LL),
      *((_QWORD *)this + 4),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement
                            + 24LL * (unsigned __int16)*((_DWORD *)this + 8))
                + 8LL),
      5);
    goto LABEL_62;
  }
  v8 = 0;
LABEL_72:
  SURFREFVIEW::bUnMapImmediate(v68, v17, v18);
  v68[0] = v7;
  SURFREFVIEW::bUnMapImmediate(v64, v57, v58);
  v64[0] = v7;
LABEL_75:
  SURFREFVIEW::~SURFREFVIEW((SURFREFVIEW *)v68);
  SURFREFVIEW::~SURFREFVIEW((SURFREFVIEW *)v64);
  return v8;
}
