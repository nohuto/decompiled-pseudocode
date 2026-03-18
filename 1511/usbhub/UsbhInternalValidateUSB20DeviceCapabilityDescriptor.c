/*
 * XREFs of UsbhInternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C0052C10
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C00526A0 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 */

char __fastcall UsbhInternalValidateUSB20DeviceCapabilityDescriptor(__int64 a1, unsigned __int8 *a2)
{
  char v2; // r10
  unsigned int v4; // eax

  v2 = 1;
  if ( *a2 == 7 )
  {
    v4 = *(_DWORD *)(a2 + 3);
    if ( (v4 & 0xFFFFFFFD) != 0 )
      Log(a1, 256, 1448423986, v4, 0LL);
    return v2;
  }
  else
  {
    Log(a1, 256, 1448423985, *a2, 0LL);
    return 0;
  }
}
