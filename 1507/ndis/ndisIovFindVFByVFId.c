/*
 * XREFs of ndisIovFindVFByVFId @ 0x1C00D9AD8
 * Callers:
 *     ndisOidPreIovEnumVPorts @ 0x1C00665B0 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovCreateVPort @ 0x1C00D9748 (ndisIovCreateVPort.c)
 *     ndisOidPreIovBarResources @ 0x1C00DA060 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovFreeVF @ 0x1C00DA650 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00DA780 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00DAD60 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00DAEB0 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00DB000 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00DB100 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVFParameters @ 0x1C00DB200 (ndisOidPreIovVFParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00DB850 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00DB980 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisSriovInterfaceGetDeviceLocation @ 0x1C00DBD90 (ndisSriovInterfaceGetDeviceLocation.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisIovFindVFByVFId(__int64 a1, unsigned __int16 a2)
{
  __int64 *v2; // r9
  __int64 v3; // r8
  __int64 *i; // rax
  unsigned __int16 v5; // cx

  v2 = (__int64 *)(a1 + 4784);
  v3 = 0LL;
  for ( i = *(__int64 **)(a1 + 4784); i != v2; i = (__int64 *)*i )
  {
    v5 = *((_WORD *)i + 861);
    if ( v5 == a2 )
      return i;
    if ( v5 > a2 )
      return (__int64 *)v3;
  }
  return (__int64 *)v3;
}
