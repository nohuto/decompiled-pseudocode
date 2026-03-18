/*
 * XREFs of PiDevCfgQueryPolicyEnabled @ 0x140688EAC
 * Callers:
 *     PiDevCfgEnforceDevicePolicy @ 0x1406858BC (PiDevCfgEnforceDevicePolicy.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 */

__int64 __fastcall PiDevCfgQueryPolicyEnabled(void *a1, const WCHAR *a2, char *a3)
{
  NTSTATUS RegistryValue; // eax
  PVOID v5; // r9
  unsigned int v6; // ebx
  char v7; // cl
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  *a3 = 0;
  RegistryValue = IopGetRegistryValue(a1, a2, 0, &P);
  v5 = P;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( *((_DWORD *)P + 1) != 4
      || *((_DWORD *)P + 3) != 4
      || (v7 = 1, *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 1) )
    {
      v7 = 0;
    }
    *a3 = v7;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
