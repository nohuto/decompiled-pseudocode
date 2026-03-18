/*
 * XREFs of ?Now@Time@Animations@Components@@SA?AV123@XZ @ 0x180163BA4
 * Callers:
 *     ?InitClass@AnimationManager@Animations@Components@@SAJXZ @ 0x180163A64 (-InitClass@AnimationManager@Animations@Components@@SAJXZ.c)
 *     ?RegisterDeferredEvent@AnimationManager@Animations@Components@@QEAAJPEAVAnimationEvent@23@@Z @ 0x180163BE4 (-RegisterDeferredEvent@AnimationManager@Animations@Components@@QEAAJPEAVAnimationEvent@23@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Components::Animations::Time::Now(_QWORD *a1)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  PerformanceCount = Components::Animations::Time::s_luBegin;
  QueryPerformanceCounter(&PerformanceCount);
  *a1 = PerformanceCount.QuadPart - Components::Animations::Time::s_luBegin.QuadPart;
  return a1;
}
