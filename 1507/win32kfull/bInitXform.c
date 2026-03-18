/*
 * XREFs of bInitXform @ 0x1C011F6A0
 * Callers:
 *     vtfdOpenFontContext @ 0x1C011F528 (vtfdOpenFontContext.c)
 * Callees:
 *     bXformUnitVector @ 0x1C00A8750 (bXformUnitVector.c)
 *     XFORMOBJ_iGetXform @ 0x1C00AA560 (XFORMOBJ_iGetXform.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall bInitXform(__int64 a1, XFORMOBJ *a2)
{
  float *v3; // rdx
  FLOATL eM12; // xmm1_4
  float *v5; // rax
  __int64 v6; // rcx
  FLOATL eM21; // xmm0_4
  FLOATL eM22; // xmm1_4
  float v9; // xmm2_4
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  float *v13; // r14
  __int64 v14; // rcx
  int v15; // eax
  int v17; // eax
  int v18; // ecx
  signed int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // [rsp+30h] [rbp-30h] BYREF
  int v23; // [rsp+34h] [rbp-2Ch]
  float v24; // [rsp+38h] [rbp-28h] BYREF
  XFORML pxform; // [rsp+40h] [rbp-20h] BYREF

  XFORMOBJ_iGetXform(a2, &pxform);
  v3 = (float *)(a1 + 16);
  eM12 = pxform.eM12;
  v5 = (float *)(a1 + 16);
  *(FLOATL *)(a1 + 16) = pxform.eM11;
  v6 = 4LL;
  eM21 = pxform.eM21;
  *(FLOATL *)(a1 + 20) = eM12;
  eM22 = pxform.eM22;
  *(FLOATL *)(a1 + 24) = eM21;
  *(FLOATL *)(a1 + 28) = eM22;
  do
  {
    *v5 = *v5 * 16.0;
    ++v5;
    --v6;
  }
  while ( v6 );
  v9 = *(float *)(a1 + 20);
  if ( v9 == 0.0 && *(float *)(a1 + 24) == 0.0 )
  {
    *(_DWORD *)(a1 + 120) |= 4u;
    if ( *v3 < 0.0 )
    {
      *(_DWORD *)(a1 + 120) |= 8u;
      v10 = 64;
      if ( *(float *)(a1 + 28) >= 0.0 )
        v10 = 128;
    }
    else
    {
      v10 = 32;
      if ( *(float *)(a1 + 28) >= 0.0 )
        v10 = 16;
    }
    *(_DWORD *)(a1 + 120) |= v10;
  }
  if ( *(float *)(a1 + 28) == 0.0 && *v3 == 0.0 )
  {
    if ( *(float *)(a1 + 24) < 0.0 )
    {
      v17 = 2048;
      v18 = 1024;
    }
    else
    {
      v17 = 512;
      v18 = 256;
    }
    if ( v9 >= 0.0 )
      v17 = v18;
    *(_DWORD *)(a1 + 120) |= v17;
  }
  v23 = 0;
  v11 = *(_DWORD *)(a1 + 120);
  v22 = 1;
  if ( (v11 & 1) != 0 )
    v12 = a1 + 64;
  else
    v12 = 0LL;
  v13 = (float *)(a1 + 40);
  bXformUnitVector((__int64)&v22, &pxform.eM11, (float *)(a1 + 52), (float *)(a1 + 44), v12, (float *)(a1 + 40));
  *(_DWORD *)(a1 + 88) = 0;
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
  {
    v19 = ((int)*v13 + 8) & 0xFFFFFFF0;
    *(_DWORD *)(a1 + 88) = v19;
    if ( v19 >= 24 )
    {
      *(_DWORD *)(a1 + 80) = (int)*(float *)(a1 + 52);
      *(_DWORD *)(a1 + 84) = (int)*(float *)(a1 + 56);
    }
    else
    {
      v20 = (*(_DWORD *)(a1 + 68) + 8) >> 4;
      v21 = (*(_DWORD *)(a1 + 76) + 8) >> 4;
      *(_DWORD *)(a1 + 88) = 16;
      *(_DWORD *)(a1 + 80) = v20;
      *(_DWORD *)(a1 + 84) = v21;
      if ( v20 == v21 || v20 == -v21 )
        *(_DWORD *)(a1 + 84) = 0;
      *(_DWORD *)(a1 + 84) *= 16;
      *(_DWORD *)(a1 + 80) = 16 * v20;
    }
  }
  v22 = 0;
  v23 = -1;
  bXformUnitVector((__int64)&v22, &pxform.eM11, &v24, (float *)(a1 + 100), 0LL, (float *)(a1 + 96));
  v14 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 32) = (int)(float)((float)*(__int16 *)(v14 + 60) * *(float *)(a1 + 96));
  v15 = *(__int16 *)(v14 + 62);
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 36) = -(int)(float)((float)v15 * *(float *)(a1 + 96));
  if ( (*(_DWORD *)(a1 + 120) & 2) != 0 )
    *(_DWORD *)(a1 + 92) = (8
                          - (int)(float)((float)((float)(*(__int16 *)(v14 + 62) + 1 + *(__int16 *)(v14 + 60)) * *v13)
                                       * -0.5)) & 0xFFFFFFF0;
  return 1LL;
}
