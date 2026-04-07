/*
 * XREFs of ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180031270
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F670 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002AE50 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180032ADC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800357F4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::QueryWindowThumbnailSourceSize(
        CWindowList *this,
        struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *a2)
{
  HWND v4; // rdx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // esi
  struct CWindowData *v7; // r15
  LPVOID (__fastcall *v8)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // eax
  CBaseObject *v12; // rbx
  int v13; // edx
  int v14; // ecx
  __int64 v16; // rdx
  __int64 v17; // r15
  _DWORD *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r15
  int v22; // [rsp+34h] [rbp-Ch]
  int v23; // [rsp+3Ch] [rbp-4h]
  CBaseObject *v24; // [rsp+88h] [rbp+48h] BYREF
  struct CWindowData *v25; // [rsp+90h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+98h] [rbp+58h] BYREF

  v26 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v24 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v25);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0xC72u);
    goto LABEL_17;
  }
  v7 = v25;
  if ( !v25 )
  {
    v6 = -2147024809;
    goto LABEL_17;
  }
  v8 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v8 == WPF::ProcessHeapImpl::Alloc )
    v9 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x18uLL);
  else
    v9 = (_QWORD *)v8(WPF::g_pProcessHeap, 24LL);
  v10 = v9;
  if ( v9 )
  {
    v9[2] = 0LL;
    *((_DWORD *)v9 + 4) = 1;
    *v9 = &CSWRListener::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
    v9[1] = &CSWRListener::`vftable'{for `CBaseObject'};
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC7Bu);
    goto LABEL_17;
  }
  v11 = CSecondaryWindowRepresentation::Create((*((_DWORD *)a2 + 3) != 0 ? 4 : 0) | 2u, v10, v7, 0LL, 100, &v24);
  v12 = v24;
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC82u);
    goto LABEL_14;
  }
  v22 = *((_DWORD *)v24 + 24);
  v13 = *((_DWORD *)v24 + 20) - *((_DWORD *)v24 + 23) - *((_DWORD *)v24 + 22);
  v23 = *((_DWORD *)v24 + 21) - *((_DWORD *)v24 + 25);
  if ( v13 < 0 )
    v13 = 0;
  v14 = v23 - *((_DWORD *)v24 + 24);
  *((_DWORD *)a2 + 4) = v13;
  if ( v23 - v22 < 0 )
    v14 = 0;
  *((_DWORD *)a2 + 5) = v14;
  if ( (*((_BYTE *)v7 + 580) & 8) == 0 || *((_DWORD *)a2 + 3) || *((_DWORD *)v12 + 18) != 2 )
    goto LABEL_14;
  v16 = 0LL;
  v17 = *((_QWORD *)v12 + 8);
  switch ( *((_DWORD *)v12 + 18) )
  {
    case 1:
      goto LABEL_21;
    case 2:
      v16 = *(_QWORD *)(*(_QWORD *)(v17 + 408) + 32LL);
      break;
    case 3:
      if ( CWindowData::IsImmersiveWindow(*((CWindowData **)v12 + 8)) )
      {
LABEL_21:
        v16 = v17;
        break;
      }
      v16 = *(_QWORD *)(*(_QWORD *)(v17 + 416) + 80LL);
      break;
  }
  if ( (*(_DWORD *)(v16 + 100) & 0x1000000) != 0 )
    goto LABEL_23;
  v20 = 0LL;
  v21 = *((_QWORD *)v12 + 8);
  switch ( *((_DWORD *)v12 + 18) )
  {
    case 1:
      goto LABEL_30;
    case 2:
      v20 = *(_QWORD *)(*(_QWORD *)(v21 + 408) + 32LL);
      break;
    case 3:
      if ( CWindowData::IsImmersiveWindow(*((CWindowData **)v12 + 8)) )
      {
LABEL_30:
        v20 = v21;
        break;
      }
      v20 = *(_QWORD *)(*(_QWORD *)(v21 + 416) + 80LL);
      break;
  }
  if ( (*(_BYTE *)(v20 + 581) & 1) == 0 )
    goto LABEL_14;
LABEL_23:
  v18 = 0LL;
  v19 = *((_QWORD *)v12 + 8);
  if ( *((_DWORD *)v12 + 18) == 1 )
  {
LABEL_33:
    v18 = (_DWORD *)v19;
    goto LABEL_26;
  }
  if ( *((_DWORD *)v12 + 18) != 2 )
  {
    if ( *((_DWORD *)v12 + 18) != 3 )
      goto LABEL_26;
    if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)v12 + 8)) )
    {
      v18 = *(_DWORD **)(*(_QWORD *)(v19 + 416) + 80LL);
      goto LABEL_26;
    }
    goto LABEL_33;
  }
  v18 = *(_DWORD **)(*(_QWORD *)(v19 + 408) + 32LL);
LABEL_26:
  *((_DWORD *)a2 + 4) -= v18[68] + v18[69];
  *((_DWORD *)a2 + 5) -= v18[70] + v18[71];
LABEL_14:
  if ( v12 )
    CBaseObject::Release(v12);
  CBaseObject::Release((CBaseObject *)(v10 + 1));
LABEL_17:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v26);
  return v6;
}
