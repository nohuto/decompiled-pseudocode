/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
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
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     PushThreadGuardedObject @ 0x1C001CA70 (PushThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00343C4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00346E0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C00393C0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003AD7C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x1C004C300 (PopThreadGuardedObject.c)
 *     bDeleteSurface @ 0x1C005C5B0 (bDeleteSurface.c)
 *     GreDeleteSemaphore @ 0x1C005C6D0 (GreDeleteSemaphore.c)
 *     EngFreeMem @ 0x1C005C710 (EngFreeMem.c)
 *     HmgSafeNextObjt @ 0x1C005DA10 (HmgSafeNextObjt.c)
 *     ldevUnloadImage @ 0x1C005E930 (ldevUnloadImage.c)
 *     bSetDeviceSessionUsage @ 0x1C0066360 (bSetDeviceSessionUsage.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0069DA4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
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
  struct _LIST_ENTRY *Blink; // rax
  HSURF *v9; // rdi
  __int64 v10; // rsi
  int v11; // edx
  struct _ERESOURCE *v12; // rcx
  int v13; // r8d
  _DWORD *v14; // rax
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *Objt; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD v22[3]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23[5]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v24; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+50h]
  __int64 v27; // [rsp+B8h] [rbp+58h]

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 2);
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 56LL);
  *((_DWORD *)a1 + 3) = 0;
  v5 = v4 & 0x8000;
  memset(v23, 0, 32);
  v24 = (_DWORD *)v1;
  PushThreadGuardedObject(v23, (__int64)a1, (__int64)vUnreferencePdevWorker);
  while ( 1 )
  {
    v6 = *(_QWORD *)(v1 + 1560);
    if ( !v6 )
      break;
    v25 = *(_QWORD *)(v1 + 1560);
    v22[1] = *(_QWORD *)(v6 + 120);
    if ( (int)IsRFONTOBJ_vDeleteRFONTSupported_0() >= 0 )
      RFONTOBJ_vDeleteRFONTWrap_0();
    v25 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v25);
  }
  PopThreadGuardedObject(v23);
  if ( v24[894] )
  {
    v26 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 14);
    if ( (int)IsGetgpPFTDeviceSupported_0() >= 0 )
      v27 = *(_QWORD *)GetgpPFTDeviceWrap_0();
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
  if ( (v24[14] & 0x80000) == 0 )
  {
    Blink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
    if ( *(struct _LIST_ENTRY **)(v1 + 1464) != WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
    {
      bDeleteFont_0();
      Blink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
    }
    if ( *(struct _LIST_ENTRY **)(v1 + 1472) != Blink )
      bDeleteFont_0();
    if ( *(PVOID *)(v1 + 1480) != WPP_MAIN_CB.Reserved )
      bDeleteFont_0();
    if ( (*(_DWORD *)(v1 + 56) & 1) != 0 )
    {
      v9 = (HSURF *)(v1 + 1488);
      v10 = 6LL;
      do
      {
        bDeleteSurface(*v9++);
        --v10;
      }
      while ( v10 );
    }
  }
  PDEVOBJ::vDisableSurface((__int64 *)&v24, v3, 1);
  if ( *(_QWORD *)(v1 + 1544) && (int)IsPDEVOBJ_bDisableHalftoneSupported_0() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap_0();
  if ( !v3 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v24);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v24 + 394));
  v14 = v24;
  if ( (v24[14] & 0x80000) == 0 )
  {
    if ( v3 != 2 )
    {
      v15 = *(_DWORD **)(v1 + 1832);
      if ( v15 )
        HmgDecrementShareReferenceCount(v15);
      v16 = *(_DWORD **)(v1 + 1840);
      if ( v16 )
        HmgDecrementShareReferenceCount(v16);
      v22[0] = *(_QWORD *)(v1 + 1840);
      XEPALOBJ::bDeletePalette((XEPALOBJ *)v22, 1LL, 0);
      v14 = v24;
    }
    if ( *((_QWORD *)v14 + 342) != *((_QWORD *)v14 + 340) && (!v5 || !v3) && v2 )
      (*((void (__fastcall **)(_QWORD))v14 + 342))(*(_QWORD *)(v1 + 1824));
    if ( v5 )
    {
      if ( (int)IsUMPD_ldevUnloadImageSupported_0() >= 0 )
        UMPD_ldevUnloadImageWrap_0();
    }
    else
    {
      ldevUnloadImage(*(_QWORD *)(v1 + 1816));
    }
    if ( (v24[14] & 0x400) == 0 )
    {
      v12 = *(struct _ERESOURCE **)(v1 + 2600);
      if ( v12 )
        bSetDeviceSessionUsage(v12, 0LL);
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
  GreReleaseHmgrSemaphore(v20, v17, v21);
  if ( v5 )
    EngFreeMem((PVOID)v1);
  else
    Win32FreePool();
}
