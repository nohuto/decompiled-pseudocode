/*
 * XREFs of ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x180151BB0
 * Callers:
 *     ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x18010DA68 (-ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x180143664 (--1CMeshGeometry2D@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMeshGeometry2D::UnRegisterNotifiers(CMeshGeometry2D *this)
{
  if ( *((_QWORD *)this + 22) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 22) = 0LL;
  }
  *((_DWORD *)this + 42) = 0;
  if ( *((_QWORD *)this + 24) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 24) = 0LL;
  }
  *((_DWORD *)this + 46) = 0;
  if ( *((_QWORD *)this + 26) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 26) = 0LL;
  }
  *((_DWORD *)this + 50) = 0;
  if ( *((_QWORD *)this + 28) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 28) = 0LL;
  }
  *((_DWORD *)this + 54) = 0;
}
