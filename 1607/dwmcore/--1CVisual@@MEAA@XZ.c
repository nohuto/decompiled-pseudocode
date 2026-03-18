/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x180054360
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x180029EE0 (--1CWindowNode@@MEAA@XZ.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x1800548B0 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x180138E18 (--1CSpriteVisual@@UEAA@XZ.c)
 * Callees:
 *     ??1CTreeData@@UEAA@XZ @ 0x1800310D0 (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CVisualTreeData@@MEAAXXZ @ 0x180031760 (-Clear@CVisualTreeData@@MEAAXXZ.c)
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x1800317B0 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x18003B004 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x18004D4C0 (-Release@CPrimitiveGroup@@UEAAKXZ.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004F938 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x18004F984 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004FA7C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x18004FD38 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x180050A40 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180051E9C (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800534B8 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x18008DDD0 (-Release@CResource@@UEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800A2474 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800A25CC (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x1800AC960 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800B2100 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x18010A1B0 (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 *     ??_GCTreeEffect@@QEAAPEAXI@Z @ 0x180137DE4 (--_GCTreeEffect@@QEAAPEAXI@Z.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x180138BAC (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 */

void __fastcall CVisual::~CVisual(CComposition **this)
{
  _QWORD *v2; // r12
  unsigned __int64 v3; // rax
  CComposition *v4; // rbx
  __int64 (__fastcall *v5)(CPrimitiveGroup *); // rax
  CComposition *v6; // rbx
  char *v7; // r14
  CComposition *v8; // rcx
  CComposition *v9; // rbx
  char *v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned int (__fastcall *v12)(CResource *__hidden); // rax
  unsigned int *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  CVisualTreeData *v16; // rsi
  void (*v17)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  __int64 m; // rcx
  CVisualTreeData *(__fastcall *v19)(CVisualTreeData *, char); // rax
  __int64 n; // rcx
  void (*v21)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  CVisualTreeData *v22; // rbx
  CVisual *v23; // r15
  void (__fastcall *v24)(CVisualTreeData *); // rax
  unsigned int (__fastcall *v25)(CResource *__hidden); // rax
  __int64 j; // rcx
  CVisualTreeData *v27; // rbx
  unsigned int (__fastcall *v28)(CResource *__hidden); // rax
  struct CResource ***TransformParentDataInternal; // rbx
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v33; // rbx
  char *i; // rcx
  CVisualTreeData *v35; // rbx
  __int64 v36; // rcx
  struct CResource **TreeEffectInternal; // rbx
  unsigned int v38; // edx
  __int64 k; // rcx
  __int64 v40; // rcx
  __int64 v41; // r8
  CVisualTreeData *v42; // rbx
  CVisualTreeData *v43; // [rsp+50h] [rbp+30h] BYREF

  *this = (CComposition *)&CVisual::`vftable';
  CVisual::ReleaseBspPolygonList((CVisual *)this);
  CVisual::RemoveAllChildren((CVisual *)this);
  v2 = this + 39;
  v3 = (unsigned __int64)this[39];
  if ( (v3 & 2) != 0 )
    v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v3) = v3 & 1;
  if ( (_DWORD)v3 )
  {
    v43 = (CVisualTreeData *)this;
    v31 = 0LL;
    v32 = (unsigned int)v3;
    do
    {
      v33 = CPtrArrayBase::operator[](this + 39, v31);
      DynArray<CVisual *,0>::Remove(v33 + 136, &v43);
      CPtrArrayBase::Remove((CPtrArrayBase *)(v33 + 24), (unsigned __int64)this);
      ++v31;
      --v32;
    }
    while ( v32 );
    CPtrArrayBase::Clear((CPtrArrayBase *)(this + 39));
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
  v4 = this[38];
  if ( v4 && CPtrArrayBase::Remove((CComposition *)((char *)v4 + 24), (unsigned __int64)this) )
  {
    v5 = *(__int64 (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v5 == (char *)CResource::Release )
    {
      CResource::Release(v4);
    }
    else if ( v5 == CPrimitiveGroup::Release )
    {
      CPrimitiveGroup::Release(v4);
    }
    else
    {
      v5(v4);
    }
  }
  this[38] = 0LL;
  v6 = this[36];
  if ( v6 && CPtrArrayBase::Remove((CComposition *)((char *)v6 + 24), (unsigned __int64)this) )
  {
    v12 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v6 + 16LL);
    if ( v12 == CResource::Release )
      CResource::Release(v6);
    else
      v12(v6);
  }
  this[36] = 0LL;
  v7 = (char *)(this + 34);
  v8 = this[34];
  if ( (*((_DWORD *)v8 + 1) & 0x20000000) != 0 )
  {
    for ( i = (char *)v8 + 12; (*(_DWORD *)i & 0x7F000000) != 0x3000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4 )
      ;
    v43 = *(CVisualTreeData **)(i + 4);
    v35 = v43;
    if ( v43 )
    {
      if ( CPtrArrayBase::Remove((CVisualTreeData *)((char *)v43 + 24), (unsigned __int64)this) )
        (*(void (__fastcall **)(CVisualTreeData *))(*(_QWORD *)v35 + 16LL))(v35);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 0x10000000) != 0 )
  {
    TransformParentDataInternal = (struct CResource ***)CVisual::GetTransformParentDataInternal((CVisual *)this);
    CComposition::ReleaseWeakReference(this[2], *TransformParentDataInternal);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource ***))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      TransformParentDataInternal);
    CVisual::SetTransformParentDataInternal((CVisual *)this, 0LL);
    v30 = (__int64)this[2] + 936;
    v43 = (CVisualTreeData *)this;
    DynArray<CVisual *,0>::Remove(v30, &v43);
  }
  if ( (*((_BYTE *)this + 154) & 0x20) != 0 )
  {
    v36 = (__int64)this[2] + 1000;
    v43 = (CVisualTreeData *)this;
    DynArray<CVisual *,0>::Remove(v36, &v43);
    *((_BYTE *)this + 154) &= ~0x20u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 0x8000000) != 0 )
  {
    for ( j = *(_QWORD *)v7 + 12LL; (*(_DWORD *)j & 0x7F000000) != 0x5000000; j += (*(_DWORD *)j & 0xFFFFFF) + 4LL )
      ;
    v43 = *(CVisualTreeData **)(j + 4);
    v27 = v43;
    if ( v43 )
    {
      if ( CPtrArrayBase::Remove((CVisualTreeData *)((char *)v43 + 24), (unsigned __int64)this) )
      {
        v28 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v27 + 16LL);
        if ( v28 == CResource::Release )
          CResource::Release(v27);
        else
          v28(v27);
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 0x10000) != 0 )
  {
    TreeEffectInternal = (struct CResource **)CVisual::GetTreeEffectInternal((CVisual *)this);
    CResource::UnRegisterNotifierInternal((CResource *)this, *TreeEffectInternal);
    CTreeEffect::`scalar deleting destructor'((CTreeEffect *)TreeEffectInternal, v38);
  }
  v9 = this[37];
  if ( v9 && CPtrArrayBase::Remove((CComposition *)((char *)v9 + 24), (unsigned __int64)this) )
  {
    v25 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v9 + 16LL);
    if ( v25 == CResource::Release )
      CResource::Release(v9);
    else
      v25(v9);
  }
  this[37] = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 0x2000000) == 0 )
    goto LABEL_19;
  for ( k = *(_QWORD *)v7 + 12LL; (*(_DWORD *)k & 0x7F000000) != 0x7000000; k += (*(_DWORD *)k & 0xFFFFFF) + 4LL )
    ;
  v43 = *(CVisualTreeData **)(k + 4);
  if ( v43 )
    v10 = (char *)v43 + 8;
  else
LABEL_19:
    v10 = 0LL;
  if ( v10 && CPtrArrayBase::Remove((CPtrArrayBase *)(v10 + 24), (unsigned __int64)this) )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 0x40000) != 0 )
  {
    v40 = *(_QWORD *)v7 + 12LL;
    v41 = 234881024LL;
    while ( (*(_DWORD *)v40 & 0x7F000000) != 0xE000000 )
      v40 += (*(_DWORD *)v40 & 0xFFFFFF) + 4LL;
    v43 = *(CVisualTreeData **)(v40 + 4);
    v42 = v43;
    if ( v43 )
    {
      while ( *(CVisualTreeData **)v42 != v42 )
        CVisual::ReleaseMoveRenderPassInfoForContext(
          (CVisual *)v40,
          *(struct CDrawingContext **)(*(_QWORD *)v42 - 8LL),
          (struct CMoveRenderPassInfo *)(*(_QWORD *)v42 - 88LL));
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CVisualTreeData *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v42,
        v41);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 0x80000) != 0 )
  {
    v13 = (unsigned int *)(*(_QWORD *)v7 + 12LL);
    v14 = 218103808LL;
    while ( 1 )
    {
      v15 = *v13;
      if ( (*v13 & 0x7F000000) == 0xD000000 )
        break;
      v13 = (unsigned int *)((char *)v13 + (v15 & 0xFFFFFF) + 4);
    }
    v43 = *(CVisualTreeData **)(v13 + 1);
    v16 = v43;
    if ( v43 )
    {
      while ( *(CVisualTreeData **)v16 != v16 )
      {
        v22 = (CVisualTreeData *)(*(_QWORD *)v16 - 224LL);
        v23 = (CVisual *)*((_QWORD *)v22 + 3);
        v24 = *(void (__fastcall **)(CVisualTreeData *))(*(_QWORD *)v22 + 16LL);
        if ( v24 == CVisualTreeData::Clear )
          CVisualTreeData::Clear(v22);
        else
          ((void (__fastcall *)(CVisualTreeData *, __int64, __int64))v24)(v22, v15, v14);
        if ( CVisual::GetUnusedTreeData(v23) )
          (**(void (__fastcall ***)(CVisualTreeData *, __int64))v22)(v22, 1LL);
        else
          CVisual::SetUnusedTreeData(v23, v22);
      }
      v17 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v17 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v16);
      else
        ((void (__fastcall *)(WPF::ProcessHeapImpl *, CVisualTreeData *, __int64))v17)(WPF::g_pProcessHeap, v16, v14);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 0x200000) != 0 )
  {
    for ( m = *(_QWORD *)v7 + 12LL; (*(_DWORD *)m & 0x7F000000) != 0xB000000; m += (*(_DWORD *)m & 0xFFFFFF) + 4LL )
      ;
    v43 = *(CVisualTreeData **)(m + 4);
    if ( v43 )
    {
      v19 = **(CVisualTreeData *(__fastcall ***)(CVisualTreeData *, char))v43;
      if ( v19 == CVisualTreeData::`vector deleting destructor' )
        CVisualTreeData::`vector deleting destructor'(v43, 1);
      else
        v19(v43, 1);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 0x20000) != 0 )
  {
    for ( n = *(_QWORD *)v7 + 12LL; (*(_DWORD *)n & 0x7F000000) != 0xF000000; n += (*(_DWORD *)n & 0xFFFFFF) + 4LL )
      ;
    v43 = *(CVisualTreeData **)(n + 4);
    if ( v43 )
    {
      v21 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v21 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v43);
      else
        ((void (__fastcall *)(WPF::ProcessHeapImpl *, CVisualTreeData *, __int64))v21)(
          WPF::g_pProcessHeap,
          v43,
          251658240LL);
    }
  }
  CVisual::DestroyRenderTargetForRemoteApp((CVisual *)this);
  if ( (*((_BYTE *)this + 153) & 0x20) != 0 )
    --*((_DWORD *)this[2] + 306);
  *((_BYTE *)this + 336) &= ~1u;
  this[40] = (CComposition *)&CDesktopTreeData::`vftable';
  CTreeData::~CTreeData((CTreeData *)(this + 40));
  if ( (*v2 & 2) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *v2 & 0xFFFFFFFFFFFFFFFCuLL);
  *v2 = 0LL;
  CSparseStorage::~CSparseStorage((CSparseStorage *)(this + 34));
  v11 = (unsigned __int64)this[17];
  if ( (v11 & 2) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v11 & 0xFFFFFFFFFFFFFFFCuLL);
  this[17] = 0LL;
  *this = (CComposition *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
