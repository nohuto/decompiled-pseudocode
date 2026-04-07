/*
 * XREFs of ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E2B0
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C4E0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180019A98 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x180019FD0 (--_GCResource@@MEAAPEAXI@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001A154 (--0CWindowData@@QEAA@XZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001B42C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180026E90 (-OnClipUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032660 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClipChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rax
  struct CWindowData *v5; // rbx
  int v6; // esi
  struct CWindowData *v7; // rdi
  unsigned int v8; // edi
  bool v9; // bp
  int v10; // eax
  volatile signed __int32 *v11; // rcx
  CResource *(__fastcall *v12)(CResource *, char); // rax
  CAccent **v13; // rcx
  void *(__fastcall *v15)(WPF::ProcessHeapImpl *, size_t); // rax
  CWindowData *v16; // rax
  CWindowData *v17; // rax
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-38h]
  unsigned int v20; // [rsp+68h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)a2;
  v20 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v4 + 8))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v15 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v15 == WPF::ProcessHeapImpl::AllocClear )
    v16 = (CWindowData *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x4D0uLL);
  else
    v16 = (CWindowData *)v15(WPF::g_pProcessHeap, 1232LL);
  if ( !v16 || (v17 = CWindowData::CWindowData(v16), (v7 = v17) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56Au);
    v8 = -2147024882;
    goto LABEL_31;
  }
  *((_QWORD *)v17 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v17);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v18 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v18;
  if ( v18 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x56Eu);
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_31:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF73u);
    goto LABEL_17;
  }
  if ( v5 && *((_QWORD *)v5 + 4) )
  {
    v9 = *((_QWORD *)v5 + 44) != 0LL;
    v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, unsigned int *))(*(_QWORD *)a2 + 312LL))(
            a2,
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
            &v20);
    v8 = v10;
    if ( v10 < 0 )
    {
      v19 = 3964;
      goto LABEL_35;
    }
    v11 = (volatile signed __int32 *)*((_QWORD *)v5 + 44);
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        v12 = **(CResource *(__fastcall ***)(CResource *, char))v11;
        if ( v12 == CResource::`scalar deleting destructor' )
          CResource::`scalar deleting destructor'((CResource *)v11, 1);
        else
          v12((CResource *)v11, 1);
      }
      *((_QWORD *)v5 + 44) = 0LL;
    }
    if ( v20 )
    {
      v10 = CResource::WrapExistingResource(
              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
              v20,
              (struct CResource **)v5 + 44);
      v8 = v10;
      if ( v10 < 0 )
      {
        v19 = 3968;
        goto LABEL_35;
      }
    }
    v13 = (CAccent **)*((_QWORD *)v5 + 48);
    if ( v13 )
      CTopLevelWindow::OnClipUpdated(v13);
    if ( v9 != (*((_QWORD *)v5 + 44) != 0LL) )
    {
      v10 = CWindowData::NotifyRepresentationChanged(v5);
      v8 = v10;
      if ( v10 < 0 )
      {
        v19 = 3983;
LABEL_35:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v19);
      }
    }
  }
LABEL_17:
  if ( v20 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 120LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
