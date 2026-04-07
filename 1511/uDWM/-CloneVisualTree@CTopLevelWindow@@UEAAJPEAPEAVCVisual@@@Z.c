/*
 * XREFs of ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800241E0
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000F4D8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18003DB40 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x1800228F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x180024508 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x18002A440 (-Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x18002A97C (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTree(CTopLevelWindow *this, struct CVisual **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rsi
  CTopLevelWindow *v5; // rax
  CTopLevelWindow *v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // al
  CVisual *v19; // rcx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rcx
  CBaseObject *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  BOOL v26; // edx
  __int64 v27; // rax
  BOOL v28; // ecx
  __int64 v29; // rax
  BOOL v30; // eax
  __int64 v31; // r8
  __int64 v32; // rax

  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CTopLevelWindow *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x328uLL);
  else
    v5 = (CTopLevelWindow *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(WPF::g_pProcessHeap, 808LL);
  if ( v5 )
    v6 = CTopLevelWindow::CTopLevelWindow(v5);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = CTopLevelWindow::Initialize(v6, *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), 1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x15FBu);
    }
    else
    {
      *a2 = v6;
      _InterlockedAdd((volatile signed __int32 *)v6 + 2, 1u);
      v9 = CVisual::CloneVisualTree(this, a2);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x15FFu);
      }
      else
      {
        v10 = *((_QWORD *)v6 + 6);
        *((_QWORD *)v6 + 35) = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 )
          _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v10 + 8LL), 1u);
        v11 = *((_QWORD *)this + 70);
        if ( v11 && (*(_BYTE *)(v11 + 84) & 8) == 0 )
        {
          v12 = *((_QWORD *)v6 + 35);
          *((_QWORD *)v6 + 70) = *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v12 + 72) - 1));
          v13 = *(_QWORD *)(v12 + 48);
          if ( *(_QWORD *)(v13 + 8LL * (unsigned int)(*(_DWORD *)(v12 + 72) - 1)) )
            _InterlockedAdd(
              (volatile signed __int32 *)(*(_QWORD *)(v13 + 8LL * (unsigned int)(*(_DWORD *)(v12 + 72) - 1)) + 8LL),
              1u);
          v14 = *((_QWORD *)v6 + 70);
          *((_QWORD *)v6 + 69) = **(_QWORD **)(v14 + 48);
          v15 = *(_QWORD *)(v14 + 48);
          if ( *(_QWORD *)v15 )
            _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v15 + 8LL), 1u);
        }
        v16 = *((_QWORD *)this + 67);
        if ( v16 )
        {
          if ( (*(_BYTE *)(v16 + 84) & 8) == 0 )
          {
            v24 = *((_QWORD *)this + 37);
            if ( v24 )
            {
              if ( (*(_BYTE *)(v24 + 84) & 8) == 0 )
              {
                v25 = *((_QWORD *)this + 38);
                v26 = v25 && (*(_BYTE *)(v25 + 84) & 8) == 0;
                v27 = *((_QWORD *)this + 39);
                v28 = v27 && (*(_BYTE *)(v27 + 84) & 8) == 0;
                v29 = *((_QWORD *)this + 36);
                v30 = v29 && (*(_BYTE *)(v29 + 84) & 8) == 0;
                v31 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 35) + 48LL) + 8LL * (unsigned int)(v28 + v30 + v26));
                if ( v31 )
                {
                  *((_QWORD *)v6 + 67) = **(_QWORD **)(v31 + 48);
                  v32 = *(_QWORD *)(v31 + 48);
                  if ( *(_QWORD *)v32 )
                    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v32 + 8LL), 1u);
                }
              }
            }
          }
        }
        v17 = *((_BYTE *)v6 + 264);
        *(_OWORD *)((char *)v6 + 612) = *(_OWORD *)((char *)this + 612);
        *(_OWORD *)((char *)v6 + 628) = *(_OWORD *)((char *)this + 628);
        *(_OWORD *)((char *)v6 + 644) = *(_OWORD *)((char *)this + 644);
        *(_OWORD *)((char *)v6 + 660) = *(_OWORD *)((char *)this + 660);
        *(_OWORD *)((char *)v6 + 676) = *(_OWORD *)((char *)this + 676);
        *((_BYTE *)v6 + 264) ^= (*((_BYTE *)this + 264) ^ v17) & 4;
        *((_BYTE *)v6 + 265) ^= (*((_BYTE *)v6 + 265) ^ *((_BYTE *)this + 265)) & 1;
        if ( (*((_BYTE *)this + 264) & 0x10) == 0 )
        {
          v19 = (CVisual *)*((_QWORD *)this + 38);
          if ( v19 )
            CVisual::ClearInstructions(v19);
          CTopLevelWindow::SetShadowOpacity(v6, 0.0);
          v20 = (CBaseObject *)*((_QWORD *)this + 71);
          if ( v20 )
          {
            CBaseObject::Release(v20);
            *((_QWORD *)this + 71) = 0LL;
          }
          v21 = (CBaseObject *)*((_QWORD *)this + 72);
          if ( v21 )
          {
            CBaseObject::Release(v21);
            *((_QWORD *)this + 72) = 0LL;
          }
          v22 = (CBaseObject *)*((_QWORD *)this + 74);
          if ( v22 )
          {
            CBaseObject::Release(v22);
            *((_QWORD *)this + 74) = 0LL;
          }
          v23 = (CBaseObject *)*((_QWORD *)this + 75);
          if ( v23 )
          {
            CBaseObject::Release(v23);
            *((_QWORD *)this + 75) = 0LL;
          }
          CVisual::SetDirtyFlags(this, 0x4000);
        }
      }
    }
    CBaseObject::Release(v6);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x15FAu);
  }
  return v8;
}
