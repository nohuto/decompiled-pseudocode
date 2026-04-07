/*
 * XREFs of ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800810E0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180032BE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180032568 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18003EC0C (-WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?DuplicateSharedResourceOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAXPEAI@Z @ 0x18003FC1C (-DuplicateSharedResourceOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAXPEAI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??0CDCompVirtualDesktopThumbnailData@@QEAA@XZ @ 0x18007EBA8 (--0CDCompVirtualDesktopThumbnailData@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowList::RegisterSharedVirtualDesktopVisual(
        CWindowList *this,
        HWND a2,
        union _LARGE_INTEGER a3,
        void *a4)
{
  struct CVisual *v7; // r14
  int SyncedWindowDataByHwnd; // eax
  unsigned int v9; // edi
  int v10; // r9d
  struct CWindowData *v11; // r15
  CDCompVirtualDesktopThumbnailData *v12; // rax
  CDCompVirtualDesktopThumbnailData *v13; // rsi
  CDesktopManager *v14; // rcx
  int v15; // eax
  _QWORD *v16; // r10
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // ebx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  int v23; // eax
  unsigned int v25; // [rsp+20h] [rbp-30h]
  unsigned int v26; // [rsp+30h] [rbp-20h] BYREF
  struct CVisual *v27; // [rsp+38h] [rbp-18h] BYREF
  struct CWindowData *v28; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+48h] [rbp-8h] BYREF

  v29 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v26 = 0;
  v28 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v28);
  v9 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v25 = 3344;
LABEL_3:
    v10 = SyncedWindowDataByHwnd;
LABEL_32:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, v25);
    goto LABEL_33;
  }
  v11 = v28;
  if ( !v28 )
  {
    v9 = -2147024809;
    goto LABEL_33;
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xD1Au);
    goto LABEL_33;
  }
  v14 = CDesktopManager::s_pDesktopManagerInstance;
  *((_QWORD *)v13 + 3) = 0LL;
  *((union _LARGE_INTEGER *)v13 + 1) = a3;
  *((_QWORD *)v13 + 2) = v11;
  *((_WORD *)v13 + 16) = 0;
  *((_BYTE *)v13 + 34) = 1;
  *((_DWORD *)v13 + 28) = 2;
  DuplicateSharedResourceOnChannel(*((struct MIL_CHANNEL__ **)v14 + 4), 0x1Fu, (__int64)a4, &v26);
  SyncedWindowDataByHwnd = MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance
                                                    + 4));
  v9 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v25 = 3366;
    goto LABEL_3;
  }
  v15 = CVisual::WrapExistingResource(
          *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
          v26,
          (struct CResource ***)&v27);
  v9 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xD28u);
    v7 = v27;
    goto LABEL_33;
  }
  v7 = v27;
  v16 = (_QWORD *)((char *)this + 352);
  *((_QWORD *)v13 + 12) = v27;
  v17 = *((unsigned int *)this + 94);
  v28 = v13;
  v18 = v17 + 1;
  if ( (int)v17 + 1 < (unsigned int)v17 )
  {
    v19 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v9 = -2147024362;
LABEL_24:
    v25 = 3371;
LABEL_31:
    v10 = v19;
    goto LABEL_32;
  }
  if ( v18 > *((_DWORD *)this + 93) )
  {
    v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v16, 8u, 1, &v28);
    v19 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0xC0u);
    v9 = v19;
    if ( v19 < 0 )
      goto LABEL_24;
  }
  else
  {
    *(_QWORD *)(*v16 + 8 * v17) = v28;
    *((_DWORD *)this + 94) = v18;
  }
  v28 = v13;
  v20 = *((_DWORD *)v11 + 120);
  v7 = 0LL;
  v21 = v20 + 1;
  if ( v20 + 1 < v20 )
  {
    v19 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v9 = -2147024362;
LABEL_30:
    v25 = 3377;
    goto LABEL_31;
  }
  v9 = 0;
  if ( v21 <= *((_DWORD *)v11 + 119) )
  {
    *(_QWORD *)(*((_QWORD *)v11 + 57) + 8LL * *((unsigned int *)v11 + 120)) = v28;
    *((_DWORD *)v11 + 120) = v21;
    goto LABEL_33;
  }
  v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11 + 456, 8u, 1, &v28);
  v19 = v23;
  if ( v23 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0xC0u);
  v9 = v19;
  if ( v19 < 0 )
    goto LABEL_30;
LABEL_33:
  CloseHandle(a4);
  if ( v26 )
    MilResource_ReleaseOnChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4), v26, 0LL);
  if ( v7 )
    CBaseObject::Release(v7);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v29);
  return v9;
}
