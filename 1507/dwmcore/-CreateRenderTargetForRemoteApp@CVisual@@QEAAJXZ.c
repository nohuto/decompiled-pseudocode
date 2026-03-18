/*
 * XREFs of ?CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x1800371A4
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800345B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 * Callees:
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x18005C6EC (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?AddEntry@CWindowManager@@AEAAJPEAVCWindowAssociationMapEntry@@@Z @ 0x18005C7BC (-AddEntry@CWindowManager@@AEAAJPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x18005CA38 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_x @ 0x18010D3A4 (Template_x.c)
 *     ?AddApplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_K@Z @ 0x180123638 (-AddApplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CVisual::CreateRenderTargetForRemoteApp(CVisual *this)
{
  unsigned int v1; // ebx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  CWindowManager *v6; // rbp
  int Entry; // edi
  int v8; // eax
  __int64 v9; // rcx
  struct CWindowAssociationMapEntry *v10; // rax
  struct CWindowAssociationMapEntry *v11; // r14
  int v12; // eax
  unsigned int v13; // edx
  struct CWindowAssociationMapEntry *v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*((_BYTE *)this + 89) & 0x10) != 0 && *(int *)(*((_QWORD *)this + 2) + 1032LL) >= 2 )
  {
    v8 = CRemoteApplicationWindowSet::AddApplicationWindow(qword_1801930E0, *((_QWORD *)this + 28));
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x9F2u);
      return v1;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_x(v9, &EVTDESC_DETECT_TOPLEVELWINDOW_CREATE, *((_QWORD *)this + 28));
  }
  if ( (*((_BYTE *)this + 89) & 0x10) != 0 )
  {
    v4 = *((_QWORD *)this + 2);
    v5 = *((_QWORD *)this + 28);
    v14 = 0LL;
    v6 = *(CWindowManager **)(v4 + 48);
    Entry = CWindowManager::FindEntry(v6, v5, &v14);
    if ( Entry < 0 )
    {
      v10 = (struct CWindowAssociationMapEntry *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                                   WPF::g_pProcessHeap,
                                                   32LL);
      v11 = v10;
      if ( v10 )
      {
        *(_QWORD *)v10 = 0LL;
        *((_QWORD *)v10 + 1) = 0LL;
        *((_QWORD *)v10 + 3) = 0LL;
      }
      else
      {
        v11 = 0LL;
      }
      if ( !v11 )
      {
        Entry = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x5Eu);
        v1 = -2147024882;
        goto LABEL_19;
      }
      *(_QWORD *)v11 = *((_QWORD *)this + 28);
      *((_QWORD *)v11 + 2) = this;
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this + 8LL))(this);
      v12 = CWindowManager::AddEntry(v6, v11);
      Entry = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x64u);
        CWindowAssociationMapEntry::`scalar deleting destructor'(v11, v13);
      }
    }
    else
    {
      *((_QWORD *)v14 + 2) = this;
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)this + 8LL))(this);
    }
    v1 = Entry;
    if ( Entry >= 0 )
      return v1;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Entry, 0x9FFu);
  }
  return v1;
}
