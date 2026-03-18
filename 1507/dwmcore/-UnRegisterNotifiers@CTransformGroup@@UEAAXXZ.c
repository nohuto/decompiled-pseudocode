/*
 * XREFs of ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x18001A240
 * Callers:
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18001A0C0 (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ??1CTransformGroup@@MEAA@XZ @ 0x18001A438 (--1CTransformGroup@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x1800480B8 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CTransformGroup::UnRegisterNotifiers(CTransformGroup *this)
{
  struct CResource **v1; // rdx
  void (*v3)(WPF::ProcessHeapImpl *__hidden, void *); // rbp

  v1 = (struct CResource **)*((_QWORD *)this + 17);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((_DWORD *)this + 32));
    v3 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)this + 17));
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD))v3)(WPF::g_pProcessHeap, *((_QWORD *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  *((_DWORD *)this + 32) = 0;
}
