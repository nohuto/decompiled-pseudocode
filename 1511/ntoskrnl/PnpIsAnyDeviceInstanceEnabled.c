/*
 * XREFs of PnpIsAnyDeviceInstanceEnabled @ 0x140507FA4
 * Callers:
 *     PnpDriverStarted @ 0x140507F48 (PnpDriverStarted.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PipOpenServiceEnumKeys @ 0x1403B9994 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1404EFA28 (PnpIsDeviceInstanceEnabled.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14050809C (PipServiceInstanceToDeviceInstance.c)
 */

__int64 __fastcall PnpIsAnyDeviceInstanceEnabled(UNICODE_STRING *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  unsigned int v3; // r14d
  int IsDeviceInstanceEnabled; // ebx
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 v7; // [rsp+38h] [rbp-18h] BYREF
  PVOID v8; // [rsp+40h] [rbp-10h]
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
        if ( (int)PipServiceInstanceToDeviceInstance(v9, 0LL, v3, &v7, &v11, 983103) >= 0 )
        {
          IsDeviceInstanceEnabled = PnpIsDeviceInstanceEnabled(v11, &v7, 0);
          ExFreePoolWithTag(v8, 0);
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
