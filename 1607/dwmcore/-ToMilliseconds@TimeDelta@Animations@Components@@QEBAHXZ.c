/*
 * XREFs of ?ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ @ 0x1800B1A88
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180086F40 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ToMicroseconds@TimeDelta@Animations@Components@@QEBA_JXZ @ 0x1800B1A60 (-ToMicroseconds@TimeDelta@Animations@Components@@QEBA_JXZ.c)
 */

__int64 __fastcall Components::Animations::TimeDelta::ToMilliseconds(Components::Animations::TimeDelta *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  if ( *(_QWORD *)this == 0x7FFFFFFFFFFFFFFFLL )
    return 0x7FFFFFFFLL;
  v1 = Components::Animations::TimeDelta::ToMicroseconds(this);
  v2 = 500LL;
  if ( v1 < 0 )
    v2 = -500LL;
  return (v1 + v2) / 1000;
}
