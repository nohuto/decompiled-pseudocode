/*
 * XREFs of SiDisambiguateSystemDevice @ 0x140691CA4
 * Callers:
 *     SiGetEfiSystemDevice @ 0x140691D48 (SiGetEfiSystemDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SiGetRegistryValue @ 0x140506CC8 (SiGetRegistryValue.c)
 *     SiGetDeviceNumberInformation @ 0x1406917C0 (SiGetDeviceNumberInformation.c)
 */

__int64 __fastcall SiDisambiguateSystemDevice(_DWORD *a1, _DWORD *a2, __int64 a3, ULONG a4)
{
  int RegistryValue; // ebx
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG v9; // [rsp+60h] [rbp+18h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  P[0] = 0LL;
  RegistryValue = SiGetRegistryValue(
                    (__int64)a1,
                    L"SystemPartition",
                    (__int64)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Syspart",
                    a4,
                    P,
                    &v9);
  if ( RegistryValue >= 0 )
  {
    if ( v9 >= 4 )
    {
      RegistryValue = SiGetDeviceNumberInformation((PCWSTR)P[0], &v9, &v10);
      if ( RegistryValue >= 0 )
      {
        *a1 = v9;
        *a2 = v10;
      }
    }
    else
    {
      RegistryValue = -1073741823;
    }
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)RegistryValue;
}
