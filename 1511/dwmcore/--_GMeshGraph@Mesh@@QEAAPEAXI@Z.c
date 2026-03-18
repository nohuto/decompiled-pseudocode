/*
 * XREFs of ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x180068F7C
 * Callers:
 *     ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x18001FB98 (-GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ.c)
 *     ??1Mesh@@QEAA@XZ @ 0x18001FCCC (--1Mesh@@QEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1MeshGraph@Mesh@@QEAA@XZ @ 0x180068ED0 (--1MeshGraph@Mesh@@QEAA@XZ.c)
 */

Mesh::MeshGraph *__fastcall Mesh::MeshGraph::`scalar deleting destructor'(Mesh::MeshGraph *this)
{
  Mesh::MeshGraph::~MeshGraph(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Mesh::MeshGraph *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
