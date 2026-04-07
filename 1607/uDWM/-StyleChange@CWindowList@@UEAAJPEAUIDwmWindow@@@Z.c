/*
 * XREFs of ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D740
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x18001A154 (--0CWindowData@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A9F8 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001ACF4 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18001AE28 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18001B210 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001B42C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0B0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180030360 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032660 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180039084 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x1800411C4 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180041A80 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x180082DBC (-AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ.c)
 *     ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x180083098 (-RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ.c)
 *     ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x180083158 (-TestCounter@CDwmWinSqm@@AEAA_NXZ.c)
 */

__int64 __fastcall CWindowList::StyleChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  int v5; // esi
  struct CWindowData *v6; // rbp
  unsigned int v7; // ebp
  int v8; // r13d
  int v9; // esi
  char v10; // al
  char v11; // al
  __int64 v12; // rdi
  int v13; // eax
  CVisual *i; // rdi
  int v15; // ecx
  CWindowIconic *v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  char v19; // cl
  char v20; // al
  bool v21; // di
  bool v22; // r14
  struct _RTL_GENERIC_TABLE *v23; // r15
  char v24; // r12
  unsigned __int8 v25; // di
  void (__fastcall *v27)(CVisual *); // rax
  CDwmWinSqm *v28; // rcx
  CDwmWinSqm *v29; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // r15
  struct _LIST_ENTRY *j; // r14
  CWindowData *v32; // rax
  CWindowData *v33; // rax
  int v34; // eax
  CDwmWinSqm *v35; // rcx
  CDwmWinSqm *v36; // rcx
  CDwmWinSqm *v37; // rcx
  struct CWindowData *Buffer; // [rsp+78h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v32 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         1232LL);
  if ( !v32 || (v33 = CWindowData::CWindowData(v32), (v6 = v33) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56Au);
    v7 = -2147024882;
    goto LABEL_55;
  }
  *((_QWORD *)v33 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v33);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v34 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v34;
  if ( v34 >= 0 )
LABEL_2:
    v4 = v6;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x56Eu);
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_55:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x9F5u);
    goto LABEL_27;
  }
  if ( !v4 )
    goto LABEL_27;
  v8 = *((_DWORD *)v4 + 25);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( (v8 & 0x20000000) == 0 || (v9 & 0x20000000) != 0 )
  {
    if ( (v8 & 0x20000000) != 0 )
      goto LABEL_8;
    if ( (v9 & 0x20000000) == 0 )
      goto LABEL_8;
    if ( !WinSqmIsOptedIn_CachedInDwm() )
      goto LABEL_8;
    if ( (*((_BYTE *)v4 + 578) & 0x10) == 0 )
      goto LABEL_8;
    CDwmWinSqm::AdjustTimeScaledCount(v29);
    ++dword_1800BB200;
    if ( !CDwmWinSqm::TestCounter(v37) )
      goto LABEL_8;
  }
  else
  {
    CWindowData::ClearSnapshot(v4, 0, 0LL, 0);
    if ( !WinSqmIsOptedIn_CachedInDwm() )
      goto LABEL_8;
    if ( (*((_BYTE *)v4 + 578) & 0x10) == 0 )
      goto LABEL_8;
    CDwmWinSqm::AdjustTimeScaledCount(v28);
    --dword_1800BB200;
    if ( !CDwmWinSqm::TestCounter(v35) )
      goto LABEL_8;
  }
  CDwmWinSqm::RecordMinimizedWndRatio(v36);
LABEL_8:
  *((_DWORD *)v4 + 25) = v9;
  *((_DWORD *)v4 + 26) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *((_DWORD *)v4 + 27) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 160LL))(a2);
  *((_BYTE *)v4 + 576) &= ~8u;
  *((_BYTE *)v4 + 576) |= 8 * (v10 & 1);
  v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 168LL))(a2);
  *((_BYTE *)v4 + 576) &= ~0x80u;
  v12 = *((_QWORD *)v4 + 48);
  *((_BYTE *)v4 + 576) |= v11 << 7;
  if ( !v12 )
    goto LABEL_15;
  v13 = *(_DWORD *)(v12 + 80);
  if ( (v13 & 0x8000) == 0 )
  {
    *(_DWORD *)(v12 + 80) = v13 | 0x8000;
    for ( i = *(CVisual **)(v12 + 24); i; i = (CVisual *)*((_QWORD *)i + 3) )
    {
      v15 = *((_DWORD *)i + 20);
      if ( (v15 & 1) != 0 )
        break;
      v27 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)i + 32LL);
      if ( v27 == CVisual::SetDirtyChildren )
        *((_DWORD *)i + 20) = v15 | 1;
      else
        v27(i);
    }
  }
  v16 = (CWindowIconic *)*((_QWORD *)v4 + 52);
  if ( v16 )
    CWindowIconic::OnWindowStyleUpdated(v16, 1);
  v17 = CTopLevelWindow3D::OnWindowStyleUpdated(*((CTopLevelWindow3D **)v4 + 49));
  v7 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xA16u);
  }
  else
  {
LABEL_15:
    v18 = *((_QWORD *)v4 + 66);
    v19 = v18 && (*(_BYTE *)(v18 + 577) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v4);
    v20 = *((_BYTE *)v4 + 577) >> 7;
    if ( v20 != v19 )
      CWindowData::UpdateOwnerLists(v4, v20 == 0);
    v21 = (*((_BYTE *)v4 + 577) & 2) != 0;
    v22 = (*((_DWORD *)v4 + 25) & 0x11000000) == 0x11000000 && *((_QWORD *)v4 + 4);
    v23 = (struct _RTL_GENERIC_TABLE *)((char *)this + 400);
    v24 = RtlIsGenericTableEmpty(v23) == 0;
    *((_BYTE *)v4 + 577) &= ~2u;
    *((_BYTE *)v4 + 577) |= 2 * v22;
    if ( v22 )
    {
      if ( !v21 )
        CGenericSet<CWindowData *>::Add(v23, v4);
    }
    else if ( v21 )
    {
      Buffer = v4;
      RtlDeleteElementGenericTable(v23, &Buffer);
    }
    v25 = RtlIsGenericTableEmpty(v23) == 0;
    if ( v24 != v25 )
    {
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *((_QWORD *)v4 + 15));
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 20) = v25;
      for ( j = WindowListForDesktop->Flink; j != WindowListForDesktop; j = j->Flink )
      {
        if ( (BYTE1(j[36].Flink) & 8) != 0 )
        {
          CWindowData::OnColorizationUpdated((CWindowData *)j);
          PostMessageW((HWND)j[2].Blink, 0x321u, v25, 0LL);
        }
      }
    }
    if ( ((v8 ^ v9) & 0x20000000) != 0 )
      CWindowData::NotifyRepresentationChanged(v4);
  }
LABEL_27:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
