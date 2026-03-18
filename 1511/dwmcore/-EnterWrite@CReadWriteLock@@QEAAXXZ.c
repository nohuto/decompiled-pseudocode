/*
 * XREFs of ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x18001CD44
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180001520 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D178 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800A6560 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x1800B20A0 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18010A4B4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ @ 0x18013BFE4 (-EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ.c)
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x18013C844 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CReadWriteLock::EnterWrite(RTL_SRWLOCK *this)
{
  AcquireSRWLockExclusive(this + 1);
  LODWORD(this->Ptr) = GetCurrentThreadId();
}
