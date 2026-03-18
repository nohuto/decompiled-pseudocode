/*
 * XREFs of TileDIB_CY @ 0x1C025A8A0
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C000D0D8 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     AlphaBlendBGRF @ 0x1C0253D48 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0258E08 (MappingBGRF.c)
 */

__int64 __fastcall TileDIB_CY(__int128 *a1)
{
  __int128 *v1; // rax
  int *v3; // rcx
  __int64 v4; // rdx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  unsigned int v18; // ebx
  _WORD *v19; // rsi
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  __int64 v23; // r14
  unsigned __int8 *FixupScan; // r8
  int v25; // edx
  _WORD *i; // r9
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned __int8 *v29; // rdx
  int v30; // r10d
  int v31; // r11d
  int v32; // ecx
  __int16 v33; // ax
  __int16 v34; // ax
  __int16 v35; // ax
  unsigned __int8 *v36; // rax
  __int64 v37; // rcx
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  char v39; // [rsp+58h] [rbp-A8h]
  int v40; // [rsp+88h] [rbp-78h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  int v42; // [rsp+E0h] [rbp-20h]
  unsigned int v43; // [rsp+E4h] [rbp-1Ch]
  int v44; // [rsp+ECh] [rbp-14h]
  void (__fastcall *v45)(int *, unsigned __int8 *, unsigned __int8 *, __int64); // [rsp+110h] [rbp+10h]
  void (__fastcall *v46)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  __int64 v48; // [rsp+180h] [rbp+80h]
  __int64 v49; // [rsp+188h] [rbp+88h]
  __int64 v50; // [rsp+1D0h] [rbp+D0h]
  __int64 v51; // [rsp+1D8h] [rbp+D8h]
  __int64 v52; // [rsp+1E8h] [rbp+E8h]
  __int64 v53; // [rsp+1F0h] [rbp+F0h]
  __int64 v54; // [rsp+1F8h] [rbp+F8h]
  int v55; // [rsp+200h] [rbp+100h]
  int v56; // [rsp+204h] [rbp+104h]
  int v57; // [rsp+208h] [rbp+108h]
  unsigned __int8 *v58; // [rsp+210h] [rbp+110h]
  unsigned __int8 *v59; // [rsp+218h] [rbp+118h]
  unsigned __int8 *v60; // [rsp+220h] [rbp+120h]
  int v61; // [rsp+228h] [rbp+128h]
  void *v62; // [rsp+268h] [rbp+168h]
  unsigned __int8 *v63; // [rsp+270h] [rbp+170h]
  unsigned __int64 v64; // [rsp+278h] [rbp+178h]
  __int64 v65; // [rsp+280h] [rbp+180h]
  __int64 v66; // [rsp+288h] [rbp+188h]
  __int64 v67; // [rsp+290h] [rbp+190h]
  int v68; // [rsp+2A0h] [rbp+1A0h]

  v1 = a1;
  if ( (*((_BYTE *)a1 + 8) & 4) != 0 )
  {
    if ( !*(_QWORD *)(*((_QWORD *)a1 + 39) + 32LL) )
      return *((unsigned int *)a1 + 37);
  }
  else if ( !*((_QWORD *)a1 + 67) )
  {
    return *((unsigned int *)a1 + 37);
  }
  v3 = &v38;
  v4 = 4LL;
  do
  {
    v5 = *v1;
    v6 = v1[1];
    v1 += 8;
    *(_OWORD *)v3 = v5;
    v7 = *(v1 - 6);
    *((_OWORD *)v3 + 1) = v6;
    v8 = *(v1 - 5);
    *((_OWORD *)v3 + 2) = v7;
    v9 = *(v1 - 4);
    *((_OWORD *)v3 + 3) = v8;
    v10 = *(v1 - 3);
    *((_OWORD *)v3 + 4) = v9;
    v11 = *(v1 - 2);
    *((_OWORD *)v3 + 5) = v10;
    v12 = *(v1 - 1);
    *((_OWORD *)v3 + 6) = v11;
    v3 += 32;
    *((_OWORD *)v3 - 1) = v12;
    --v4;
  }
  while ( v4 );
  v13 = v1[1];
  *(_OWORD *)v3 = *v1;
  v14 = v1[2];
  *((_OWORD *)v3 + 1) = v13;
  v15 = v1[3];
  *((_OWORD *)v3 + 2) = v14;
  v16 = v1[4];
  v17 = *((_QWORD *)v1 + 10);
  *((_OWORD *)v3 + 3) = v15;
  *((_OWORD *)v3 + 4) = v16;
  *((_QWORD *)v3 + 10) = v17;
  v18 = v43;
  v19 = *(_WORD **)(v49 + 32);
  v20 = *(_DWORD *)(v48 + 24);
  v21 = 2 * v20;
  if ( (v39 & 4) == 0 )
    v21 = 3 * v20;
  v22 = v40 - v20;
  if ( v43 )
  {
    v23 = v21;
    do
    {
      --v18;
      FixupScan = (unsigned __int8 *)GetFixupScan((__int64)&v38, v62);
      if ( (v39 & 4) != 0 )
      {
        v25 = v40;
        for ( i = v19; v25; --v25 )
        {
          v27 = *FixupScan++;
          *i++ = GrayIdxWORD[v27];
        }
        FixupScan = (unsigned __int8 *)v19;
      }
      v28 = v67;
      v29 = &FixupScan[v23];
      v30 = v42;
      v31 = v22;
      while ( v30 )
      {
        if ( v31 > v30 )
          v31 = v30;
        v32 = v31;
        v31 = v40;
        v30 -= v32;
        if ( (v39 & 4) != 0 )
        {
          for ( ; v32; --v32 )
          {
            v33 = *(_WORD *)v29;
            v29 += 2;
            *(_WORD *)v28 = v33;
            v28 += v68;
          }
        }
        else
        {
          for ( ; v32; --v32 )
          {
            v34 = *(_WORD *)v29;
            v29 += 3;
            *(_WORD *)v28 = v34;
            *(_BYTE *)(v28 + 2) = *(v29 - 1);
            v28 += v68;
          }
        }
        v29 = FixupScan;
      }
      v35 = v38;
      if ( (v38 & 0x80u) != 0 )
      {
        v45(&v38, v29, FixupScan, v28);
        v35 = v38;
      }
      if ( (v35 & 0x800) != 0 )
      {
        AlphaBlendBGRF(&v38);
        LOBYTE(v35) = v38;
      }
      if ( (v35 & 0x10) != 0 )
      {
        MappingBGRF(v63, v64, v51, v58);
        v36 = &v58[v61];
        if ( v36 == v59 )
          v36 = v60;
        v58 = v36;
      }
      v46(&v38, v65, v66, v41, v50, v52, v52 + v56, v57, v47);
      v37 = v55 + v52;
      if ( v37 == v53 )
        v37 = v54;
      v41 += v44;
      v52 = v37;
    }
    while ( v18 );
    return v43;
  }
  return v18;
}
