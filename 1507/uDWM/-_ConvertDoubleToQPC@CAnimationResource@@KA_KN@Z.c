/*
 * XREFs of ?_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z @ 0x18003BFE4
 * Callers:
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x18003BD60 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x18003BDE0 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x18009C000 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x18009C0B0 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CAnimationResource::_ConvertDoubleToQPC(double a1)
{
  BOOL v1; // eax
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  double v4; // xmm1_8
  LARGE_INTEGER Frequency; // [rsp+40h] [rbp+8h] BYREF

  Frequency.QuadPart = 0LL;
  v1 = QueryPerformanceFrequency(&Frequency);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = 0LL;
    v4 = (double)(int)(a1 * 1024.0 + 0.5) * 0.0009765625 * (double)(int)Frequency.LowPart;
    if ( v4 >= 9.223372036854776e18 )
    {
      v4 = v4 - 9.223372036854776e18;
      if ( v4 < 9.223372036854776e18 )
        v3 = 0x8000000000000000uLL;
    }
    return v3 + (unsigned int)(int)v4;
  }
  return v2;
}
