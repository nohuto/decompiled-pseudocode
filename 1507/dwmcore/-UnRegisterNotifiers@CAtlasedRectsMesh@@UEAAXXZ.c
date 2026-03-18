/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsMesh@@UEAAXXZ @ 0x18006F360
 * Callers:
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x18006F6D4 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 *     ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x18006F70C (-ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CAtlasedRectsMesh::UnRegisterNotifiers(void **this)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *, void *); // rbp
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rbp
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rbp

  if ( this[19] )
  {
    v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v2 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[19]);
    else
      v2(WPF::g_pProcessHeap, this[19]);
    this[19] = 0LL;
  }
  *((_DWORD *)this + 37) = 0;
  if ( this[21] )
  {
    v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[21]);
    else
      v3(WPF::g_pProcessHeap, this[21]);
    this[21] = 0LL;
  }
  *((_DWORD *)this + 40) = 0;
  if ( this[23] )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[23]);
    else
      v4(WPF::g_pProcessHeap, this[23]);
    this[23] = 0LL;
  }
  *((_DWORD *)this + 44) = 0;
}
