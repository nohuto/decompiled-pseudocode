/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00B8D18
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     bSpEnableSprites_0 @ 0x1C00010F0 (bSpEnableSprites_0.c)
 *     vEnableSynchronize_0 @ 0x1C00010F8 (vEnableSynchronize_0.c)
 *     IsbSpEnableSpritesSupported_0 @ 0x1C0001758 (IsbSpEnableSpritesSupported_0.c)
 *     IsvEnableSynchronizeSupported_0 @ 0x1C0001760 (IsvEnableSynchronizeSupported_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C00331E0 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0033210 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0034504 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00393F0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     HmgShareLockCheck @ 0x1C003AFC0 (HmgShareLockCheck.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00B02CC (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00B0E84 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00B77B8 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00B783C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 */

__int64 __fastcall DrvCreateCloneHDEV(char *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v18[6]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+30h] BYREF
  char *v20; // [rsp+B0h] [rbp+40h] BYREF
  char v21; // [rsp+B8h] [rbp+48h] BYREF

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  *(_QWORD *)(v3 + 32) = 1LL;
  WdLogEvent5_WdEvent(v3);
  v20 = a1;
  v4 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v21, (struct PDEVOBJ *)&v20);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v19, a1);
  v8 = v19;
  if ( v19 )
  {
    v9 = PALLOCMEM2(0x9F8uLL, 1886221383LL, 1);
    if ( v9 && (int)IsbSpEnableSpritesSupported_0() >= 0 && (unsigned int)bSpEnableSprites_0() )
    {
      if ( (int)IsvEnableSynchronizeSupported_0() >= 0 )
        vEnableSynchronize_0();
      v10 = (int)ghbrGrayPattern;
      v9[10] = v9 + 67;
      *((_DWORD *)v9 + 144) = 0;
      *(_DWORD *)(v9[10] + 32LL) = 0xFFFFFF;
      v11 = v9[10];
      *((_DWORD *)v9 + 28) = 0;
      *(_QWORD *)(v11 + 112) = 0LL;
      v12 = HmgShareLockCheck(v10, 16);
      HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v18, v12);
      *(_QWORD *)(v8 + 1608) = 0LL;
      *(_QWORD *)(v8 + 1584) = 0LL;
      *(_DWORD *)(v8 + 1592) = 0;
      EBRUSHOBJ::vInitBrush(
        (unsigned int *)(v8 + 1576),
        (__int64)v9,
        v18[0],
        (__int64)ppalDefault,
        *(_QWORD *)(*(_QWORD *)(v8 + 2576) + 120LL),
        *(_QWORD *)(v8 + 2576),
        1u);
      HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>((__int64)v18);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
      --*((_DWORD *)a1 + 9);
      PDEVOBJ::vUnreferencePdev((__int64 *)&v20, 0);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v13);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      PDEVOBJ::bDisabled((PDEVOBJ *)&v19, *((_DWORD *)a1 + 14) & 0x400);
      v4 = v8;
    }
    else
    {
      PDEVOBJ::vClearSurface((PDEVOBJ *)&v19);
      PDEVOBJ::vUnreferencePdev(&v19, 0);
    }
    if ( v9 )
      Win32FreePool();
  }
  v14 = WdLogNewEntry5_WdTrace(v6, v5, v7);
  *(_QWORD *)(v14 + 24) = v4;
  WdLogEvent5_WdTrace(v14);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v21, v15, v16);
  return v4;
}
