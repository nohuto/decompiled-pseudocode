/*
 * XREFs of ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x1801191B0
 * Callers:
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x18010B4C4 (--1CMeshGeometry2D@@MEAA@XZ.c)
 *     ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x1801186C8 (-ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CMeshGeometry2D::UnRegisterNotifiers(CMeshGeometry2D *this)
{
  if ( *((_QWORD *)this + 13) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 13));
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_DWORD *)this + 24) = 0;
  if ( *((_QWORD *)this + 15) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 15));
    *((_QWORD *)this + 15) = 0LL;
  }
  *((_DWORD *)this + 28) = 0;
  if ( *((_QWORD *)this + 17) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  *((_DWORD *)this + 32) = 0;
  if ( *((_QWORD *)this + 19) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_DWORD *)this + 36) = 0;
}
