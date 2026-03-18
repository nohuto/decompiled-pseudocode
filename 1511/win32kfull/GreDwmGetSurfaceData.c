/*
 * XREFs of GreDwmGetSurfaceData @ 0x1C007E0CC
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C007E240 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C003BB38 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0068580 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C007B5B0 (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 */

__int64 __fastcall GreDwmGetSurfaceData(__int64 a1, __int64 a2, struct tagDWMSURFACEDATA *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  SFMLOGICALSURFACE *v8; // rdi
  __int64 v9; // rbx
  unsigned int SoSurfaceData; // edi
  _BYTE v12[8]; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v13[16]; // [rsp+28h] [rbp-10h] BYREF
  int v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v13, ghsemSprite);
  v14 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v12, ghsemDwmState, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 2576) + 96LL) == 6 )
      {
        v15 = 0LL;
        if ( a2 && (LOBYTE(v6) = 18, v7 = HmgShareLockCheck(a2, v6), v15 = v7, (v8 = (SFMLOGICALSURFACE *)v7) != 0LL) )
        {
          v9 = v7 + 264;
          if ( v7 != -264 )
          {
            KeEnterCriticalRegion();
            GreAcquirePushLockShared(v9);
          }
          SoSurfaceData = SFMLOGICALSURFACE::GetSoSurfaceData(v8, a3);
          if ( v9 )
          {
            GreReleasePushLockShared(v9);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          SoSurfaceData = -1073741816;
        }
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v15);
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
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v12);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v14);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v13);
  return SoSurfaceData;
}
