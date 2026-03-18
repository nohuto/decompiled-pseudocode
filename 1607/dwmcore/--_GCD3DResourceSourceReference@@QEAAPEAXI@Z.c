/*
 * XREFs of ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1800AD608
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18008F2C0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18009F3D0 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD3DResourceSourceReference *__fastcall CD3DResourceSourceReference::`scalar deleting destructor'(
        CD3DResourceSourceReference *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD3DResourceSourceReference *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
