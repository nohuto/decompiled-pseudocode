/*
 * XREFs of PiDevCfgConfigureDeviceKeys @ 0x140513FDC
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140513DF8 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x140513F58 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PpDevCfgProcessDeviceClass @ 0x14060CF64 (PpDevCfgProcessDeviceClass.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x14012C1B4 (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     PiDevCfgQueryResolveValue @ 0x1401C0680 (PiDevCfgQueryResolveValue.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiDevCfgFreeResolveContext @ 0x14051414C (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140514214 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1405142AC (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140514590 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x1405147B0 (PiDevCfgInitResolveContext.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeys(__int64 a1, __int64 a2, void *a3, int a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // rsi
  int v7; // r12d
  _DWORD *v11; // rbx
  int inited; // edi
  unsigned int *v14; // rcx
  unsigned int *v15; // rcx
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  int v17; // [rsp+50h] [rbp-41h] BYREF
  const WCHAR *v18; // [rsp+58h] [rbp-39h]
  _QWORD v19[4]; // [rsp+60h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-11h] BYREF

  v6 = a5;
  v7 = a1;
  memset(v19, 0, sizeof(v19));
  KeyHandle = 0LL;
  if ( a5 )
    *a5 = 0;
  v11 = a6;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitResolveContext(a1, a3, v19);
  if ( inited >= 0 )
  {
    inited = PiDevCfgEnumDeviceKeys(
               v7,
               a2,
               (_DWORD)a3,
               a4,
               1,
               (__int64)PiDevCfgConfigureDeviceKeyCallback,
               (__int64)v19);
    if ( inited >= 0 )
    {
      if ( (a4 & 8) == 0 || (inited = PiDevCfgConfigureDeviceInterfaces(*(_QWORD *)(a2 + 8), a3, v19), inited >= 0) )
      {
        if ( (a4 & 0x10) == 0 || (inited = PiDevCfgConfigureSoftwareDevices(*(_QWORD *)(a2 + 16), a3), inited >= 0) )
        {
          KeyHandle = 0LL;
          v18 = L"Status";
          v17 = 917516;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = a3;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
          {
            if ( v11 && (int)PiDevCfgQueryResolveValue((__int64)v19, KeyHandle, (__int64)L"Reboot", &a5) >= 0 )
            {
              if ( PnpValidateRegistryDword((__int64)a5) && *(unsigned int *)((char *)v14 + v14[2]) )
                *v11 |= 2u;
              ExFreePoolWithTag(v14, 0);
            }
            if ( v6 && (int)PiDevCfgQueryResolveValue((__int64)v19, KeyHandle, (__int64)L"ConfigFlags", &a5) >= 0 )
            {
              if ( PnpValidateRegistryDword((__int64)a5) )
                *v6 |= *(unsigned int *)((char *)v15 + v15[2]);
              ExFreePoolWithTag(v15, 0);
            }
          }
        }
      }
    }
  }
  PiDevCfgFreeResolveContext(v19);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
