/*
 * XREFs of PnpValidateRegistryMultiSz @ 0x1401C07E4
 * Callers:
 *     PiDevCfgResolveMultiSzValue @ 0x14060A6AC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableExpression @ 0x14060AB00 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14060BCA4 (PiDevCfgResolveVariableFormatString.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x14012F998 (PnpValidateMultiSzData.c)
 */

bool __fastcall PnpValidateRegistryMultiSz(_DWORD *a1)
{
  char v1; // r9

  v1 = 0;
  if ( a1[1] == 7 )
    return (unsigned __int8)PnpValidateMultiSzData((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]) != 0;
  return v1;
}
