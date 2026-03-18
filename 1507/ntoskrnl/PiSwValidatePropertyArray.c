/*
 * XREFs of PiSwValidatePropertyArray @ 0x1404D8F80
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14045A410 (PiSwIrpInterfaceRegister.c)
 *     PiSwValidateCreateData @ 0x14045AA24 (PiSwValidateCreateData.c)
 *     PiSwIrpPropertySet @ 0x14056A754 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x1405C2F68 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x1404D90AC (_PnpValidatePropertyData.c)
 */

__int64 __fastcall PiSwValidatePropertyArray(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // edi
  __int64 i; // rbx

  result = 0LL;
  v3 = 0;
  if ( a2 )
  {
    for ( i = a1 + 32; !*(_DWORD *)(i - 12); i += 48LL )
    {
      result = PnpValidatePropertyData(*(PSECURITY_DESCRIPTOR *)(i + 8), *(_DWORD *)(i + 4));
      if ( (int)result < 0 )
        break;
      if ( ++v3 >= a2 )
        return result;
    }
    return 3221225485LL;
  }
  return result;
}
