/*
 * XREFs of ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x180030F6C
 * Callers:
 *     ?OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_itf_UIAnimation_0000_0002_0001@@1@Z @ 0x180031550 (-OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_i.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180031840 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180033230 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationEngine::GetTransitionVisualSetIndex(CAnimationEngine *this, int a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r9d
  __int64 v4; // r8

  v2 = *((_DWORD *)this + 16);
  v3 = -1;
  v4 = 0LL;
  if ( v2 )
  {
    while ( **(_DWORD **)(*((_QWORD *)this + 5) + 8 * v4) != a2 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v2 )
        return v3;
    }
    return (unsigned int)v4;
  }
  return v3;
}
