/*
 * XREFs of vRemoveAndCleanupRimClient @ 0x1C011AD94
 * Callers:
 *     UserDeactivateDwmInputProcessing @ 0x1C01190F0 (UserDeactivateDwmInputProcessing.c)
 *     RitPrepDitTakeOver @ 0x1C011AD34 (RitPrepDitTakeOver.c)
 * Callees:
 *     vCleanupRimClientWorker @ 0x1C011ADFC (vCleanupRimClientWorker.c)
 */

void vRemoveAndCleanupRimClient()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  bool v2; // zf
  unsigned int v3; // eax

  v0 = 0;
  v1 = 0LL;
  v2 = 0;
  do
  {
    if ( v2 )
    {
      gbPendRecreateTouchInjectionDevices = 1;
      v3 = DeviceTypeToRimInputType(2LL);
      if ( (int)RIMRemoveInputOfType(*(_QWORD *)(v1 + aDeviceTemplate[0] + 96), v3) >= 0 )
        vCleanupRimClientWorker(2LL);
    }
    ++v0;
    v1 += 560LL;
    v2 = v0 == 2;
  }
  while ( v0 <= 2 );
}
