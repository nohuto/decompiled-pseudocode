/*
 * XREFs of ?Initialize@CScrollPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18015FB0C
 * Callers:
 *     ?EnsureScrollAnimations@CInteractionTracker@@AEAAJXZ @ 0x18014A474 (-EnsureScrollAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18015E0D8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CScrollPositionAnimation::Initialize(__int64 a1, int *a2, int a3)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CScrollAnimation::Initialize(a1, a2, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x26u);
  }
  else
  {
    *(_DWORD *)(a1 + 392) = 1112014848;
    v5 = 0;
    *(_DWORD *)(a1 + 396) = 1165623296;
  }
  return v5;
}
