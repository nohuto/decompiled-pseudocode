/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsMesh@@UEAAXXZ @ 0x18009CA20
 * Callers:
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x18009CD88 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 *     ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x18009CE1C (-ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsMesh::UnRegisterNotifiers(CAtlasedRectsMesh *this)
{
  void *v1; // rdx
  void (*v3)(void); // rax
  void *v4; // rdx
  void (*v5)(void); // rax
  void *v6; // rdx
  void (*v7)(void); // rax

  v1 = (void *)*((_QWORD *)this + 28);
  if ( v1 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v3 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v1);
    else
      v3();
    *((_QWORD *)this + 28) = 0LL;
  }
  *((_DWORD *)this + 55) = 0;
  v4 = (void *)*((_QWORD *)this + 30);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v5 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
    else
      v5();
    *((_QWORD *)this + 30) = 0LL;
  }
  *((_DWORD *)this + 58) = 0;
  v6 = (void *)*((_QWORD *)this + 32);
  if ( v6 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v7 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
    else
      v7();
    *((_QWORD *)this + 32) = 0LL;
  }
  *((_DWORD *)this + 62) = 0;
}
