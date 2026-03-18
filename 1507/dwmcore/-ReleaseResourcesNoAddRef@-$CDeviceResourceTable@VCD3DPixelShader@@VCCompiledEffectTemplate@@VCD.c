/*
 * XREFs of ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1800F9CE8
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x1800F8B38 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAA@.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800F9C80 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DD.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef(
        __int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // r14
  _QWORD *v4; // rsi

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
  return DynArrayImpl<0>::ShrinkToSize((_QWORD *)(a1 + 16), 8u);
}
