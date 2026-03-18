/*
 * XREFs of ??1CAnalogDisplayRenderTarget@@MEAA@XZ @ 0x180167904
 * Callers:
 *     ??_ECAnalogDisplayRenderTarget@@MEAAPEAXI@Z @ 0x180167980 (--_ECAnalogDisplayRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x18007E7E8 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnalogDisplayRenderTarget::~CAnalogDisplayRenderTarget(CAnalogDisplayRenderTarget *this)
{
  __int64 v2; // rcx
  CD3DDeviceLevel1 *v3; // rcx

  *(_QWORD *)this = &CAnalogDisplayRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 16) = &CAnalogDisplayRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 22) = &CAnalogDisplayRenderTarget::`vftable';
  v2 = *((_QWORD *)this + 42);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 42) = 0LL;
  }
  v3 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 23);
  if ( v3 )
    CD3DDeviceLevel1::Flush(v3);
  CHwDisplayRenderTarget::~CHwDisplayRenderTarget(this);
}
