/*
 * XREFs of ?StoreTo@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@23@@Z @ 0x180165008
 * Callers:
 *     ?Commit@AnimationTarget@Animations@Components@@QEAAJXZ @ 0x1801652D0 (-Commit@AnimationTarget@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetColor@Value@Animations@Components@@QEBA?AVColor@23@XZ @ 0x1800BF57C (-GetColor@Value@Animations@Components@@QEBA-AVColor@23@XZ.c)
 *     ?GetQuaternion@Value@Animations@Components@@QEBA?AUQuaternion@23@XZ @ 0x180162B68 (-GetQuaternion@Value@Animations@Components@@QEBA-AUQuaternion@23@XZ.c)
 */

__int64 __fastcall Components::Animations::Value::StoreTo(double *a1, __int64 a2, unsigned int a3, int a4)
{
  int v6; // r9d
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  __int64 result; // rax
  __m128 v12; // xmm0
  __int64 (__fastcall *v13)(__int64, _QWORD, __m128 *); // rbx
  __m128d v14; // xmm2
  float v15; // xmm0_4
  __m128 v16; // xmm1
  __int64 (__fastcall *v17)(__int64, _QWORD, __m128 *); // rbx
  __m128 v18; // [rsp+20h] [rbp-30h] BYREF
  __m128 v19; // [rsp+30h] [rbp-20h] BYREF

  v6 = a4 - 18;
  if ( v6 )
  {
    v7 = v6 - 17;
    if ( v7 )
    {
      v8 = v7 - 17;
      if ( v8 )
      {
        v9 = v8 - 17;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 != 1 )
              return 2147942487LL;
            v12 = *Components::Animations::Value::GetQuaternion(a1, &v18);
            v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __m128 *))(*(_QWORD *)a2 + 112LL);
          }
          else
          {
            v12 = *(__m128 *)Components::Animations::Value::GetColor((__int64)a1, (__int64)&v18);
            v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __m128 *))(*(_QWORD *)a2 + 104LL);
          }
        }
        else
        {
          v12 = *(__m128 *)Components::Animations::Value::GetColor((__int64)a1, (__int64)&v18);
          v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __m128 *))(*(_QWORD *)a2 + 96LL);
        }
        v19 = v12;
        result = v13(a2, a3, &v19);
      }
      else
      {
        v14 = (__m128d)*((unsigned __int64 *)a1 + 1);
        v15 = a1[2];
        v16 = _mm_cvtpd_ps((__m128d)*(unsigned __int64 *)a1);
        v19.m128_f32[2] = v15;
        v18.m128_f32[2] = v15;
        v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __m128 *))(*(_QWORD *)a2 + 88LL);
        v18.m128_u64[0] = _mm_unpacklo_ps(v16, _mm_cvtpd_ps(v14)).m128_u64[0];
        result = v17(a2, a3, &v18);
      }
    }
    else
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64))(*(_QWORD *)a2 + 80LL))(
                 a2,
                 a3,
                 __PAIR64__(a1[1], *a1));
    }
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, a3);
  }
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
