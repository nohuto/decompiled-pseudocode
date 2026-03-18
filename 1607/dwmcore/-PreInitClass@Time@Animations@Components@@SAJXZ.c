/*
 * XREFs of ?PreInitClass@Time@Animations@Components@@SAJXZ @ 0x1800AD4A8
 * Callers:
 *     ?AnInitializeEngine@@YAXXZ @ 0x1800AD104 (-AnInitializeEngine@@YAXXZ.c)
 * Callees:
 *     <none>
 */

signed int Components::Animations::Time::PreInitClass(void)
{
  signed int result; // eax

  if ( QueryPerformanceFrequency(&Components::Animations::Time::s_luFreq)
    && QueryPerformanceCounter(&Components::Animations::Time::s_luBegin) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / Components::Animations::Time::s_luFreq.QuadPart < 0x12C )
      return -2147418113;
    else
      return 0;
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
