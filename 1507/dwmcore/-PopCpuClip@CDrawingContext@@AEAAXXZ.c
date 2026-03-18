/*
 * XREFs of ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800DC1F8
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180027E60 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18005B05C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1800DF580 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

void __fastcall CDrawingContext::PopCpuClip(CDrawingContext *this)
{
  CScopedClipStack *v2; // rcx
  __int64 v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 106, &v4);
  CScopedClipStack::FreeCpuClipStackState(
    v2,
    (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 184)
                                                 + 104LL * (unsigned int)(*((_DWORD *)this + 374) - 1)));
  --*((_DWORD *)this + 374);
  v3 = 76LL * (unsigned int)(*((_DWORD *)this + 176) - 1);
  --*(_DWORD *)(v3 + *((_QWORD *)this + 85) + 8);
  *((_BYTE *)this + 5929) = 1;
}
