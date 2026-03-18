/*
 * XREFs of bCvtPts1 @ 0x1C0028698
 * Callers:
 *     GreGetClipBox @ 0x1C0026E80 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C00279E0 (GreIntersectClipRect.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C0028410 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 * Callees:
 *     bFToL @ 0x1C000F9CC (bFToL.c)
 */

__int64 __fastcall bCvtPts1(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // rdi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  char v10; // r8
  char v11; // r8
  char v12; // r8
  float v13; // xmm2_4
  float v14; // xmm3_4
  char v15; // r8
  char v16; // r8
  float v17; // xmm1_4
  char v18; // r8
  _DWORD *v19; // r11
  _DWORD *v20; // r11
  char v21; // r8
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  char v27; // r8
  _DWORD *v28; // r11
  _DWORD *v29; // r11
  int v30; // [rsp+30h] [rbp+8h] BYREF
  int v31; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 0 )
  {
    switch ( *(_DWORD *)(a1 + 32) & 0xB )
    {
      case 1:
        if ( a3 )
        {
          v16 = 6;
          do
          {
            v17 = (float)(16 * a2[1]) * *(float *)(a1 + 12);
            bFToL((float)(16 * *a2) * *(float *)a1, a2, v16);
            bFToL(v17, v19, v18);
            *a2 += *(_DWORD *)(a1 + 24);
            a2 += 2;
            *v20 += *(_DWORD *)(a1 + 28);
            --v3;
          }
          while ( v3 );
        }
        break;
      case 3:
        if ( a3 )
        {
          do
          {
            *a2 += *(_DWORD *)(a1 + 24);
            a2 += 2;
            *(a2 - 1) += *(_DWORD *)(a1 + 28);
            --v3;
          }
          while ( v3 );
        }
        break;
      case 8:
        if ( a3 )
        {
          v12 = 6;
          do
          {
            v13 = (float)a2[1];
            v14 = (float)*a2;
            bFToL((float)(v13 * *(float *)(a1 + 8)) + (float)(v14 * *(float *)a1), &v30, v12);
            bFToL((float)(v14 * *(float *)(a1 + 4)) + (float)(v13 * *(float *)(a1 + 12)), &v31, v15);
            *a2 = (((*(_DWORD *)(a1 + 24) + v30) >> 3) + 1) >> 1;
            a2[1] = (((v31 + *(_DWORD *)(a1 + 28)) >> 3) + 1) >> 1;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 9:
        if ( a3 )
        {
          v10 = 6;
          do
          {
            bFToL((float)*a2 * *(float *)a1, &v30, v10);
            bFToL((float)a2[1] * *(float *)(a1 + 12), &v31, v11);
            *a2 = (((*(_DWORD *)(a1 + 24) + v30) >> 3) + 1) >> 1;
            a2 += 2;
            *(a2 - 1) = (((v31 + *(_DWORD *)(a1 + 28)) >> 3) + 1) >> 1;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 11:
        v6 = *(_DWORD *)(a1 + 24);
        v7 = ((*(int *)(a1 + 28) >> 3) + 1) >> 1;
        v8 = ((v6 >> 3) + 1) >> 1;
        if ( a3 )
        {
          do
          {
            *a2 += v8;
            a2[1] += v7;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
    }
  }
  else if ( a3 )
  {
    v21 = 6;
    do
    {
      v22 = (float)(16 * a2[1]);
      v23 = v22 * *(float *)(a1 + 12);
      v24 = (float)(16 * *a2);
      v25 = (float)(v22 * *(float *)(a1 + 8)) + (float)(v24 * *(float *)a1);
      v26 = (float)(v24 * *(float *)(a1 + 4)) + v23;
      bFToL(v25, a2, v21);
      bFToL(v26, v28, v27);
      *a2 += *(_DWORD *)(a1 + 24);
      a2 += 2;
      *v29 += *(_DWORD *)(a1 + 28);
      --v3;
    }
    while ( v3 );
  }
  return 1LL;
}
