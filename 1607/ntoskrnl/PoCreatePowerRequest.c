/*
 * XREFs of PoCreatePowerRequest @ 0x140501300
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400F9654 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400F9E3C (PoCaptureReasonContext.c)
 *     PopCreateKernelPowerRequest @ 0x14050137C (PopCreateKernelPowerRequest.c)
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
  v4 = PoCaptureReasonContext((unsigned __int64)Context, 0LL, (__int64)DeviceObject, 1, 0LL, (PVOID *)&v6);
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
