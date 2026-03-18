/*
 * XREFs of ?ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ @ 0x180160860
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18012BA64 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18012BC60 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

LONGLONG __fastcall Components::Animations::TimeDelta::ToMilliseconds(Components::Animations::TimeDelta *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  LONGLONG v4; // rax

  if ( *(_QWORD *)this == 0x7FFFFFFFFFFFFFFFLL )
    return 0x7FFFFFFFLL;
  v2 = 1000000LL * *(_QWORD *)this;
  v3 = 500LL;
  v4 = v2 / Components::Animations::Time::s_luFreq.QuadPart;
  if ( v4 < 0 )
    v3 = -500LL;
  return (v4 + v3) / 1000;
}
