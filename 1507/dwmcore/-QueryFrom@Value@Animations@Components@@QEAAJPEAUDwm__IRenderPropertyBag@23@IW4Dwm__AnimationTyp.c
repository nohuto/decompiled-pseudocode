/*
 * XREFs of ?QueryFrom@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@23@@Z @ 0x1801580D8
 * Callers:
 *     ?Commit@AnimationTarget@Animations@Components@@QEAAJXZ @ 0x180157214 (-Commit@AnimationTarget@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall Components::Animations::Value::QueryFrom(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  int v8; // r9d
  __int64 result; // rax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64 *, _QWORD, __int128 *); // rbx
  double v12; // xmm1_8
  float v13; // xmm0_4
  double v14; // xmm1_8
  __int64 v15; // rax
  __int64 j; // rax
  __int64 v17; // rax
  double v18; // xmm1_8
  double v19; // xmm0_8
  __int64 v20; // rax
  __int64 i; // rax
  float v22; // xmm0_4
  __int128 v23; // [rsp+20h] [rbp-10h] BYREF
  float v24; // [rsp+68h] [rbp+38h] BYREF

  v5 = a4 - 17;
  if ( !v5 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, float *))(*a2 + 24))(a2, a3, &v24);
    if ( (int)result < 0 )
      return result;
    v22 = v24;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(double *)a1 = v22;
    goto LABEL_21;
  }
  v6 = v5 - 17;
  if ( !v6 )
  {
    v20 = *a2;
    *(_QWORD *)&v23 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v20 + 32))(a2, a3, &v23);
    if ( (int)result < 0 )
      return result;
    for ( i = 0LL; i < 2; ++i )
      *(double *)(a1 + 8 * i) = *((float *)&v23 + i);
LABEL_21:
    *(_QWORD *)(a1 + 16) = 0LL;
LABEL_22:
    *(_QWORD *)(a1 + 24) = 0LL;
    return 0LL;
  }
  v7 = v6 - 17;
  if ( !v7 )
  {
    v17 = *a2;
    *(_QWORD *)&v23 = 0LL;
    DWORD2(v23) = 0;
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v17 + 40))(a2, a3, &v23);
    if ( (int)result < 0 )
      return result;
    v18 = *((float *)&v23 + 1);
    *(double *)a1 = *(float *)&v23;
    v19 = *((float *)&v23 + 2);
    *(double *)(a1 + 8) = v18;
    *(double *)(a1 + 16) = v19;
    goto LABEL_22;
  }
  v8 = v7 - 17;
  if ( !v8 )
  {
    v15 = *a2;
    v23 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v15 + 48))(a2, a3, &v23);
    if ( (int)result < 0 )
      return result;
    for ( j = 0LL; j < 4; ++j )
      *(double *)(a1 + 8 * j) = *((float *)&v23 + j);
    return 0LL;
  }
  if ( v8 != 1 )
    return 2147942487LL;
  v10 = *a2;
  *(_QWORD *)((char *)&v23 + 4) = 0LL;
  v11 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v10 + 56);
  LODWORD(v23) = 0;
  *((float *)&v23 + 3) = FLOAT_1_0;
  result = v11(a2, a3, &v23);
  if ( (int)result >= 0 )
  {
    v12 = *((float *)&v23 + 1);
    *(double *)a1 = *(float *)&v23;
    v13 = *((float *)&v23 + 2);
    *(double *)(a1 + 8) = v12;
    v14 = *((float *)&v23 + 3);
    *(double *)(a1 + 16) = v13;
    *(double *)(a1 + 24) = v14;
    return 0LL;
  }
  return result;
}
