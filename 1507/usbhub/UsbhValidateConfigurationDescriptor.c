/*
 * XREFs of UsbhValidateConfigurationDescriptor @ 0x1C0005634
 * Callers:
 *     UsbhGetDeviceInformation @ 0x1C000544C (UsbhGetDeviceInformation.c)
 * Callees:
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x1C003F3F8 (USBD_ValidateConfigurationDescriptorInternal.c)
 */

char __fastcall UsbhValidateConfigurationDescriptor(_BYTE *a1, int a2, _DWORD *a3, char a4)
{
  char v5; // di
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = 1;
  if ( a1[1] != 2 )
  {
    v5 = 0;
    if ( a3 )
      *a3 = -1073737984;
  }
  if ( *a1 < 9u )
  {
    v5 = 0;
    if ( a3 )
      *a3 = -1073737984;
  }
  if ( a4 )
  {
    if ( (unsigned int)USBD_ValidateConfigurationDescriptorInternal((_DWORD)a1, a2, (_DWORD)a3, (unsigned int)&v7) )
    {
      v5 = 0;
      if ( a3 )
        *a3 = -1073737984;
    }
  }
  return v5;
}
