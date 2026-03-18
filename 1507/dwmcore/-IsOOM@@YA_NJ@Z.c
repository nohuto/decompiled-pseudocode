/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x18008D248
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18004A078 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18004A190 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x18008D1F0 (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x1800DE73C (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 *     ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x1800E19E4 (-FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  char result; // al
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0;
  v2 = &unk_18016D5B0;
  v3 = 0;
  while ( *v2 != a1 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 0xA )
      return result;
  }
  return 1;
}
