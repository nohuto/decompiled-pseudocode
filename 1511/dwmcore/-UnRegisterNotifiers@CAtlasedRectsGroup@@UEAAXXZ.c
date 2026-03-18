/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsGroup@@UEAAXXZ @ 0x1800267C0
 * Callers:
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x1800260C0 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x180026874 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18008557C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 */

void __fastcall CAtlasedRectsGroup::UnRegisterNotifiers(CAtlasedRectsGroup *this)
{
  struct CResource **v1; // rdx
  void (*v3)(WPF::ProcessHeapImpl *__hidden, void *); // rbp

  v1 = (struct CResource **)*((_QWORD *)this + 19);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((_DWORD *)this + 36));
    v3 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 19));
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD))v3)(WPF::g_pProcessHeap, *((_QWORD *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_DWORD *)this + 36) = 0;
}
