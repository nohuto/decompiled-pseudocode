/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
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
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C002360C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     bDeleteSurface @ 0x1C0037780 (bDeleteSurface.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C0037DD4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00380F0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     PopThreadGuardedObject @ 0x1C003ED40 (PopThreadGuardedObject.c)
 *     PushThreadGuardedObject @ 0x1C0052730 (PushThreadGuardedObject.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0059CB8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     GreDeleteSemaphore @ 0x1C0059DB0 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C0059DF0 (EngFreeMem.c)
 *     HmgSafeNextObjt @ 0x1C005B0C0 (HmgSafeNextObjt.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C005BC80 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ldevUnloadImage @ 0x1C005C300 (ldevUnloadImage.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vUnreferencePdevWorker(struct tagUNREFDATA *a1)
{
  __int64 v1; // rbx
  int v2; // r12d
  unsigned int v3; // r14d
  int v4; // r15d
  int v5; // r15d
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  struct _ERESOURCE *v12; // rcx
  int v13; // r8d
  __int64 v14; // rax
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 *Objt; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+90h] [rbp+40h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+50h]

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 2);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 56LL);
  *((_DWORD *)a1 + 3) = 0;
  v5 = v4 & 0x8000;
  memset(v22, 0, sizeof(v22));
  v23 = v1;
  PushThreadGuardedObject(v22, (__int64)a1, (__int64)vUnreferencePdevWorker);
  while ( *(_QWORD *)(v1 + 1560) )
  {
    v24 = *(_QWORD *)(v1 + 1560);
    if ( (int)IsRFONTOBJ_vDeleteRFONTSupported_0() >= 0 )
      RFONTOBJ_vDeleteRFONTWrap_0();
    v24 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
  }
  PopThreadGuardedObject(v22);
  if ( *(_DWORD *)(v1 + 2128) && (*(_DWORD *)(v23 + 56) & 0x40) != 0 )
  {
    v24 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    if ( (int)IsGetgpPFTDeviceSupported_0() >= 0 )
      v25 = *(_QWORD *)GetgpPFTDeviceWrap_0();
    if ( (int)IsDEVICE_PFTOBJ_pPFFGetSupported_0() >= 0 )
      DEVICE_PFTOBJ_pPFFGetWrap_0();
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported_0() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap_0();
  }
  v6 = *(_QWORD *)(v1 + 1736);
  while ( v6 )
  {
    *(_DWORD *)(v6 + 228) = 1;
    if ( (int)IsvUnmapRemoteFontsSupported_0() >= 0 )
      vUnmapRemoteFonts_0();
    v6 = *(_QWORD *)(v6 + 248);
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
  if ( (*(_DWORD *)(v23 + 56) & 0x80000) == 0 )
  {
    v8 = qword_1C0103E58;
    if ( *(_QWORD *)(v1 + 1464) != qword_1C0103E58 )
    {
      bDeleteFont_0();
      v8 = qword_1C0103E58;
    }
    if ( *(_QWORD *)(v1 + 1472) != v8 )
      bDeleteFont_0();
    if ( *(_QWORD *)(v1 + 1480) != qword_1C0103E70 )
      bDeleteFont_0();
    if ( (*(_DWORD *)(v1 + 56) & 1) != 0 )
    {
      v9 = (__int64 *)(v1 + 1488);
      v10 = 6LL;
      do
      {
        bDeleteSurface(*v9++, v7);
        --v10;
      }
      while ( v10 );
    }
  }
  PDEVOBJ::vDisableSurface(&v23, v3, 1);
  if ( *(_QWORD *)(v1 + 1544) && (int)IsPDEVOBJ_bDisableHalftoneSupported_0() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap_0();
  if ( !v3 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v23);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v23 + 1576));
  v14 = v23;
  if ( (*(_DWORD *)(v23 + 56) & 0x80000) == 0 )
  {
    if ( v3 != 2 )
    {
      v15 = *(_DWORD **)(v1 + 1832);
      if ( v15 )
        HmgDecrementShareReferenceCount(v15);
      v16 = *(_DWORD **)(v1 + 1840);
      if ( v16 )
        HmgDecrementShareReferenceCount(v16);
      v24 = *(_QWORD *)(v1 + 1840);
      XEPALOBJ::bDeletePalette((XEPALOBJ *)&v24, 1, 0);
      v14 = v23;
    }
    if ( *(_QWORD *)(v14 + 2736) != *(_QWORD *)(v14 + 2720) && (!v5 || !v3) && v2 )
      (*(void (__fastcall **)(_QWORD))(v14 + 2736))(*(_QWORD *)(v1 + 1824));
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
  v17 = 0LL;
  GreAcquireHmgrSemaphore((__int64)v12, v11, v13);
  while ( 1 )
  {
    LOBYTE(v18) = 5;
    Objt = (__int64 *)HmgSafeNextObjt(v17, v18);
    if ( !Objt )
      break;
    v17 = *Objt;
    if ( Objt[6] == v1 )
      Objt[6] = 0LL;
  }
  GreReleaseHmgrSemaphore(v20, v18, v21);
  if ( v5 )
    EngFreeMem((PVOID)v1);
  else
    Win32FreePool();
}
