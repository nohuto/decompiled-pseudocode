/*
 * XREFs of ?Find@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEBAHAEBQEAVAnimation@23@@Z @ 0x180155D64
 * Callers:
 *     ?xwPreDelete@Animation@Animations@Components@@UEAAXXZ @ 0x180155810 (-xwPreDelete@Animation@Animations@Components@@UEAAXXZ.c)
 *     ?RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z @ 0x180155FA4 (-RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z.c)
 *     ?xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ @ 0x1801561F0 (-xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::ArrayListF<Components::Animations::Animation *>::Find(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rdx
  _QWORD *i; // rcx

  v2 = *(int *)(a1 + 8);
  result = 0LL;
  if ( (int)v2 <= 0 )
    return 0xFFFFFFFFLL;
  v4 = *a2;
  v5 = 0LL;
  for ( i = *(_QWORD **)a1; *i != v4; ++i )
  {
    result = (unsigned int)(result + 1);
    if ( ++v5 >= v2 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
