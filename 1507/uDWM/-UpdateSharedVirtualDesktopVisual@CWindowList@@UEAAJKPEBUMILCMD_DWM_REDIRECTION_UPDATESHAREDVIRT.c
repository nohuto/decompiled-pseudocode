/*
 * XREFs of ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007A220
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180012090 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800282D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x180029BB4 (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18002F378 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180078120 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800993BC (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::UpdateSharedVirtualDesktopVisual(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  unsigned int v7; // esi
  struct CThumbnailData *ThumbnailData; // r15
  _QWORD *ViewBase; // rbx
  __int64 v10; // r13
  HWND v11; // rbx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  int v17; // esi
  int v18; // r13d
  HWND v19; // rbx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // r9d
  int v23; // eax
  CDesktopThumbnailBase *v24; // rcx
  int v25; // eax
  RECT v26; // xmm0
  int v27; // eax
  CVisual *v28; // rcx
  unsigned int v30; // [rsp+20h] [rbp-69h]
  struct CWindowData *v31; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-51h]
  _QWORD *v33; // [rsp+40h] [rbp-49h]
  CWindowList *v34[2]; // [rsp+48h] [rbp-41h]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+58h] [rbp-31h] BYREF
  _DWM_THUMBNAIL_PROPERTIES v36; // [rsp+60h] [rbp-29h] BYREF

  v34[0] = this;
  v32 = a2;
  v35 = &CDesktopManager::s_csDwmInstance;
  v7 = a2;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  memset_0(&v36, 0, sizeof(v36));
  if ( !ThumbnailData
    || v7 != *((_DWORD *)a3 + 2)
    || *(double *)((char *)a3 + 36) == 0.0
    || *(double *)((char *)a3 + 44) == 0.0
    || !*((_BYTE *)ThumbnailData + 34)
    || *((_DWORD *)ThumbnailData + 28) != 2 )
  {
    v30 = 3422;
    goto LABEL_54;
  }
  if ( a4->ViewSize < 8 * (unsigned __int64)(unsigned int)(*((_DWORD *)a3 + 4) + *((_DWORD *)a3 + 3)) )
  {
    v30 = 3427;
LABEL_54:
    v22 = -2147024809;
    v13 = -2147024809;
    goto LABEL_55;
  }
  ViewBase = a4->ViewBase;
  *((_DWORD *)ThumbnailData + 38) = 0;
  v33 = ViewBase;
  DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 128, 8u);
  v10 = 0LL;
  if ( !*((_DWORD *)a3 + 3) )
  {
LABEL_21:
    *((_DWORD *)ThumbnailData + 46) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 160, 8u);
    v18 = 0;
    if ( *((_DWORD *)a3 + 4) )
    {
      while ( 1 )
      {
        v19 = (HWND)ViewBase[v18 + *((_DWORD *)a3 + 3)];
        if ( (unsigned int)DwmValidateWindow(v19, v7) )
        {
          SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v34[0], v19, &v31);
          v13 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd < 0 )
          {
            v30 = 3455;
            goto LABEL_32;
          }
          if ( v31 )
          {
            v20 = *((_DWORD *)ThumbnailData + 46);
            v21 = v20 + 1;
            if ( v20 + 1 < v20 )
            {
              v17 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
              v13 = -2147024362;
LABEL_40:
              v30 = 3458;
              goto LABEL_30;
            }
            if ( v21 > *((_DWORD *)ThumbnailData + 45) )
            {
              v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)ThumbnailData + 160, 8u, 1, &v31);
              v17 = v23;
              if ( v23 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0xC0u);
              v13 = v17;
              if ( v17 < 0 )
                goto LABEL_40;
              v7 = v32;
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)ThumbnailData + 20) + 8LL * v20) = v31;
              *((_DWORD *)ThumbnailData + 46) = v21;
            }
          }
        }
        if ( (unsigned int)++v18 >= *((_DWORD *)a3 + 4) )
          break;
        ViewBase = v33;
      }
    }
    v24 = (CDesktopThumbnailBase *)*((_QWORD *)ThumbnailData + 15);
    if ( v24
      && (SyncedWindowDataByHwnd = CDesktopThumbnailBase::UpdateWindowClones(v24),
          v13 = SyncedWindowDataByHwnd,
          SyncedWindowDataByHwnd < 0) )
    {
      v30 = 3467;
    }
    else
    {
      v25 = (int)*(double *)((char *)a3 + 36);
      v34[0] = 0LL;
      v36.dwFlags = 3;
      v26 = *(RECT *)((char *)a3 + 20);
      LODWORD(v34[1]) = v25;
      v27 = (int)*(double *)((char *)a3 + 44);
      v36.rcSource = v26;
      HIDWORD(v34[1]) = v27;
      v36.rcDestination = *(RECT *)v34;
      SyncedWindowDataByHwnd = CThumbnailData::UpdateProperties(ThumbnailData, &v36);
      v13 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd >= 0 )
      {
        SyncedWindowDataByHwnd = CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(ThumbnailData);
        v13 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd >= 0 )
        {
          SyncedWindowDataByHwnd = VisualCollection::InsertRelative(
                                     (VisualCollection *)(*((_QWORD *)ThumbnailData + 12) + 32LL),
                                     *((struct CVisual **)ThumbnailData + 13),
                                     0LL,
                                     0,
                                     1);
          v13 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd >= 0 )
          {
            v28 = *(CVisual **)(*((_QWORD *)ThumbnailData + 2) + 368LL);
            if ( v28 )
              CVisual::SetDirtyFlags(v28, 0x8000000);
            goto LABEL_56;
          }
          v30 = 3477;
        }
        else
        {
          v30 = 3476;
        }
      }
      else
      {
        v30 = 3475;
      }
    }
LABEL_32:
    v22 = SyncedWindowDataByHwnd;
    goto LABEL_55;
  }
  while ( 1 )
  {
    v11 = (HWND)ViewBase[v10];
    if ( !(unsigned int)DwmValidateWindow(v11, v7) )
      goto LABEL_20;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v34[0], v11, &v31);
    v13 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v30 = 3440;
      goto LABEL_32;
    }
    if ( !v31 )
      goto LABEL_20;
    v14 = *((_DWORD *)ThumbnailData + 38);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
      break;
    if ( v15 > *((_DWORD *)ThumbnailData + 37) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)ThumbnailData + 128, 8u, 1, &v31);
      v17 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0xC0u);
      v13 = v17;
      if ( v17 < 0 )
        goto LABEL_29;
      v7 = v32;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)ThumbnailData + 16) + 8LL * v14) = v31;
      *((_DWORD *)ThumbnailData + 38) = v15;
    }
LABEL_20:
    ViewBase = v33;
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= *((_DWORD *)a3 + 3) )
      goto LABEL_21;
  }
  v17 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  v13 = -2147024362;
LABEL_29:
  v30 = 3443;
LABEL_30:
  v22 = v17;
LABEL_55:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, v30);
LABEL_56:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v35);
  return v13;
}
