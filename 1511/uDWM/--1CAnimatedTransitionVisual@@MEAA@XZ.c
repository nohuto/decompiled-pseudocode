/*
 * XREFs of ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x18000DEA8
 * Callers:
 *     ??_ECAnimatedTransitionVisual@@MEAAPEAXI@Z @ 0x18000E13C (--_ECAnimatedTransitionVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x1800120D0 (-Release@CAnimationResource@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CAnimatedTransitionVisual::~CAnimatedTransitionVisual(CAnimatedTransitionVisual *this)
{
  CVisual *v2; // r14
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  CAnimationResource **v22; // rdi
  __int64 v23; // rsi
  void (__fastcall *v24)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  void (__fastcall *v25)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  void *v26; // rsi
  void (__fastcall *v27)(WPF::ProcessHeapImpl *__hidden, void *); // rbx

  *(_QWORD *)this = &CAnimatedTransitionVisual::`vftable'{for `IAnimatedVisual'};
  v2 = (CAnimatedTransitionVisual *)((char *)this + 8);
  v3 = (CBaseObject *)*((_QWORD *)this + 40);
  *(_QWORD *)v2 = &CAnimatedTransitionVisual::`vftable'{for `CVisual'};
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 71);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 72);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 34);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 74);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = (CBaseObject *)*((_QWORD *)this + 83);
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = (CBaseObject *)*((_QWORD *)this + 84);
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = (CBaseObject *)*((_QWORD *)this + 85);
  if ( v11 )
    CBaseObject::Release(v11);
  v12 = (CBaseObject *)*((_QWORD *)this + 86);
  if ( v12 )
    CBaseObject::Release(v12);
  v13 = (CBaseObject *)*((_QWORD *)this + 82);
  if ( v13 )
    CBaseObject::Release(v13);
  v14 = (CBaseObject *)*((_QWORD *)this + 87);
  if ( v14 )
    CBaseObject::Release(v14);
  v15 = (CBaseObject *)*((_QWORD *)this + 88);
  if ( v15 )
    CBaseObject::Release(v15);
  v16 = (CBaseObject *)*((_QWORD *)this + 89);
  if ( v16 )
    CBaseObject::Release(v16);
  v17 = (CBaseObject *)*((_QWORD *)this + 73);
  if ( v17 )
    CBaseObject::Release(v17);
  v18 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v18 )
    CBaseObject::Release(v18);
  v19 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v19 )
    CBaseObject::Release(v19);
  v20 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v20 )
    CBaseObject::Release(v20);
  v21 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v21 )
    CBaseObject::Release(v21);
  v22 = (CAnimationResource **)((char *)this + 600);
  v23 = 7LL;
  do
  {
    if ( *v22 )
      CAnimationResource::Release(*v22);
    ++v22;
    --v23;
  }
  while ( v23 );
  v24 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v24 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 41));
  else
    v24(WPF::g_pProcessHeap, *((void **)this + 41));
  v25 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v25 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 42));
  else
    v25(WPF::g_pProcessHeap, *((void **)this + 42));
  v26 = (void *)*((_QWORD *)this + 43);
  v27 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v27 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v26);
  else
    v27(WPF::g_pProcessHeap, v26);
  CVisual::~CVisual(v2);
}
