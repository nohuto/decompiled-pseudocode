/*
 * XREFs of ?GetManipulationVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18014A844
 * Callers:
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x18015E010 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall CInteractionTracker::GetManipulationVelocity(__int64 a1, int a2)
{
  __int64 v2; // rax
  __m128 v3; // xmm2
  __int64 v4; // rax
  __int128 v6; // [rsp+60h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = v2 + 268;
    v6 = *(_OWORD *)(v4 + 96);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v3 = (__m128)HIDWORD(v6);
      }
      else if ( a2 == 2 )
      {
        v3 = (__m128)(unsigned int)HIDWORD(*(_QWORD *)(v4 + 112));
      }
    }
    else
    {
      v3 = (__m128)DWORD2(v6);
    }
    v3.m128_f32[0] = v3.m128_f32[0] * 1000.0;
    if ( a2 != 2 )
      return _mm_xor_ps(v3, (__m128)_xmm);
  }
  return v3;
}
