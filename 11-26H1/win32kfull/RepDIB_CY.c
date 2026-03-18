/*
 * XREFs of RepDIB_CY @ 0x1400F06B0
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400F03F4 (MappingBGRF.c)
 *     AlphaBlendBGRF @ 0x1400F1A88 (AlphaBlendBGRF.c)
 *     GetFixupScan @ 0x1400F27B8 (GetFixupScan.c)
 *     CopyDIB_CX @ 0x14018D7B0 (CopyDIB_CX.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
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
  int v13; // edi
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  unsigned __int16 *v19; // r14
  unsigned __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rbx
  int v23; // r12d
  __int64 v24; // rcx
  __int64 FixupScan; // rax
  unsigned __int8 *v27; // rax
  char v28[136]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-18h]
  int v30; // [rsp+F8h] [rbp-10h]
  int v31; // [rsp+FCh] [rbp-Ch]
  int v32; // [rsp+104h] [rbp-4h]
  void (__fastcall *v33)(char *, __int64, __int64); // [rsp+128h] [rbp+20h]
  void (__fastcall *v34)(char *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+178h] [rbp+70h]
  __int64 v35; // [rsp+180h] [rbp+78h]
  void (__fastcall *v36)(__int64, __int64, __int64, __int64, int); // [rsp+188h] [rbp+80h]
  __int64 v37; // [rsp+198h] [rbp+90h]
  _QWORD *v38; // [rsp+1A0h] [rbp+98h]
  __int64 v39; // [rsp+1E8h] [rbp+E0h]
  __int64 v40; // [rsp+1F0h] [rbp+E8h]
  __int64 v41; // [rsp+200h] [rbp+F8h]
  __int64 v42; // [rsp+208h] [rbp+100h]
  __int64 v43; // [rsp+210h] [rbp+108h]
  int v44; // [rsp+218h] [rbp+110h]
  int v45; // [rsp+21Ch] [rbp+114h]
  int v46; // [rsp+220h] [rbp+118h]
  unsigned __int8 *v47; // [rsp+228h] [rbp+120h]
  unsigned __int8 *v48; // [rsp+230h] [rbp+128h]
  unsigned __int8 *v49; // [rsp+238h] [rbp+130h]
  int v50; // [rsp+240h] [rbp+138h]
  __int64 v51; // [rsp+280h] [rbp+178h]
  unsigned __int8 *v52; // [rsp+288h] [rbp+180h]
  unsigned __int64 v53; // [rsp+290h] [rbp+188h]
  __int64 v54; // [rsp+298h] [rbp+190h]
  __int64 v55; // [rsp+2A0h] [rbp+198h]
  __int64 v56; // [rsp+2A8h] [rbp+1A0h]
  __int64 v57; // [rsp+2B0h] [rbp+1A8h]
  int v58; // [rsp+2B8h] [rbp+1B0h]

  v1 = 4LL;
  v3 = (_OWORD *)a1;
  v4 = v28;
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
  v19 = (unsigned __int16 *)v38[11];
  v20 = v38[12];
  if ( (*(_WORD *)v28 & 0x800) != 0 )
  {
    v23 = 3;
    v21 = v38[4];
    v22 = v21 + 2LL * v30 + v30;
  }
  else
  {
    v21 = v56;
    v22 = v57;
    v23 = v58;
  }
  while ( v31 )
  {
    --v31;
    if ( !--v13 )
    {
      v13 = *v19;
      if ( (unsigned __int64)v19 < v20 )
      {
        FixupScan = GetFixupScan(v28, v51, v5);
        v36(v37, FixupScan, v21, v22, v23);
        ++v19;
      }
    }
    if ( (*(_WORD *)v28 & 0x800) != 0 )
      CopyDIB_CX(0, v21, v56, v57, v58);
    if ( v28[0] < 0 )
      v33(v28, v1, v5);
    if ( (*(_WORD *)v28 & 0x800) != 0 )
      AlphaBlendBGRF(v28, v1, v5);
    if ( (v28[0] & 0x10) != 0 )
    {
      MappingBGRF(v52, v53, v40, v47);
      v27 = &v47[v50];
      if ( v27 == v48 )
        v27 = v49;
      v47 = v27;
    }
    v34(v28, v54, v55, v29, v39, v41, v41 + v45, v46, v35);
    v24 = v44 + v41;
    if ( v24 == v42 )
      v24 = v43;
    v41 = v24;
    v29 += v32;
  }
  return *(unsigned int *)(a1 + 148);
}
