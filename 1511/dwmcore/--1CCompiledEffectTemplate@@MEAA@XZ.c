/*
 * XREFs of ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x18012DAE4
 * Callers:
 *     ??_GCCompiledEffectTemplate@@MEAAPEAXI@Z @ 0x1801132C0 (--_GCCompiledEffectTemplate@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x180112CB4 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAA@.c)
 */

void __fastcall CCompiledEffectTemplate::~CCompiledEffectTemplate(CCompiledEffectTemplate *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi

  v1 = *((_QWORD *)this + 6);
  *(_QWORD *)this = &CCompiledEffectTemplate::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>((__int64)this + 64);
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
