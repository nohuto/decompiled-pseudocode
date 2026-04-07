/*
 * XREFs of ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002CAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x180008598 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180008AD0 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180017DE8 (--0CWindowData@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x1800185F4 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x1800188DC (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180018A14 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180018DAC (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180018FCC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180027690 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180029AE8 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002EED0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003AD0C (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x18007ABA4 (-AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ.c)
 *     ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x18007AE94 (-RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ.c)
 *     ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x18007AF54 (-TestCounter@CDwmWinSqm@@AEAA_NXZ.c)
 */

__int64 __fastcall CWindowList::StyleChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rbx
  int v5; // esi
  struct CWindowData *v6; // rbp
  unsigned int v7; // r15d
  int v8; // ebp
  int v9; // eax
  int v10; // esi
  char v11; // al
  char v12; // al
  __int64 v13; // rdi
  int v14; // eax
  CVisual *i; // rdi
  int v16; // ecx
  CWindowIconic *v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  char v20; // cl
  char v21; // al
  bool v22; // di
  bool v23; // r14
  struct _RTL_GENERIC_TABLE *v24; // r12
  char v25; // r13
  unsigned __int8 v26; // di
  void (__fastcall *v28)(CVisual *); // r14
  CDwmWinSqm *v29; // rcx
  CDwmWinSqm *v30; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // r12
  struct _LIST_ENTRY *j; // r14
  CWindowData *v33; // rax
  CWindowData *v34; // rax
  int v35; // eax
  CDwmWinSqm *v36; // rcx
  CDwmWinSqm *v37; // rcx
  CDwmWinSqm *v38; // rcx
  __int64 Buffer; // [rsp+78h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v33 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         1216LL);
  if ( !v33 || (v34 = CWindowData::CWindowData(v33), (v6 = v34) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x603u);
    v7 = -2147024882;
    goto LABEL_53;
  }
  *((_QWORD *)v34 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v34);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v35 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v35;
  if ( v35 >= 0 )
LABEL_2:
    v4 = (__int64)v6;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v35, 0x607u);
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_53:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xB52u);
    goto LABEL_26;
  }
  if ( !v4 )
    goto LABEL_26;
  v8 = *(_DWORD *)(v4 + 100);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v10 = v9;
  if ( (v9 & 0x20000000) == 0 && (v8 & 0x20000000) != 0 )
  {
    CWindowData::ClearSnapshot((CWindowData *)v4, 0, 0LL, 0);
    if ( !WinSqmIsOptedIn_CachedInDwm() )
      goto LABEL_7;
    if ( (*(_BYTE *)(v4 + 554) & 0x10) == 0 )
      goto LABEL_7;
    CDwmWinSqm::AdjustTimeScaledCount(v30);
    --dword_1800BD1E0;
    if ( !CDwmWinSqm::TestCounter(v36) )
      goto LABEL_7;
  }
  else
  {
    if ( (v9 & 0x20000000) == 0 || (v8 & 0x20000000) != 0 )
      goto LABEL_7;
    if ( !WinSqmIsOptedIn_CachedInDwm() )
      goto LABEL_7;
    if ( (*(_BYTE *)(v4 + 554) & 0x10) == 0 )
      goto LABEL_7;
    CDwmWinSqm::AdjustTimeScaledCount(v29);
    ++dword_1800BD1E0;
    if ( !CDwmWinSqm::TestCounter(v38) )
      goto LABEL_7;
  }
  CDwmWinSqm::RecordMinimizedWndRatio(v37);
LABEL_7:
  *(_DWORD *)(v4 + 100) = v10;
  *(_DWORD *)(v4 + 104) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *(_DWORD *)(v4 + 108) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 160LL))(a2);
  *(_BYTE *)(v4 + 552) &= ~8u;
  *(_BYTE *)(v4 + 552) |= 8 * (v11 & 1);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 168LL))(a2);
  *(_BYTE *)(v4 + 552) &= ~0x80u;
  v13 = *(_QWORD *)(v4 + 368);
  *(_BYTE *)(v4 + 552) |= v12 << 7;
  if ( !v13 )
    goto LABEL_14;
  v14 = *(_DWORD *)(v13 + 80);
  if ( (v14 & 0x8000) == 0 )
  {
    *(_DWORD *)(v13 + 80) = v14 | 0x8000;
    for ( i = *(CVisual **)(v13 + 24); i; i = (CVisual *)*((_QWORD *)i + 3) )
    {
      v16 = *((_DWORD *)i + 20);
      if ( (v16 & 1) != 0 )
        break;
      v28 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)i + 32LL);
      if ( v28 == CVisual::SetDirtyChildren )
        *((_DWORD *)i + 20) = v16 | 1;
      else
        v28(i);
    }
  }
  v17 = *(CWindowIconic **)(v4 + 392);
  if ( v17 )
    CWindowIconic::OnWindowStyleUpdated(v17, 1);
  v18 = CTopLevelWindow3D::OnWindowStyleUpdated(*(CTopLevelWindow3D **)(v4 + 376));
  v7 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0xB73u);
  }
  else
  {
LABEL_14:
    v19 = *(_QWORD *)(v4 + 504);
    v20 = v19 && (*(_BYTE *)(v19 + 553) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR((CWindowData *)v4);
    v21 = *(_BYTE *)(v4 + 553) >> 7;
    if ( v21 != v20 )
      CWindowData::UpdateOwnerLists((CWindowData *)v4, v21 == 0);
    v22 = (*(_BYTE *)(v4 + 553) & 2) != 0;
    v23 = (*(_DWORD *)(v4 + 100) & 0x11000000) == 0x11000000 && *(_QWORD *)(v4 + 32);
    v24 = (struct _RTL_GENERIC_TABLE *)((char *)this + 400);
    v25 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 400)) == 0;
    *(_BYTE *)(v4 + 553) &= ~2u;
    *(_BYTE *)(v4 + 553) |= 2 * v23;
    if ( v23 )
    {
      if ( !v22 )
        CGenericSet<CWindowData *>::Add(v24, v4);
    }
    else if ( v22 )
    {
      Buffer = v4;
      RtlDeleteElementGenericTable(v24, &Buffer);
    }
    v26 = RtlIsGenericTableEmpty(v24) == 0;
    if ( v25 != v26 )
    {
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *(_QWORD *)(v4 + 120));
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 20) = v26;
      for ( j = WindowListForDesktop->Flink; j != WindowListForDesktop; j = j->Flink )
      {
        if ( (BYTE1(j[34].Blink) & 8) != 0 )
        {
          CWindowData::OnColorizationUpdated((CWindowData *)j);
          PostMessageW((HWND)j[2].Blink, 0x321u, v26, 0LL);
        }
      }
    }
    if ( ((v8 ^ v10) & 0x20000000) != 0 )
      CWindowData::NotifyRepresentationChanged((CWindowData *)v4);
  }
LABEL_26:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
