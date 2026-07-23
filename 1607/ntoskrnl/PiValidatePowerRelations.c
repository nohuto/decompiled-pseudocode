/*
 * XREFs of PiValidatePowerRelations @ 0x1405711EC
 * Callers:
 *     PiQueryPowerRelations @ 0x140570F88 (PiQueryPowerRelations.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 *__fastcall PiValidatePowerRelations(__int64 a1)
{
  __int64 **v2; // rdx
  __int64 *result; // rax
  __int64 v4; // r9
  __int64 **v5; // rdx
  __int64 i; // rcx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 **v9; // rcx
  __int64 *v10; // rcx
  __int64 v11; // rcx
  __int64 **v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // r10
  __int64 **v15; // r10
  __int64 *v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v17; // [rsp+38h] [rbp-8h]

  v17 = &v16;
  v2 = (__int64 **)(a1 + 176);
  v16 = (__int64 *)&v16;
  while ( *v2 != (__int64 *)v2 )
  {
    v7 = *v2;
    v8 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v8 + 8) != v7 )
      __fastfail(3u);
    *v2 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v2;
    v9 = v17;
    if ( *v17 != (__int64 *)&v16 )
      __fastfail(3u);
    v7[1] = (__int64)v17;
    *v7 = (__int64)&v16;
    *v9 = v7;
    v17 = (__int64 **)v7;
  }
  result = v16;
  if ( v16 != (__int64 *)&v16 )
  {
    do
    {
      v4 = result[5] - 144;
      v5 = (__int64 **)(v4 + 176);
      while ( *v5 != (__int64 *)v5 )
      {
        v13 = *v5;
        v14 = **v5;
        if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v14 + 8) != v13 )
          __fastfail(3u);
        *v5 = (__int64 *)v14;
        *(_QWORD *)(v14 + 8) = v5;
        v15 = v17;
        if ( *v17 != (__int64 *)&v16 )
          __fastfail(3u);
        v13[1] = (__int64)v17;
        *v13 = (__int64)&v16;
        *v15 = v13;
        v17 = (__int64 **)v13;
      }
      for ( i = v4; i; i = *(_QWORD *)(i + 16) )
      {
        if ( i == a1 )
          KeBugCheckEx(0xCAu, 0xCuLL, *(_QWORD *)(a1 + 32), *(_QWORD *)(v4 + 32), 0LL);
      }
      result = (__int64 *)*result;
    }
    while ( result != (__int64 *)&v16 );
    goto LABEL_12;
  }
  while ( result != (__int64 *)&v16 )
  {
    v10 = (__int64 *)*result;
    if ( (__int64 **)result[1] != &v16 || (__int64 *)v10[1] != result )
      __fastfail(3u);
    v16 = (__int64 *)*result;
    v10[1] = (__int64)&v16;
    v11 = result[2] + 32;
    v12 = *(__int64 ***)(result[2] + 40);
    if ( *v12 != (__int64 *)v11 )
      __fastfail(3u);
    *result = v11;
    result[1] = (__int64)v12;
    *v12 = result;
    *(_QWORD *)(v11 + 8) = result;
LABEL_12:
    result = v16;
  }
  return result;
}
