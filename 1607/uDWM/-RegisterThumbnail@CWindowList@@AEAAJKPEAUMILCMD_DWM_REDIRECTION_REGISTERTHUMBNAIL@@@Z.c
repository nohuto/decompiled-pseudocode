/*
 * XREFs of ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x180006414
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F670 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180006C68 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x1800314EC (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180032ADC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
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
  struct CWindowData *v11; // r15
  bool IsBaseThumbnailDestinationReachable; // al
  __int64 v13; // rax
  struct CWindowData *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // eax
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
    v28 = 2757;
LABEL_32:
    v26 = SyncedWindowDataByHwnd;
LABEL_37:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v28);
    goto LABEL_23;
  }
  v9 = *(HWND *)((char *)a3 + 20);
  v29 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v9, &v29);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v28 = 2762;
    goto LABEL_32;
  }
  v10 = v32;
  if ( !v32
    || (v11 = v29) == 0LL
    || !GetWindowThreadProcessId(*((HWND *)v32 + 5), &dwProcessId)
    || a2 != dwProcessId
    || *((_DWORD *)a3 + 7) && a2 != GetCurrentProcessId()
    || (*((_QWORD *)this + 49) = v10,
        IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(this, v11),
        *((_QWORD *)this + 49) = 0LL,
        IsBaseThumbnailDestinationReachable) )
  {
    v8 = -2147024809;
    goto LABEL_23;
  }
  v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          96LL);
  v14 = (struct CWindowData *)v13;
  if ( v13 )
  {
    *(_QWORD *)v13 = &CThumbnailData::`vftable';
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_DWORD *)(v13 + 32) = 0;
    memset_0((void *)(v13 + 36), 0, 0x2DuLL);
    *((_QWORD *)v14 + 11) = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  v32 = v14;
  if ( !v14 )
  {
    v8 = -2147024882;
    v28 = 2785;
    v26 = -2147024882;
    goto LABEL_37;
  }
  *((_QWORD *)v14 + 1) = *(_QWORD *)((char *)a3 + 4);
  *((_QWORD *)v32 + 2) = v10;
  *((_QWORD *)v32 + 3) = v11;
  *((_BYTE *)v32 + 32) = *((_DWORD *)a3 + 7) != 0;
  *((_BYTE *)v32 + 33) = *((_DWORD *)a3 + 8) != 0;
  *((_BYTE *)v32 + 34) = 0;
  v15 = *((_DWORD *)this + 94);
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    v23 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v8 = -2147024362;
    goto LABEL_35;
  }
  if ( v16 <= *((_DWORD *)this + 93) )
  {
    *(_QWORD *)(*((_QWORD *)this + 44) + 8LL * v15) = v32;
    *((_DWORD *)this + 94) = v16;
    goto LABEL_16;
  }
  v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 352, 8LL, 1LL, &v32);
  v23 = v22;
  if ( v22 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
  v8 = v23;
  if ( v23 < 0 )
  {
LABEL_35:
    v28 = 2795;
LABEL_36:
    v26 = v23;
    goto LABEL_37;
  }
LABEL_16:
  v17 = *((_DWORD *)v10 + 122);
  v18 = v17 + 1;
  if ( v17 + 1 < v17 )
  {
    v23 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v8 = -2147024362;
LABEL_45:
    v28 = 2798;
    goto LABEL_36;
  }
  if ( v18 <= *((_DWORD *)v10 + 121) )
  {
    *(_QWORD *)(*((_QWORD *)v10 + 58) + 8LL * v17) = v32;
    *((_DWORD *)v10 + 122) = v18;
    goto LABEL_19;
  }
  v24 = DynArrayImpl<0>::AddMultipleAndSet((char *)v10 + 464, 8LL, 1LL, &v32);
  v23 = v24;
  if ( v24 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
  v8 = v23;
  if ( v23 < 0 )
    goto LABEL_45;
LABEL_19:
  v19 = *((_DWORD *)v11 + 130);
  v20 = v19 + 1;
  if ( v19 + 1 < v19 )
  {
    v23 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v8 = -2147024362;
LABEL_49:
    v28 = 2799;
    goto LABEL_36;
  }
  v8 = 0;
  if ( v20 <= *((_DWORD *)v11 + 129) )
  {
    *(_QWORD *)(*((_QWORD *)v11 + 62) + 8LL * v19) = v32;
    *((_DWORD *)v11 + 130) = v20;
    goto LABEL_22;
  }
  v25 = DynArrayImpl<0>::AddMultipleAndSet((char *)v11 + 496, 8LL, 1LL, &v32);
  v23 = v25;
  if ( v25 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
  v8 = v23;
  if ( v23 < 0 )
    goto LABEL_49;
LABEL_22:
  if ( *((_QWORD *)v10 + 48) )
  {
    v27 = (*(__int64 (__fastcall **)(struct CWindowData *))(*(_QWORD *)v32 + 8LL))(v32);
    v8 = v27;
    if ( v27 >= 0 )
    {
      v27 = CTopLevelWindow::OnThumbnailAdded(*((CTopLevelWindow **)v10 + 48), *((struct CVisual **)v32 + 11));
      v8 = v27;
      if ( v27 >= 0 )
        goto LABEL_23;
      v28 = 2808;
    }
    else
    {
      v28 = 2806;
    }
    v26 = v27;
    goto LABEL_37;
  }
LABEL_23:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v30);
  return v8;
}
