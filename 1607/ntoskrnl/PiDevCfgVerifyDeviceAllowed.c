/*
 * XREFs of PiDevCfgVerifyDeviceAllowed @ 0x140641050
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     PiDevCfgQueryResolveValue @ 0x1401CF2EC (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryDword @ 0x1401CF618 (PnpValidateRegistryDword.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiDevCfgFreeResolveContext @ 0x140638EF4 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgInitResolveContext @ 0x140639814 (PiDevCfgInitResolveContext.c)
 */

__int64 __fastcall PiDevCfgVerifyDeviceAllowed(void *a1, void *a2)
{
  int inited; // ebx
  int v5; // edi
  unsigned int *v6; // rcx
  int v8; // [rsp+20h] [rbp-60h] BYREF
  const WCHAR *v9; // [rsp+28h] [rbp-58h]
  HANDLE v10[4]; // [rsp+30h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF

  ObjectAttributes.RootDirectory = a2;
  v13 = 0LL;
  v8 = 917516;
  v9 = L"Status";
  inited = 0;
  memset(v10, 0, sizeof(v10));
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
  v5 = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    inited = PiDevCfgInitResolveContext(a1, a2, v10);
    if ( inited >= 0 && (int)PiDevCfgQueryResolveValue((__int64)v10, KeyHandle, (__int64)L"Blocked", &v13) >= 0 )
    {
      if ( PnpValidateRegistryDword(v13) )
        v5 = *(unsigned int *)((char *)v6 + v6[2]);
      ExFreePoolWithTag(v6, 0);
      if ( v5 )
        inited = -1073740948;
    }
  }
  PiDevCfgFreeResolveContext((__int64)v10);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
