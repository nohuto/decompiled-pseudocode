/*
 * XREFs of DeviceSlot_DisableAllDeviceSlots @ 0x1C0005400
 * Callers:
 *     DeviceSlot_D0EntryCleanupState @ 0x1C00053A8 (DeviceSlot_D0EntryCleanupState.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0007640 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C001E960 (Controller_InternalReset.c)
 * Callees:
 *     UsbDevice_SetDeviceDisabled @ 0x1C00313C4 (UsbDevice_SetDeviceDisabled.c)
 */

__int64 __fastcall DeviceSlot_DisableAllDeviceSlots(__int64 a1)
{
  unsigned int i; // ebx
  __int64 v3; // rdx
  __int64 result; // rax

  for ( i = 1; i <= *(_DWORD *)(a1 + 16); ++i )
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
    {
      result = i;
      if ( *(_QWORD *)(v3 + 8LL * i) )
        result = UsbDevice_SetDeviceDisabled();
    }
  }
  return result;
}
