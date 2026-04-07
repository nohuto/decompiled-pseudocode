/*
 * XREFs of ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001CA30
 * Callers:
 *     ?CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x180019550 (-CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001D2A0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001FB60 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CCanvas@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001C6D0 (-Initialize@CCanvas@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001FB60 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvas::CloneVisualTree(CCanvas *this, struct CVisual **a2)
{
  volatile signed __int32 *v2; // rbx
  struct IDwmChannel *v5; // rsi
  void *(*v6)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CBaseObject *v7; // rax
  CBaseObject *v8; // rdi
  int v9; // eax
  int v10; // esi
  unsigned int v11; // edi
  int v12; // eax
  CBaseObject *v14; // [rsp+60h] [rbp+18h]

  v2 = 0LL;
  v14 = 0LL;
  v5 = *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL);
  v6 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v6 == WPF::ProcessHeapImpl::AllocClear )
    v7 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x108uLL);
  else
    v7 = (CBaseObject *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v6)(WPF::g_pProcessHeap, 264LL);
  v8 = v7;
  if ( !v7 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x14u);
    v11 = -2147024882;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x53u);
    goto LABEL_11;
  }
  *((_DWORD *)v7 + 2) = 1;
  *((_QWORD *)v7 + 4) = &VisualCollection::`vftable';
  *((_QWORD *)v7 + 6) = 0LL;
  *((_QWORD *)v7 + 7) = 0LL;
  *((_QWORD *)v7 + 8) = 0LL;
  *((_DWORD *)v7 + 18) = 0;
  *((_QWORD *)v7 + 29) = 0LL;
  *((_QWORD *)v7 + 30) = 0LL;
  *((_QWORD *)v7 + 31) = 0LL;
  *((_DWORD *)v7 + 64) = 0;
  *((_QWORD *)v7 + 21) = 0x3FF0000000000000LL;
  *((_QWORD *)v7 + 20) = 0x3FF0000000000000LL;
  *((_QWORD *)v7 + 22) = 0x3FF0000000000000LL;
  *(_QWORD *)v7 = &CCanvas::`vftable';
  *((_QWORD *)v7 + 2) = 0LL;
  *((_QWORD *)v7 + 3) = 0LL;
  *((_QWORD *)v7 + 11) = 0LL;
  *((_QWORD *)v7 + 12) = 0LL;
  *((_DWORD *)v7 + 46) = -2;
  *((_QWORD *)v7 + 5) = v7;
  *((_DWORD *)v7 + 30) = 0x7FFFFFFF;
  *((_DWORD *)v7 + 32) = 0x7FFFFFFF;
  *((_DWORD *)v7 + 31) = 0x7FFFFFFF;
  *((_DWORD *)v7 + 33) = 0x7FFFFFFF;
  v9 = CCanvas::Initialize(v7, v5);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x14u);
    CBaseObject::Release(v8);
  }
  else
  {
    v2 = (volatile signed __int32 *)v8;
    v14 = v8;
  }
  v11 = v10;
  if ( v10 < 0 )
    goto LABEL_18;
  *a2 = (struct CVisual *)v2;
  if ( v2 )
  {
    _InterlockedIncrement(v2 + 2);
    v2 = (volatile signed __int32 *)v14;
  }
  v12 = CVisual::CloneVisualTree(this, a2);
  v11 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x57u);
LABEL_11:
  if ( v2 && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(CBaseObject *, __int64))v14)(v14, 1LL);
  return v11;
}
