/*
 * XREFs of ??0CoRenderHost@@AEAA@PEAUIDWMCoRenderEngine@@@Z @ 0x1800E7AD4
 * Callers:
 *     ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x1800E7CFC (-Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CoRenderHost *__fastcall CoRenderHost::CoRenderHost(CoRenderHost *this, struct IDWMCoRenderEngine *a2)
{
  *((_QWORD *)this + 3) = a2;
  *(_QWORD *)this = &CoRenderHost::`vftable'{for `IDWMCoRenderHost'};
  *((_QWORD *)this + 1) = &CoRenderHost::`vftable'{for `IDeviceResourceNotify'};
  if ( a2 )
    (*(void (__fastcall **)(struct IDWMCoRenderEngine *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
