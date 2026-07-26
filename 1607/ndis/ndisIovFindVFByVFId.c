/*
 * XREFs of ndisIovFindVFByVFId @ 0x1C00D914C
 * Callers:
 *     ndisOidPreIovEnumVPorts @ 0x1C0069D10 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovCreateVPort @ 0x1C00D8DB8 (ndisIovCreateVPort.c)
 *     ndisOidPreIovBarResources @ 0x1C00D96E0 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovFreeVF @ 0x1C00D9E90 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00D9FC0 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00DA5E0 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00DA730 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00DA880 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00DA980 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVFParameters @ 0x1C00DAA80 (ndisOidPreIovVFParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00DB0E0 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00DB210 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisSriovInterfaceGetDeviceLocation @ 0x1C00DB620 (ndisSriovInterfaceGetDeviceLocation.c)
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
