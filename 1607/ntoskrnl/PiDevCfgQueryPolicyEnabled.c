/*
 * XREFs of PiDevCfgQueryPolicyEnabled @ 0x14063D224
 * Callers:
 *     PiDevCfgEnforceDevicePolicy @ 0x1406373D4 (PiDevCfgEnforceDevicePolicy.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1401CF3AC (PnpValidateRegistryDword.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 */

__int64 __fastcall PiDevCfgQueryPolicyEnabled(void *a1, const WCHAR *a2, char *a3)
{
  NTSTATUS RegistryValue; // eax
  unsigned int *v5; // r9
  unsigned int v6; // ebx
  char v7; // cl
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  *a3 = 0;
  RegistryValue = IopGetRegistryValue(a1, a2, 0, &P);
  v5 = (unsigned int *)P;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( !PnpValidateRegistryDword((__int64)P) || (v7 = 1, *(unsigned int *)((char *)v5 + v5[2]) != 1) )
      v7 = 0;
    *a3 = v7;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
