/*
 * XREFs of Template_pz @ 0x1C00BECC4
 * Callers:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C000B5B0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngReleaseSemaphore @ 0x1C000BE60 (EngReleaseSemaphore.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0027050 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0027140 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00278E8 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0033390 (GreLockVisRgnSharedOrExclusive.c)
 *     hdevEnumerate @ 0x1C0034180 (hdevEnumerate.c)
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     GreUnlockVisRgn @ 0x1C0038810 (GreUnlockVisRgn.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0039BC0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A980 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A9B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     NtGdiDeleteObjectApp @ 0x1C00417F0 (NtGdiDeleteObjectApp.c)
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     HmgSetOwner @ 0x1C0042E90 (HmgSetOwner.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C004AA70 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C004AE80 (HmgIncProcessHandleCount.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005A9B8 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgNextOwned @ 0x1C005C050 (HmgNextOwned.c)
 *     EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x1C00BE820 (EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
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
