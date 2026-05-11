/*
 * XREFs of USBHwGetDescriptor @ 0x1C001C918
 * Callers:
 *     USBDeviceStart @ 0x1C001BB90 (USBDeviceStart.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C001C998 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C001D29C (USBHwSyncGetStringDescriptor.c)
 * Callees:
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C001C4B4 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwGetDescriptor(__int64 a1, int *a2, __int64 a3, char a4, char a5, __int16 a6, _QWORD *P)
{
  int v8; // eax
  int v9; // edi

  v8 = *a2;
  P[6] = 0LL;
  P[7] = 0LL;
  *((_DWORD *)P + 9) = v8;
  *((_BYTE *)P + 130) = a5;
  *((_WORD *)P + 66) = a6;
  *(_DWORD *)P = 721032;
  P[5] = a3;
  *((_BYTE *)P + 131) = a4;
  v9 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), (ULONG_PTR)P);
  if ( v9 >= 0 )
    *a2 = *((_DWORD *)P + 9);
  ExFreePool(P);
  return (unsigned int)v9;
}
