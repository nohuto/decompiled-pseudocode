/*
 * XREFs of ?ToMicroseconds@TimeDelta@Animations@Components@@QEBA_JXZ @ 0x1800B1A60
 * Callers:
 *     ?ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ @ 0x1800B1A88 (-ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ.c)
 *     ?ToSeconds@TimeDelta@Animations@Components@@QEBAMXZ @ 0x1801918E0 (-ToSeconds@TimeDelta@Animations@Components@@QEBAMXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::TimeDelta::ToMicroseconds(Components::Animations::TimeDelta *this)
{
  __int64 result; // rax

  result = 0x7FFFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)this != 0x7FFFFFFFFFFFFFFFLL )
    return 1000000LL * *(_QWORD *)this / Components::Animations::Time::s_luFreq.QuadPart;
  return result;
}
