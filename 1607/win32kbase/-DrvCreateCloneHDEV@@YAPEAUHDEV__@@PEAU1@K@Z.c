/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00C68F8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     bSpEnableSprites_0 @ 0x1C00010F0 (bSpEnableSprites_0.c)
 *     vEnableSynchronize_0 @ 0x1C00010F8 (vEnableSynchronize_0.c)
 *     IsbSpEnableSpritesSupported_0 @ 0x1C0001768 (IsbSpEnableSpritesSupported_0.c)
 *     IsvEnableSynchronizeSupported_0 @ 0x1C0001770 (IsvEnableSynchronizeSupported_0.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0025670 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     HmgShareLockCheck @ 0x1C0029900 (HmgShareLockCheck.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031B2C (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C003A380 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C003A3B0 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00BE240 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00BEDE4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00C536C (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00C53F0 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 */

struct _LIST_ENTRY *__fastcall DrvCreateCloneHDEV(struct _LIST_ENTRY *a1, __int64 a2)
{
  __int64 v3; // rax
  struct _LIST_ENTRY *v4; // r14
  __int64 v5; // rcx
  struct _LIST_ENTRY *v6; // rbx
  _QWORD *v7; // rdi
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v13; // [rsp+30h] [rbp-40h]
  __int64 v14[6]; // [rsp+40h] [rbp-30h] BYREF
  struct _LIST_ENTRY *v15; // [rsp+A0h] [rbp+30h] BYREF
  struct _LIST_ENTRY *v16; // [rsp+B0h] [rbp+40h] BYREF
  char v17; // [rsp+B8h] [rbp+48h] BYREF

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  *(_QWORD *)(v3 + 32) = 1LL;
  WdLogEvent5_WdEvent(v3);
  v16 = a1;
  v4 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v17, (struct PDEVOBJ *)&v16);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v15, (char *)a1);
  v6 = v15;
  if ( v15 )
  {
    v7 = PALLOCMEM2(0x9F8uLL, 1886221383LL, 1);
    if ( v7 && (int)IsbSpEnableSpritesSupported_0() >= 0 && (unsigned int)bSpEnableSprites_0() )
    {
      if ( (int)IsvEnableSynchronizeSupported_0() >= 0 )
        vEnableSynchronize_0();
      v8 = (unsigned int)ghbrGrayPattern;
      v7[10] = v7 + 67;
      *((_DWORD *)v7 + 144) = 0;
      *(_DWORD *)(v7[10] + 32LL) = 0xFFFFFF;
      v9 = v7[10];
      *((_DWORD *)v7 + 28) = 0;
      *(_QWORD *)(v9 + 112) = 0LL;
      v10 = HmgShareLockCheck(v8, 16);
      HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v14, v10);
      v13 = 1;
      v6[100].Blink = 0LL;
      v6[99].Flink = 0LL;
      LODWORD(v6[99].Blink) = 0;
      EBRUSHOBJ::vInitBrush(
        (unsigned int *)&v6[98].Blink,
        (__int64)v7,
        v14[0],
        *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1,
        v6[161].Flink[7].Blink,
        v6[161].Flink,
        v13);
      HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>((__int64)v14);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
      --HIDWORD(a1[2].Flink);
      PDEVOBJ::vUnreferencePdev(&v16, 0);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      PDEVOBJ::bDisabled((PDEVOBJ *)&v15, (__int64)a1[3].Blink & 0x400);
      v4 = v6;
    }
    else
    {
      PDEVOBJ::vClearSurface((PDEVOBJ *)&v15);
      PDEVOBJ::vUnreferencePdev(&v15, 0);
    }
    if ( v7 )
      Win32FreePool();
  }
  v11 = WdLogNewEntry5_WdTrace(v5);
  *(_QWORD *)(v11 + 24) = v4;
  WdLogEvent5_WdTrace(v11);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v17);
  return v4;
}
