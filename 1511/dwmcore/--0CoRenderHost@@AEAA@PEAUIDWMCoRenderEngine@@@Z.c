/*
 * XREFs of ??0CoRenderHost@@AEAA@PEAUIDWMCoRenderEngine@@@Z @ 0x180103B6C
 * Callers:
 *     ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x180103D8C (-Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
