/*
 * XREFs of ?vConvertAndSaveBGRATo1@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02BC530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vConvertAndSaveBGRATo1(
        __int64 a1,
        unsigned int *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int i; // edi
  unsigned __int8 *v8; // rsi
  char v10; // r13
  int v11; // r9d
  unsigned __int8 v12; // r12
  int v13; // r14d
  int v14; // ebx
  char v15; // al
  int v16; // ecx
  unsigned __int64 v17; // r14
  char NearestIndexFromColorref; // al
  char v19; // bl
  char v20; // bl
  char v21; // bl
  char v22; // bl
  char v23; // bl
  char v24; // bl
  unsigned __int8 v25; // r14
  char v26; // bl
  unsigned int v27; // [rsp+60h] [rbp+40h]
  unsigned int v28; // [rsp+60h] [rbp+40h]
  unsigned int v29; // [rsp+60h] [rbp+40h]
  unsigned int v30; // [rsp+60h] [rbp+40h]
  unsigned int v31; // [rsp+60h] [rbp+40h]
  unsigned int v32; // [rsp+60h] [rbp+40h]
  unsigned int v33; // [rsp+60h] [rbp+40h]
  unsigned int v34; // [rsp+60h] [rbp+40h]
  unsigned int v35; // [rsp+60h] [rbp+40h]
  unsigned int v36; // [rsp+60h] [rbp+40h]

  i = a3;
  v8 = (unsigned __int8 *)(a1 + ((__int64)a4 >> 3));
  v10 = 7;
  v11 = a4 & 7;
  if ( v11 )
  {
    v12 = *v8;
    v13 = 7 - v11;
    v14 = 7 - v11 + 1;
    if ( v14 >= a3 )
      v14 = a3;
    for ( i = a3 - v14; v14; --v14 )
    {
      v27 = *a2;
      LOBYTE(v27) = BYTE2(*a2);
      BYTE2(v27) = *a2;
      HIBYTE(v27) = 2;
      ++a2;
      v15 = (unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v27, *(_DWORD *)(a6 + 28) != 0) << v13;
      v16 = v12 & ~(1 << v13--);
      v12 = v16 | v15;
    }
    *v8++ = v12;
  }
  if ( i >= 8 )
  {
    v17 = (unsigned __int64)(unsigned int)i >> 3;
    i -= 8 * ((unsigned int)i >> 3);
    do
    {
      v28 = *a2;
      LOBYTE(v28) = BYTE2(*a2);
      BYTE2(v28) = *a2;
      HIBYTE(v28) = 2;
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(a6, a7, v28, *(_DWORD *)(a6 + 28) != 0);
      v29 = a2[1];
      BYTE2(v29) = v29;
      LOBYTE(v29) = BYTE2(a2[1]);
      HIBYTE(v29) = 2;
      v19 = ((unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v29, *(_DWORD *)(a6 + 28) != 0) << 6) | (NearestIndexFromColorref << 7);
      v30 = a2[2];
      LOBYTE(v30) = BYTE2(v30);
      BYTE2(v30) = a2[2];
      HIBYTE(v30) = 2;
      v20 = (32 * ulGetNearestIndexFromColorref(a6, a7, v30, *(_DWORD *)(a6 + 28) != 0)) | v19;
      v31 = a2[3];
      LOBYTE(v31) = BYTE2(v31);
      BYTE2(v31) = a2[3];
      HIBYTE(v31) = 2;
      v21 = (16 * ulGetNearestIndexFromColorref(a6, a7, v31, *(_DWORD *)(a6 + 28) != 0)) | v20;
      v32 = a2[4];
      LOBYTE(v32) = BYTE2(v32);
      BYTE2(v32) = a2[4];
      HIBYTE(v32) = 2;
      v22 = (8 * ulGetNearestIndexFromColorref(a6, a7, v32, *(_DWORD *)(a6 + 28) != 0)) | v21;
      v33 = a2[5];
      LOBYTE(v33) = BYTE2(v33);
      BYTE2(v33) = a2[5];
      HIBYTE(v33) = 2;
      v23 = (4 * ulGetNearestIndexFromColorref(a6, a7, v33, *(_DWORD *)(a6 + 28) != 0)) | v22;
      v34 = a2[6];
      LOBYTE(v34) = BYTE2(v34);
      BYTE2(v34) = a2[6];
      HIBYTE(v34) = 2;
      v24 = (2 * ulGetNearestIndexFromColorref(a6, a7, v34, *(_DWORD *)(a6 + 28) != 0)) | v23;
      v35 = a2[7];
      LOBYTE(v35) = BYTE2(v35);
      BYTE2(v35) = a2[7];
      HIBYTE(v35) = 2;
      a2 += 8;
      *v8++ = v24 | ulGetNearestIndexFromColorref(a6, a7, v35, *(_DWORD *)(a6 + 28) != 0);
      --v17;
    }
    while ( v17 );
  }
  if ( i )
  {
    v25 = *v8;
    do
    {
      v36 = *a2;
      LOBYTE(v36) = BYTE2(*a2);
      BYTE2(v36) = *a2;
      HIBYTE(v36) = 2;
      v26 = v10;
      ++a2;
      --v10;
      v25 = v25 & ~(1 << v26) | ((unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v36, *(_DWORD *)(a6 + 28) != 0) << v26);
      --i;
    }
    while ( i );
    *v8 = v25;
  }
}
