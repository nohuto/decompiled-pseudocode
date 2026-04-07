/*
 * XREFs of ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180082470
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F670 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002AC70 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z @ 0x18003049C (-FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180032ADC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18003FC10 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x1800807D0 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800978B8 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
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
  _QWORD *v10; // r12
  __int64 v11; // r13
  HWND v12; // rbx
  int SyncedWindowDataByHwnd; // eax
  int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // esi
  _QWORD *v18; // r12
  int v19; // r13d
  HWND v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // r9d
  CDesktopThumbnailBase *v24; // rcx
  int v25; // eax
  RECT v26; // xmm0
  int v27; // eax
  CVisual *v28; // rcx
  unsigned int v30; // [rsp+20h] [rbp-69h]
  struct CWindowData *v31; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-51h]
  struct CWindowData **v33; // [rsp+40h] [rbp-49h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-41h]
  CWindowList *v35[2]; // [rsp+50h] [rbp-39h]
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+60h] [rbp-29h] BYREF
  _DWM_THUMBNAIL_PROPERTIES v37; // [rsp+68h] [rbp-21h] BYREF

  v35[0] = this;
  v32 = a2;
  v36 = &CDesktopManager::s_csDwmInstance;
  v7 = a2;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  ThumbnailData = CWindowList::FindThumbnailData(this, *(union _LARGE_INTEGER *)((char *)a3 + 4));
  memset_0(&v37, 0, sizeof(v37));
  if ( !ThumbnailData
    || v7 != *((_DWORD *)a3 + 2)
    || *(double *)((char *)a3 + 36) == 0.0
    || *(double *)((char *)a3 + 44) == 0.0
    || !*((_BYTE *)ThumbnailData + 34)
    || *((_DWORD *)ThumbnailData + 28) != 2 )
  {
    v30 = 3013;
    goto LABEL_56;
  }
  if ( a4->ViewSize < 8 * (unsigned __int64)(unsigned int)(*((_DWORD *)a3 + 4) + *((_DWORD *)a3 + 3)) )
  {
    v30 = 3018;
LABEL_56:
    v23 = -2147024809;
    v14 = -2147024809;
    goto LABEL_57;
  }
  ViewBase = a4->ViewBase;
  v10 = (_QWORD *)((char *)ThumbnailData + 128);
  *((_DWORD *)ThumbnailData + 38) = 0;
  v34 = ViewBase;
  DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 128, 8u);
  v11 = 0LL;
  if ( !*((_DWORD *)a3 + 3) )
  {
LABEL_22:
    v18 = (_QWORD *)((char *)ThumbnailData + 160);
    *((_DWORD *)ThumbnailData + 46) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)ThumbnailData + 160, 8u);
    v19 = 0;
    if ( *((_DWORD *)a3 + 4) )
    {
      while ( 1 )
      {
        v20 = (HWND)ViewBase[v19 + *((_DWORD *)a3 + 3)];
        if ( (unsigned int)DwmValidateWindow(v20, v7) )
        {
          SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v35[0], v20, &v31);
          v14 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd < 0 )
          {
            v30 = 3046;
            goto LABEL_33;
          }
          if ( v31 )
          {
            v21 = *((_DWORD *)ThumbnailData + 46);
            v22 = v21 + 1;
            if ( v21 + 1 < v21 )
            {
              v17 = -2147024362;
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
              v14 = -2147024362;
              goto LABEL_42;
            }
            if ( v22 > *((_DWORD *)ThumbnailData + 45) )
            {
              v33 = &v31;
              v14 = DynArrayImpl<0>::Grow((__int64)ThumbnailData + 160, 8u, 1, 0, (unsigned __int64 *)&v33);
              if ( v14 >= 0 )
                *(_QWORD *)(*v18 + (unsigned int)(8 * (*((_DWORD *)ThumbnailData + 46))++)) = *v33;
              v17 = v14;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0xC0u);
LABEL_42:
                v30 = 3049;
                goto LABEL_31;
              }
              v7 = v32;
            }
            else
            {
              *(_QWORD *)(*v18 + 8LL * v21) = v31;
              *((_DWORD *)ThumbnailData + 46) = v22;
            }
          }
        }
        if ( (unsigned int)++v19 >= *((_DWORD *)a3 + 4) )
          break;
        ViewBase = v34;
      }
    }
    v24 = (CDesktopThumbnailBase *)*((_QWORD *)ThumbnailData + 15);
    if ( v24
      && (SyncedWindowDataByHwnd = CDesktopThumbnailBase::UpdateWindowClones(v24),
          v14 = SyncedWindowDataByHwnd,
          SyncedWindowDataByHwnd < 0) )
    {
      v30 = 3058;
    }
    else
    {
      v25 = (int)*(double *)((char *)a3 + 36);
      v35[0] = 0LL;
      v37.dwFlags = 3;
      v26 = *(RECT *)((char *)a3 + 20);
      LODWORD(v35[1]) = v25;
      v27 = (int)*(double *)((char *)a3 + 44);
      v37.rcSource = v26;
      HIDWORD(v35[1]) = v27;
      v37.rcDestination = *(RECT *)v35;
      SyncedWindowDataByHwnd = CThumbnailData::UpdateProperties(ThumbnailData, &v37);
      v14 = SyncedWindowDataByHwnd;
      if ( SyncedWindowDataByHwnd >= 0 )
      {
        SyncedWindowDataByHwnd = CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(ThumbnailData);
        v14 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd >= 0 )
        {
          SyncedWindowDataByHwnd = VisualCollection::InsertRelative(
                                     (VisualCollection *)(*((_QWORD *)ThumbnailData + 12) + 32LL),
                                     *((struct CVisual **)ThumbnailData + 13),
                                     0LL,
                                     0,
                                     1);
          v14 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd >= 0 )
          {
            v28 = *(CVisual **)(*((_QWORD *)ThumbnailData + 2) + 384LL);
            if ( v28 )
              CVisual::SetDirtyFlags(v28, 0x8000000);
            goto LABEL_58;
          }
          v30 = 3068;
        }
        else
        {
          v30 = 3067;
        }
      }
      else
      {
        v30 = 3066;
      }
    }
LABEL_33:
    v23 = SyncedWindowDataByHwnd;
    goto LABEL_57;
  }
  while ( 1 )
  {
    v12 = (HWND)ViewBase[v11];
    if ( !(unsigned int)DwmValidateWindow(v12, v7) )
      goto LABEL_21;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(v35[0], v12, &v31);
    v14 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v30 = 3031;
      goto LABEL_33;
    }
    if ( !v31 )
      goto LABEL_21;
    v15 = *((_DWORD *)ThumbnailData + 38);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
      break;
    if ( v16 > *((_DWORD *)ThumbnailData + 37) )
    {
      v33 = &v31;
      v14 = DynArrayImpl<0>::Grow((__int64)ThumbnailData + 128, 8u, 1, 0, (unsigned __int64 *)&v33);
      if ( v14 >= 0 )
        *(_QWORD *)(*v10 + (unsigned int)(8 * (*((_DWORD *)ThumbnailData + 38))++)) = *v33;
      v17 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0xC0u);
        goto LABEL_30;
      }
      v7 = v32;
    }
    else
    {
      *(_QWORD *)(*v10 + 8LL * v15) = v31;
      *((_DWORD *)ThumbnailData + 38) = v16;
    }
LABEL_21:
    ViewBase = v34;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= *((_DWORD *)a3 + 3) )
      goto LABEL_22;
  }
  v17 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  v14 = -2147024362;
LABEL_30:
  v30 = 3034;
LABEL_31:
  v23 = v17;
LABEL_57:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, v30);
LABEL_58:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v36);
  return (unsigned int)v14;
}
