/*
 * XREFs of PoCreatePowerRequest @ 0x140454C18
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x1400979A8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140098D20 (PoDestroyReasonContext.c)
 *     PopCreateKernelPowerRequest @ 0x140454CCC (PopCreateKernelPowerRequest.c)
 */

NTSTATUS __stdcall PoCreatePowerRequest(
        PVOID *PowerRequest,
        PDEVICE_OBJECT DeviceObject,
        PCOUNTED_REASON_CONTEXT Context)
{
  NTSTATUS v4; // ebx
  _QWORD *v6; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  *PowerRequest = 0LL;
  if ( !DeviceObject )
    return -1073741811;
  v4 = PoCaptureReasonContext((char *)Context, 0LL, (__int64)DeviceObject, 1, 0LL, &v6);
  if ( v4 < 0 || (v4 = PopCreateKernelPowerRequest(&v7, v6), v4 < 0) )
  {
    if ( v6 )
      PoDestroyReasonContext(v6);
  }
  else
  {
    *PowerRequest = v7;
  }
  return v4;
}
