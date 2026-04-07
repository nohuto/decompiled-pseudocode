/*
 * XREFs of ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800818E0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002F3B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180032ADC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18004144C (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompVirtualDesktopThumbnailData@@QEAA@XZ @ 0x18007F624 (--0CDCompVirtualDesktopThumbnailData@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowList::RegisterSharedVirtualDesktopVisual(
        CWindowList *this,
        HWND a2,
        union _LARGE_INTEGER a3,
        void *a4)
{
  struct CVisual *v7; // r14
  int SyncedWindowDataByHwnd; // eax
  unsigned int v9; // ebx
  int v10; // r9d
  struct CWindowData *v11; // r15
  CDCompVirtualDesktopThumbnailData *v12; // rax
  CDCompVirtualDesktopThumbnailData *v13; // rsi
  CDesktopManager *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  int v22; // eax
  unsigned int v24; // [rsp+20h] [rbp-30h]
  unsigned int v25; // [rsp+30h] [rbp-20h] BYREF
  struct CVisual *v26; // [rsp+38h] [rbp-18h] BYREF
  struct CWindowData *v27; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+48h] [rbp-8h] BYREF

  v28 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v25 = 0;
  v27 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v27);
  v9 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v24 = 2945;
LABEL_3:
    v10 = SyncedWindowDataByHwnd;
LABEL_34:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, v24);
    goto LABEL_35;
  }
  v11 = v27;
  if ( !v27 )
  {
    v9 = -2147024809;
    goto LABEL_35;
  }
  v12 = (CDCompVirtualDesktopThumbnailData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                               WPF::g_pProcessHeap,
                                               192LL);
  if ( v12 )
    v13 = CDCompVirtualDesktopThumbnailData::CDCompVirtualDesktopThumbnailData(v12);
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xB8Bu);
    goto LABEL_35;
  }
  *((_QWORD *)v13 + 3) = 0LL;
  *((union _LARGE_INTEGER *)v13 + 1) = a3;
  v14 = CDesktopManager::s_pDesktopManagerInstance;
  *((_QWORD *)v13 + 2) = v11;
  *((_WORD *)v13 + 16) = 0;
  *((_BYTE *)v13 + 34) = 1;
  *((_DWORD *)v13 + 28) = 2;
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned int *))(**((_QWORD **)v14 + 4)
                                                                                              + 112LL))(
                             *((_QWORD *)v14 + 4),
                             a4,
                             35LL,
                             &v25);
  v9 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v24 = 2967;
    goto LABEL_3;
  }
  SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 4)
                                                             + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 4));
  v9 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v24 = 2969;
    goto LABEL_3;
  }
  v15 = CVisual::WrapExistingResource(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          v25,
          (struct CResource ***)&v26);
  v9 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xB9Bu);
    v7 = v26;
    goto LABEL_35;
  }
  v7 = v26;
  *((_QWORD *)v13 + 12) = v26;
  v16 = *((unsigned int *)this + 94);
  v27 = v13;
  v17 = v16 + 1;
  if ( (int)v16 + 1 < (unsigned int)v16 )
  {
    v18 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v9 = -2147024362;
LABEL_26:
    v24 = 2974;
LABEL_33:
    v10 = v18;
    goto LABEL_34;
  }
  if ( v17 > *((_DWORD *)this + 93) )
  {
    v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 352, 8u, 1, &v27);
    v18 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0xC0u);
    v9 = v18;
    if ( v18 < 0 )
      goto LABEL_26;
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 44) + 8 * v16) = v27;
    *((_DWORD *)this + 94) = v17;
  }
  v27 = v13;
  v19 = *((_DWORD *)v11 + 122);
  v7 = 0LL;
  v20 = v19 + 1;
  if ( v19 + 1 < v19 )
  {
    v18 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v9 = -2147024362;
LABEL_32:
    v24 = 2980;
    goto LABEL_33;
  }
  v9 = 0;
  if ( v20 <= *((_DWORD *)v11 + 121) )
  {
    *(_QWORD *)(*((_QWORD *)v11 + 58) + 8LL * *((unsigned int *)v11 + 122)) = v27;
    *((_DWORD *)v11 + 122) = v20;
    goto LABEL_35;
  }
  v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11 + 464, 8u, 1, &v27);
  v18 = v22;
  if ( v22 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0xC0u);
  v9 = v18;
  if ( v18 < 0 )
    goto LABEL_32;
LABEL_35:
  CloseHandle(a4);
  if ( v25 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 120LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  if ( v7 )
    CBaseObject::Release(v7);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v28);
  return v9;
}
