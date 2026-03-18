/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x140599E20
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x1400D10E8 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400D1330 (PoCaptureReasonContext.c)
 *     PpmEndHighPerfRequest @ 0x14015A1D0 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14015A718 (PpmBeginHighPerfRequest.c)
 *     PopCreateKernelPowerRequest @ 0x1404E5880 (PopCreateKernelPowerRequest.c)
 */

__int64 PopSetupHighPerfPowerRequest()
{
  int *v0; // rdx
  __int64 v1; // r8
  int v2; // ecx
  int KernelPowerRequest; // ebx
  __int64 v4; // rdx
  _QWORD *v6; // [rsp+40h] [rbp+8h] BYREF

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
  KernelPowerRequest = PoCaptureReasonContext(0LL, 0LL, 0LL, 1, 0LL, (PVOID *)&v6);
  if ( KernelPowerRequest >= 0 )
  {
    KernelPowerRequest = PopCreateKernelPowerRequest(&PopTransitionHighPerfRequest);
    if ( KernelPowerRequest < 0 )
    {
      PoDestroyReasonContext(v6);
    }
    else if ( PpmHighPerfDuration[0] )
    {
      KernelPowerRequest = PpmBeginHighPerfRequest();
      if ( KernelPowerRequest >= 0 )
        return (unsigned int)PpmEndHighPerfRequest(0, v4);
    }
  }
  return (unsigned int)KernelPowerRequest;
}
