/*
 * XREFs of ?GetValue@ExpressionInput@Animations@Components@@UEAAJPEAVValue@23@@Z @ 0x180165570
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall Components::Animations::ExpressionInput::GetValue(
        Components::Animations::ExpressionInput *this,
        struct Components::Animations::Value *a2)
{
  __int64 result; // rax
  int v5; // eax
  __int64 i; // rax
  double v7; // xmm1_8
  double v8; // xmm0_8
  __int64 j; // rax
  double v10; // xmm0_8
  _QWORD v11[2]; // [rsp+20h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  float v13; // [rsp+38h] [rbp-18h]

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 2) + 48LL))(
             *((_QWORD *)this + 2),
             *((unsigned int *)this + 6),
             &v12);
  if ( (int)result >= 0 )
  {
    v5 = *((_DWORD *)this + 3);
    if ( v5 == 18 )
    {
      v10 = *(float *)&v12;
      *((_QWORD *)a2 + 1) = 0LL;
      *(double *)a2 = v10;
    }
    else
    {
      if ( v5 != 35 )
      {
        if ( v5 != 52 )
        {
          if ( v5 == 69 )
          {
            for ( i = 0LL; i < 4; ++i )
              *((double *)a2 + i) = *((float *)&v12 + i);
          }
          return 0LL;
        }
        v7 = *((float *)&v12 + 1);
        *(double *)a2 = *(float *)&v12;
        v8 = v13;
        *((double *)a2 + 1) = v7;
        *((double *)a2 + 2) = v8;
LABEL_15:
        *((_QWORD *)a2 + 3) = 0LL;
        return 0LL;
      }
      v11[0] = v12;
      for ( j = 0LL; j < 2; ++j )
        *((double *)a2 + j) = *((float *)v11 + j);
    }
    *((_QWORD *)a2 + 2) = 0LL;
    goto LABEL_15;
  }
  return result;
}
