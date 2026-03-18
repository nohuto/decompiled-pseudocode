/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x18004C96C
 * Callers:
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x180047DD0 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800640B0 (--1CWindowNode@@MEAA@XZ.c)
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x180120F00 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x1800487D8 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180049C60 (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004B800 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x1800592BC (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x18005C800 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x18005C850 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180067E18 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800856B0 (-Release@CResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x1800917A0 (-Release@CPrimitiveGroup@@UEAAKXZ.c)
 *     ?ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z @ 0x1800946F8 (-ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180094860 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x180120C94 (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 *     ?RemoveVisualInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@PEAIPEAV2@@Z @ 0x180124958 (-RemoveVisualInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@PEAIPEAV2@@Z.c)
 */

void __fastcall CVisual::~CVisual(CComposition **this)
{
  CVisualGroup *v2; // rcx
  __int64 i; // rbx
  CVisual *v4; // rcx
  CComposition *v5; // rbx
  CComposition *v6; // rbx
  CComposition *v7; // rdi
  struct CWeakReferenceBase *v8; // rdx
  CComposition *v9; // rbx
  CComposition *v10; // rbx
  CComposition *v11; // rdi
  _QWORD *j; // rbx
  _QWORD *v13; // r14
  void *(__fastcall ***v14)(CVisualTreeData *__hidden, unsigned int); // rbx
  unsigned __int64 v15; // rbp
  bool v16; // zf
  unsigned __int64 v17; // rbp
  unsigned int (__fastcall *v18)(CPrimitiveGroup *__hidden); // rdi
  void *(__fastcall *v19)(CVisualTreeData *__hidden, unsigned int); // rdi
  unsigned int (__fastcall *v20)(CResource *__hidden); // rdi
  unsigned int (__fastcall *v21)(CResource *__hidden); // rdi
  unsigned int (__fastcall *v22)(CResource *__hidden); // rdi
  _QWORD *v23; // rdi
  __int64 v24; // rbp
  void (__fastcall *v25)(CVisualTreeData *__hidden); // rbx
  __int64 v26; // rdi
  int v27; // eax
  CVisualGroup *v28; // rcx
  int v29; // eax

  *this = (CComposition *)&CVisual::`vftable';
  CVisual::ReleaseBspPolygonList((CVisual *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 184); i = (unsigned int)(i + 1) )
  {
    v26 = *((_QWORD *)this[89] + i);
    v27 = CVisualGroup::RemoveVisualInternal(
            v2,
            *(struct CVisual ***)(v26 + 48),
            (unsigned int *)(v26 + 40),
            (struct CVisual *)this);
    if ( v27 >= 0 )
    {
      v29 = CVisualGroup::RemoveVisualInternal(
              v28,
              *(struct CVisual ***)(v26 + 64),
              (unsigned int *)(v26 + 56),
              (struct CVisual *)this);
      if ( v29 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x87u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x86u);
    }
  }
  CVisual::RemoveAllChildren((CVisual *)this);
  v5 = this[45];
  if ( v5 && CPtrArrayBase::Remove((CComposition *)((char *)v5 + 24), (unsigned __int64)this) )
  {
    v18 = *(unsigned int (__fastcall **)(CPrimitiveGroup *__hidden))(*(_QWORD *)v5 + 16LL);
    if ( v18 == CResource::Release )
    {
      CResource::Release(v5);
    }
    else if ( v18 == CPrimitiveGroup::Release )
    {
      CPrimitiveGroup::Release(v5);
    }
    else
    {
      v18(v5);
    }
  }
  this[45] = 0LL;
  v6 = this[42];
  if ( v6 && CPtrArrayBase::Remove((CComposition *)((char *)v6 + 24), (unsigned __int64)this) )
  {
    v20 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v6 + 16LL);
    if ( v20 == CResource::Release )
      CResource::Release(v6);
    else
      v20(v6);
  }
  this[42] = 0LL;
  v7 = this[41];
  if ( v7 && CPtrArrayBase::Remove((CComposition *)((char *)v7 + 24), (unsigned __int64)this) )
    (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v7 + 16LL))(v7);
  this[41] = 0LL;
  v8 = this[43];
  if ( v8 )
    CComposition::ReleaseWeakReference(this[2], v8);
  v9 = this[49];
  if ( v9 && CPtrArrayBase::Remove((CComposition *)((char *)v9 + 24), (unsigned __int64)this) )
  {
    v21 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v9 + 16LL);
    if ( v21 == CResource::Release )
      CResource::Release(v9);
    else
      v21(v9);
  }
  this[49] = 0LL;
  v10 = this[44];
  if ( v10 && CPtrArrayBase::Remove((CComposition *)((char *)v10 + 24), (unsigned __int64)this) )
  {
    v22 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v10 + 16LL);
    if ( v22 == CResource::Release )
      CResource::Release(v10);
    else
      v22(v10);
  }
  this[44] = 0LL;
  v11 = this[50];
  if ( v11 )
    v11 = (CComposition *)((char *)v11 + 8);
  if ( v11 && CPtrArrayBase::Remove((CComposition *)((char *)v11 + 24), (unsigned __int64)this) )
    (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v11 + 16LL))(v11);
  this[50] = 0LL;
  for ( j = this + 39;
        (_QWORD *)*j != j;
        CVisual::ReleaseMoveRenderPassInfoForContext(
          v4,
          *(struct CDrawingContext **)(*j - 8LL),
          (struct CMoveRenderPassInfo *)(*j - 88LL)) )
  {
    ;
  }
  v13 = this + 52;
  while ( (_QWORD *)*v13 != v13 )
  {
    v23 = (_QWORD *)(*v13 - 264LL);
    v24 = v23[3];
    v25 = *(void (__fastcall **)(CVisualTreeData *__hidden))(*v23 + 16LL);
    if ( v25 == CVisualTreeData::Clear )
      CVisualTreeData::Clear((CVisualTreeData *)(*v13 - 264LL));
    else
      v25((CVisualTreeData *)(*v13 - 264LL));
    if ( *(_QWORD *)(v24 + 704) )
      (*(void (__fastcall **)(_QWORD *, __int64))*v23)(v23, 1LL);
    else
      *(_QWORD *)(v24 + 704) = v23;
  }
  v14 = (void *(__fastcall ***)(CVisualTreeData *__hidden, unsigned int))this[88];
  if ( v14 )
  {
    v19 = **v14;
    if ( v19 == CVisualTreeData::`vector deleting destructor' )
      CVisualTreeData::`vector deleting destructor'(this[88], 1u);
    else
      v19(this[88], 1u);
  }
  CVisual::DestroyRenderTargetForRemoteApp((CVisual *)this);
  if ( (*((_BYTE *)this + 73) & 0x20) != 0 )
    --*((_DWORD *)this[2] + 280);
  if ( this[89] != this[90] )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CComposition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this[89]);
    this[89] = 0LL;
  }
  *((_BYTE *)this + 448) &= ~1u;
  this[54] = (CComposition *)&CDesktopTreeData::`vftable';
  CTreeData::~CTreeData((CTreeData *)(this + 54));
  v15 = (unsigned __int64)this[7];
  if ( (v15 & 2) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v15 & 0xFFFFFFFFFFFFFFFCuLL);
  this[7] = 0LL;
  v16 = ((_BYTE)this[4] & 8) == 0;
  *this = (CComposition *)&CResource::`vftable';
  if ( !v16 )
    CComposition::ClearWeakReference(this[2], (struct CResource *)this);
  v17 = (unsigned __int64)this[3];
  if ( (v17 & 2) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v17 & 0xFFFFFFFFFFFFFFFCuLL);
  this[3] = 0LL;
  *this = (CComposition *)&CMILCOMBase::`vftable';
}
