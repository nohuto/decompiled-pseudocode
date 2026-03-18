/*
 * XREFs of ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x180076E20
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18002E3D4 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800711C0 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     ?Clear@Mesh@@AEAAXXZ @ 0x18007416C (-Clear@Mesh@@AEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDrawListPrimitiveBuilder::~CDrawListPrimitiveBuilder(CDrawListPrimitiveBuilder *this)
{
  __int64 v1; // rdi
  Mesh::MeshGraph *v3; // rcx
  Mesh::MeshGraph *v4; // rcx
  Mesh::MeshGraph *v5; // rcx

  v1 = *((_QWORD *)this + 270);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 270) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 258);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 14);
  Mesh::Clear(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *(_QWORD *)this);
  v3 = (Mesh::MeshGraph *)*((_QWORD *)this + 2);
  if ( v3 )
    Mesh::MeshGraph::`scalar deleting destructor'(v3);
  v4 = (Mesh::MeshGraph *)*((_QWORD *)this + 4);
  if ( v4 )
    Mesh::MeshGraph::`scalar deleting destructor'(v4);
  v5 = (Mesh::MeshGraph *)*((_QWORD *)this + 5);
  if ( v5 )
    Mesh::MeshGraph::`scalar deleting destructor'(v5);
}
