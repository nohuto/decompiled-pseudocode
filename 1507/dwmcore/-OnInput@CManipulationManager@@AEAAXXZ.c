/*
 * XREFs of ?OnInput@CManipulationManager@@AEAAXXZ @ 0x18012A874
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x180092E2C (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 *     ?OnShutdown@CManipulationManager@@AEAAXXZ @ 0x18012AE48 (-OnShutdown@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180129C20 (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2B4 (-InternalRelease@-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012AFD4 (-ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012B110 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x18012B7AC (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012BB8C (-RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012C014 (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::OnInput(unsigned __int64 this, __int64 a2, __int64 a3)
{
  CManipulationManager *v3; // rsi
  __int64 *v4; // rbp
  __int64 v5; // rbx
  int *v6; // rdi
  __int64 v7; // rcx
  int *v8; // [rsp+48h] [rbp+10h] BYREF
  struct CManipulationFrame *v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = (CManipulationManager *)this;
  v4 = (__int64 *)&v8;
  v5 = 0LL;
  do
  {
    LOBYTE(a3) = 1;
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(this, &v9, a3, v4);
    v6 = (int *)v9;
    v9 = 0LL;
    v10 = v5;
    v5 = (__int64)v6;
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v9);
    v4 = 0LL;
    if ( v6 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_qq(v7, &MANIPULATION_FRAME_DEQUEUED, v6[6], v6[4]);
      CManipulationManager::ProcessFrameInputPreTargeting(v3, (struct CManipulationFrame *)v6);
      CManipulationManager::CalculateFrameTargets(v3, (struct CManipulationFrame *)v6);
      CManipulationManager::TargetFrameInput(v3, (struct CManipulationFrame *)v6);
      CManipulationManager::RouteAllFrames(v3, (struct CManipulationFrame *)v6);
      CManipulationManager::ProcessFrameInputPostTargeting(v3, (struct CManipulationFrame *)v6);
    }
    this = (unsigned int)v8;
    LODWORD(v8) = (_DWORD)v8 - 1;
  }
  while ( (_DWORD)this );
  v8 = v6;
  Microsoft::WRL::ComPtr<CManipulationFrame>::InternalRelease((__int64 *)&v8);
}
