/*
 * XREFs of ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800711C0
 * Callers:
 *     ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x1800759D8 (-GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ.c)
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x180076E20 (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 * Callees:
 *     ??1MeshGraph@Mesh@@QEAA@XZ @ 0x180071114 (--1MeshGraph@Mesh@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

Mesh::MeshGraph *__fastcall Mesh::MeshGraph::`scalar deleting destructor'(Mesh::MeshGraph *this)
{
  Mesh::MeshGraph::~MeshGraph(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Mesh::MeshGraph *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
