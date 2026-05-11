/*
 * XREFs of USBHwAbortOrResetPipe @ 0x1C001D550
 * Callers:
 *     USBHwStopMIDIPipe @ 0x1C000286C (USBHwStopMIDIPipe.c)
 *     USBType1AsyncEndpointPoll @ 0x1C0003800 (USBType1AsyncEndpointPoll.c)
 *     USBHwDataPipeReset @ 0x1C001D5D8 (USBHwDataPipeReset.c)
 * Callees:
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C001C4B4 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwAbortOrResetPipe(PDEVICE_OBJECT DeviceObject, __int64 a2, __int16 a3)
{
  unsigned int v6; // edi
  _WORD *PoolWithTag; // rax
  void *v8; // rbx

  v6 = -1073741670;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x41627845u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 40;
    PoolWithTag[1] = a3;
    *((_QWORD *)PoolWithTag + 3) = a2;
    v6 = USBHwSubmitUrbToUsbdSynch(DeviceObject, (ULONG_PTR)PoolWithTag);
    ExFreePool(v8);
  }
  return v6;
}
