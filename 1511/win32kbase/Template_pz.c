/*
 * XREFs of Template_pz @ 0x1C00C00D4
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0022AE0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     HmgSetOwner @ 0x1C0023D60 (HmgSetOwner.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0024A30 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgDecProcessHandleCount @ 0x1C002522C (HmgDecProcessHandleCount.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0028110 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002A290 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C002A680 (HmgIncProcessHandleCount.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002B8A0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002B990 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C144 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0035D30 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgRemoveObject @ 0x1C0036F40 (HmgRemoveObject.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     HmgNextOwned @ 0x1C0037530 (HmgNextOwned.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C00379B0 (GreLockVisRgnSharedOrExclusive.c)
 *     hdevEnumerate @ 0x1C0037B90 (hdevEnumerate.c)
 *     GreUnlockVisRgn @ 0x1C00439F0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0044600 (GreLockVisRgn.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00458F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0045924 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C004918C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C006E360 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngReleaseSemaphore @ 0x1C006E7A0 (EngReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x1C00BFC30 (EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_pz(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, __int64 a4, const wchar_t *a5)
{
  __int64 v6; // rax
  int v7; // edx
  const wchar_t *v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = a4;
  UserData.Ptr = (ULONGLONG)&v14;
  *(_QWORD *)&UserData.Size = 8LL;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a5[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10;
  }
  v12 = v7;
  v13 = 0;
  v8 = L"NULL";
  if ( a5 )
    v8 = a5;
  v11 = v8;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 2u, &UserData);
}
