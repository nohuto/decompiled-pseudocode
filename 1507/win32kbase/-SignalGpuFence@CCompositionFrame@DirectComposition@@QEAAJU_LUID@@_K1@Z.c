/*
 * XREFs of ?SignalGpuFence@CCompositionFrame@DirectComposition@@QEAAJU_LUID@@_K1@Z @ 0x1C006B314
 * Callers:
 *     NtDCompositionSignalGpuFence @ 0x1C006B170 (NtDCompositionSignalGpuFence.c)
 * Callees:
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0048480 (-SignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionFrame::SignalGpuFence(
        DirectComposition::CCompositionFrame *this,
        struct _LUID a2,
        unsigned __int64 a3,
        __int64 a4)
{
  char *v4; // r11
  char *v5; // rcx
  unsigned int v6; // r10d

  v4 = (char *)this + 136;
  v5 = (char *)*((_QWORD *)this + 17);
  v6 = -1073741275;
  while ( v5 != v4 )
  {
    if ( *(_QWORD *)(*((_QWORD *)v5 + 3) + 16LL) == a2 && *((_QWORD *)v5 + 4) == a3 )
    {
      CompositionSurfaceObject::SignalGpuFence(*((CompositionSurfaceObject **)v5 + 3), a3, a4);
      return 0;
    }
    v5 = *(char **)v5;
  }
  return v6;
}
