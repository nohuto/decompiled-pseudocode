/*
 * XREFs of PopInitializeHighPerfPowerRequest @ 0x1407663AC
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     PoCaptureReasonContext @ 0x1400979A8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140098D20 (PoDestroyReasonContext.c)
 *     PopCreateKernelPowerRequest @ 0x140454CCC (PopCreateKernelPowerRequest.c)
 */

__int64 PopInitializeHighPerfPowerRequest()
{
  int *v0; // rdx
  __int64 v1; // r8
  int v2; // ecx
  int KernelPowerRequest; // ebx
  _QWORD *v5; // [rsp+40h] [rbp+8h] BYREF

  v0 = PpmHighPerfDuration;
  v1 = 3LL;
  do
  {
    v2 = 300000;
    if ( (unsigned int)*v0 < 0x493E0 )
      v2 = *v0;
    *v0++ = v2;
    --v1;
  }
  while ( v1 );
  KernelPowerRequest = PoCaptureReasonContext(0LL, 0LL, 0LL, 1, 0LL, &v5);
  if ( KernelPowerRequest >= 0 )
  {
    KernelPowerRequest = PopCreateKernelPowerRequest((__int64 **)&PopTransitionHighPerfRequest, (__int64)v5);
    if ( KernelPowerRequest < 0 )
      PoDestroyReasonContext(v5);
  }
  return (unsigned int)KernelPowerRequest;
}
