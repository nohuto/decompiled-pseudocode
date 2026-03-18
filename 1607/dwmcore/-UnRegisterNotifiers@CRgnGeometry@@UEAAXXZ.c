/*
 * XREFs of ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x18002FC10
 * Callers:
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x18002FA20 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x18002FC98 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRgnGeometry::UnRegisterNotifiers(CRgnGeometry *this)
{
  void *v1; // rdx
  void (*v3)(void); // rax

  v1 = (void *)*((_QWORD *)this + 23);
  if ( v1 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v3 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v1);
    else
      v3();
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_DWORD *)this + 44) = 0;
}
