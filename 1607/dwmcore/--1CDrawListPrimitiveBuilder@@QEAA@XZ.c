/*
 * XREFs of ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x1800975DC
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18006BF80 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Clear@Mesh@@AEAAXXZ @ 0x1800906E0 (-Clear@Mesh@@AEAAXXZ.c)
 *     ?Reset@CDrawListPrimitiveBuilder@@QEAAXXZ @ 0x180096168 (-Reset@CDrawListPrimitiveBuilder@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800A3A84 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListPrimitiveBuilder::~CDrawListPrimitiveBuilder(Mesh::MeshGraph **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  Mesh::MeshGraph *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  void (__fastcall *v7)(WPF::ProcessHeapImpl *, void *); // rax
  Mesh::MeshGraph *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  Mesh::MeshGraph *v11; // rcx
  Mesh::MeshGraph *v12; // rcx

  CDrawListPrimitiveBuilder::Reset((CDrawListPrimitiveBuilder *)this);
  v4 = this[44];
  if ( v4 )
  {
    (*(void (__fastcall **)(Mesh::MeshGraph *))(*(_QWORD *)v4 + 16LL))(v4);
    this[44] = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 289, v2, v3);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 45, v5, v6);
  Mesh::Clear((Mesh *)(this + 19));
  v7 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  v8 = this[19];
  if ( v7 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v8);
  else
    v7(WPF::g_pProcessHeap, v8);
  v11 = this[21];
  if ( v11 )
    Mesh::MeshGraph::`scalar deleting destructor'(v11, v9);
  v12 = this[23];
  if ( v12 )
    Mesh::MeshGraph::`scalar deleting destructor'(v12, v9);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 10, v9, v10);
  SmartIfaceBuffer<IRenderingEffect,48,RenderingEffectResourceManagement>::Clear(this + 4);
}
