/*
 * XREFs of BltDIB_CY @ 0x1C000CED0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C000D0D8 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     AlphaBlendBGRF @ 0x1C0253D48 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0258E08 (MappingBGRF.c)
 */

__int64 __fastcall BltDIB_CY(__int128 *a1, __int64 a2, __int64 a3)
{
  int *v3; // rdx
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  int v18; // ebx
  __int64 FixupScan; // rax
  unsigned __int16 *v20; // rdx
  __int64 v21; // r8
  __int16 v22; // ax
  __int64 v23; // rcx
  _WORD *v24; // rcx
  __int64 v26; // rax
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  char v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  unsigned int v30; // [rsp+E4h] [rbp-1Ch]
  int v31; // [rsp+ECh] [rbp-14h]
  void (__fastcall *v32)(int *); // [rsp+110h] [rbp+10h]
  void (__fastcall *v33)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+160h] [rbp+60h]
  __int64 v34; // [rsp+168h] [rbp+68h]
  void (__fastcall *v35)(__int64, __int64, __int64, __int64, int); // [rsp+170h] [rbp+70h]
  __int64 v36; // [rsp+180h] [rbp+80h]
  __int64 v37; // [rsp+188h] [rbp+88h]
  __int64 v38; // [rsp+1D0h] [rbp+D0h]
  __int64 v39; // [rsp+1D8h] [rbp+D8h]
  __int64 v40; // [rsp+1E8h] [rbp+E8h]
  __int64 v41; // [rsp+1F0h] [rbp+F0h]
  __int64 v42; // [rsp+1F8h] [rbp+F8h]
  int v43; // [rsp+200h] [rbp+100h]
  int v44; // [rsp+204h] [rbp+104h]
  int v45; // [rsp+208h] [rbp+108h]
  __int64 v46; // [rsp+210h] [rbp+110h]
  __int64 v47; // [rsp+218h] [rbp+118h]
  __int64 v48; // [rsp+220h] [rbp+120h]
  int v49; // [rsp+228h] [rbp+128h]
  __int64 v50; // [rsp+268h] [rbp+168h]
  _WORD *v51; // [rsp+270h] [rbp+170h]
  unsigned __int64 v52; // [rsp+278h] [rbp+178h]
  __int64 v53; // [rsp+280h] [rbp+180h]
  __int64 v54; // [rsp+288h] [rbp+188h]
  __int64 v55; // [rsp+290h] [rbp+190h]
  __int64 v56; // [rsp+298h] [rbp+198h]
  int v57; // [rsp+2A0h] [rbp+1A0h]

  v3 = &v27;
  v4 = 4LL;
  do
  {
    v5 = *a1;
    v6 = a1[1];
    a1 += 8;
    *(_OWORD *)v3 = v5;
    v7 = *(a1 - 6);
    *((_OWORD *)v3 + 1) = v6;
    v8 = *(a1 - 5);
    *((_OWORD *)v3 + 2) = v7;
    v9 = *(a1 - 4);
    *((_OWORD *)v3 + 3) = v8;
    v10 = *(a1 - 3);
    *((_OWORD *)v3 + 4) = v9;
    v11 = *(a1 - 2);
    *((_OWORD *)v3 + 5) = v10;
    v12 = *(a1 - 1);
    *((_OWORD *)v3 + 6) = v11;
    v3 += 32;
    *((_OWORD *)v3 - 1) = v12;
    --v4;
  }
  while ( v4 );
  v13 = *((_QWORD *)a1 + 10);
  v14 = a1[1];
  *(_OWORD *)v3 = *a1;
  v15 = a1[2];
  *((_OWORD *)v3 + 1) = v14;
  v16 = a1[3];
  *((_OWORD *)v3 + 2) = v15;
  v17 = a1[4];
  *((_OWORD *)v3 + 3) = v16;
  *((_OWORD *)v3 + 4) = v17;
  *((_QWORD *)v3 + 10) = v13;
  v18 = *(_DWORD *)(v37 + 4);
  while ( v18 )
  {
    --v18;
    FixupScan = GetFixupScan(&v27, v50, a3);
    v35(v36, FixupScan, v55, v56, v57);
    if ( (v28 & 4) != 0 )
    {
      v24 = v51;
      do
      {
        v20 = GrayIdxWORD;
        *v24 = GrayIdxWORD[*(unsigned __int8 *)v24];
        v24 += 2;
      }
      while ( (unsigned __int64)v24 < v52 );
    }
    v22 = v27;
    if ( (v27 & 0x80u) != 0 )
    {
      v32(&v27);
      v22 = v27;
    }
    if ( (v22 & 0x800) != 0 )
    {
      AlphaBlendBGRF(&v27, v20, v21);
      LOBYTE(v22) = v27;
    }
    if ( (v22 & 0x10) != 0 )
    {
      MappingBGRF(v51, v52, v39, v46);
      v26 = v49 + v46;
      if ( v26 == v47 )
        v26 = v48;
      v46 = v26;
    }
    v33(&v27, v53, v54, v29, v38, v40, v40 + v44, v45, v34);
    v23 = v43 + v40;
    if ( v23 == v41 )
      v23 = v42;
    v29 += v31;
    v40 = v23;
  }
  return v30;
}
