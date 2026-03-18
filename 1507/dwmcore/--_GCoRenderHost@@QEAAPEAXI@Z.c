/*
 * XREFs of ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x1800E18F8
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x1800E7CFC (-Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x1800E8024 (-ReleaseResources@CoRenderHost@@AEAAXXZ.c)
 */

CoRenderHost *__fastcall CoRenderHost::`scalar deleting destructor'(CoRenderHost *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 3);
  *(_QWORD *)this = &CoRenderHost::`vftable'{for `IDWMCoRenderHost'};
  *((_QWORD *)this + 1) = &CoRenderHost::`vftable'{for `IDeviceResourceNotify'};
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 3) = 0LL;
  }
  CoRenderHost::ReleaseResources(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CoRenderHost *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
