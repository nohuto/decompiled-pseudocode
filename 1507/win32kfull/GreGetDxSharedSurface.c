/*
 * XREFs of GreGetDxSharedSurface @ 0x1C000A8D8
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0005B40 (NtUserHwndQueryRedirectionInfo.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C000AB30 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0264C50 (DxgkEngGetRedirBitmapSharedHandle.c)
 * Callees:
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C000AAFC (UserIsWindowWithNoRedirectionBitmap.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0010568 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C0011EC0 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C0011EE8 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C011334C (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall GreGetDxSharedSurface(HWND a1, _QWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int *v15; // r9
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // rcx
  unsigned int v20; // eax
  unsigned int *v21; // r8
  SFMLOGICALSURFACE *v22; // rcx
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  v10 = -1071775733;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsWindowWithNoRedirectionBitmap(a1) )
    {
LABEL_19:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      return v10;
    }
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)v23, a1, 0LL);
    v11 = v23[0];
    if ( !v23[0] )
    {
      v10 = -1073741811;
LABEL_17:
      if ( v11 )
        DEC_SHARE_REF_CNT(v11);
      goto LABEL_19;
    }
    v12 = *(_QWORD *)(v23[0] + 128LL);
    if ( v23[0] != -120LL )
    {
      KeEnterCriticalRegion();
      GreAcquirePushLockShared(v11 + 120);
    }
    if ( !*(_QWORD *)(v12 + 192)
      || !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v12)
      || (unsigned int)UserIsRemoteConnection() && !(unsigned int)UserIsRemoteAndNotDisconnectConnection() )
    {
      *a2 = 0LL;
      v10 = -1073741822;
      *a4 = 87;
      *a5 = 1;
      *a6 = 0LL;
      *a3 = 0;
      a3[1] = 0;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v12 + 200) )
    {
      SFMLOGICALSURFACE::AdapterLuid((SFMLOGICALSURFACE *)v12);
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v12 + 248) & 0x100) != 0 || v23[0] == *(_QWORD *)a3 )
      {
        *a2 = *(_QWORD *)(v12 + 200);
        *a4 = *(_DWORD *)(v12 + 216);
        v20 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        *v21 = v20;
        *(_QWORD *)a3 = **(_QWORD **)&SFMLOGICALSURFACE::AdapterLuid(v22);
        goto LABEL_12;
      }
    }
    else
    {
      v13 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v12 + 192));
      if ( (*a5 & 4) == 0 || (*(_DWORD *)(v13 + 116) & 0x400) != 0 || *(_QWORD *)(v13 + 504) == *(_QWORD *)a3 )
      {
        *a2 = *(_QWORD *)(v13 + 496);
        *a4 = 87;
        v14 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        *v15 = v14;
        *(_QWORD *)a3 = *(_QWORD *)(v16 + 504);
LABEL_12:
        v17 = SFMLOGICALSURFACE::uiDxPresentFlags((SFMLOGICALSURFACE *)v12);
        v18 = *(unsigned int *)(*(_QWORD *)(v12 + 192) + 68LL);
        if ( (v17 & 2) != 0 )
          v18 |= 0x8000000000000000uLL;
        v10 = 0;
        *a6 = v18;
        goto LABEL_15;
      }
    }
    v10 = -1071775484;
LABEL_15:
    if ( v11 != -120 )
    {
      GreReleasePushLockShared(v11 + 120);
      KeLeaveCriticalRegion();
    }
    goto LABEL_17;
  }
  return v10;
}
