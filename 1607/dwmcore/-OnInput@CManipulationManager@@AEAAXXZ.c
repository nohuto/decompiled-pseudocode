/*
 * XREFs of ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1800074A8
 * Callers:
 *     _lambda_85f18509193cd6d47eaa6d1c8f3fb8df_::_lambda_invoker_cdecl_ @ 0x180022150 (_lambda_85f18509193cd6d47eaa6d1c8f3fb8df_--_lambda_invoker_cdecl_.c)
 *     _lambda_0342f3220c32cb7c81f8659183993432_::_lambda_invoker_cdecl_ @ 0x18016A5F0 (_lambda_0342f3220c32cb7c81f8659183993432_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180006C60 (-ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180006DA0 (-RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180006FDC (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800071BC (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180007390 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x180008414 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 */

void __fastcall CManipulationManager::OnInput(unsigned __int64 this, __int64 a2, __int64 a3)
{
  struct CComposition **v3; // rsi
  unsigned int **v4; // rbp
  unsigned int *v5; // rbx
  unsigned int *v6; // rdi
  __int64 v7; // rcx
  unsigned int *v8; // [rsp+48h] [rbp+10h] BYREF
  struct CManipulationFrame *v9; // [rsp+50h] [rbp+18h] BYREF
  unsigned int *v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = (struct CComposition **)this;
  v4 = &v8;
  v5 = 0LL;
  do
  {
    LOBYTE(a3) = 1;
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(this, &v9, a3, v4);
    v6 = (unsigned int *)v9;
    v9 = 0LL;
    v10 = v5;
    v5 = v6;
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v9);
    v4 = 0LL;
    if ( v6 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_qq(v7, &MANIPULATION_FRAME_DEQUEUED, v6[6], v6[4]);
      CManipulationManager::ProcessFrameInputPreTargeting(v3, (struct CManipulationFrame *)v6);
      CManipulationManager::CalculateFrameTargets((CManipulationManager *)v3, (struct CManipulationFrame *)v6);
      CManipulationManager::TargetFrameInput((CManipulationManager *)v3, (struct CManipulationFrame *)v6);
      CManipulationManager::RouteAllFrames((CManipulationManager *)v3, (struct CManipulationFrame *)v6);
      CManipulationManager::ProcessFrameInputPostTargeting(v3, (struct CManipulationFrame *)v6);
    }
    this = (unsigned int)v8;
    LODWORD(v8) = (_DWORD)v8 - 1;
  }
  while ( (_DWORD)this );
  v8 = v6;
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v8);
}
