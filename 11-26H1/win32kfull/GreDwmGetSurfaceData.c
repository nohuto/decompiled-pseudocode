/*
 * XREFs of GreDwmGetSurfaceData @ 0x1400A54E0
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x14001BE10 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C868 (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140073358 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1400A4174 (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x1400A4288 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmGetSurfaceData(Gre::Base *a1, HLSURF a2, struct tagDWMSURFACEDATA *a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rbp
  Gre::Base *v8; // rcx
  __int64 v9; // r8
  SFMLOGICALSURFACE *v10; // rcx
  struct W32_PUSH_LOCK *v11; // rbx
  unsigned int SoSurfaceData; // edi
  _QWORD v14[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-48h] BYREF
  SFMLOGICALSURFACE *v16; // [rsp+60h] [rbp-28h]
  __int64 v17; // [rsp+A8h] [rbp+20h] BYREF

  v6 = (__int64 *)Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v17, v6);
  v7 = *v6;
  GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
    (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal,
    *v6 + 1040);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v14, v6, (__int64)a1, 3);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( IsDwmActive(v8) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v14[0] + 2544LL) + 96LL) == 6 )
      {
        SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15, a2);
        v10 = v16;
        if ( v16 )
        {
          v11 = (SFMLOGICALSURFACE *)((char *)v16 + 256);
          if ( v16 != (SFMLOGICALSURFACE *)-256LL )
          {
            GreAcquirePushLockShared((SFMLOGICALSURFACE *)((char *)v16 + 256));
            v10 = v16;
          }
          SoSurfaceData = SFMLOGICALSURFACE::GetSoSurfaceData(v10, a3, v9);
          if ( v11 )
            GreReleasePushLockShared(v11);
        }
        else
        {
          SoSurfaceData = -1073741816;
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
      }
      else
      {
        SoSurfaceData = -1073741811;
      }
    }
    else
    {
      SoSurfaceData = -1071775733;
    }
  }
  else
  {
    SoSurfaceData = -1073741790;
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v14);
  GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v7 + 1040);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v17);
  return SoSurfaceData;
}
