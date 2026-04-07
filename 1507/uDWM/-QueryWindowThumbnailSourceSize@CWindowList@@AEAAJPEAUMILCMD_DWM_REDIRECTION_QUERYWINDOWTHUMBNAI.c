/*
 * XREFs of ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x18003CFFC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800284D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18002F378 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180035018 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::QueryWindowThumbnailSourceSize(
        CWindowList *this,
        struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *a2)
{
  HWND v4; // rdx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // edi
  struct CWindowData *v7; // rsi
  LPVOID (__fastcall *v8)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  _DWORD *v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  CBaseObject *v12; // rsi
  int v13; // edx
  int v14; // rax^4
  int v15; // edx
  int v17; // [rsp+3Ch] [rbp-4h]
  CBaseObject *v18; // [rsp+78h] [rbp+38h] BYREF
  struct CWindowData *v19; // [rsp+80h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+88h] [rbp+48h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v18 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v19);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0xE1Cu);
  }
  else
  {
    v7 = v19;
    if ( v19 )
    {
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
      if ( v10 )
      {
        v11 = CSecondaryWindowRepresentation::Create(
                (*((_DWORD *)a2 + 3) != 0 ? 4 : 0) | 2u,
                v10,
                (__int64)v7,
                0,
                100,
                &v18);
        v12 = v18;
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xE2Cu);
        }
        else
        {
          v13 = *((_DWORD *)v18 + 20) - *((_DWORD *)v18 + 23) - *((_DWORD *)v18 + 22);
          v17 = *((_DWORD *)v18 + 21) - *((_DWORD *)v18 + 25);
          v14 = *((_DWORD *)v18 + 24);
          if ( v13 < 0 )
            v13 = 0;
          *((_DWORD *)a2 + 4) = v13;
          v15 = v17 - v14;
          if ( v17 - v14 < 0 )
            v15 = 0;
          *((_DWORD *)a2 + 5) = v15;
        }
        if ( v12 )
          CBaseObject::Release(v12);
        CBaseObject::Release((CBaseObject *)(v10 + 8));
      }
      else
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xE25u);
      }
    }
    else
    {
      v6 = -2147024809;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v6;
}
