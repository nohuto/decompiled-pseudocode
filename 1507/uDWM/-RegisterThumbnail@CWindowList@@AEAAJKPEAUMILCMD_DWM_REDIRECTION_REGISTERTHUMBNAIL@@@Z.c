/*
 * XREFs of ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x18003D328
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18002BF34 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18002F378 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x18003D6C0 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

__int64 __fastcall CWindowList::RegisterThumbnail(
        CWindowList *this,
        int a2,
        struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *a3)
{
  HWND v6; // rdx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v8; // ebx
  HWND v9; // rdx
  struct CWindowData *v10; // r14
  struct CWindowData *v11; // r13
  char IsBaseThumbnailDestinationReachable; // al
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  int v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  int v26; // r9d
  int v27; // eax
  unsigned int v28; // [rsp+20h] [rbp-20h]
  struct CWindowData *v29; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+38h] [rbp-8h] BYREF
  DWORD dwProcessId; // [rsp+90h] [rbp+50h] BYREF
  struct CWindowData *v32; // [rsp+98h] [rbp+58h] BYREF

  v30 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = *(HWND *)((char *)a3 + 12);
  v32 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v6, &v32);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v28 = 3154;
LABEL_33:
    v26 = SyncedWindowDataByHwnd;
LABEL_38:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, v28);
    goto LABEL_29;
  }
  v9 = *(HWND *)((char *)a3 + 20);
  v29 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v9, &v29);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v28 = 3160;
    goto LABEL_33;
  }
  v10 = v32;
  if ( !v32
    || (v11 = v29) == 0LL
    || !GetWindowThreadProcessId(*((HWND *)v32 + 5), &dwProcessId)
    || a2 != dwProcessId
    || *((_DWORD *)a3 + 7) && a2 != GetCurrentProcessId()
    || (*((_QWORD *)this + 49) = v10,
        IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                                (struct CWindowData **)this,
                                                v11),
        *((_QWORD *)this + 49) = 0LL,
        IsBaseThumbnailDestinationReachable) )
  {
    v8 = -2147024809;
    goto LABEL_29;
  }
  v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          96LL);
  v14 = v13;
  if ( v13 )
  {
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)v13 = &CThumbnailData::`vftable';
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_BYTE *)(v13 + 32) = 0;
    memset_0((void *)(v13 + 36), 0, 0x2DuLL);
    *(_QWORD *)(v14 + 88) = 0LL;
    *(_WORD *)(v14 + 34) = 0;
  }
  else
  {
    v14 = 0LL;
  }
  v32 = (struct CWindowData *)v14;
  if ( !v14 )
  {
    v8 = -2147024882;
    v28 = 3183;
    v26 = -2147024882;
    goto LABEL_38;
  }
  *(_QWORD *)(v14 + 8) = *(_QWORD *)((char *)a3 + 4);
  *((_QWORD *)v32 + 2) = v10;
  *((_QWORD *)v32 + 3) = v11;
  *((_BYTE *)v32 + 32) = *((_DWORD *)a3 + 7) != 0;
  *((_BYTE *)v32 + 33) = *((_DWORD *)a3 + 8) != 0;
  *((_BYTE *)v32 + 34) = 0;
  v15 = *((_DWORD *)this + 94);
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    v18 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v8 = -2147024362;
    goto LABEL_36;
  }
  if ( v16 <= *((_DWORD *)this + 93) )
  {
    *(_QWORD *)(*((_QWORD *)this + 44) + 8LL * *((unsigned int *)this + 94)) = v32;
    *((_DWORD *)this + 94) = v16;
    goto LABEL_18;
  }
  v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 352, 8u, 1, &v32);
  v18 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0xC0u);
  v8 = v18;
  if ( v18 < 0 )
  {
LABEL_36:
    v28 = 3195;
LABEL_37:
    v26 = v18;
    goto LABEL_38;
  }
LABEL_18:
  v19 = *((_DWORD *)v10 + 116);
  v20 = v19 + 1;
  if ( v19 + 1 < v19 )
  {
    v18 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v8 = -2147024362;
LABEL_41:
    v28 = 3200;
    goto LABEL_37;
  }
  if ( v20 <= *((_DWORD *)v10 + 115) )
  {
    *(_QWORD *)(*((_QWORD *)v10 + 55) + 8LL * *((unsigned int *)v10 + 116)) = v32;
    *((_DWORD *)v10 + 116) = v20;
    goto LABEL_23;
  }
  v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v10 + 440, 8u, 1, &v32);
  v18 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0xC0u);
  v8 = v18;
  if ( v18 < 0 )
    goto LABEL_41;
LABEL_23:
  v22 = *((_DWORD *)v11 + 124);
  v23 = v22 + 1;
  if ( v22 + 1 < v22 )
  {
    v18 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v8 = -2147024362;
LABEL_44:
    v28 = 3201;
    goto LABEL_37;
  }
  v8 = 0;
  if ( v23 <= *((_DWORD *)v11 + 123) )
  {
    *(_QWORD *)(*((_QWORD *)v11 + 59) + 8LL * *((unsigned int *)v11 + 124)) = v32;
    *((_DWORD *)v11 + 124) = v23;
    goto LABEL_28;
  }
  v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11 + 472, 8u, 1, &v32);
  v18 = v24;
  if ( v24 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0xC0u);
  v8 = v18;
  if ( v18 < 0 )
    goto LABEL_44;
LABEL_28:
  if ( *((_QWORD *)v10 + 46) )
  {
    v27 = (*(__int64 (__fastcall **)(struct CWindowData *))(*(_QWORD *)v32 + 8LL))(v32);
    v8 = v27;
    if ( v27 >= 0 )
    {
      v27 = CTopLevelWindow::OnThumbnailAdded(*((CTopLevelWindow **)v10 + 46), *((struct CVisual **)v32 + 11));
      v8 = v27;
      if ( v27 >= 0 )
        goto LABEL_29;
      v28 = 3212;
    }
    else
    {
      v28 = 3210;
    }
    v26 = v27;
    goto LABEL_38;
  }
LABEL_29:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v30);
  return v8;
}
