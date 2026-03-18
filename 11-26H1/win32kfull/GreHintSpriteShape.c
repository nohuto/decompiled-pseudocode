/*
 * XREFs of GreHintSpriteShape @ 0x1400A5AB4
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     HintSpriteShape @ 0x1400A5198 (HintSpriteShape.c)
 *     GreHintSpriteShapeDelayDelete @ 0x140345484 (GreHintSpriteShapeDelayDelete.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     DwmAsyncUpdateSprite @ 0x14009C7A0 (DwmAsyncUpdateSprite.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x14009E158 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14009EA74 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1400A3ED4 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1400A4304 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400A4644 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1400A5240 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1400A6C24 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x140289F18 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GreHintSpriteShape(HDEV a1, Gre::Base *a2, HBITMAP a3, __int64 a4, int a5, int a6, int a7)
{
  char v7; // si
  HBITMAP v8; // r12
  HDEV v9; // r14
  unsigned int v10; // r13d
  int v11; // edi
  __int64 v12; // r15
  Gre::Base *v13; // rcx
  struct Gre::Base::SESSION_GLOBALS *v14; // rbx
  Gre::Base *v15; // rcx
  struct PDEVOBJ *v16; // rdx
  __int64 v17; // rcx
  Gre::Base *v18; // rcx
  __int64 v19; // rbx
  Gre::Base *v20; // rcx
  struct Gre::Base::SESSION_GLOBALS *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r12
  unsigned int *v24; // rbx
  __int64 v25; // rdx
  Gre::Base *v26; // rcx
  __int64 v27; // rdi
  struct Gre::Base::SESSION_GLOBALS *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdi
  struct SFMLOGICALSURFACE *v31; // rdi
  unsigned int *v32; // rbx
  unsigned int *v33; // rsi
  Gre::Base *v34; // rcx
  int v35; // edx
  int v36; // r8d
  int v37; // edx
  __int64 v39; // r8
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int64 v46; // rax
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int64 v54; // rax
  int v55; // eax
  Gre::Base *v56; // rcx
  HLSURF HLSURFClone; // rdi
  struct Gre::Base::SESSION_GLOBALS *v58; // rax
  __int64 v59; // r8
  HDEV v60; // rdx
  HDEV v61; // rdx
  struct Gre::Base::SESSION_GLOBALS *v62; // rax
  int v63; // r9d
  _DWORD *v64; // rcx
  int v65; // ecx
  __int64 v66; // r14
  int v67; // esi
  int v68; // r15d
  unsigned int v69; // edx
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // rdi
  int v73; // r15d
  void *v74; // rax
  int updated; // eax
  int v76; // [rsp+60h] [rbp-A0h]
  int v77; // [rsp+64h] [rbp-9Ch]
  int v78; // [rsp+68h] [rbp-98h]
  int v79; // [rsp+6Ch] [rbp-94h]
  int v80; // [rsp+70h] [rbp-90h]
  unsigned int *v84; // [rsp+90h] [rbp-70h]
  _OWORD v85[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-48h]
  _OWORD v87[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v88; // [rsp+E0h] [rbp-20h]
  int v89; // [rsp+E8h] [rbp-18h]
  HDEV v90; // [rsp+F0h] [rbp-10h]
  char v91[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v92; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v93[2]; // [rsp+108h] [rbp+8h] BYREF
  struct SFMLOGICALSURFACE *v94; // [rsp+128h] [rbp+28h]
  int v95; // [rsp+130h] [rbp+30h]
  HDEV v96; // [rsp+138h] [rbp+38h] BYREF
  char v97[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v98; // [rsp+148h] [rbp+48h]
  char v99; // [rsp+150h] [rbp+50h]
  __int128 v100; // [rsp+160h] [rbp+60h] BYREF
  __int128 v101; // [rsp+170h] [rbp+70h]
  __int128 v102; // [rsp+180h] [rbp+80h]
  __int128 v103; // [rsp+190h] [rbp+90h]
  __int128 v104; // [rsp+1A0h] [rbp+A0h]
  __int128 v105; // [rsp+1B0h] [rbp+B0h]
  __int128 v106; // [rsp+1C0h] [rbp+C0h]
  __int128 v107; // [rsp+1D0h] [rbp+D0h]
  __int64 v108; // [rsp+1E0h] [rbp+E0h]

  v7 = a5;
  v8 = a3;
  v9 = a1;
  v90 = a1;
  v10 = 1;
  v80 = 1;
  v77 = 0;
  v11 = 0;
  v12 = 0LL;
  memset(v93, 0, sizeof(v93));
  PushThreadGuardedObject(
    v93,
    v93,
    UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
  v94 = 0LL;
  v95 = 0;
  v14 = Gre::Base::Globals(v13);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v92, v14);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v91, a7 != 0);
  if ( !a6 || !IsDwmActive(v15) )
    goto LABEL_26;
  v96 = v9;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v97, v16, 0, 0);
  v17 = *(_QWORD *)v14;
  v99 = 0;
  v98 = v17 + 520;
  GreAcquireSemaphoreInternal((HSEMAPHORE)(v17 + 520));
  GrepAcquireLockValidate<7>();
  if ( !IsDwmActive(v18) )
    goto LABEL_25;
  v80 = 0;
  memset(v85, 0, sizeof(v85));
  PushThreadGuardedObject(
    v85,
    v85,
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
  v86 = 0LL;
  v19 = DWMSPRITEREF::hspLookupWindow(a2);
  v21 = Gre::Base::Globals(v20);
  if ( v19 )
  {
    LOBYTE(v22) = 15;
    v23 = HmgLock(v21, v19, v22, 0LL);
    v86 = v23;
  }
  else
  {
    v23 = v86;
  }
  if ( v23 )
  {
    v24 = *(unsigned int **)(v23 + 144);
    memset(v87, 0, sizeof(v87));
    PushThreadGuardedObject(
      v87,
      v87,
      UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
    v88 = 0LL;
    v89 = 1;
    if ( v24 )
    {
      v27 = *(_QWORD *)v24;
      if ( *(_QWORD *)v24 )
      {
        v28 = Gre::Base::Globals(v26);
        LOBYTE(v29) = 18;
        v88 = HmgLock(v28, v27, v29, 0LL);
      }
    }
    v30 = *((_QWORD *)v24 + 23);
    if ( v30 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v30 - 24)) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v30 + 248));
      if ( *(_DWORD *)(v30 + 300) )
      {
        *(_QWORD *)(v30 + 312) = a2;
        *(_QWORD *)(v30 + 320) = a3;
        *(_QWORD *)(v30 + 304) = v9;
        v40 = *(_OWORD *)(a4 + 16);
        v100 = *(_OWORD *)a4;
        v41 = *(_OWORD *)(a4 + 32);
        v101 = v40;
        v42 = *(_OWORD *)(a4 + 48);
        v102 = v41;
        v43 = *(_OWORD *)(a4 + 64);
        v103 = v42;
        v44 = *(_OWORD *)(a4 + 80);
        v104 = v43;
        v45 = *(_OWORD *)(a4 + 96);
        v105 = v44;
        v106 = v45;
        v46 = *(_QWORD *)(a4 + 128);
        v107 = *(_OWORD *)(a4 + 112);
        v108 = v46;
        v47 = v101;
        *(_OWORD *)(v30 + 328) = v100;
        v48 = v102;
        *(_OWORD *)(v30 + 344) = v47;
        v49 = v103;
        *(_OWORD *)(v30 + 360) = v48;
        v50 = v104;
        *(_OWORD *)(v30 + 376) = v49;
        v51 = v105;
        *(_OWORD *)(v30 + 392) = v50;
        v52 = v106;
        *(_OWORD *)(v30 + 408) = v51;
        v53 = v107;
        v54 = v108;
        *(_OWORD *)(v30 + 424) = v52;
        *(_OWORD *)(v30 + 440) = v53;
        *(_QWORD *)(v30 + 456) = v54;
        *(_DWORD *)(v30 + 464) = a5;
        *(_DWORD *)(v30 + 468) = a6;
        v55 = *(_DWORD *)(v30 + 88);
        if ( (v55 & 0x2000000) == 0 )
        {
          *(_DWORD *)(v30 + 88) = v55 | 0x2000000;
          _InterlockedAdd(
            (volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(0x2000000LL, 128LL, v39) + 96) + 4824LL),
            1u);
        }
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v30 + 248));
        SFMLOGICALSURFACEREF_vDestructor((__int64)v87);
        PopThreadGuardedObject(v87);
        if ( v86 )
          _InterlockedDecrement16((volatile signed __int16 *)(v86 + 12));
LABEL_35:
        v86 = 0LL;
        PopThreadGuardedObject(v85);
        ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)&v96);
        goto LABEL_28;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v30 + 248));
      v7 = a5;
    }
    if ( *((_QWORD *)v24 + 23) || (v24[61] & 1) != 0 )
    {
      ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)&v100);
      HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(v9, (struct SFMLOGICALSURFACE *)v24, 0, v7 & 2, 1);
      if ( HLSURFClone )
      {
        v58 = Gre::Base::Globals(v56);
        LOBYTE(v59) = 18;
        v94 = (struct SFMLOGICALSURFACE *)HmgLock(v58, HLSURFClone, v59, 0LL);
      }
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)&v100);
      v31 = v94;
      if ( !v94 )
      {
        if ( a3 )
        {
          SFMLOGICALSURFACEREF_vDestructor((__int64)v87);
          PopThreadGuardedObject(v87);
          if ( v86 )
            _InterlockedDecrement16((volatile signed __int16 *)(v86 + 12));
          v10 = 0;
          goto LABEL_35;
        }
        v31 = (struct SFMLOGICALSURFACE *)v24;
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v24, v9, 0LL);
        v32 = v24 + 63;
        v84 = v32;
        v33 = v32;
        goto LABEL_15;
      }
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v23, v60, 0LL);
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v23, v61, v31);
    }
    else
    {
      v31 = (struct SFMLOGICALSURFACE *)v24;
    }
    v32 = (unsigned int *)((char *)v31 + 252);
    v84 = (unsigned int *)((char *)v31 + 252);
    v33 = (unsigned int *)((char *)v31 + 252);
    if ( a3 )
    {
      LOBYTE(v25) = 5;
      v12 = HmgReferenceCheckLock(a3, v25, 0LL) + 24;
      SFMLOGICALSURFACE::SetShape(v31, v9, (struct _SURFOBJ *)v12);
      *v32 |= 8u;
      if ( (*(_DWORD *)(v12 + 92) & 0x800) != 0 )
      {
        v79 = *(_DWORD *)(v12 + 640);
        *(_DWORD *)(v23 + 128) = *(_DWORD *)(v12 + 636);
        *(_DWORD *)(v23 + 132) = v79;
        *(_DWORD *)(v23 + 136) |= 0x20u;
      }
      else
      {
        *(_QWORD *)(v23 + 128) = 0LL;
        *(_DWORD *)(v23 + 136) &= ~0x20u;
      }
LABEL_16:
      v34 = (Gre::Base *)(unsigned int)(*(_DWORD *)(a4 + 8) - *(_DWORD *)a4);
      v35 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
      if ( v12 )
      {
        *v32 |= 1u;
        v36 = v35 + *(_DWORD *)(v23 + 60);
        v37 = (_DWORD)v34 + *(_DWORD *)(v23 + 56);
      }
      else
      {
        v36 = *(_DWORD *)(v23 + 60);
        v37 = *(_DWORD *)(v23 + 56);
      }
      *(_DWORD *)(v23 + 64) = v37;
      *(_DWORD *)(v23 + 68) = v36;
      if ( (*v32 & 1) != 0
        && (LOBYTE(v34) = (*v32 & 8) != 0, ((unsigned __int8)v34 & ((*(_BYTE *)(v23 + 136) & 0x10) == 0)) != 0) )
      {
        v62 = Gre::Base::Globals(v34);
        SFMLOGICALSURFACE::StartSfmStateTracking(v31, v9, *((struct SfmState **)v62 + 543), v63);
        v64 = (_DWORD *)*((_QWORD *)v31 + 23);
        if ( v64 )
        {
          v76 = v64[8];
          v78 = v64[9];
          if ( (v64[23] & 1) != 0 )
          {
            v77 = 2;
          }
          else if ( (v64[22] & 0x800) != 0 )
          {
            v77 = 1;
          }
        }
        else
        {
          v77 = 0;
          v76 = 0;
          v78 = 0;
        }
        v65 = *(_DWORD *)(v23 + 136);
        v66 = *(_QWORD *)(v23 + 104);
        v67 = *(_DWORD *)(v23 + 116);
        v68 = v65 & 0x40 | (4 * (v65 & 0xE));
        *(_QWORD *)(v23 + 104) = 0LL;
        v69 = *v32;
        v70 = v65 & 1;
        v71 = *(_QWORD *)v31;
        v72 = *(_QWORD *)v23;
        v73 = v69 & 0xC | v70 | (2 * (v69 & 1 | v68));
        v74 = (void *)UserReferenceDwmApiPort(v70);
        updated = DwmAsyncUpdateSprite(v74, v72, v71, v73, v23 + 72, (__int128 *)a4, v77, v76, v78, v67 >= 1, v66);
        v9 = v90;
        *v84 &= ~8u;
        v11 = updated >= 0;
      }
      else
      {
        v11 = 1;
      }
      if ( *(int *)(v23 + 116) >= 1 )
        CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)v23, 0, 0LL);
      SFMLOGICALSURFACEREF_vDestructor((__int64)v87);
      PopThreadGuardedObject(v87);
      if ( v86 )
        _InterlockedDecrement16((volatile signed __int16 *)(v86 + 12));
      goto LABEL_24;
    }
LABEL_15:
    *v32 = *v33 & 0xFFFFFFF6;
    goto LABEL_16;
  }
LABEL_24:
  v86 = 0LL;
  PopThreadGuardedObject(v85);
  v8 = a3;
LABEL_25:
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)&v96);
  if ( v80 )
LABEL_26:
    v11 = GdiHintSpriteShape(v9, (HWND)a2, v8, 0, 0);
  v10 = v11;
LABEL_28:
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v91);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v92);
  SFMLOGICALSURFACEREF_vDestructor((__int64)v93);
  PopThreadGuardedObject(v93);
  return v10;
}
