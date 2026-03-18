/*
 * XREFs of ?TryWellOrderRectForFixedPoint@CMegaRectCollection@@AEAA_NPEAVCVertexXYWColorDUV2@@0@Z @ 0x180077CD0
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18007814C (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CMegaRectCollection::TryWellOrderRectForFixedPoint(
        CMegaRectCollection *this,
        struct CVertexXYWColorDUV2 *a2,
        struct CVertexXYWColorDUV2 *a3)
{
  unsigned int v3; // r11d
  unsigned __int8 v4; // bl
  unsigned int v5; // ecx
  signed __int64 v6; // r9
  struct CVertexXYWColorDUV2 *i; // rax
  __int128 v10; // xmm1
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm10_4
  float v14; // xmm11_4
  float v15; // xmm8_4
  float v16; // xmm7_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm9_4
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // r8d
  __int64 v24; // rax
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int64 v27; // rcx
  __int128 v28; // xmm1
  __int64 v29; // rcx
  float v31; // [rsp+20h] [rbp-F8h] BYREF
  float v32; // [rsp+24h] [rbp-F4h]
  float v33; // [rsp+40h] [rbp-D8h]
  float v34; // [rsp+44h] [rbp-D4h]
  float v35; // [rsp+60h] [rbp-B8h]
  float v36; // [rsp+64h] [rbp-B4h]
  float v37; // [rsp+80h] [rbp-98h]
  float v38; // [rsp+84h] [rbp-94h]

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = (char *)&v31 - (char *)a2;
  for ( i = a2;
        (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)i) & _xmm) <= 8388608.0
     && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)i + 1)) & _xmm) <= 8388608.0;
        i = (struct CVertexXYWColorDUV2 *)((char *)i + 32) )
  {
    ++v5;
    v10 = *((_OWORD *)i + 1);
    *(_OWORD *)((char *)i + v6) = *(_OWORD *)i;
    *(_OWORD *)((char *)i + v6 + 16) = v10;
    if ( v5 >= 4 )
    {
      if ( v31 == v33 )
      {
        v12 = v34;
        v14 = v38;
        if ( v34 != v38 )
          return v4;
        v13 = v37;
        v16 = v35;
        if ( v37 != v35 )
          return v4;
        v15 = v36;
        v11 = v32;
        if ( v36 != v32 )
          return v4;
      }
      else
      {
        v11 = v32;
        v12 = v34;
        if ( v32 != v34 )
          return v4;
        v13 = v37;
        if ( v33 != v37 )
          return v4;
        v14 = v38;
        v15 = v36;
        if ( v38 != v36 )
          return v4;
        v16 = v35;
        if ( v35 != v31 )
          return v4;
      }
      v17 = FLOAT_3_4028235e38;
      v4 = 1;
      v18 = FLOAT_N3_4028235e38;
      v19 = FLOAT_3_4028235e38;
      v20 = FLOAT_N3_4028235e38;
      if ( v31 <= 3.4028235e38 )
        v19 = v31;
      if ( v31 >= -3.4028235e38 )
        v20 = v31;
      if ( v11 <= 3.4028235e38 )
        v17 = v11;
      if ( v11 >= -3.4028235e38 )
        v18 = v11;
      if ( v33 <= v19 )
        v19 = v33;
      if ( v20 <= v33 )
        v20 = v33;
      if ( v12 <= v17 )
        v17 = v12;
      if ( v18 <= v12 )
        v18 = v12;
      if ( v16 <= v19 )
        v19 = v16;
      if ( v20 <= v16 )
        v20 = v16;
      if ( v15 <= v17 )
        v17 = v15;
      if ( v18 <= v15 )
        v18 = v15;
      if ( v13 <= v19 )
        v19 = v13;
      if ( v20 <= v13 )
        v20 = v13;
      if ( v14 <= v17 )
        v17 = v14;
      if ( v18 <= v14 )
        v18 = v14;
      v21 = 1;
      v22 = 2;
      v23 = 3;
      if ( v31 != v19 || v11 != v17 )
      {
        if ( v31 == v20 && v11 == v17 )
        {
          v21 = 0;
        }
        else if ( v31 == v19 && v11 == v18 )
        {
          v22 = 0;
        }
        else if ( v31 == v20 && v11 == v18 )
        {
          v23 = 0;
        }
      }
      if ( v33 == v19 && v12 == v17 )
      {
        v3 = 1;
      }
      else if ( v33 == v20 && v12 == v17 )
      {
        v21 = 1;
      }
      else if ( v33 == v19 && v12 == v18 )
      {
        v22 = 1;
      }
      else if ( v33 == v20 && v12 == v18 )
      {
        v23 = 1;
      }
      if ( v16 == v19 && v15 == v17 )
      {
        v3 = 2;
      }
      else if ( v16 == v20 && v15 == v17 )
      {
        v21 = 2;
      }
      else if ( v16 == v19 && v15 == v18 )
      {
        v22 = 2;
      }
      else if ( v16 == v20 && v15 == v18 )
      {
        v23 = 2;
      }
      if ( v13 == v19 && v14 == v17 )
      {
        v3 = 3;
      }
      else if ( v13 == v20 && v14 == v17 )
      {
        v21 = 3;
      }
      else if ( v13 == v19 && v14 == v18 )
      {
        v22 = 3;
      }
      else if ( v13 == v20 && v14 == v18 )
      {
        v23 = 3;
      }
      v24 = 32LL * v3;
      *(_OWORD *)a3 = *(_OWORD *)((char *)a2 + v24);
      v25 = *(_OWORD *)((char *)a2 + v24 + 16);
      v26 = 32LL * v21;
      *((_OWORD *)a3 + 1) = v25;
      v27 = 32LL * v22;
      *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)a2 + v26);
      *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)a2 + v26 + 16);
      *((_OWORD *)a3 + 4) = *(_OWORD *)((char *)a2 + v27);
      v28 = *(_OWORD *)((char *)a2 + v27 + 16);
      v29 = 32LL * v23;
      *((_OWORD *)a3 + 5) = v28;
      *((_OWORD *)a3 + 6) = *(_OWORD *)((char *)a2 + v29);
      *((_OWORD *)a3 + 7) = *(_OWORD *)((char *)a2 + v29 + 16);
      return v4;
    }
  }
  return v4;
}
