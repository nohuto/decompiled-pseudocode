/*
 * XREFs of ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002EED0
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000C9C4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002B330 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002C640 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002CA00 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002CAC0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002D570 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D8E0 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DB70 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EC90 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F410 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?UpdateNonClientMetrics@CWindowData@@QEAAXXZ @ 0x180017F80 (-UpdateNonClientMetrics@CWindowData@@QEAAXXZ.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180029C10 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A920 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::SyncWindowData(CWindowList *this, struct IDwmWindow *a2, struct CWindowData *a3)
{
  char v6; // al
  __int64 v7; // rax
  int v8; // eax
  bool v9; // zf
  __m128d v10; // xmm0
  int v11; // eax
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  bool v19; // al
  __int64 v20; // rax
  char v21; // cl
  char v22; // al
  char v23; // al
  HWND v24; // rcx
  CDesktopManager *v26; // rcx
  _BYTE v27[16]; // [rsp+20h] [rbp-48h] BYREF

  *((_QWORD *)a3 + 4) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 88LL))(a2, (char *)a3 + 188);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 96LL))(a2, (char *)a3 + 204);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 104LL))(a2, (char *)a3 + 220);
  *((_DWORD *)a3 + 25) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)a3 + 26) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *((_DWORD *)a3 + 27) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  *((_DWORD *)a3 + 28) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 56LL))(a2);
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2);
  *((_BYTE *)a3 + 552) &= ~1u;
  *((_BYTE *)a3 + 552) |= v6 & 1;
  *((_QWORD *)a3 + 15) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 64LL))(a2);
  v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 128LL))(a2);
  *((_OWORD *)a3 + 18) = *(_OWORD *)v7;
  *((_QWORD *)a3 + 38) = *(_QWORD *)(v7 + 16);
  *((_DWORD *)a3 + 78) = *(_DWORD *)(v7 + 24);
  v8 = *((_DWORD *)a3 + 72);
  if ( v8 == 2 )
  {
    *((_QWORD *)a3 + 34) = 0x3FF0000000000000LL;
    *((_QWORD *)a3 + 35) = 0x3FF0000000000000LL;
  }
  else
  {
    v9 = v8 == 1;
    v10 = 0LL;
    v11 = *((_DWORD *)a3 + 73);
    if ( v9 )
    {
      v26 = CDesktopManager::s_pDesktopManagerInstance;
      *((double *)a3 + 34) = (double)v11 / (double)*((int *)CDesktopManager::s_pDesktopManagerInstance + 364);
      *((double *)a3 + 35) = (double)v11 / (double)*((int *)v26 + 365);
    }
    else
    {
      v10.m128d_f64[0] = (double)v11 / 96.0;
      *((__m128d *)a3 + 17) = _mm_unpacklo_pd(v10, v10);
    }
  }
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
  *((_BYTE *)a3 + 552) &= ~2u;
  *((_BYTE *)a3 + 552) |= 2 * (v12 & 1);
  *((_BYTE *)a3 + 316) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 144LL))(a2);
  v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 200LL))(a2);
  *((_BYTE *)a3 + 553) &= ~1u;
  *((_BYTE *)a3 + 553) |= v13 & 1;
  v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 216LL))(a2);
  *((_BYTE *)a3 + 556) &= ~0x20u;
  *((_BYTE *)a3 + 556) |= 32 * (v14 & 1);
  *(_OWORD *)((char *)a3 + 152) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, _BYTE *))(*(_QWORD *)a2 + 208LL))(
                                               a2,
                                               v27);
  v15 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 232LL))(a2);
  *((_BYTE *)a3 + 552) &= ~0x10u;
  *((_BYTE *)a3 + 552) |= 16 * (v15 & 1);
  v16 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 240LL))(a2);
  *((_BYTE *)a3 + 554) &= ~0x20u;
  *((_BYTE *)a3 + 554) |= 32 * (v16 & 1);
  v17 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 264LL))(a2);
  *((_BYTE *)a3 + 556) &= ~1u;
  *((_BYTE *)a3 + 556) |= v17 & 1;
  v18 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
  *((_BYTE *)a3 + 556) &= ~0x80u;
  *((_BYTE *)a3 + 556) |= v18 << 7;
  v19 = ((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2) & 0x800000) != 0;
  *((_BYTE *)a3 + 557) &= ~1u;
  *((_BYTE *)a3 + 557) |= v19;
  v20 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2);
  *((_BYTE *)a3 + 557) &= ~2u;
  *((_BYTE *)a3 + 557) |= 2 * ((v20 & 0x400000) != 0);
  CWindowData::UpdateNonClientMetrics(a3);
  v21 = *((_BYTE *)a3 + 556);
  if ( (v21 & 0x21) == 0 )
    *((_BYTE *)a3 + 556) = v21 & 0xBF;
  v22 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 248LL))(a2);
  *((_BYTE *)a3 + 555) &= ~0x20u;
  *((_BYTE *)a3 + 555) |= 32 * (v22 & 1);
  v23 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2);
  *((_BYTE *)a3 + 556) &= ~0x10u;
  *((_BYTE *)a3 + 556) |= 16 * (v23 & 1);
  CWindowList::HasIconicBitmapChange(this, a2);
  CWindowList::CheckForMaximizedChange(this, a3);
  v24 = (HWND)*((_QWORD *)a3 + 5);
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)a3 + 188);
  if ( v24 )
    *((_DWORD *)a3 + 80) = (unsigned int)GetPropW(v24, (LPCWSTR)0xA914);
  else
    *((_DWORD *)a3 + 80) = 0;
  return 0LL;
}
