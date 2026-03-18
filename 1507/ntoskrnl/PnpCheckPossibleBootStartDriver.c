/*
 * XREFs of PnpCheckPossibleBootStartDriver @ 0x1405B3D78
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405724D8 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 */

bool __fastcall PnpCheckPossibleBootStartDriver(void *a1)
{
  bool v1; // bl
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( IopGetRegistryValue(a1, L"BootFlags", 0, &P) >= 0 )
  {
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      v1 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
    ExFreePoolWithTag(P, 0);
  }
  return v1;
}
