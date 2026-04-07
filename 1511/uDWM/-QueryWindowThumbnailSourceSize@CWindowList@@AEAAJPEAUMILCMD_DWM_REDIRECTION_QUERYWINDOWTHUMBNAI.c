/*
 * XREFs of ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18002F00C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032890 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180016490 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B4D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180032568 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::QueryWindowThumbnailSourceSize(
        CWindowList *this,
        struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *a2)
{
  HWND v4; // rdx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // esi
  struct CWindowData *v7; // r15
  LPVOID (__fastcall *v8)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  _DWORD *v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  CBaseObject *v12; // rbx
  int v13; // r9d
  int v14; // r10d
  _QWORD *v16; // rdx
  _QWORD *v17; // r8
  _DWORD *v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // r8
  int v21; // [rsp+34h] [rbp-Ch]
  int v22; // [rsp+3Ch] [rbp-4h]
  CBaseObject *v23; // [rsp+88h] [rbp+48h] BYREF
  struct CWindowData *v24; // [rsp+90h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+98h] [rbp+58h] BYREF

  v25 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v23 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v24);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0xE0Bu);
    goto LABEL_17;
  }
  v7 = v24;
  if ( !v24 )
  {
    v6 = -2147024809;
    goto LABEL_17;
  }
  v8 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v8 == WPF::ProcessHeapImpl::Alloc )
    v9 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x18uLL);
  else
    v9 = (_DWORD *)v8(WPF::g_pProcessHeap, 24LL);
  v10 = (__int64)v9;
  if ( v9 )
  {
    v9[4] = 1;
    *(_QWORD *)v9 = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
    *((_QWORD *)v9 + 1) = &CSWRListener::`vftable'{for `CBaseObject'};
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xE14u);
    goto LABEL_17;
  }
  v11 = CSecondaryWindowRepresentation::Create((*((_DWORD *)a2 + 3) != 0 ? 4 : 0) | 2u, v10, (__int64)v7, 0, 100, &v23);
  v12 = v23;
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xE1Bu);
    goto LABEL_14;
  }
  v21 = *((_DWORD *)v23 + 24);
  v22 = *((_DWORD *)v23 + 21) - *((_DWORD *)v23 + 25);
  v13 = *((_DWORD *)v23 + 20) - *((_DWORD *)v23 + 23) - *((_DWORD *)v23 + 22);
  if ( v13 < 0 )
    v13 = 0;
  v14 = *((_DWORD *)v23 + 21) - *((_DWORD *)v23 + 25) - v21;
  *((_DWORD *)a2 + 4) = v13;
  if ( v22 - v21 < 0 )
    v14 = 0;
  *((_DWORD *)a2 + 5) = v14;
  if ( (*((_BYTE *)v7 + 572) & 8) == 0 || *((_DWORD *)a2 + 3) || *((_DWORD *)v12 + 18) != 2 )
    goto LABEL_14;
  v16 = 0LL;
  v17 = (_QWORD *)*((_QWORD *)v12 + 8);
  switch ( *((_DWORD *)v12 + 18) )
  {
    case 1:
      goto LABEL_21;
    case 2:
      v16 = *(_QWORD **)(v17[50] + 32LL);
      break;
    case 3:
      if ( CWindowData::IsImmersiveWindow(*((CWindowData **)v12 + 8)) )
      {
LABEL_21:
        v16 = v17;
        break;
      }
      v16 = *(_QWORD **)(v17[51] + 80LL);
      break;
  }
  if ( (*((_DWORD *)v16 + 25) & 0x1000000) != 0 )
  {
LABEL_23:
    v18 = 0LL;
    if ( *((_DWORD *)v12 + 18) == 1 )
    {
      v18 = v17;
    }
    else if ( *((_DWORD *)v12 + 18) == 2 )
    {
      v18 = *(_DWORD **)(v17[50] + 32LL);
    }
    else if ( *((_DWORD *)v12 + 18) == 3 && !CWindowData::IsImmersiveWindow((CWindowData *)v17) )
    {
      v18 = *(_DWORD **)(*(_QWORD *)(v20 + 408) + 80LL);
    }
    *((_DWORD *)a2 + 4) = v13 - v18[69] - v18[68];
    *((_DWORD *)a2 + 5) = v14 - v18[71] - v18[70];
    goto LABEL_14;
  }
  v19 = 0LL;
  switch ( *((_DWORD *)v12 + 18) )
  {
    case 1:
      goto LABEL_30;
    case 2:
      v19 = *(_QWORD **)(v17[50] + 32LL);
      break;
    case 3:
      if ( CWindowData::IsImmersiveWindow((CWindowData *)v17) )
      {
LABEL_30:
        v19 = v17;
        break;
      }
      v19 = *(_QWORD **)(v17[51] + 80LL);
      break;
  }
  if ( (*((_BYTE *)v19 + 573) & 1) != 0 )
    goto LABEL_23;
LABEL_14:
  if ( v12 )
    CBaseObject::Release(v12);
  CBaseObject::Release((CBaseObject *)(v10 + 8));
LABEL_17:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v25);
  return v6;
}
