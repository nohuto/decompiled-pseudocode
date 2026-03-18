/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00BAC28
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     bSpEnableSprites_0 @ 0x1C00010F0 (bSpEnableSprites_0.c)
 *     vEnableSynchronize_0 @ 0x1C00010F8 (vEnableSynchronize_0.c)
 *     IsbSpEnableSpritesSupported_0 @ 0x1C00016F8 (IsbSpEnableSpritesSupported_0.c)
 *     IsvEnableSynchronizeSupported_0 @ 0x1C0001700 (IsvEnableSynchronizeSupported_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C00378D0 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0037900 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0037F14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C005BCB0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00B3CF0 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00B4824 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B58C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 */

struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *__fastcall DrvCreateCloneHDEV(
        struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *a1,
        __int64 a2)
{
  __int64 v3; // rax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v7; // rbx
  _QWORD *v8; // rsi
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  struct HOBJ__ **v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rax
  int v16; // [rsp+30h] [rbp-28h]
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v17; // [rsp+60h] [rbp+8h] BYREF
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v18; // [rsp+70h] [rbp+18h] BYREF
  char v19; // [rsp+78h] [rbp+20h] BYREF

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  *(_QWORD *)(v3 + 32) = 1LL;
  WdLogEvent5_WdEvent(v3);
  v18 = a1;
  v4 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v19, (struct PDEVOBJ *)&v18, v5);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v17, (char *)a1);
  v7 = v17;
  if ( v17 )
  {
    v8 = PALLOCMEM2(0x9D8uLL, 1886221383LL, 1);
    if ( v8 && (int)IsbSpEnableSpritesSupported_0() >= 0 && (unsigned int)bSpEnableSprites_0() )
    {
      if ( (int)IsvEnableSynchronizeSupported_0() >= 0 )
        vEnableSynchronize_0();
      v9 = (int)ghbrGrayPattern;
      v8[10] = v8 + 67;
      *((_DWORD *)v8 + 144) = 0;
      *(_DWORD *)(v8[10] + 32LL) = 0xFFFFFF;
      v10 = v8[10];
      *((_DWORD *)v8 + 28) = 0;
      *(_QWORD *)(v10 + 112) = 0LL;
      v11 = HmgShareLockCheck(v9, 16);
      v16 = 1;
      v7[201] = 0LL;
      v12 = (struct HOBJ__ **)v11;
      v7[198] = 0LL;
      *(_DWORD *)&v7[199] = 0;
      EBRUSHOBJ::vInitBrush(
        (unsigned int *)&v7[197],
        (__int64)v8,
        v11,
        (__int64)WPP_MAIN_CB.Dpc.DpcListEntry.Next,
        *(_QWORD *)(*(_QWORD *)&v7[322] + 120LL),
        *(_QWORD *)&v7[322],
        v16);
      DEC_SHARE_REF_CNT_LAZY0(v12);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
      --*((_DWORD *)&a1[4] + 1);
      PDEVOBJ::vUnreferencePdev(&v18, 0);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v13);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      PDEVOBJ::bDisabled((PDEVOBJ *)&v17, *(_DWORD *)&a1[7] & 0x400);
      v4 = v7;
    }
    else
    {
      PDEVOBJ::vClearSurface((PDEVOBJ *)&v17);
      PDEVOBJ::vUnreferencePdev(&v17, 0);
    }
    if ( v8 )
      Win32FreePool();
  }
  v14 = WdLogNewEntry5_WdTrace(v6);
  *(_QWORD *)(v14 + 24) = v4;
  WdLogEvent5_WdTrace(v14);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v19);
  return v4;
}
