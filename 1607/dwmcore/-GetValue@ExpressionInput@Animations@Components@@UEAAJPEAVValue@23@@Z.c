/*
 * XREFs of ?GetValue@ExpressionInput@Animations@Components@@UEAAJPEAVValue@23@@Z @ 0x180194870
 * Callers:
 *     <none>
 * Callees:
 *     ?Normalize@Quaternion@Animations@Components@@QEAAXXZ @ 0x1800B7BB4 (-Normalize@Quaternion@Animations@Components@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::ExpressionInput::GetValue(
        Components::Animations::ExpressionInput *this,
        struct Components::Animations::Value *a2)
{
  __int64 result; // rax
  double v5; // xmm1_8
  float v6; // xmm0_4
  double v7; // xmm1_8
  __int64 k; // rax
  __int64 j; // rax
  double v10; // xmm1_8
  double v11; // xmm0_8
  __int64 i; // rax
  float v13; // xmm0_4
  _QWORD v14[2]; // [rsp+20h] [rbp-30h]
  __m128 v15; // [rsp+30h] [rbp-20h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __m128 *))(**((_QWORD **)this + 2) + 48LL))(
             *((_QWORD *)this + 2),
             *((unsigned int *)this + 6),
             &v15);
  if ( (int)result >= 0 )
  {
    switch ( *((_DWORD *)this + 3) )
    {
      case 0x12:
        v13 = v15.m128_f32[0];
        *((_QWORD *)a2 + 1) = 0LL;
        *(double *)a2 = v13;
        break;
      case 0x23:
        v14[0] = v15.m128_u64[0];
        for ( i = 0LL; i < 2; ++i )
          *((double *)a2 + i) = *((float *)v14 + i);
        break;
      case 0x34:
        v10 = v15.m128_f32[1];
        *(double *)a2 = v15.m128_f32[0];
        v11 = v15.m128_f32[2];
        *((double *)a2 + 1) = v10;
        *((double *)a2 + 2) = v11;
LABEL_21:
        *((_QWORD *)a2 + 3) = 0LL;
        return 0LL;
      default:
        switch ( *((_DWORD *)this + 3) )
        {
          case 'E':
            for ( j = 0LL; j < 4; ++j )
              *((double *)a2 + j) = v15.m128_f32[j];
            break;
          case 'F':
            for ( k = 0LL; k < 4; ++k )
              *((double *)a2 + k) = v15.m128_f32[k];
            break;
          case 'G':
            Components::Animations::Quaternion::Normalize(&v15);
            v5 = v15.m128_f32[1];
            *(double *)a2 = v15.m128_f32[0];
            v6 = v15.m128_f32[2];
            *((double *)a2 + 1) = v5;
            v7 = v15.m128_f32[3];
            *((double *)a2 + 2) = v6;
            *((double *)a2 + 3) = v7;
            break;
        }
        return 0LL;
    }
    *((_QWORD *)a2 + 2) = 0LL;
    goto LABEL_21;
  }
  return result;
}
