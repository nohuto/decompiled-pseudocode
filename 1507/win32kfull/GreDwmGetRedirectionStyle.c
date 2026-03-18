/*
 * XREFs of GreDwmGetRedirectionStyle @ 0x1C02625BC
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C0011F20 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0011B08 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x1C00126BC (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C008A510 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0091630 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 */

__int64 __fastcall GreDwmGetRedirectionStyle(__int64 a1, HLSURF a2, __int64 a3)
{
  unsigned int v5; // esi
  SFMLOGICALSURFACE *v6; // rcx
  char *v7; // rbx
  _BYTE v9[8]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v10[32]; // [rsp+38h] [rbp-30h] BYREF
  SFMLOGICALSURFACE *v11; // [rsp+58h] [rbp-10h]
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  char v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = a1;
  v5 = -1073741811;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v9, ghsemSprite);
  LODWORD(v12) = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v13, ghsemDwmState, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v10, a2);
    v6 = v11;
    if ( v11 )
    {
      v7 = (char *)v11 + 264;
      if ( v11 != (SFMLOGICALSURFACE *)-264LL )
      {
        KeEnterCriticalRegion();
        GreAcquirePushLockShared(v7);
        v6 = v11;
      }
      SFMLOGICALSURFACE::GetRedirectionInfo(
        v6,
        (enum _HLSURF_REDIRECTIONSTYLE *)a3,
        (unsigned int *)(a3 + 4),
        (unsigned int *)(a3 + 8),
        (void **)(a3 + 24),
        (struct _LUID *)(a3 + 12));
      v5 = 0;
      if ( v7 )
      {
        GreReleasePushLockShared(v7);
        KeLeaveCriticalRegion();
      }
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v10);
  }
  else
  {
    v5 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v13);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v12);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v9);
  return v5;
}
