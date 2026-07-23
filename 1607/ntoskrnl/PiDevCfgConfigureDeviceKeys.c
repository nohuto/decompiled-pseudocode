/*
 * XREFs of PiDevCfgConfigureDeviceKeys @ 0x1406359A8
 * Callers:
 *     PpDevCfgProcessDeviceOperations @ 0x14050E6F8 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1406351EC (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140635B98 (PiDevCfgConfigureDeviceLocation.c)
 *     PpDevCfgProcessDeviceClass @ 0x140641444 (PpDevCfgProcessDeviceClass.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     PiDevCfgQueryResolveValue @ 0x1401CF080 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryDword @ 0x1401CF3AC (PnpValidateRegistryDword.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140635480 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140635EF8 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140637818 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgFreeResolveContext @ 0x140638FA8 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgInitResolveContext @ 0x1406398C8 (PiDevCfgInitResolveContext.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeys(__int64 a1, __int64 a2, void *a3, int a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // rsi
  int v7; // r12d
  _DWORD *v11; // rbx
  int inited; // edi
  unsigned int *v13; // rcx
  unsigned int *v14; // rcx
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
      if ( (a4 & 8) == 0
        || (inited = PiDevCfgConfigureDeviceInterfaces(*(wchar_t **)(a2 + 8), a3, (__int64)v19), inited >= 0) )
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
              if ( PnpValidateRegistryDword((__int64)a5) && *(unsigned int *)((char *)v13 + v13[2]) )
                *v11 |= 2u;
              ExFreePoolWithTag(v13, 0);
            }
            if ( v6 && (int)PiDevCfgQueryResolveValue((__int64)v19, KeyHandle, (__int64)L"ConfigFlags", &a5) >= 0 )
            {
              if ( PnpValidateRegistryDword((__int64)a5) )
                *v6 |= *(unsigned int *)((char *)v14 + v14[2]);
              ExFreePoolWithTag(v14, 0);
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
