/*
 * XREFs of ?PreInitClass@Time@Animations@Components@@SAJXZ @ 0x18015383C
 * Callers:
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18011044C (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

signed int Components::Animations::Time::PreInitClass(void)
{
  signed int result; // eax

  if ( QueryPerformanceFrequency(&Components::Animations::Time::s_luFreq)
    && QueryPerformanceCounter(&Components::Animations::Time::s_luBegin) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / Components::Animations::Time::s_luFreq.QuadPart >= 0x12C )
      return 0;
    else
      return -2147418113;
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
