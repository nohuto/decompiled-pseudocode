/*
 * XREFs of ?GetExclusiveView@CAnalogCompositorClient@@AEAAPEAVCAnalogExclusiveView@@I@Z @ 0x180167530
 * Callers:
 *     ?Analog_UpdateFrameStatistics@@YAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1801651A0 (-Analog_UpdateFrameStatistics@@YAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x180166898 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 *     ?WaitForVBlank@CAnalogCompositorTarget@@UEAAJPEAX@Z @ 0x180167340 (-WaitForVBlank@CAnalogCompositorTarget@@UEAAJPEAX@Z.c)
 *     ?SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z @ 0x1801676B8 (-SetActiveExclusiveView@CAnalogCompositorClient@@QEAAXI@Z.c)
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
    if ( dword_1801F0390 )
    {
      while ( a2 != *(_DWORD *)(*(_QWORD *)(qword_1801F0378 + 8LL * v3) + 120LL) )
      {
        if ( ++v3 >= dword_1801F0390 )
          return (struct CAnalogExclusiveView *)v2;
      }
      return *(struct CAnalogExclusiveView **)(qword_1801F0378 + 8LL * v3);
    }
  }
  return (struct CAnalogExclusiveView *)v2;
}
