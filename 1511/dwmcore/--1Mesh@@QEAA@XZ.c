/*
 * XREFs of ??1Mesh@@QEAA@XZ @ 0x18001FCCC
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800438D4 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Clear@Mesh@@AEAAXXZ @ 0x18001E020 (-Clear@Mesh@@AEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x180068F7C (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 */

void __fastcall Mesh::~Mesh(Mesh::MeshGraph **this)
{
  void **v2; // rcx
  void (*v3)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  unsigned int v4; // edx
  Mesh::MeshGraph *v5; // rcx
  Mesh::MeshGraph *v6; // rcx
  Mesh::MeshGraph *v7; // rcx

  Mesh::Clear((Mesh *)this);
  v3 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *v2);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v3)(WPF::g_pProcessHeap, *v2);
  v5 = this[2];
  if ( v5 )
    Mesh::MeshGraph::`scalar deleting destructor'(v5, v4);
  v6 = this[4];
  if ( v6 )
    Mesh::MeshGraph::`scalar deleting destructor'(v6, v4);
  v7 = this[5];
  if ( v7 )
    Mesh::MeshGraph::`scalar deleting destructor'(v7, v4);
}
