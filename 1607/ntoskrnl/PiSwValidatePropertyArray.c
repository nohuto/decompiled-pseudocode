/*
 * XREFs of PiSwValidatePropertyArray @ 0x140511A1C
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x140487098 (PiSwIrpInterfaceRegister.c)
 *     PiSwValidateCreateData @ 0x1404878E8 (PiSwValidateCreateData.c)
 *     PiSwIrpPropertySet @ 0x140543C44 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x140576D70 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x140511B44 (_PnpValidatePropertyData.c)
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
