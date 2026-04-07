/*
 * XREFs of ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCResource@@@Z @ 0x1800376C0
 * Callers:
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000BC5C (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?SetTrigger@CAnimationResource@@QEAAJPEAVCResource@@@Z @ 0x18003BF0C (-SetTrigger@CAnimationResource@@QEAAJPEAVCResource@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetStartTrigger(CAnimatedTransitionVisual *this, struct CResource *a2)
{
  __int64 result; // rax
  CAnimatedTransitionVisual *v3; // r8
  int v4; // r10d
  CAnimationResource **v5; // r9

  result = 0LL;
  v3 = this;
  if ( !a2 )
    return 2147942487LL;
  if ( *((_QWORD *)this + 88) )
    return 2147942405LL;
  v4 = 0;
  v5 = (CAnimationResource **)((char *)this + 600);
  do
  {
    if ( (int)result < 0 )
      break;
    if ( *v5 )
      result = CAnimationResource::SetTrigger(*v5, a2);
    ++v4;
    ++v5;
  }
  while ( (unsigned __int64)v4 < 7 );
  *((_QWORD *)v3 + 88) = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  return result;
}
