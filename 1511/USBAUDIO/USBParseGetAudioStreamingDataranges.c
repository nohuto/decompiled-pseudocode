/*
 * XREFs of USBParseGetAudioStreamingDataranges @ 0x1C001EA70
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C001EFB0 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     USBHwSelectStreamingAudioInterface @ 0x1C001BB9C (USBHwSelectStreamingAudioInterface.c)
 *     USBParseGetNextAudioInterface @ 0x1C001C6B4 (USBParseGetNextAudioInterface.c)
 *     IsZeroBWInterface @ 0x1C001C844 (IsZeroBWInterface.c)
 *     IsSupportedFormat @ 0x1C001C878 (IsSupportedFormat.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C001E70C (USBParseConvertInterfaceToDataRange.c)
 */

__int64 __fastcall USBParseGetAudioStreamingDataranges(
        __int64 a1,
        struct _USB_CONFIGURATION_DESCRIPTOR *a2,
        LONG a3,
        _QWORD *a4,
        __int64 a5)
{
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rbp
  int v10; // esi
  PUSB_INTERFACE_DESCRIPTOR v11; // r14
  __int64 v12; // rbx
  int v13; // eax
  __int64 (__fastcall **v14)(PVOID *); // rax
  __int64 v15; // rcx
  _BYTE v17[16]; // [rsp+40h] [rbp-158h] BYREF
  char *v18; // [rsp+50h] [rbp-148h]
  char v19; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-B8h]

  NextAudioInterface = USBD_ParseConfigurationDescriptorEx(a2, a2, a3, -1, 1, 2, -1);
  if ( !NextAudioInterface )
    goto LABEL_6;
  do
  {
    if ( IsZeroBWInterface(a2, &NextAudioInterface->bLength) )
      break;
    NextAudioInterface = USBParseGetNextAudioInterface(a2, &NextAudioInterface->bLength);
  }
  while ( NextAudioInterface );
  if ( NextAudioInterface )
  {
    v20 = a1;
    v18 = &v19;
    v10 = USBHwSelectStreamingAudioInterface((__int64)v17, NextAudioInterface);
  }
  else
  {
LABEL_6:
    v10 = -1073741438;
  }
  v11 = USBD_ParseConfigurationDescriptorEx(a2, a2, a3, -1, 1, 2, -1);
  if ( v11 )
  {
    v12 = a5 + 128;
    while ( 1 )
    {
      if ( v10 < 0 )
        return (unsigned int)v10;
      if ( !IsZeroBWInterface(a2, &v11->bLength) && IsSupportedFormat(a2, &v11->bLength) )
      {
        *(_QWORD *)(v12 + 16) = NextAudioInterface;
        v10 = USBParseConvertInterfaceToDataRange(a2, &v11->bLength, v12 - 128);
        if ( v10 >= 0 )
          break;
      }
LABEL_28:
      v11 = USBParseGetNextAudioInterface(a2, &v11->bLength);
      if ( !v11 )
        return (unsigned int)v10;
    }
    v13 = *(_DWORD *)(v12 + 80) & 0xF000;
    if ( v13 )
    {
      if ( v13 == 4096 )
      {
        v14 = (__int64 (__fastcall **)(PVOID *))USBType2PinDispatch;
        *(_DWORD *)(v12 - 16) = 880;
LABEL_22:
        *(_QWORD *)v12 = v14;
LABEL_23:
        if ( *(_DWORD *)(v12 - 20) )
        {
          v10 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), *(PVOID *)(v12 - 8), ExFreePool);
          if ( v10 < 0 )
            ExFreePool(*(PVOID *)(v12 - 8));
        }
        if ( a4 )
        {
          *a4 = v12 - 128;
          *(_DWORD *)(v12 - 124) |= 2u;
          a4[1] = &unk_1C000D458;
          a4 += 2;
          v12 += 216LL;
        }
        goto LABEL_28;
      }
      if ( v13 != 0x2000 )
        goto LABEL_23;
      v14 = &USBType3PinDispatch;
    }
    else
    {
      if ( *(char *)(*(_QWORD *)(v12 + 40) + 2LL) < 0 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
        *(_QWORD *)v12 = &USBCapturePinDispatch;
        *(_DWORD *)(v12 - 16) = 12 * *(_DWORD *)(v15 + 208) * (*(_DWORD *)(v12 + 84) + 12) + 2768;
        goto LABEL_23;
      }
      v14 = &USBType1PinDispatch;
    }
    *(_DWORD *)(v12 - 16) = 968;
    goto LABEL_22;
  }
  return (unsigned int)v10;
}
