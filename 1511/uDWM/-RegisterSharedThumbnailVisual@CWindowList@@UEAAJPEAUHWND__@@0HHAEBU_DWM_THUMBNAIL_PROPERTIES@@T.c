/*
 * XREFs of ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002F300
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B4D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18002F288 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180032568 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18003C544 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18003EC0C (-WrapExistingResource@CVisual@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18003FFD0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x1800400C0 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     EtwppTemplate_q @ 0x18008213C (EtwppTemplate_q.c)
 */

__int64 __fastcall CWindowList::RegisterSharedThumbnailVisual(
        CWindowList *this,
        HWND a2,
        HWND a3,
        int a4,
        int a5,
        const struct _DWM_THUMBNAIL_PROPERTIES *a6,
        union _LARGE_INTEGER a7,
        unsigned int a8,
        unsigned int a9)
{
  struct CVisual *v12; // r12
  int SyncedWindowDataByHwnd; // eax
  unsigned int v14; // ebx
  struct CWindowData *v15; // r13
  struct CWindowData *v16; // r15
  char IsBaseThumbnailDestinationReachable; // al
  LPVOID (__fastcall *v18)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  CDesktopManager *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // r10
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // edx
  __int64 (__fastcall *v31)(CDCompThumbnailData *__hidden); // rbx
  int v32; // eax
  int updated; // eax
  CVisual *v34; // rcx
  int v36; // eax
  int v37; // r14d
  int v38; // eax
  int v39; // eax
  int v40; // r9d
  unsigned int v41; // [rsp+20h] [rbp-40h]
  unsigned int v42; // [rsp+30h] [rbp-30h] BYREF
  struct CVisual *v43; // [rsp+38h] [rbp-28h] BYREF
  struct CWindowData *v44; // [rsp+40h] [rbp-20h] BYREF
  struct CWindowData *v45; // [rsp+48h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v46; // [rsp+50h] [rbp-10h] BYREF

  v46 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v42 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v12 = 0LL;
  v43 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v44);
  v14 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v41 = 3231;
LABEL_58:
    v40 = SyncedWindowDataByHwnd;
LABEL_63:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v40, v41);
    goto LABEL_37;
  }
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a3, &v45);
  v14 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v41 = 3232;
    goto LABEL_58;
  }
  v15 = v44;
  if ( !v44
    || (v16 = v45, !a4) && !v45
    || ((*((_QWORD *)this + 49) = v44, !v16)
      ? (IsBaseThumbnailDestinationReachable = 0)
      : (IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable(
                                                 (struct CWindowData **)this,
                                                 v16)),
        *((_QWORD *)this + 49) = 0LL,
        IsBaseThumbnailDestinationReachable) )
  {
    v14 = -2147024809;
    goto LABEL_37;
  }
  v18 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v18 == WPF::ProcessHeapImpl::Alloc )
    v19 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x78uLL);
  else
    v19 = (_QWORD *)v18(WPF::g_pProcessHeap, 120LL);
  v20 = v19;
  if ( v19 )
  {
    v19[1] = 0LL;
    v19[2] = 0LL;
    v19[3] = 0LL;
    *((_BYTE *)v19 + 32) = 0;
    memset_0((char *)v19 + 36, 0, 0x2DuLL);
    v20[11] = 0LL;
    *v20 = &CDCompThumbnailData::`vftable';
    *((_WORD *)v20 + 17) = 0;
    v20[12] = 0LL;
    v20[13] = 0LL;
    *((_DWORD *)v20 + 28) = 0;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v20 )
  {
    v14 = -2147024882;
    v41 = 3252;
    v40 = -2147024882;
    goto LABEL_63;
  }
  v20[1] = a7.QuadPart;
  *((_BYTE *)v20 + 33) = a5 != 0;
  v20[2] = v15;
  *((_DWORD *)v20 + 28) = a4 != 0;
  v21 = CDesktopManager::s_pDesktopManagerInstance;
  v20[3] = v16;
  *((_BYTE *)v20 + 32) = 0;
  *((_BYTE *)v20 + 34) = 1;
  SyncedWindowDataByHwnd = MilResource_DuplicateHandleOnTarget(a8, a9, 31LL, *((_QWORD *)v21 + 4), &v42);
  v14 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v41 = 3266;
    goto LABEL_58;
  }
  if ( dword_1800BB564
    && (unsigned __int8)(byte_1800BB568 - 1) > 2u
    && (qword_1800BB550 & 0x8000000000000001uLL) != 0
    && (qword_1800BB558 & 0x8000000000000001uLL) == qword_1800BB558 )
  {
    EtwppTemplate_q(v22, &EtwTraceInfo_9005, a2);
  }
  SyncedWindowDataByHwnd = MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance
                                                    + 4));
  v14 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v41 = 3270;
    goto LABEL_58;
  }
  v23 = CVisual::WrapExistingResource(
          *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
          v42,
          &v43);
  v14 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0xCC8u);
    v12 = v43;
    goto LABEL_37;
  }
  v12 = v43;
  v24 = (_QWORD *)((char *)this + 352);
  v20[12] = v43;
  v25 = *((_DWORD *)this + 94);
  v45 = (struct CWindowData *)v20;
  v26 = v25 + 1;
  if ( v25 + 1 < v25 )
  {
    v37 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v14 = -2147024362;
    goto LABEL_61;
  }
  if ( v26 <= *((_DWORD *)this + 93) )
  {
    *(_QWORD *)(*v24 + 8LL * v25) = v45;
    *((_DWORD *)this + 94) = v26;
    goto LABEL_21;
  }
  v39 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v24, 8u, 1, &v45);
  v37 = v39;
  if ( v39 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v39, 0xC0u);
  v14 = v37;
  if ( v37 < 0 )
  {
LABEL_61:
    v41 = 3275;
LABEL_62:
    v40 = v37;
    goto LABEL_63;
  }
LABEL_21:
  v45 = (struct CWindowData *)v20;
  v27 = *((_DWORD *)v15 + 120);
  v12 = 0LL;
  v28 = v27 + 1;
  if ( v27 + 1 < v27 )
  {
    v37 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v14 = -2147024362;
LABEL_75:
    v41 = 3281;
    goto LABEL_62;
  }
  if ( v28 <= *((_DWORD *)v15 + 119) )
  {
    *(_QWORD *)(*((_QWORD *)v15 + 57) + 8LL * v27) = v45;
    *((_DWORD *)v15 + 120) = v28;
    goto LABEL_24;
  }
  v38 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15 + 456, 8u, 1, &v45);
  v37 = v38;
  if ( v38 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v38, 0xC0u);
  v14 = v37;
  if ( v37 < 0 )
    goto LABEL_75;
LABEL_24:
  if ( v16 )
  {
    v45 = (struct CWindowData *)v20;
    v29 = *((_DWORD *)v16 + 128);
    v30 = v29 + 1;
    if ( v29 + 1 < v29 )
    {
      v37 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v14 = -2147024362;
    }
    else
    {
      if ( v30 <= *((_DWORD *)v16 + 127) )
      {
        *(_QWORD *)(*((_QWORD *)v16 + 61) + 8LL * v29) = v45;
        *((_DWORD *)v16 + 128) = v30;
        goto LABEL_28;
      }
      v36 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v16 + 488, 8u, 1, &v45);
      v37 = v36;
      if ( v36 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v36, 0xC0u);
      v14 = v37;
      if ( v37 >= 0 )
        goto LABEL_28;
    }
    v41 = 3284;
    goto LABEL_62;
  }
LABEL_28:
  if ( a4 )
  {
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v20, a6);
    v14 = updated;
    if ( updated < 0 )
    {
      v41 = 3290;
      goto LABEL_80;
    }
    updated = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 8LL))(v20);
    v14 = updated;
    if ( updated < 0 )
    {
      v41 = 3291;
      goto LABEL_80;
    }
    updated = VisualCollection::InsertRelative(
                (VisualCollection *)(v20[12] + 32LL),
                (struct CVisual *)v20[13],
                0LL,
                0,
                1);
    v14 = updated;
    if ( updated < 0 )
    {
      v41 = 3292;
      goto LABEL_80;
    }
  }
  else
  {
    v31 = *(__int64 (__fastcall **)(CDCompThumbnailData *__hidden))(*v20 + 8LL);
    if ( v31 == CDCompThumbnailData::EnsureThumbnailVisual )
      v32 = CDCompThumbnailData::EnsureThumbnailVisual((CDCompThumbnailData *)v20);
    else
      v32 = v31((CDCompThumbnailData *)v20);
    v14 = v32;
    if ( v32 < 0 )
    {
      v41 = 3297;
      v40 = v32;
      goto LABEL_63;
    }
    updated = CThumbnailData::UpdateProperties((CThumbnailData *)v20, a6);
    v14 = updated;
    if ( updated < 0 )
    {
      v41 = 3298;
      goto LABEL_80;
    }
    updated = VisualCollection::InsertRelative(
                (VisualCollection *)(v20[12] + 32LL),
                (struct CVisual *)v20[11],
                0LL,
                0,
                1);
    v14 = updated;
    if ( updated < 0 )
    {
      v41 = 3299;
      goto LABEL_80;
    }
    if ( CDesktopManager::IsLogonDesktop(*((_QWORD *)v15 + 15)) )
    {
      updated = CVisual::RenderRecursive((CVisual *)v20[12]);
      v14 = updated;
      if ( updated < 0 )
      {
        v41 = 3304;
LABEL_80:
        v40 = updated;
        goto LABEL_63;
      }
    }
  }
  v34 = (CVisual *)*((_QWORD *)v15 + 48);
  if ( v34 )
    CVisual::SetDirtyFlags(v34, 0x8000000);
LABEL_37:
  if ( v42 )
    MilResource_ReleaseOnChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4), v42, 0LL);
  if ( v12 )
    CBaseObject::Release(v12);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v46);
  return v14;
}
