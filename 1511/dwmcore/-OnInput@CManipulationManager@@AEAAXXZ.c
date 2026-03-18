/*
 * XREFs of ?OnInput@CManipulationManager@@AEAAXXZ @ 0x180004D7C
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1800A6BA0 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 *     ?OnShutdown@CManipulationManager@@AEAAXXZ @ 0x18013FF10 (-OnShutdown@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x180003A28 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x180003BF4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180004574 (-ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800046B0 (-RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800048FC (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180004A0C (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180004BE0 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 */

void __fastcall CManipulationManager::OnInput(__int64 this)
{
  struct CComposition **v1; // rsi
  int *v2; // rbp
  __int64 v3; // rbx
  unsigned int *v4; // rdi
  __int64 v5; // rcx
  unsigned int *v6; // [rsp+48h] [rbp+10h] BYREF
  struct CManipulationFrame *v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v1 = (struct CComposition **)this;
  v2 = (int *)&v6;
  v3 = 0LL;
  do
  {
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(this, &v7, 1, v2);
    v4 = (unsigned int *)v7;
    v7 = 0LL;
    v8 = v3;
    v3 = (__int64)v4;
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v8);
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v7);
    v2 = 0LL;
    if ( v4 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_qq(v5, &MANIPULATION_FRAME_DEQUEUED, v4[6], v4[4]);
      CManipulationManager::ProcessFrameInputPreTargeting(v1, (struct CManipulationFrame *)v4);
      CManipulationManager::CalculateFrameTargets((CManipulationManager *)v1, (struct CManipulationFrame *)v4);
      CManipulationManager::TargetFrameInput((CManipulationManager *)v1, (struct CManipulationFrame *)v4);
      CManipulationManager::RouteAllFrames((CManipulationManager *)v1, (struct CManipulationFrame *)v4);
      CManipulationManager::ProcessFrameInputPostTargeting((RTL_SRWLOCK **)v1, (struct CManipulationFrame *)v4);
    }
    this = (unsigned int)v6;
    LODWORD(v6) = (_DWORD)v6 - 1;
  }
  while ( (_DWORD)this );
  v6 = v4;
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v6);
}
