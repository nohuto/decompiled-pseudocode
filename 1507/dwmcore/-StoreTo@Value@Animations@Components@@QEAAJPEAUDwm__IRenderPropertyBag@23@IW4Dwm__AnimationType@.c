/*
 * XREFs of ?StoreTo@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@23@@Z @ 0x1801582F0
 * Callers:
 *     ?Commit@AnimationTarget@Animations@Components@@QEAAJXZ @ 0x180157214 (-Commit@AnimationTarget@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetVector4@Value@Animations@Components@@QEBA?AVVector4@23@XZ @ 0x18009C19C (-GetVector4@Value@Animations@Components@@QEBA-AVVector4@23@XZ.c)
 *     ?GetQuaternion@Value@Animations@Components@@QEBA?AUQuaternion@23@XZ @ 0x180154F24 (-GetQuaternion@Value@Animations@Components@@QEBA-AUQuaternion@23@XZ.c)
 */

__int64 __fastcall Components::Animations::Value::StoreTo(double *a1, __int64 a2, unsigned int a3, int a4)
{
  int v6; // r9d
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  __int64 result; // rax
  __m128 v11; // xmm0
  __int64 (__fastcall *v12)(__int64, _QWORD, __m128 *); // rbx
  __m128d v13; // xmm2
  float v14; // xmm0_4
  __m128 v15; // xmm1
  __int64 (__fastcall *v16)(__int64, _QWORD, __m128 *); // rbx
  __m128 v17; // [rsp+20h] [rbp-30h] BYREF
  __m128 v18; // [rsp+30h] [rbp-20h] BYREF

  v6 = a4 - 17;
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
          if ( v9 != 1 )
            return 2147942487LL;
          v11 = *Components::Animations::Value::GetQuaternion(a1, &v17);
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __m128 *))(*(_QWORD *)a2 + 96LL);
        }
        else
        {
          v11 = *(__m128 *)Components::Animations::Value::GetVector4((__int64)a1, (__int64)&v17);
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __m128 *))(*(_QWORD *)a2 + 88LL);
        }
        v18 = v11;
        result = v12(a2, a3, &v18);
      }
      else
      {
        v13 = (__m128d)*((unsigned __int64 *)a1 + 1);
        v14 = a1[2];
        v15 = _mm_cvtpd_ps((__m128d)*(unsigned __int64 *)a1);
        v18.m128_f32[2] = v14;
        v17.m128_f32[2] = v14;
        v16 = *(__int64 (__fastcall **)(__int64, _QWORD, __m128 *))(*(_QWORD *)a2 + 80LL);
        v17.m128_u64[0] = _mm_unpacklo_ps(v15, _mm_cvtpd_ps(v13)).m128_u64[0];
        result = v16(a2, a3, &v17);
      }
    }
    else
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64))(*(_QWORD *)a2 + 72LL))(
                 a2,
                 a3,
                 __PAIR64__(a1[1], *a1));
    }
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 64LL))(a2, a3);
  }
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
