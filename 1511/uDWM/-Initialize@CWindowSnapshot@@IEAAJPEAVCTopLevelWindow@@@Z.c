/*
 * XREFs of ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18003DB40
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18003D9F0 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x18001D518 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001D5D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x18001E5A4 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800241E0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x1800283B0 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowSnapshot::Initialize(CWindowSnapshot *this, struct CTopLevelWindow *a2)
{
  __int64 v2; // rbx
  char v5; // al
  bool v6; // bp
  int v7; // eax
  unsigned int v8; // edi
  void *(__fastcall *v9)(WPF::ProcessHeapImpl *, size_t); // r15
  CWindowData *v10; // rax
  CWindowData *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  CBaseObject *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  CBaseObject *v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-38h]
  CBaseObject *v20; // [rsp+68h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 93);
  v20 = 0LL;
  v5 = *(_BYTE *)(v2 + 568);
  v6 = (v5 & 2) != 0;
  if ( (v5 & 4) == 0 )
  {
    *(_BYTE *)(v2 + 568) = v5 & 0xFD;
    CWindowData::OnWindowStyleUpdated((CWindowData *)v2);
  }
  CTopLevelWindow::NotifyMouseLeave(*(CTopLevelWindow **)(v2 + 384));
  v7 = CVisual::RenderRecursive(a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v19 = 93;
    goto LABEL_27;
  }
  v9 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v9 == WPF::ProcessHeapImpl::AllocClear )
    v10 = (CWindowData *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x4C8uLL);
  else
    v10 = (CWindowData *)v9(WPF::g_pProcessHeap, 1224LL);
  if ( v10 )
    v11 = CWindowData::CWindowData(v10);
  else
    v11 = 0LL;
  *((_QWORD *)this + 4) = v11;
  if ( !v11 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x62u);
    goto LABEL_18;
  }
  *((_QWORD *)v11 + 5) = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = *(_QWORD *)(v2 + 32);
  *(_OWORD *)(*((_QWORD *)this + 4) + 48LL) = *(_OWORD *)(v2 + 48);
  *(_OWORD *)(*((_QWORD *)this + 4) + 64LL) = *(_OWORD *)(v2 + 64);
  *(_OWORD *)(*((_QWORD *)this + 4) + 80LL) = *(_OWORD *)(v2 + 80);
  *(_OWORD *)(*((_QWORD *)this + 4) + 188LL) = *(_OWORD *)(v2 + 188);
  *(_OWORD *)(*((_QWORD *)this + 4) + 236LL) = *(_OWORD *)(v2 + 236);
  *(_OWORD *)(*((_QWORD *)this + 4) + 252LL) = *(_OWORD *)(v2 + 252);
  *(_DWORD *)(*((_QWORD *)this + 4) + 360LL) = *(_DWORD *)(v2 + 360);
  *(_BYTE *)(*((_QWORD *)this + 4) + 571LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 571LL) ^ *(_BYTE *)(v2 + 571)) & 4;
  *(_QWORD *)(*((_QWORD *)this + 4) + 120LL) = *(_QWORD *)(v2 + 120);
  *(_DWORD *)(*((_QWORD *)this + 4) + 576LL) = *(_DWORD *)(v2 + 576);
  *(_BYTE *)(*((_QWORD *)this + 4) + 572LL) ^= (*(_BYTE *)(v2 + 572) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 572LL)) & 8;
  *(_BYTE *)(*((_QWORD *)this + 4) + 332LL) = *(_BYTE *)(v2 + 332);
  *(_DWORD *)(*((_QWORD *)this + 4) + 112LL) = *(_DWORD *)(v2 + 112);
  *(_OWORD *)(*((_QWORD *)this + 4) + 580LL) = *(_OWORD *)(v2 + 580);
  *(_OWORD *)(*((_QWORD *)this + 4) + 596LL) = *(_OWORD *)(v2 + 596);
  *(_OWORD *)(*((_QWORD *)this + 4) + 612LL) = *(_OWORD *)(v2 + 612);
  *(_OWORD *)(*((_QWORD *)this + 4) + 628LL) = *(_OWORD *)(v2 + 628);
  *(_DWORD *)(*((_QWORD *)this + 4) + 100LL) = *(_DWORD *)(v2 + 100);
  *(_DWORD *)(*((_QWORD *)this + 4) + 104LL) = *(_DWORD *)(v2 + 104);
  *(_DWORD *)(*((_QWORD *)this + 4) + 96LL) = *(_DWORD *)(v2 + 96);
  *(_OWORD *)(*((_QWORD *)this + 4) + 272LL) = *(_OWORD *)(v2 + 272);
  *(_QWORD *)(*((_QWORD *)this + 4) + 288LL) = *(_QWORD *)(v2 + 288);
  *(_QWORD *)(*((_QWORD *)this + 4) + 296LL) = *(_QWORD *)(v2 + 296);
  *(_BYTE *)(*((_QWORD *)this + 4) + 573LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 573LL) ^ *(_BYTE *)(v2 + 573)) & 1;
  *(_BYTE *)(*((_QWORD *)this + 4) + 569LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 569LL) ^ (16
                                                                                           * (CWindowData::IsSimpleClientArea((CWindowData *)v2) == 0))) & 0x10;
  *(_QWORD *)(*((_QWORD *)this + 4) + 352LL) = *(_QWORD *)(v2 + 352);
  v12 = *(_QWORD *)(v2 + 352);
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  *(_QWORD *)(*((_QWORD *)this + 4) + 368LL) = *(_QWORD *)(v2 + 368);
  v13 = *(_QWORD *)(v2 + 368);
  if ( v13 )
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
  if ( (*(_BYTE *)(v2 + 572) & 8) == 0 )
  {
    v7 = CTopLevelWindow::CloneVisualTree(a2, &v20);
    v8 = v7;
    if ( v7 < 0 )
    {
      v19 = 136;
    }
    else
    {
      v14 = v20;
      v15 = *((_QWORD *)this + 4);
      v20 = 0LL;
      *((_QWORD *)this + 3) = v14;
      *(_QWORD *)(v15 + 384) = v14;
      v16 = *((_QWORD *)this + 3);
      if ( v16 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      *(_QWORD *)(*((_QWORD *)this + 3) + 744LL) = *((_QWORD *)this + 4);
      v7 = CVisual::RenderRecursive(*((CVisual **)this + 3));
      v8 = v7;
      if ( v7 >= 0 )
        goto LABEL_18;
      v19 = 145;
    }
LABEL_27:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, v19);
  }
LABEL_18:
  *(_BYTE *)(v2 + 568) &= ~2u;
  v17 = v20;
  *(_BYTE *)(v2 + 568) |= 2 * v6;
  if ( v17 )
    CBaseObject::Release(v17);
  return v8;
}
