/*
 * XREFs of PiDevCfgVerifyDeviceAllowed @ 0x140515CB0
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x14012C1B4 (PnpValidateRegistryDword.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     PiDevCfgQueryResolveValue @ 0x1401C0680 (PiDevCfgQueryResolveValue.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiDevCfgFreeResolveContext @ 0x14051414C (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgInitResolveContext @ 0x1405147B0 (PiDevCfgInitResolveContext.c)
 */

__int64 __fastcall PiDevCfgVerifyDeviceAllowed(void *a1, void *a2)
{
  int inited; // ebx
  int v5; // edi
  unsigned int *v7; // rcx
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
        v5 = *(unsigned int *)((char *)v7 + v7[2]);
      ExFreePoolWithTag(v7, 0);
      if ( v5 )
        inited = -1073740948;
    }
  }
  PiDevCfgFreeResolveContext((__int64)v10);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
