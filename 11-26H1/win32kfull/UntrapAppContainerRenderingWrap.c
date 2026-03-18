/*
 * XREFs of UntrapAppContainerRenderingWrap @ 0x140189A40
 * Callers:
 *     <none>
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006BCA0 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1400718A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140071D98 (--0-$SEMOBJSHARED@$02@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400A8E68 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A9094 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A9808 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB3D8 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400AB8B4 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 */

void __fastcall UntrapAppContainerRenderingWrap(HDC *a1, _QWORD *a2, __int64 *a3, _DWORD *a4)
{
  __int64 v8; // rbx
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  Gre::Base *v14; // rcx
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r8
  Gre::Base *v19; // rcx
  struct Gre::Base::SESSION_GLOBALS *v20; // rax
  Gre::Base *v21; // rcx
  struct Gre::Base::SESSION_GLOBALS *v22; // rax
  __int64 v23; // rdx
  Gre::Base *v24; // rcx
  struct Gre::Base::SESSION_GLOBALS *v25; // rbx
  char v26; // si
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  _OWORD v30[2]; // [rsp+30h] [rbp-59h] BYREF
  __int64 *v31; // [rsp+50h] [rbp-39h]
  _OWORD v32[2]; // [rsp+58h] [rbp-31h] BYREF
  struct SURFACE *v33; // [rsp+78h] [rbp-11h]
  DC *v34[8]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v35; // [rsp+F8h] [rbp+6Fh] BYREF

  if ( *a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v34, *a1);
    memset(v30, 0, sizeof(v30));
    PushThreadGuardedObject(
      v30,
      v30,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    v31 = 0LL;
    memset(v32, 0, sizeof(v32));
    PushThreadGuardedObject(
      v32,
      v32,
      UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
    v8 = *a3;
    v33 = 0LL;
    v10 = Gre::Base::Globals(v9);
    LOBYTE(v11) = 5;
    v12 = HmgShareLock(v10, v8, v11, 1LL);
    v13 = *a2;
    v31 = (__int64 *)v12;
    v15 = Gre::Base::Globals(v14);
    LOBYTE(v16) = 5;
    v33 = (struct SURFACE *)HmgShareLock(v15, v13, v16, 1LL);
    v17 = *v31;
    DC::pSurface(v34[0], v33, v18);
    v20 = Gre::Base::Globals(v19);
    DEC_SHARE_REF_CNT(v20, v31);
    v31 = 0LL;
    v22 = Gre::Base::Globals(v21);
    DEC_SHARE_REF_CNT(v22, v33);
    v33 = 0LL;
    LOBYTE(v23) = 5;
    GreDereferenceObject(v17, v23, 1LL);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
    {
      v24 = v34[0];
      *((_DWORD *)v34[0] + 9) |= *a4;
    }
    v25 = Gre::Base::Globals(v24);
    if ( (*((_DWORD *)v34[0] + 9) & 0x200) != 0 )
    {
      v26 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>((struct _ERESOURCE **)v25) )
      {
        GreAcquireSemaphoreShared<2,>(v25);
        v26 = 1;
      }
      SEMOBJSHARED<3>::SEMOBJSHARED<3>((Gre::Base *)&v35);
      v27 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, 5);
      if ( v27 )
        SURFACE::bDeleteSurface(v27, v25, 0LL, 1LL);
      *((_QWORD *)v34[0] + 63) = 0LL;
      DC::vClearRendering(v34[0]);
      v28 = v35;
      *a2 = 0LL;
      GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v28);
      if ( v26 )
        GreReleaseSemaphoreShared<2,>((__int64 *)v25);
    }
    else
    {
      v29 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, 5);
      if ( v29 )
        SURFACE::bDeleteSurface(v29, v25, 0LL, 1LL);
      *((_QWORD *)v34[0] + 63) = 0LL;
      *a2 = 0LL;
    }
    GreReleaseSemaphoreShared<1,>((__int64 *)v25);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v30);
    DCOBJ::~DCOBJ((DCOBJ *)v34);
  }
}
