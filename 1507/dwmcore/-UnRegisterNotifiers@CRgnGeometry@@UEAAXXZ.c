/*
 * XREFs of ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x18006F990
 * Callers:
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x18006F900 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 *     ??1CRgnGeometry@@MEAA@XZ @ 0x18006FA64 (--1CRgnGeometry@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CRgnGeometry::UnRegisterNotifiers(void **this)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *, void *); // rbp

  if ( this[13] )
  {
    v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v2 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[13]);
    else
      v2(WPF::g_pProcessHeap, this[13]);
    this[13] = 0LL;
  }
  *((_DWORD *)this + 24) = 0;
}
