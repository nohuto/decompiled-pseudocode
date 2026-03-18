/*
 * XREFs of ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x1800E8024
 * Callers:
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x1800E18F8 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 *     ?NotifyInvalidResource@CoRenderHost@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800E7FE0 (-NotifyInvalidResource@CoRenderHost@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z @ 0x1800E80B0 (-SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CoRenderHost::ReleaseResources(CoRenderHost *this)
{
  __int64 v1; // rsi
  CMILPoolResource *v3; // rcx
  __int64 v4; // rdi

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(v1 + 24) + 32LL))(v1 + 24, (char *)this + 8);
    v3 = (CMILPoolResource *)*((_QWORD *)this + 4);
    if ( v3 )
    {
      CMILPoolResource::Release(v3);
      *((_QWORD *)this + 4) = 0LL;
    }
  }
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
}
