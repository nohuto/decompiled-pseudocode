/*
 * XREFs of ?GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z @ 0x18013D514
 * Callers:
 *     ?Analog_UpdateFrameStatistics@@YAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x18013AFB0 (-Analog_UpdateFrameStatistics@@YAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?WaitForVBlank@CAnalogCompositorTarget@@UEAAJPEAX@Z @ 0x18013D3B0 (-WaitForVBlank@CAnalogCompositorTarget@@UEAAJPEAX@Z.c)
 *     ?SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z @ 0x18013D6AC (-SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z.c)
 * Callees:
 *     <none>
 */

struct CAnalogExclusiveView *__fastcall CAnalogCompositorClient::GetExclusiveView(
        CAnalogCompositorClient *this,
        int a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d

  v2 = 0LL;
  if ( a2 )
  {
    v3 = 0;
    if ( dword_1801A3FA0 )
    {
      while ( a2 != *(_DWORD *)(*(_QWORD *)(qword_1801A3F88 + 8LL * v3) + 48LL) )
      {
        if ( ++v3 >= dword_1801A3FA0 )
          return (struct CAnalogExclusiveView *)v2;
      }
      return *(struct CAnalogExclusiveView **)(qword_1801A3F88 + 8LL * v3);
    }
  }
  return (struct CAnalogExclusiveView *)v2;
}
