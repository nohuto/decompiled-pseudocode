/*
 * XREFs of USBDeviceStop @ 0x1C001B210
 * Callers:
 *     USBDeviceSurpriseRemove @ 0x1C001B2D0 (USBDeviceSurpriseRemove.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C001B3B4 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBHwStopAllMIDIPipes @ 0x1C001C114 (USBHwStopAllMIDIPipes.c)
 */

__int64 __fastcall USBDeviceStop(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ebx
  __int64 v4; // rbp
  _DWORD *PoolWithTag; // rax
  void *v6; // rdi
  __int64 v7; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 72);
  if ( *(_QWORD *)(v4 + 192) == v4 + 192 || (v3 = USBHwStopAllMIDIPipes(), v3 >= 0) )
  {
    if ( !*(_BYTE *)(v1 + 67) )
    {
      v3 = -1073741670;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPool, 0x58uLL, 0x41627845u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 88;
        *((_QWORD *)PoolWithTag + 3) = 0LL;
        v3 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40));
        ExFreePool(v6);
      }
    }
  }
  v7 = *(_QWORD *)(v4 + 56);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(v7 + 24))(*(_QWORD *)(v7 + 8));
  return (unsigned int)v3;
}
