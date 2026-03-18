/*
 * XREFs of ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x18011A150
 * Callers:
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x180113F24 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 *     ?NotifyInvalidResource@CoRenderHost@@UEAAXPEBVIDeviceResource@@@Z @ 0x18011A120 (-NotifyInvalidResource@CoRenderHost@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z @ 0x18011A1B4 (-SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CoRenderHost::ReleaseResources(CoRenderHost *this)
{
  __int64 v2; // rcx
  CMILPoolResource *v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 + 24) + 32LL))(v2 + 24, (char *)this + 8);
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
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
}
