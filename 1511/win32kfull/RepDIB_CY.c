/*
 * XREFs of RepDIB_CY @ 0x1C0006840
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C000D0D8 (GetFixupScan.c)
 *     CopyDIB_CX @ 0x1C00DE430 (CopyDIB_CX.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     AlphaBlendBGRF @ 0x1C0253D48 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0258E08 (MappingBGRF.c)
 */

__int64 __fastcall RepDIB_CY(__int64 a1)
{
  __int64 v1; // rdx
  _OWORD *v3; // rax
  char *v4; // rcx
  __int64 v5; // r8
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // r14d
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  unsigned __int16 *v19; // rsi
  unsigned __int64 v20; // r13
  __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // r12d
  __int64 FixupScan; // rax
  __int64 v26; // rax
  char v27[136]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-28h]
  int v29; // [rsp+E8h] [rbp-20h]
  int v30; // [rsp+ECh] [rbp-1Ch]
  int v31; // [rsp+F4h] [rbp-14h]
  void (__fastcall *v32)(char *, __int64, __int64); // [rsp+118h] [rbp+10h]
  void (__fastcall *v33)(char *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+168h] [rbp+60h]
  __int64 v34; // [rsp+170h] [rbp+68h]
  void (__fastcall *v35)(__int64, __int64, __int64, __int64, int); // [rsp+178h] [rbp+70h]
  __int64 v36; // [rsp+188h] [rbp+80h]
  _QWORD *v37; // [rsp+190h] [rbp+88h]
  __int64 v38; // [rsp+1D8h] [rbp+D0h]
  __int64 v39; // [rsp+1E0h] [rbp+D8h]
  __int64 v40; // [rsp+1F0h] [rbp+E8h]
  __int64 v41; // [rsp+1F8h] [rbp+F0h]
  __int64 v42; // [rsp+200h] [rbp+F8h]
  int v43; // [rsp+208h] [rbp+100h]
  int v44; // [rsp+20Ch] [rbp+104h]
  int v45; // [rsp+210h] [rbp+108h]
  __int64 v46; // [rsp+218h] [rbp+110h]
  __int64 v47; // [rsp+220h] [rbp+118h]
  __int64 v48; // [rsp+228h] [rbp+120h]
  int v49; // [rsp+230h] [rbp+128h]
  __int64 v50; // [rsp+270h] [rbp+168h]
  __int64 v51; // [rsp+278h] [rbp+170h]
  __int64 v52; // [rsp+280h] [rbp+178h]
  __int64 v53; // [rsp+288h] [rbp+180h]
  __int64 v54; // [rsp+290h] [rbp+188h]
  __int64 v55; // [rsp+298h] [rbp+190h]
  __int64 v56; // [rsp+2A0h] [rbp+198h]
  int v57; // [rsp+2A8h] [rbp+1A0h]

  v1 = 4LL;
  v3 = (_OWORD *)a1;
  v4 = v27;
  v5 = 128LL;
  do
  {
    v6 = v3[1];
    *(_OWORD *)v4 = *v3;
    v7 = v3[2];
    *((_OWORD *)v4 + 1) = v6;
    v8 = v3[3];
    *((_OWORD *)v4 + 2) = v7;
    v9 = v3[4];
    *((_OWORD *)v4 + 3) = v8;
    v10 = v3[5];
    *((_OWORD *)v4 + 4) = v9;
    v11 = v3[6];
    *((_OWORD *)v4 + 5) = v10;
    v12 = v3[7];
    v3 += 8;
    *((_OWORD *)v4 + 6) = v11;
    v4 += 128;
    *((_OWORD *)v4 - 1) = v12;
    --v1;
  }
  while ( v1 );
  v13 = 1;
  v14 = v3[1];
  *(_OWORD *)v4 = *v3;
  v15 = v3[2];
  *((_OWORD *)v4 + 1) = v14;
  v16 = v3[3];
  *((_OWORD *)v4 + 2) = v15;
  v17 = v3[4];
  v18 = *((_QWORD *)v3 + 10);
  *((_OWORD *)v4 + 3) = v16;
  *((_OWORD *)v4 + 4) = v17;
  *((_QWORD *)v4 + 10) = v18;
  v19 = (unsigned __int16 *)v37[11];
  v20 = v37[12];
  if ( (*(_WORD *)v27 & 0x800) != 0 )
  {
    v23 = 3;
    v21 = v37[4];
    v22 = v21 + 2LL * v29 + v29;
  }
  else
  {
    v21 = v55;
    v22 = v56;
    v23 = v57;
  }
  while ( v30 )
  {
    --v30;
    if ( !--v13 )
    {
      v13 = *v19;
      if ( (unsigned __int64)v19 < v20 )
      {
        FixupScan = GetFixupScan(v27, v50, v5);
        v35(v36, FixupScan, v21, v22, v23);
        ++v19;
      }
    }
    if ( (*(_WORD *)v27 & 0x800) != 0 )
      CopyDIB_CX(0, v21, v55, v56, v57);
    if ( v27[0] < 0 )
      v32(v27, v1, v5);
    if ( (*(_WORD *)v27 & 0x800) != 0 )
      AlphaBlendBGRF(v27, v1, v5);
    if ( (v27[0] & 0x10) != 0 )
    {
      MappingBGRF(v51, v52, v39, v46);
      v26 = v49 + v46;
      if ( v26 == v47 )
        v26 = v48;
      v46 = v26;
    }
    v33(v27, v53, v54, v28, v38, v40, v40 + v44, v45, v34);
    v1 = v43 + v40;
    if ( v1 == v41 )
      v1 = v42;
    v28 += v31;
    v40 = v1;
  }
  return *(unsigned int *)(a1 + 148);
}
