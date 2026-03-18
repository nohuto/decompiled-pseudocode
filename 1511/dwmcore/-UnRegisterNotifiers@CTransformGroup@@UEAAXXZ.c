/*
 * XREFs of ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x1800669C0
 * Callers:
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x1800666F0 (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ??1CTransformGroup@@MEAA@XZ @ 0x180066A88 (--1CTransformGroup@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18008557C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 */

void __fastcall CTransformGroup::UnRegisterNotifiers(CTransformGroup *this)
{
  struct CResource **v1; // rdx
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rbp

  v1 = (struct CResource **)*((_QWORD *)this + 19);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((_DWORD *)this + 36));
    v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 19));
    else
      v3(WPF::g_pProcessHeap, *((void **)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_DWORD *)this + 36) = 0;
}
