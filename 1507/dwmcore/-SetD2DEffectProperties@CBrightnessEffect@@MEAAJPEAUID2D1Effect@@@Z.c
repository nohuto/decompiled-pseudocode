/*
 * XREFs of ?SetD2DEffectProperties@CBrightnessEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x18011CB20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBrightnessEffect::SetD2DEffectProperties(CBrightnessEffect *this, struct ID2D1Effect *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rbx
  int v8; // eax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a2;
  v10 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 44), (__m128)*((unsigned int *)this + 45)).m128_u64[0];
  v5 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int))(v4 + 72))(
         a2,
         0LL,
         0LL,
         &v10,
         8);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
    v10 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 46), (__m128)*((unsigned int *)this + 47)).m128_u64[0];
    v8 = v7(a2, 1LL, 0LL, &v10, 8);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x19u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x14u);
  }
  return v6;
}
