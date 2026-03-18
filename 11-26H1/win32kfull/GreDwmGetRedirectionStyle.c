/*
 * XREFs of GreDwmGetRedirectionStyle @ 0x140344F94
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x14001BE10 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B768 (--0-$SEMOBJSHARED@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0ENTER_DWM_CRIT_SPECIAL@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@_N@Z @ 0x140074718 (--0ENTER_DWM_CRIT_SPECIAL@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@_N@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x1400A4288 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1401D4F90 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 */

__int64 __fastcall GreDwmGetRedirectionStyle(Gre::Base *a1, HLSURF a2, enum _HLSURF_REDIRECTIONSTYLE *a3)
{
  unsigned int v6; // ebp
  struct Gre::Base::SESSION_GLOBALS *v7; // rbx
  SFMLOGICALSURFACE *v8; // rcx
  struct W32_PUSH_LOCK *v9; // rbx
  __int64 v11; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v12[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v13[32]; // [rsp+58h] [rbp-40h] BYREF
  SFMLOGICALSURFACE *v14; // [rsp+78h] [rbp-20h]
  __int64 v15; // [rsp+B8h] [rbp+20h] BYREF

  v6 = -1073741811;
  v7 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v11, v7);
  SEMOBJSHARED<6>::SEMOBJSHARED<6>(&v15, v7);
  ENTER_DWM_CRIT_SPECIAL::ENTER_DWM_CRIT_SPECIAL((ENTER_DWM_CRIT_SPECIAL *)v12, v7, (HDEV)a1, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v13, a2);
    v8 = v14;
    if ( v14 )
    {
      v9 = (SFMLOGICALSURFACE *)((char *)v14 + 256);
      if ( v14 != (SFMLOGICALSURFACE *)-256LL )
      {
        GreAcquirePushLockShared((SFMLOGICALSURFACE *)((char *)v14 + 256));
        v8 = v14;
      }
      SFMLOGICALSURFACE::GetRedirectionInfo(
        v8,
        a3,
        (unsigned int *)a3 + 1,
        (unsigned int *)a3 + 2,
        (void **)a3 + 3,
        (struct _LUID *)((char *)a3 + 12));
      v6 = 0;
      if ( v9 )
        GreReleasePushLockShared(v9);
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v13);
  }
  else
  {
    v6 = -1073741790;
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v12);
  GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v15);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v11);
  return v6;
}
