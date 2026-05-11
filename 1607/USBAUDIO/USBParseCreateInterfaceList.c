/*
 * XREFs of USBParseCreateInterfaceList @ 0x1C001DB5C
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C001CB00 (USBHwSelectAudioConfiguration.c)
 * Callees:
 *     USBParseGetAudioSpecificInterface @ 0x1C001D8DC (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBParseCreateInterfaceList(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        unsigned __int8 *a2,
        _QWORD *a3)
{
  int v3; // ebx
  _QWORD *v4; // r12
  UCHAR *v6; // rdi
  unsigned int v7; // esi
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // rax
  PUSB_COMMON_DESCRIPTOR v9; // r14
  __int64 v11; // r15
  PUSB_INTERFACE_DESCRIPTOR v12; // rcx
  __int64 v13; // rax

  v3 = 0;
  v4 = (_QWORD *)*a3;
  v6 = &StartPosition->bLength + StartPosition->wTotalLength;
  *(_QWORD *)*a3 = a2;
  v7 = 1;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(StartPosition, a2, (__int64)a3, 8uLL);
  v9 = AudioSpecificInterface;
  if ( AudioSpecificInterface )
  {
    if ( (char *)&AudioSpecificInterface[4] + AudioSpecificInterface[3].bDescriptorType > (char *)v6 )
      return 3221225858LL;
    v11 = 0LL;
    do
    {
      if ( (unsigned int)v11 >= v9[3].bDescriptorType )
        break;
      v12 = USBD_ParseConfigurationDescriptorEx(StartPosition, StartPosition, *(&v9[4].bLength + v11), -1, 1, 2, -1);
      if ( v12
        || (v12 = USBD_ParseConfigurationDescriptorEx(
                    StartPosition,
                    StartPosition,
                    *(&v9[4].bLength + v11),
                    -1,
                    1,
                    3,
                    -1)) != 0LL )
      {
        v13 = 2LL * v7++;
        v4[v13] = v12;
      }
      else
      {
        v3 = -1073741438;
      }
      if ( v7 > StartPosition->bNumInterfaces )
        v3 = -1073741438;
      v11 = (unsigned int)(v11 + 1);
    }
    while ( v3 >= 0 );
    if ( v3 >= 0 )
    {
      if ( v7 != StartPosition->bNumInterfaces )
        v3 = -1073741438;
      if ( v3 >= 0 )
        v4[2 * v7] = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v3;
}
