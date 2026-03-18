/*
 * XREFs of ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x180070E40
 * Callers:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CD2DSharedBuffer@@MEAA@XZ @ 0x180070EAC (--1CD2DSharedBuffer@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CD2DSharedBuffer *__fastcall CD2DSharedBuffer::`vector deleting destructor'(CD2DSharedBuffer *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rsi

  CD2DSharedBuffer::~CD2DSharedBuffer(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
