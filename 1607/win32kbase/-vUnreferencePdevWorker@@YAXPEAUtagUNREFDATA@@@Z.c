/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0069C90
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 * Callees:
 *     IsPFTOBJ_bUnloadWorkhorseSupported_0 @ 0x1C00010C0 (IsPFTOBJ_bUnloadWorkhorseSupported_0.c)
 *     PFTOBJ_bUnloadWorkhorseWrap_0 @ 0x1C00010C8 (PFTOBJ_bUnloadWorkhorseWrap_0.c)
 *     bDeleteFont_0 @ 0x1C00011B0 (bDeleteFont_0.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported_0 @ 0x1C00011B8 (IsPDEVOBJ_bDisableHalftoneSupported_0.c)
 *     PDEVOBJ_bDisableHalftoneWrap_0 @ 0x1C00011C0 (PDEVOBJ_bDisableHalftoneWrap_0.c)
 *     IsRFONTOBJ_vDeleteRFONTSupported_0 @ 0x1C00011F0 (IsRFONTOBJ_vDeleteRFONTSupported_0.c)
 *     RFONTOBJ_vDeleteRFONTWrap_0 @ 0x1C00011F8 (RFONTOBJ_vDeleteRFONTWrap_0.c)
 *     GetgpPFTDeviceWrap_0 @ 0x1C0001200 (GetgpPFTDeviceWrap_0.c)
 *     IsGetgpPFTDeviceSupported_0 @ 0x1C0001208 (IsGetgpPFTDeviceSupported_0.c)
 *     IsDEVICE_PFTOBJ_pPFFGetSupported_0 @ 0x1C0001210 (IsDEVICE_PFTOBJ_pPFFGetSupported_0.c)
 *     DEVICE_PFTOBJ_pPFFGetWrap_0 @ 0x1C0001218 (DEVICE_PFTOBJ_pPFFGetWrap_0.c)
 *     IsvUnmapRemoteFontsSupported_0 @ 0x1C0001220 (IsvUnmapRemoteFontsSupported_0.c)
 *     vUnmapRemoteFonts_0 @ 0x1C0001228 (vUnmapRemoteFonts_0.c)
 *     IsvCleanupOwnedRedirectionDeviceBitmapsSupported_0 @ 0x1C0001230 (IsvCleanupOwnedRedirectionDeviceBitmapsSupported_0.c)
 *     vCleanupOwnedRedirectionDeviceBitmapsWrap_0 @ 0x1C0001238 (vCleanupOwnedRedirectionDeviceBitmapsWrap_0.c)
 *     IsUMPD_ldevUnloadImageSupported_0 @ 0x1C0001240 (IsUMPD_ldevUnloadImageSupported_0.c)
 *     UMPD_ldevUnloadImageWrap_0 @ 0x1C0001248 (UMPD_ldevUnloadImageWrap_0.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C0025640 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0027064 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00319E8 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0031D40 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     bDeleteSurface @ 0x1C003A320 (bDeleteSurface.c)
 *     PushThreadGuardedObject @ 0x1C0064820 (PushThreadGuardedObject.c)
 *     PopThreadGuardedObject @ 0x1C00648D0 (PopThreadGuardedObject.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C006A034 (--1RFONTOBJ@@QEAA@XZ.c)
 *     GreDeleteSemaphore @ 0x1C006A130 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C006A170 (EngFreeMem.c)
 *     HmgSafeNextObjt @ 0x1C006B3F0 (HmgSafeNextObjt.c)
 *     ldevUnloadImage @ 0x1C006C2D0 (ldevUnloadImage.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vUnreferencePdevWorker(struct tagUNREFDATA *a1)
{
  __int64 v1; // rbx
  int v2; // r12d
  unsigned int v3; // r14d
  int v4; // r15d
  int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // rdi
  void **v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rsi
  int v11; // edx
  struct _ERESOURCE *v12; // rcx
  int v13; // r8d
  _DWORD *v14; // rax
  unsigned int *v15; // rcx
  unsigned int *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *Objt; // rax
  __int64 v20; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v22[5]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v23; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+50h]
  __int64 v26; // [rsp+B8h] [rbp+58h]

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 2);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 56LL);
  *((_DWORD *)a1 + 3) = 0;
  v5 = v4 & 0x8000;
  memset(v22, 0, 32);
  v23 = (_DWORD *)v1;
  PushThreadGuardedObject(v22, (__int64)a1, (__int64)vUnreferencePdevWorker);
  while ( 1 )
  {
    v6 = *(_QWORD *)(v1 + 1560);
    if ( !v6 )
      break;
    v24 = *(_QWORD *)(v1 + 1560);
    v21[1] = *(_QWORD *)(v6 + 120);
    if ( (int)IsRFONTOBJ_vDeleteRFONTSupported_0() >= 0 )
      RFONTOBJ_vDeleteRFONTWrap_0();
    v24 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
  }
  PopThreadGuardedObject(v22);
  if ( v23[892] )
  {
    v25 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    if ( (int)IsGetgpPFTDeviceSupported_0() >= 0 )
      v26 = *(_QWORD *)GetgpPFTDeviceWrap_0();
    if ( (int)IsDEVICE_PFTOBJ_pPFFGetSupported_0() >= 0 )
      DEVICE_PFTOBJ_pPFFGetWrap_0();
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported_0() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap_0();
  }
  v7 = *(_QWORD *)(v1 + 1736);
  while ( v7 )
  {
    *(_DWORD *)(v7 + 228) = 1;
    if ( (int)IsvUnmapRemoteFontsSupported_0() >= 0 )
      vUnmapRemoteFonts_0();
    v7 = *(_QWORD *)(v7 + 248);
    Win32FreePool();
  }
  if ( (int)IsvCleanupOwnedRedirectionDeviceBitmapsSupported_0() >= 0 )
    vCleanupOwnedRedirectionDeviceBitmapsWrap_0();
  if ( *(_QWORD *)(v1 + 1728) )
  {
    Win32FreePool();
    *(_QWORD *)(v1 + 1728) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 2616) )
    Win32FreePool();
  if ( (v23[14] & 0x80000) == 0 )
  {
    v8 = gahStockObjects;
    if ( *(void **)(v1 + 1464) != gahStockObjects[13] )
    {
      bDeleteFont_0();
      v8 = gahStockObjects;
    }
    if ( *(void **)(v1 + 1472) != v8[13] )
    {
      bDeleteFont_0();
      v8 = gahStockObjects;
    }
    if ( *(void **)(v1 + 1480) != v8[16] )
      bDeleteFont_0();
    if ( (*(_DWORD *)(v1 + 56) & 1) != 0 )
    {
      v9 = (__int64 *)(v1 + 1488);
      v10 = 6LL;
      do
      {
        bDeleteSurface(*v9++);
        --v10;
      }
      while ( v10 );
    }
  }
  PDEVOBJ::vDisableSurface((__int64 *)&v23, v3, 1);
  if ( *(_QWORD *)(v1 + 1544) && (int)IsPDEVOBJ_bDisableHalftoneSupported_0() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap_0();
  if ( !v3 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v23);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v23 + 394));
  v14 = v23;
  if ( (v23[14] & 0x80000) == 0 )
  {
    if ( v3 != 2 )
    {
      v15 = *(unsigned int **)(v1 + 1832);
      if ( v15 )
        HmgDecrementShareReferenceCount(v15);
      v16 = *(unsigned int **)(v1 + 1840);
      if ( v16 )
        HmgDecrementShareReferenceCount(v16);
      v21[0] = *(_QWORD *)(v1 + 1840);
      XEPALOBJ::bDeletePalette((XEPALOBJ *)v21, 1LL, 0);
      v14 = v23;
    }
    if ( *((_QWORD *)v14 + 341) != *((_QWORD *)v14 + 339) && (!v5 || !v3) && v2 )
      (*((void (__fastcall **)(_QWORD))v14 + 341))(*(_QWORD *)(v1 + 1824));
    if ( v5 )
    {
      if ( (int)IsUMPD_ldevUnloadImageSupported_0() >= 0 )
        UMPD_ldevUnloadImageWrap_0();
    }
    else
    {
      ldevUnloadImage(*(_QWORD *)(v1 + 1816));
    }
  }
  if ( (*(_DWORD *)(v1 + 56) & 0x10000) == 0 )
  {
    v12 = *(struct _ERESOURCE **)(v1 + 64);
    if ( v12 )
      GreDeleteSemaphore(v12);
  }
  if ( (*(_DWORD *)(v1 + 56) & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 72));
  GreAcquireHmgrSemaphore((__int64)v12, v11, v13);
  v18 = 0LL;
  while ( 1 )
  {
    LOBYTE(v17) = 5;
    Objt = (__int64 *)HmgSafeNextObjt(v18, v17);
    if ( !Objt )
      break;
    v18 = *Objt;
    if ( Objt[6] == v1 )
      Objt[6] = 0LL;
  }
  GreReleaseHmgrSemaphore(v20);
  if ( v5 )
    EngFreeMem((PVOID)v1);
  else
    Win32FreePool();
}
