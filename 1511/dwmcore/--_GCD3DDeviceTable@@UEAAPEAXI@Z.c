/*
 * XREFs of ??_GCD3DDeviceTable@@UEAAPEAXI@Z @ 0x180138740
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DestroyResources@CD3DDeviceTable@@QEAAXXZ @ 0x1801387D0 (-DestroyResources@CD3DDeviceTable@@QEAAXXZ.c)
 */

void **__fastcall CD3DDeviceTable::`scalar deleting destructor'(void **this, char a2)
{
  *this = &CD3DDeviceTable::`vftable';
  CD3DDeviceTable::DestroyResources((CD3DDeviceTable *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 14);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 10);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 6);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 2);
  *this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
