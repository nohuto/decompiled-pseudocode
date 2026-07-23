/*
 * XREFs of PnpIsAnyDeviceInstanceEnabled @ 0x140538B38
 * Callers:
 *     PnpDriverStarted @ 0x140538ADC (PnpDriverStarted.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14050EA28 (PnpIsDeviceInstanceEnabled.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1405388F0 (PipServiceInstanceToDeviceInstance.c)
 *     PipOpenServiceEnumKeys @ 0x140539324 (PipOpenServiceEnumKeys.c)
 */

__int64 __fastcall PnpIsAnyDeviceInstanceEnabled(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  unsigned int v3; // r14d
  int IsDeviceInstanceEnabled; // ebx
  char v6; // [rsp+20h] [rbp-30h]
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v8; // [rsp+38h] [rbp-18h] BYREF
  HANDLE v9; // [rsp+88h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  HANDLE v11; // [rsp+98h] [rbp+48h] BYREF

  v1 = 0;
  v9 = 0LL;
  v6 = 0;
  if ( (int)PipOpenServiceEnumKeys(a1, 131097LL, &v9, &Handle, v6) >= 0 )
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
          IsDeviceInstanceEnabled = PnpIsDeviceInstanceEnabled(v11, &v8.Length, 0);
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
