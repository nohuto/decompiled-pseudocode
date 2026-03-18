/*
 * XREFs of ?SetD2DEffectProperties@CTurbulenceEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x18011D270
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CTurbulenceEffect::SetD2DEffectProperties(CTurbulenceEffect *this, struct ID2D1Effect *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rbx
  int v8; // eax
  __int64 (__fastcall *v9)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int); // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a2;
  v16 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 44), (__m128)*((unsigned int *)this + 45)).m128_u64[0];
  v5 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, unsigned __int64 *, int))(v4 + 72))(
         a2,
         0LL,
         0LL,
         &v16,
         8);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
    v16 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 46), (__m128)*((unsigned int *)this + 47)).m128_u64[0];
    v8 = v7(a2, 2LL, 0LL, &v16, 8);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v9 = *(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, unsigned __int64 *, int))(*(_QWORD *)a2 + 72LL);
      v16 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 48), (__m128)*((unsigned int *)this + 49)).m128_u64[0];
      v10 = v9(a2, 1LL, 0LL, &v16, 8);
      v6 = v10;
      if ( v10 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                a2,
                3LL,
                0LL,
                (char *)this + 200,
                4);
        v6 = v11;
        if ( v11 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                  a2,
                  4LL,
                  0LL,
                  (char *)this + 204,
                  4);
          v6 = v12;
          if ( v12 >= 0 )
          {
            v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    5LL,
                    0LL,
                    (char *)this + 208,
                    4);
            v6 = v13;
            if ( v13 >= 0 )
            {
              v14 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                      a2,
                      6LL,
                      0LL,
                      (char *)this + 212,
                      4);
              v6 = v14;
              if ( v14 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x4Du);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x48u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x43u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x3Eu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x39u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x34u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2Fu);
  }
  return v6;
}
