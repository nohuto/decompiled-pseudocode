/*
 * XREFs of ndisIovFindVFByVFId @ 0x1C00D3210
 * Callers:
 *     ndisOidPreIovEnumVPorts @ 0x1C0065770 (ndisOidPreIovEnumVPorts.c)
 *     ndisIovCreateVPort @ 0x1C00D2E78 (ndisIovCreateVPort.c)
 *     ndisOidPreIovBarResources @ 0x1C00D37A0 (ndisOidPreIovBarResources.c)
 *     ndisOidPreIovFreeVF @ 0x1C00D3F50 (ndisOidPreIovFreeVF.c)
 *     ndisOidPreIovGetVFVendorDeviceId @ 0x1C00D4080 (ndisOidPreIovGetVFVendorDeviceId.c)
 *     ndisOidPreIovReadVFConfigBlock @ 0x1C00D46A0 (ndisOidPreIovReadVFConfigBlock.c)
 *     ndisOidPreIovReadVFConfigSpace @ 0x1C00D47F0 (ndisOidPreIovReadVFConfigSpace.c)
 *     ndisOidPreIovResetVF @ 0x1C00D4940 (ndisOidPreIovResetVF.c)
 *     ndisOidPreIovSetVFPowerState @ 0x1C00D4A40 (ndisOidPreIovSetVFPowerState.c)
 *     ndisOidPreIovVFParameters @ 0x1C00D4B40 (ndisOidPreIovVFParameters.c)
 *     ndisOidPreIovWriteVFConfigBlock @ 0x1C00D51A0 (ndisOidPreIovWriteVFConfigBlock.c)
 *     ndisOidPreIovWriteVFConfigSpace @ 0x1C00D52D0 (ndisOidPreIovWriteVFConfigSpace.c)
 *     ndisSriovInterfaceGetDeviceLocation @ 0x1C00D56E0 (ndisSriovInterfaceGetDeviceLocation.c)
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
