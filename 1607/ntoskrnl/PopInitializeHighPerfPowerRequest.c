/*
 * XREFs of PopInitializeHighPerfPowerRequest @ 0x1407BBC6C
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x1400F9654 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400F9E3C (PoCaptureReasonContext.c)
 *     PopCreateKernelPowerRequest @ 0x14050137C (PopCreateKernelPowerRequest.c)
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
  KernelPowerRequest = PoCaptureReasonContext(0LL, 0LL, 0LL, 1, 0LL, (PVOID *)&v5);
  if ( KernelPowerRequest >= 0 )
  {
    KernelPowerRequest = PopCreateKernelPowerRequest(&PopTransitionHighPerfRequest);
    if ( KernelPowerRequest < 0 )
      PoDestroyReasonContext(v5);
  }
  return (unsigned int)KernelPowerRequest;
}
