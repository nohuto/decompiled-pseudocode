/*
 * XREFs of ?QueryFrom@Value@Animations@Components@@QEAAJPEAUDwm__IRenderPropertyBag@23@IW4Dwm__AnimationType@23@@Z @ 0x180164D94
 * Callers:
 *     ?Commit@AnimationTarget@Animations@Components@@QEAAJXZ @ 0x1801652D0 (-Commit@AnimationTarget@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall Components::Animations::Value::QueryFrom(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  __int64 result; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64 *, _QWORD, __int128 *); // rbx
  double v13; // xmm1_8
  float v14; // xmm0_4
  double v15; // xmm1_8
  __int64 v16; // rax
  __int64 k; // rax
  __int64 v18; // rax
  __int64 j; // rax
  __int64 v20; // rax
  double v21; // xmm1_8
  double v22; // xmm0_8
  __int64 v23; // rax
  __int64 i; // rax
  float v25; // xmm0_4
  __int128 v26; // [rsp+20h] [rbp-10h] BYREF
  float v27; // [rsp+68h] [rbp+38h] BYREF

  v5 = a4 - 18;
  if ( !v5 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, float *))(*a2 + 24))(a2, a3, &v27);
    if ( (int)result < 0 )
      return result;
    v25 = v27;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(double *)a1 = v25;
    goto LABEL_26;
  }
  v6 = v5 - 17;
  if ( !v6 )
  {
    v23 = *a2;
    *(_QWORD *)&v26 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v23 + 32))(a2, a3, &v26);
    if ( (int)result < 0 )
      return result;
    for ( i = 0LL; i < 2; ++i )
      *(double *)(a1 + 8 * i) = *((float *)&v26 + i);
LABEL_26:
    *(_QWORD *)(a1 + 16) = 0LL;
LABEL_27:
    *(_QWORD *)(a1 + 24) = 0LL;
    return 0LL;
  }
  v7 = v6 - 17;
  if ( !v7 )
  {
    v20 = *a2;
    *(_QWORD *)&v26 = 0LL;
    DWORD2(v26) = 0;
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v20 + 40))(a2, a3, &v26);
    if ( (int)result < 0 )
      return result;
    v21 = *((float *)&v26 + 1);
    *(double *)a1 = *(float *)&v26;
    v22 = *((float *)&v26 + 2);
    *(double *)(a1 + 8) = v21;
    *(double *)(a1 + 16) = v22;
    goto LABEL_27;
  }
  v8 = v7 - 17;
  if ( !v8 )
  {
    v18 = *a2;
    v26 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v18 + 48))(a2, a3, &v26);
    if ( (int)result < 0 )
      return result;
    for ( j = 0LL; j < 4; ++j )
      *(double *)(a1 + 8 * j) = *((float *)&v26 + j);
    return 0LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v16 = *a2;
    v26 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v16 + 56))(a2, a3, &v26);
    if ( (int)result < 0 )
      return result;
    for ( k = 0LL; k < 4; ++k )
      *(double *)(a1 + 8 * k) = *((float *)&v26 + k);
    return 0LL;
  }
  if ( v9 != 1 )
    return 2147942487LL;
  v11 = *a2;
  *(_QWORD *)((char *)&v26 + 4) = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v11 + 64);
  LODWORD(v26) = 0;
  *((float *)&v26 + 3) = FLOAT_1_0;
  result = v12(a2, a3, &v26);
  if ( (int)result >= 0 )
  {
    v13 = *((float *)&v26 + 1);
    *(double *)a1 = *(float *)&v26;
    v14 = *((float *)&v26 + 2);
    *(double *)(a1 + 8) = v13;
    v15 = *((float *)&v26 + 3);
    *(double *)(a1 + 16) = v14;
    *(double *)(a1 + 24) = v15;
    return 0LL;
  }
  return result;
}
