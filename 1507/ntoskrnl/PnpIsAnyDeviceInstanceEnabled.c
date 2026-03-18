/*
 * XREFs of PnpIsAnyDeviceInstanceEnabled @ 0x140571E34
 * Callers:
 *     PnpDriverStarted @ 0x140571F30 (PnpDriverStarted.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PipOpenServiceEnumKeys @ 0x1404E6D00 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140550338 (PnpIsDeviceInstanceEnabled.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140571C48 (PipServiceInstanceToDeviceInstance.c)
 */

__int64 __fastcall PnpIsAnyDeviceInstanceEnabled(UNICODE_STRING *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  unsigned int v3; // r14d
  __int64 v4; // r9
  int IsDeviceInstanceEnabled; // ebx
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v8; // [rsp+38h] [rbp-18h] BYREF
  HANDLE v9; // [rsp+88h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  HANDLE v11; // [rsp+98h] [rbp+48h] BYREF

  v1 = 0;
  v9 = 0LL;
  if ( PipOpenServiceEnumKeys(a1, 0x20019u, &v9, &Handle, 0) >= 0 )
  {
    v2 = 0;
    if ( IopGetRegistryValue(Handle, L"Count", 0, &P) >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
        v2 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
    if ( v2 )
    {
      v3 = 0;
      while ( 1 )
      {
        if ( PipServiceInstanceToDeviceInstance(v9, 0LL, v3, &v8, &v11, 983103) >= 0 )
        {
          IsDeviceInstanceEnabled = PnpIsDeviceInstanceEnabled(v11, &v8.Length, 1LL, v4);
          ExFreePoolWithTag(v8.Buffer, 0);
          ZwClose(v11);
          if ( IsDeviceInstanceEnabled )
            break;
        }
        if ( ++v3 >= v2 )
          goto LABEL_12;
      }
      v1 = 1;
    }
LABEL_12:
    ZwClose(v9);
  }
  return v1;
}
