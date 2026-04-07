/*
 * XREFs of ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032060
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180007ED8 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002F9F0 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002FB90 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002FC50 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800305E0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030950 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030BE0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031E10 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180032600 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800335A0 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?UpdateNonClientMetrics@CWindowData@@QEAAXXZ @ 0x18001D870 (-UpdateNonClientMetrics@CWindowData@@QEAAXXZ.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002CDA0 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DC50 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
  bool v21; // al
  char v22; // cl
  char v23; // al
  char v24; // al
  HWND v25; // rcx
  unsigned int PropW; // eax
  char v27; // al
  CDesktopManager *v29; // rcx
  _BYTE v30[16]; // [rsp+20h] [rbp-48h] BYREF

  *((_QWORD *)a3 + 4) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 88LL))(a2, (char *)a3 + 188);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 96LL))(a2, (char *)a3 + 204);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 104LL))(a2, (char *)a3 + 220);
  *((_DWORD *)a3 + 25) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)a3 + 26) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *((_DWORD *)a3 + 27) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  *((_DWORD *)a3 + 28) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 56LL))(a2);
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2);
  *((_BYTE *)a3 + 568) &= ~1u;
  *((_BYTE *)a3 + 568) |= v6 & 1;
  *((_QWORD *)a3 + 15) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 64LL))(a2);
  v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 128LL))(a2);
  *((_OWORD *)a3 + 19) = *(_OWORD *)v7;
  *((_QWORD *)a3 + 40) = *(_QWORD *)(v7 + 16);
  *((_DWORD *)a3 + 82) = *(_DWORD *)(v7 + 24);
  v8 = *((_DWORD *)a3 + 76);
  if ( v8 == 2 )
  {
    *((_QWORD *)a3 + 36) = 0x3FF0000000000000LL;
    *((_QWORD *)a3 + 37) = 0x3FF0000000000000LL;
  }
  else
  {
    v9 = v8 == 1;
    v10 = 0LL;
    v11 = *((_DWORD *)a3 + 77);
    if ( v9 )
    {
      v29 = CDesktopManager::s_pDesktopManagerInstance;
      *((double *)a3 + 36) = (double)v11 / (double)*((int *)CDesktopManager::s_pDesktopManagerInstance + 364);
      *((double *)a3 + 37) = (double)v11 / (double)*((int *)v29 + 365);
    }
    else
    {
      v10.m128d_f64[0] = (double)v11 / 96.0;
      *((__m128d *)a3 + 18) = _mm_unpacklo_pd(v10, v10);
    }
  }
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
  *((_BYTE *)a3 + 568) &= ~2u;
  *((_BYTE *)a3 + 568) |= 2 * (v12 & 1);
  *((_BYTE *)a3 + 332) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 144LL))(a2);
  v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 200LL))(a2);
  *((_BYTE *)a3 + 569) &= ~1u;
  *((_BYTE *)a3 + 569) |= v13 & 1;
  v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 216LL))(a2);
  *((_BYTE *)a3 + 572) &= ~8u;
  *((_BYTE *)a3 + 572) |= 8 * (v14 & 1);
  *(_OWORD *)((char *)a3 + 152) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, _BYTE *))(*(_QWORD *)a2 + 208LL))(
                                               a2,
                                               v30);
  v15 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 232LL))(a2);
  *((_BYTE *)a3 + 568) &= ~0x10u;
  *((_BYTE *)a3 + 568) |= 16 * (v15 & 1);
  v16 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 240LL))(a2);
  *((_BYTE *)a3 + 570) &= ~0x20u;
  *((_BYTE *)a3 + 570) |= 32 * (v16 & 1);
  v17 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 264LL))(a2);
  *((_BYTE *)a3 + 572) &= ~1u;
  *((_BYTE *)a3 + 572) |= v17 & 1;
  v18 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
  *((_BYTE *)a3 + 572) &= ~0x20u;
  *((_BYTE *)a3 + 572) |= 32 * (v18 & 1);
  v19 = ((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2) & 0x800000) != 0;
  *((_BYTE *)a3 + 572) &= ~0x40u;
  *((_BYTE *)a3 + 572) |= v19 << 6;
  v20 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2);
  *((_BYTE *)a3 + 572) &= ~0x80u;
  *((_BYTE *)a3 + 572) |= ((v20 & 0x400000) != 0) << 7;
  v21 = ((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 336LL))(a2) & 0x1000000) != 0;
  *((_BYTE *)a3 + 573) &= ~1u;
  *((_BYTE *)a3 + 573) |= v21;
  CWindowData::UpdateNonClientMetrics(a3);
  v22 = *((_BYTE *)a3 + 572);
  if ( (v22 & 9) == 0 )
    *((_BYTE *)a3 + 572) = v22 & 0xEF;
  v23 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 248LL))(a2);
  *((_BYTE *)a3 + 571) &= ~0x20u;
  *((_BYTE *)a3 + 571) |= 32 * (v23 & 1);
  v24 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2);
  *((_BYTE *)a3 + 572) &= ~4u;
  *((_BYTE *)a3 + 572) |= 4 * (v24 & 1);
  CWindowList::HasIconicBitmapChange(this, a2);
  CWindowList::CheckForMaximizedChange(this, a3);
  v25 = (HWND)*((_QWORD *)a3 + 5);
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)a3 + 188);
  if ( v25 )
    PropW = (unsigned int)GetPropW(v25, (LPCWSTR)0xA914);
  else
    PropW = 0;
  *((_DWORD *)a3 + 84) = PropW;
  v27 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2);
  *((_BYTE *)a3 + 572) &= ~2u;
  *((_BYTE *)a3 + 572) |= 2 * (v27 & 1);
  return 0LL;
}
