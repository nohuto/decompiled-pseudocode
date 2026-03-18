/*
 * XREFs of ?ApiCreate@AnimationManager@Animations@Components@@QEAAJXZ @ 0x1800AD24C
 * Callers:
 *     ?InitClass@AnimationManager@Animations@Components@@SAJXZ @ 0x1800AD134 (-InitClass@AnimationManager@Animations@Components@@SAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::AnimationManager::ApiCreate(Components::Animations::AnimationManager *this)
{
  LONGLONG v2; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 29) = 2500 * Components::Animations::Time::s_luFreq.QuadPart / 1000000;
  PerformanceCount = Components::Animations::Time::s_luBegin;
  QueryPerformanceCounter(&PerformanceCount);
  v2 = PerformanceCount.QuadPart - Components::Animations::Time::s_luBegin.QuadPart;
  *((_BYTE *)this + 184) &= ~1u;
  *((_QWORD *)this + 21) = v2;
  *((_QWORD *)this + 24) = 0x3FF0000000000000LL;
  return 0LL;
}
