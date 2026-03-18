/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1C006B7B0
 * Callers:
 *     pConvertDfbSurfaceToDibInternal @ 0x1C006B5F0 (pConvertDfbSurfaceToDibInternal.c)
 * Callees:
 *     IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported_0 @ 0x1C0001688 (IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported_0.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap_0 @ 0x1C0001690 (SFMLOGICALSURFACE_CreateHLSURFCloneWrap_0.c)
 *     IsvSpDwmMigrateSpriteLSurfReferenceSupported_0 @ 0x1C0001698 (IsvSpDwmMigrateSpriteLSurfReferenceSupported_0.c)
 *     vSpDwmMigrateSpriteLSurfReferenceWrap_0 @ 0x1C00016A0 (vSpDwmMigrateSpriteLSurfReferenceWrap_0.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported_0 @ 0x1C00016A8 (IsvSpDwmMigrateLSurfShapeReferenceSupported_0.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap_0 @ 0x1C00016B0 (vSpDwmMigrateLSurfShapeReferenceWrap_0.c)
 *     IsMulReplaceRedirectionChildSupported_0 @ 0x1C00016B8 (IsMulReplaceRedirectionChildSupported_0.c)
 *     MulReplaceRedirectionChild_0 @ 0x1C00016C0 (MulReplaceRedirectionChild_0.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0025BA0 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0025FF0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0026AD8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0026AFC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002E800 (HmgIncrementShareReferenceCount.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C006BFF8 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C006C020 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     HmgSwapLockedHandleContents @ 0x1C006C080 (HmgSwapLockedHandleContents.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C00757D0 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C0075800 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ??1SURFREFVIEW@@QEAA@XZ @ 0x1C00B148C (--1SURFREFVIEW@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BEDC0 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0?$HmgShareLockResult@VSURFACE@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00C4D70 (--0-$HmgShareLockResult@VSURFACE@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00C4DBC (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00C4DEC (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1C00C4E28 (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(SURFACE *this, struct _BASEOBJECT *a2, _DWORD *a3)
{
  HLSURF *v3; // rsi
  int v5; // eax
  unsigned int v8; // r13d
  struct _SURFOBJ *v9; // rdx
  int v10; // eax
  SURFACE *v11; // r14
  __int64 v12; // rbx
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v14; // rcx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rsi
  struct OBJECT *EntryObject; // rax
  __int64 v19; // rdi
  int locked; // eax
  int v21; // edi
  HLSURF HLSURFCloneWrap_0; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int16 v29; // r8
  __int64 v30; // r8
  __int16 v31; // dx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int128 v36; // xmm0
  __int128 v37; // xmm3
  __int64 v38; // xmm2_8
  __int128 v39; // xmm4
  __int128 v40; // xmm5
  __int128 v41; // xmm6
  __int128 v42; // xmm7
  __int128 v43; // xmm2
  __int128 v44; // xmm3
  struct _EPROCESS *v45; // rdx
  struct _EPROCESS *v46; // rbx
  __int64 v47; // r8
  int v48; // eax
  HLSURF v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // r14
  struct OBJECT *v53; // rdi
  struct OBJECT *v54; // rax
  int v55; // eax
  int v57; // [rsp+48h] [rbp-C0h]
  int v58; // [rsp+4Ch] [rbp-BCh]
  int v59; // [rsp+50h] [rbp-B8h]
  _QWORD v60[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v61; // [rsp+68h] [rbp-A0h]
  int v62; // [rsp+6Ch] [rbp-9Ch]
  _QWORD v63[2]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD *v64; // [rsp+80h] [rbp-88h]
  _QWORD v65[5]; // [rsp+88h] [rbp-80h] BYREF
  int v66; // [rsp+B0h] [rbp-58h]
  _BYTE v67[32]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-30h]
  __int64 v69; // [rsp+E8h] [rbp-20h] BYREF
  int v70; // [rsp+F0h] [rbp-18h]
  int v71; // [rsp+F4h] [rbp-14h]

  v3 = 0LL;
  v70 = *((_DWORD *)this + 14);
  v5 = *((_DWORD *)this + 15);
  v69 = 0LL;
  v64 = a3;
  v71 = v5;
  v8 = 1;
  v60[0] = 0LL;
  SURFREFVIEW::bMap((SURFREFVIEW *)v60, (struct _SURFOBJ *)((char *)this + 24));
  v9 = 0LL;
  if ( a2 )
    v9 = (struct _SURFOBJ *)((char *)a2 + 24);
  v63[0] = 0LL;
  SURFREFVIEW::bMap((SURFREFVIEW *)v63, v9);
  *a3 = 0;
  v10 = *((_DWORD *)this + 28);
  if ( (v10 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v63);
    v63[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v60);
    v60[0] = 0LL;
    goto LABEL_74;
  }
  if ( *((_WORD *)this + 50) == 3 )
  {
LABEL_7:
    v11 = this;
    goto LABEL_10;
  }
  if ( *((_WORD *)a2 + 50) != 3 )
  {
    if ( (v10 & 0x400000) != 0 )
      goto LABEL_7;
    if ( (*((_DWORD *)a2 + 28) & 0x400000) == 0 )
    {
LABEL_74:
      v8 = 0;
      goto LABEL_75;
    }
  }
  v11 = a2;
LABEL_10:
  v12 = *((_QWORD *)v11 + 6);
  if ( (*(_DWORD *)(v12 + 56) & 0x20000) != 0 )
    *((_DWORD *)this + 29) |= 0x10u;
  if ( (*((_DWORD *)v11 + 28) & 0x400) != 0 )
    v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v12 + 2864);
  else
    v13 = EngCopyBits_0;
  v14 = 0LL;
  if ( a2 )
    v14 = (char *)a2 + 24;
  if ( ((unsigned int (__fastcall *)(char *, char *, _QWORD, XLATEOBJ *, __int64 *, __int64 *))v13)(
         v14,
         (char *)this + 24,
         0LL,
         &xloIdent,
         &v69,
         &v69) )
  {
    if ( (*(_DWORD *)(v12 + 56) & 0x20000) != 0 )
      *((_DWORD *)this + 29) &= ~0x10u;
    v15 = *(_DWORD *)this;
    v62 = *((_DWORD *)this + 29) & 0x80;
    v16 = v15 & 0x800000;
    if ( !v16 || (v57 = 1, (*((_WORD *)this + 51) & 0x200) == 0) )
      v57 = 0;
    if ( !v16 || (v58 = 1, (*((_WORD *)this + 51) & 0x400) == 0) )
      v58 = 0;
    v17 = *((_QWORD *)this + 4);
    EntryObject = GdiHandleManager::GetEntryObject(
                    (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                    (unsigned __int16)v17 | ((unsigned int)v17 >> 8) & 0xFF0000);
    v19 = *((_QWORD *)a2 + 4);
    v59 = *((_DWORD *)EntryObject + 2);
    v61 = *((_DWORD *)GdiHandleManager::GetEntryObject(
                        (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                        (unsigned __int16)v19 | ((unsigned int)v19 >> 8) & 0xFF0000)
          + 2);
    locked = HmgSwapLockedHandleContents(v17, v59, v19, v61, 5);
    v3 = 0LL;
    if ( !locked )
    {
      v8 = 0;
      goto LABEL_64;
    }
    v21 = 0;
    HLSURFCloneWrap_0 = 0LL;
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v67);
    FirstLSurf = SURFACE::GetFirstLSurf(this);
    v3 = (HLSURF *)FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_33;
    v21 = -__CFSHR__(*((_DWORD *)FirstLSurf + 62), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 62), 3) )
      goto LABEL_33;
    if ( (int)IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported_0() >= 0 )
      HLSURFCloneWrap_0 = (HLSURF)SFMLOGICALSURFACE_CreateHLSURFCloneWrap_0();
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v67, HLSURFCloneWrap_0);
    if ( !v68 )
    {
      v8 = 0;
    }
    else
    {
LABEL_33:
      *((_DWORD *)this + 2) = v59;
      *((_DWORD *)a2 + 2) = v61;
      v24 = *((_QWORD *)this + 4);
      *((_QWORD *)this + 62) = a2;
      *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
      v25 = *((_QWORD *)a2 + 17);
      *((_QWORD *)a2 + 4) = v24;
      v26 = *((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v25;
      v27 = *((_QWORD *)a2 + 19);
      *((_QWORD *)a2 + 17) = v26;
      v28 = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = v27;
      v29 = *((_WORD *)a2 + 7);
      *((_QWORD *)a2 + 19) = v28;
      LOWORD(v28) = v29 & 0x4000;
      v30 = v29 & 0x8000;
      v31 = *((_WORD *)this + 7) & 0x4000;
      *((_WORD *)this + 7) = *((_WORD *)this + 7) & 0x8000 | v28;
      LODWORD(v27) = *((_DWORD *)a2 + 40);
      *((_WORD *)a2 + 7) = v30 | v31;
      LODWORD(v28) = *((_DWORD *)this + 40);
      *((_DWORD *)this + 40) = v27;
      v32 = *((_QWORD *)a2 + 21);
      *((_DWORD *)a2 + 40) = v28;
      v33 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = v32;
      *((_QWORD *)a2 + 21) = v33;
      v34 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = *((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 18) = v34;
      v35 = *((_QWORD *)this + 15);
      *((_QWORD *)this + 15) = *((_QWORD *)a2 + 15);
      LODWORD(v34) = *((_DWORD *)a2 + 80);
      *((_QWORD *)a2 + 15) = v35;
      LODWORD(v35) = *((_DWORD *)this + 80);
      *((_DWORD *)this + 80) = v34;
      LODWORD(v34) = *((_DWORD *)a2 + 81);
      *((_DWORD *)a2 + 80) = v35;
      LODWORD(v35) = *((_DWORD *)this + 81);
      *((_DWORD *)this + 81) = v34;
      v36 = *(_OWORD *)((char *)a2 + 328);
      *((_DWORD *)a2 + 81) = v35;
      v37 = *(_OWORD *)((char *)this + 328);
      v38 = *((_QWORD *)this + 51);
      v39 = *(_OWORD *)((char *)this + 344);
      v40 = *(_OWORD *)((char *)this + 360);
      v41 = *(_OWORD *)((char *)this + 376);
      v42 = *(_OWORD *)((char *)this + 392);
      *(_OWORD *)((char *)this + 328) = v36;
      *(_OWORD *)((char *)this + 344) = *(_OWORD *)((char *)a2 + 344);
      *(_OWORD *)((char *)this + 360) = *(_OWORD *)((char *)a2 + 360);
      *(_OWORD *)((char *)this + 376) = *(_OWORD *)((char *)a2 + 376);
      *(_OWORD *)((char *)this + 392) = *(_OWORD *)((char *)a2 + 392);
      *((_QWORD *)this + 51) = *((_QWORD *)a2 + 51);
      *(_OWORD *)((char *)a2 + 328) = v37;
      *(_OWORD *)((char *)a2 + 344) = v39;
      *(_OWORD *)((char *)a2 + 360) = v40;
      *(_OWORD *)((char *)a2 + 376) = v41;
      *(_OWORD *)((char *)a2 + 392) = v42;
      *((_QWORD *)a2 + 51) = v38;
      v43 = *((_OWORD *)this + 26);
      v44 = *((_OWORD *)this + 27);
      *((_OWORD *)this + 26) = *((_OWORD *)a2 + 26);
      *((_OWORD *)this + 27) = *((_OWORD *)a2 + 27);
      LODWORD(v34) = *((_DWORD *)a2 + 28);
      *((_OWORD *)a2 + 26) = v43;
      *((_OWORD *)a2 + 27) = v44;
      LODWORD(v35) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28) ^ (v35 ^ v34) & 0x3B5EF;
      *((_DWORD *)a2 + 28) = v35 ^ (v35 ^ *((_DWORD *)a2 + 28)) & 0x3B5EF;
      LODWORD(v35) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v35 ^ (v35 ^ *((_DWORD *)a2 + 29)) & 0xFFF;
      *((_DWORD *)a2 + 29) ^= (v35 ^ *((_DWORD *)a2 + 29)) & 0xFFF;
      LODWORD(v35) = *((_DWORD *)this + 28);
      *((_DWORD *)this + 28) = v35 ^ (v35 ^ *((_DWORD *)a2 + 28)) & 0x400000;
      *((_DWORD *)a2 + 28) ^= (v35 ^ *((_DWORD *)a2 + 28)) & 0x400000;
      LODWORD(v35) = *((_DWORD *)this + 29);
      *((_DWORD *)this + 29) = v35 ^ (v35 ^ *((_DWORD *)a2 + 29)) & 0x909;
      v45 = (struct _EPROCESS *)*((_QWORD *)a2 + 73);
      *((_DWORD *)a2 + 29) ^= (v35 ^ *((_DWORD *)a2 + 29)) & 0x909;
      v46 = (struct _EPROCESS *)*((_QWORD *)this + 73);
      SURFACE::vAppContainerOwner(this, v45, v30);
      SURFACE::vAppContainerOwner(a2, v46, v47);
      if ( v57 )
      {
        *((_WORD *)this + 51) &= ~0x200u;
        v48 = *(_DWORD *)a2 & 0x800000;
        if ( v48 )
          *((_WORD *)a2 + 51) |= 0x200u;
        if ( v58 && v48 )
          *((_WORD *)a2 + 51) |= 0x400u;
        *v64 = 1;
      }
      if ( v3 )
      {
        UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(v65);
        v49 = *v3;
        v65[4] = 0LL;
        v66 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v65, v49);
        v3 = 0LL;
        if ( v21 && (int)IsvSpDwmMigrateSpriteLSurfReferenceSupported_0() >= 0 )
          vSpDwmMigrateSpriteLSurfReferenceWrap_0();
        while ( SURFACE::GetFirstLSurf(this) )
        {
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported_0() >= 0 )
            vSpDwmMigrateLSurfShapeReferenceWrap_0();
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v65);
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        v50 = HmgShareLock(*((_QWORD *)a2 + 17), 5);
        HmgShareLockResult<SURFACE>::HmgShareLockResult<SURFACE>(v65, v50);
        if ( HmgLockResultBase<DRVOBJ>::operator bool(v65)
          && *(HLSURF **)(v65[0] + 24LL) != v3
          && (int)IsMulReplaceRedirectionChildSupported_0() >= 0 )
        {
          MulReplaceRedirectionChild_0();
        }
        HmgShareLockResult<SURFACE>::~HmgShareLockResult<SURFACE>(v65);
      }
      if ( v62 != (_DWORD)v3 )
      {
        DEC_SHARE_REF_CNT((unsigned int *)this);
        HmgIncrementShareReferenceCount(a2);
      }
      if ( *((_DWORD *)this + 2) != (_DWORD)v3 )
      {
        *v64 = 1;
LABEL_62:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v67);
LABEL_64:
        if ( !v8 && v57 != (_DWORD)v3 )
        {
          *((_WORD *)a2 + 51) &= ~0x200u;
          v55 = *(_DWORD *)this & 0x800000;
          if ( v55 )
            *((_WORD *)this + 51) |= 0x200u;
          if ( v58 != (_DWORD)v3 && v55 )
            *((_WORD *)this + 51) |= 0x400u;
        }
        goto LABEL_72;
      }
      SURFREF::SURFREF((SURFREF *)v65, *((HSURF *)this + 4));
      SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v60);
      v60[0] = v3;
      v8 = SURFREF::bDeleteSurface(v65, 0LL);
      if ( !v8 )
        *((_QWORD *)this + 62) = v3;
      SURFREF::~SURFREF((SURFREF *)v65);
      if ( v8 )
        goto LABEL_62;
    }
    v51 = *((_QWORD *)this + 4);
    v52 = *((_QWORD *)a2 + 4);
    v53 = GdiHandleManager::GetEntryObject(
            (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
            (unsigned __int16)v51 | ((unsigned int)v51 >> 8) & 0xFF0000);
    v54 = GdiHandleManager::GetEntryObject(
            (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
            (unsigned __int16)v52 | ((unsigned int)v52 >> 8) & 0xFF0000);
    HmgSwapLockedHandleContents(v52, *((_DWORD *)v54 + 2), v51, *((_DWORD *)v53 + 2), 5);
    v3 = 0LL;
    goto LABEL_62;
  }
  v8 = 0;
LABEL_72:
  SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v63);
  v63[0] = v3;
  SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v60);
  v60[0] = v3;
LABEL_75:
  SURFREFVIEW::~SURFREFVIEW((SURFREFVIEW *)v63);
  SURFREFVIEW::~SURFREFVIEW((SURFREFVIEW *)v60);
  return v8;
}
