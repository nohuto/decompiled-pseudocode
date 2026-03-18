/*
 * XREFs of EmboldPoint @ 0x1C02D8DDC
 * Callers:
 *     fsg_Embold @ 0x1C0116F9C (fsg_Embold.c)
 * Callees:
 *     itrp_Normalize @ 0x1C00BB41C (itrp_Normalize.c)
 *     Mul26Dot6 @ 0x1C00C0A54 (Mul26Dot6.c)
 *     Intersect26Dot6 @ 0x1C02D9084 (Intersect26Dot6.c)
 */

__int64 __fastcall EmboldPoint(
        unsigned int a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        _QWORD *a13)
{
  int v13; // ebx
  int v15; // r8d
  unsigned int v16; // r12d
  int v17; // r9d
  unsigned int v18; // r13d
  int v19; // ecx
  unsigned int v20; // edx
  int v21; // edi
  unsigned int v22; // esi
  int v23; // r14d
  int v24; // r15d
  int v25; // esi
  int v26; // edi
  int v27; // edi
  int v28; // ebx
  int v29; // edx
  int v30; // r14d
  int v31; // r12d
  int v32; // r13d
  int v33; // edx
  int v34; // eax
  int v35; // edx
  int v36; // r14d
  int v37; // edx
  int v38; // eax
  _QWORD *v39; // r9
  int v40; // r10d
  __int64 v41; // r8
  int v42; // edx
  int v43; // ecx
  int v44; // ebx
  int v45; // edi
  int v46; // r11d
  int v47; // ecx
  __int64 result; // rax
  __int64 i; // r10
  __int64 v50; // rcx
  __int64 v51; // [rsp+30h] [rbp-10h]
  int v52; // [rsp+38h] [rbp-8h] BYREF
  int v53; // [rsp+3Ch] [rbp-4h]
  int v56; // [rsp+90h] [rbp+50h] BYREF

  v56 = a3;
  v13 = a6;
  v15 = a6;
  v16 = a2;
  v17 = a7;
  v18 = a1;
  v19 = a5;
  v20 = a6 - a5;
  v21 = HIDWORD(a5) - HIDWORD(a6);
  v22 = a7 - a6;
  v23 = HIDWORD(a6) - HIDWORD(a7);
  if ( a4 )
  {
    v21 = HIDWORD(a6) - HIDWORD(a5);
    v20 = a5 - a6;
    v23 = HIDWORD(a7) - HIDWORD(a6);
    v22 = a6 - a7;
  }
  v24 = a11;
  v51 = a6;
  if ( !v56 )
  {
    itrp_Normalize(v21, v20, &v56);
    v27 = (__int16)v56 >> 8;
    v28 = SHIWORD(v56) >> 8;
    itrp_Normalize(v23, v22, &v56);
    v25 = a8;
    v29 = a8;
    v30 = (__int16)v56 >> 8;
    v31 = SHIWORD(v56) >> 8;
    if ( v27 <= 0 )
      v29 = a9;
    v32 = Mul26Dot6(v27, v29);
    v33 = v24;
    if ( v28 >= 0 )
      v33 = a10;
    v34 = Mul26Dot6(v28, v33);
    LODWORD(a5) = v32 + a5;
    v26 = v32 + v51;
    HIDWORD(a5) += v34;
    v35 = v25;
    HIDWORD(v51) += v34;
    LODWORD(v51) = v32 + v51;
    if ( v30 <= 0 )
      v35 = a9;
    v36 = Mul26Dot6(v30, v35);
    v37 = v24;
    if ( v31 >= 0 )
      v37 = a10;
    v38 = Mul26Dot6(v31, v37);
    LODWORD(a7) = v36 + a7;
    HIDWORD(a7) += v38;
    v17 = a7;
    v13 = v36 + a6;
    HIDWORD(a6) += v38;
    v19 = a5;
    v18 = a1;
    v16 = a2;
    goto LABEL_18;
  }
  v25 = a8;
  if ( v21 <= 0 )
  {
    v26 = a6;
  }
  else
  {
    v26 = a6 + a8;
    LODWORD(v51) = a6 + a8;
  }
  if ( v23 > 0 )
  {
    v13 = a8 + a6;
LABEL_18:
    LODWORD(a6) = v13;
    v15 = v13;
  }
  if ( v26 == v13 && HIDWORD(v51) == HIDWORD(a6) )
  {
    v39 = a13;
    v40 = a9;
    v41 = 4LL * v18;
    *(_DWORD *)(v41 + *a13) = v13;
    *(_DWORD *)(v41 + v39[1]) = HIDWORD(a6);
  }
  else
  {
    Intersect26Dot6(v19, v51, v15, v17, (__int64)&v52);
    v39 = a13;
    v42 = v52;
    v43 = v53;
    v41 = 4LL * v18;
    a13 = (_QWORD *)*a13;
    v44 = *(_DWORD *)((char *)a13 + v41);
    v45 = *(_DWORD *)(v41 + v39[1]);
    v46 = v53 - v45;
    if ( v52 - v44 > v25 )
      v42 = v44 + v25;
    v40 = a9;
    if ( v52 - v44 < -a9 )
      v42 = v44 - a9;
    if ( v46 < -v24 )
      v43 = v45 - v24;
    if ( v46 > a10 )
      v43 = v45 + v24;
    *(_DWORD *)((char *)a13 + v41) = v42;
    *(_DWORD *)(v41 + v39[1]) = v43;
  }
  v47 = a12;
  *(_DWORD *)(v41 + *v39) += v40;
  *(_DWORD *)(v39[1] + v41) += v24;
  result = v39[1];
  if ( *(_DWORD *)(result + v41) < v47 )
    *(_DWORD *)(result + v41) = v47;
  if ( v18 != v16 )
  {
    for ( i = v18 + 1; (unsigned int)i <= v16; i = (unsigned int)(i + 1) )
    {
      *(_DWORD *)(*v39 + 4 * i) = *(_DWORD *)(*v39 + v41);
      v50 = v39[1];
      result = *(unsigned int *)(v50 + v41);
      *(_DWORD *)(v50 + 4 * i) = result;
    }
  }
  return result;
}
