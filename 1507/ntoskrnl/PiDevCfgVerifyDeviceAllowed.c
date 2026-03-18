/*
 * XREFs of PiDevCfgVerifyDeviceAllowed @ 0x14068CC44
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     PiDevCfgQueryResolveValue @ 0x1401FBF38 (PiDevCfgQueryResolveValue.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiDevCfgFreeResolveContext @ 0x140686CF4 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgInitResolveContext @ 0x140687104 (PiDevCfgInitResolveContext.c)
 */

__int64 __fastcall PiDevCfgVerifyDeviceAllowed(void *a1, void *a2)
{
  int inited; // ebx
  int v5; // edi
  int v7; // [rsp+20h] [rbp-60h] BYREF
  const WCHAR *v8; // [rsp+28h] [rbp-58h]
  HANDLE v9[4]; // [rsp+30h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF
  PVOID P; // [rsp+B0h] [rbp+30h] BYREF

  ObjectAttributes.RootDirectory = a2;
  P = 0LL;
  v7 = 917516;
  v8 = L"Status";
  inited = 0;
  memset(v9, 0, sizeof(v9));
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
  v5 = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    inited = PiDevCfgInitResolveContext(a1, a2, v9);
    if ( inited >= 0 && (int)PiDevCfgQueryResolveValue((__int64)v9, KeyHandle, (__int64)L"Blocked", &P) >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        v5 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
      if ( v5 )
        inited = -1073740948;
    }
  }
  PiDevCfgFreeResolveContext((__int64)v9);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
