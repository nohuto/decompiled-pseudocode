/*
 * XREFs of PiDevCfgConfigureDeviceKeys @ 0x140683C20
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceClass @ 0x140589730 (PpDevCfgProcessDeviceClass.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140589984 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x140683360 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     PiDevCfgQueryResolveValue @ 0x1401FBF38 (PiDevCfgQueryResolveValue.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406835F4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140683E18 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140685D00 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgFreeResolveContext @ 0x140686CF4 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgInitResolveContext @ 0x140687104 (PiDevCfgInitResolveContext.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeys(__int64 a1, __int64 a2, void *a3, int a4, _DWORD *P, _DWORD *a6)
{
  _DWORD *v6; // rsi
  int v7; // r12d
  _DWORD *v11; // rdi
  int inited; // ebx
  PVOID v13; // rcx
  PVOID v14; // rcx
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  int v17; // [rsp+50h] [rbp-41h] BYREF
  const WCHAR *v18; // [rsp+58h] [rbp-39h]
  _QWORD v19[4]; // [rsp+60h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-11h] BYREF

  v6 = P;
  v7 = a1;
  memset(v19, 0, sizeof(v19));
  KeyHandle = 0LL;
  if ( P )
    *P = 0;
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
        || (inited = PiDevCfgConfigureDeviceInterfaces(*(const wchar_t **)(a2 + 8), a3, (__int64)v19), inited >= 0) )
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
            if ( v11 && (int)PiDevCfgQueryResolveValue((__int64)v19, KeyHandle, (__int64)L"Reboot", &P) >= 0 )
            {
              v13 = P;
              if ( P[1] == 4 && P[3] == 4 && *(_DWORD *)((char *)P + (unsigned int)P[2]) )
                *v11 |= 2u;
              ExFreePoolWithTag(v13, 0);
            }
            if ( v6 && (int)PiDevCfgQueryResolveValue((__int64)v19, KeyHandle, (__int64)L"ConfigFlags", &P) >= 0 )
            {
              v14 = P;
              if ( P[1] == 4 && P[3] == 4 )
                *v6 |= *(_DWORD *)((char *)P + (unsigned int)P[2]);
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
