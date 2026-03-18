/*
 * XREFs of GreDwmGetSurfaceData @ 0x1C00F015C
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C0011F20 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C0011C58 (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x1C00126BC (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C008A510 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0091630 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 */

__int64 __fastcall GreDwmGetSurfaceData(__int64 a1, HLSURF a2, struct tagDWMSURFACEDATA *a3)
{
  SFMLOGICALSURFACE *v6; // rcx
  char *v7; // rbx
  unsigned int SoSurfaceData; // edi
  _BYTE v10[8]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[32]; // [rsp+28h] [rbp-30h] BYREF
  SFMLOGICALSURFACE *v12; // [rsp+48h] [rbp-10h]
  int v13; // [rsp+60h] [rbp+8h] BYREF
  char v14; // [rsp+78h] [rbp+20h] BYREF

  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v10, ghsemSprite);
  v13 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v14, ghsemDwmState, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 2576) + 96LL) == 6 )
      {
        SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v11, a2);
        v6 = v12;
        if ( v12 )
        {
          v7 = (char *)v12 + 264;
          if ( v12 != (SFMLOGICALSURFACE *)-264LL )
          {
            KeEnterCriticalRegion();
            GreAcquirePushLockShared(v7);
            v6 = v12;
          }
          SoSurfaceData = SFMLOGICALSURFACE::GetSoSurfaceData(v6, a3);
          if ( v7 )
          {
            GreReleasePushLockShared(v7);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          SoSurfaceData = -1073741816;
        }
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v11);
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
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v14);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v13);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v10);
  return SoSurfaceData;
}
