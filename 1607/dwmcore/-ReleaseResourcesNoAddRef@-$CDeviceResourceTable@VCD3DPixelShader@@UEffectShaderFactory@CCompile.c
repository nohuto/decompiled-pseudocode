/*
 * XREFs of ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x18014E8F4
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x18014DF20 (--1-$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DD.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x18014E6C0 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEf.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef(
        __int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  _QWORD *v4; // rbx

  if ( *(_DWORD *)(a1 + 40) )
  {
    v2 = *(unsigned int *)(a1 + 40);
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD **)(v3 + *(_QWORD *)(a1 + 16));
      (*(void (__fastcall **)(_QWORD *, __int64))(v4[3] + 32LL))(v4 + 3, a1);
      (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  *(_DWORD *)(a1 + 40) = 0;
  return DynArrayImpl<0>::ShrinkToSize(a1 + 16, 8u);
}
