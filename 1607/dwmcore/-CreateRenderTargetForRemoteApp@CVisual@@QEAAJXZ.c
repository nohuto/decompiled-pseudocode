/*
 * XREFs of ?CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180051F00
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FEF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x18004F8E0 (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800ADECC (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?AddEntry@CWindowManager@@AEAAJPEAVCWindowAssociationMapEntry@@@Z @ 0x1800ADF9C (-AddEntry@CWindowManager@@AEAAJPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800AE270 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 *     ?AddApplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_K@Z @ 0x180161DC4 (-AddApplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CVisual::CreateRenderTargetForRemoteApp(CVisual *this)
{
  unsigned int v1; // esi
  __int64 v4; // rax
  CWindowManager *v5; // rbp
  unsigned __int64 v6; // rax
  int Entry; // edi
  unsigned __int64 TopLevelWindow; // rax
  int v9; // eax
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  struct CWindowAssociationMapEntry *v12; // rax
  struct CWindowAssociationMapEntry *v13; // rsi
  int v14; // eax
  unsigned int v15; // edx
  struct CWindowAssociationMapEntry *v16; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*((_BYTE *)this + 153) & 4) != 0 && *(int *)(*((_QWORD *)this + 2) + 1104LL) >= 2 )
  {
    TopLevelWindow = CVisual::GetTopLevelWindow(this);
    v9 = CRemoteApplicationWindowSet::AddApplicationWindow(qword_1801EFD20, TopLevelWindow);
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA5Au);
      return v1;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v10 = CVisual::GetTopLevelWindow(this);
      Template_x(v11, &EVTDESC_DETECT_TOPLEVELWINDOW_CREATE, v10);
    }
  }
  if ( (*((_BYTE *)this + 153) & 4) != 0 )
  {
    v4 = *((_QWORD *)this + 2);
    v16 = 0LL;
    v5 = *(CWindowManager **)(v4 + 48);
    v6 = CVisual::GetTopLevelWindow(this);
    Entry = CWindowManager::FindEntry(v5, v6, &v16);
    if ( Entry < 0 )
    {
      v12 = (struct CWindowAssociationMapEntry *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                                   WPF::g_pProcessHeap,
                                                   32LL);
      v13 = v12;
      if ( v12 )
      {
        *(_QWORD *)v12 = 0LL;
        *((_QWORD *)v12 + 1) = 0LL;
        *((_QWORD *)v12 + 3) = 0LL;
      }
      else
      {
        v13 = 0LL;
      }
      if ( !v13 )
      {
        Entry = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x5Eu);
        v1 = -2147024882;
        goto LABEL_19;
      }
      *(_QWORD *)v13 = CVisual::GetTopLevelWindow(this);
      *((_QWORD *)v13 + 2) = this;
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this + 8LL))(this);
      v14 = CWindowManager::AddEntry(v5, v13);
      Entry = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x64u);
        CWindowAssociationMapEntry::`scalar deleting destructor'(v13, v15);
      }
    }
    else
    {
      *((_QWORD *)v16 + 2) = this;
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this + 8LL))(this);
    }
    v1 = Entry;
    if ( Entry >= 0 )
      return v1;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Entry, 0xA67u);
  }
  return v1;
}
