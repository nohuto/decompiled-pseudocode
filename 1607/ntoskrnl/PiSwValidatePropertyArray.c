/*
 * XREFs of PiSwValidatePropertyArray @ 0x1404892A8
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1404C648C (PiSwIrpInterfaceRegister.c)
 *     PiSwValidateCreateData @ 0x1404C7488 (PiSwValidateCreateData.c)
 *     PiSwIrpPropertySet @ 0x140543704 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x140576830 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x1404893D0 (_PnpValidatePropertyData.c)
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
