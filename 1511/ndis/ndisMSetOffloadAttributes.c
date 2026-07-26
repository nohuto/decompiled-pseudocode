/*
 * XREFs of ndisMSetOffloadAttributes @ 0x1C009A5AC
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C009A930 (NdisMSetMiniportAttributes.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisMAllocateMiniportOffload @ 0x1C0017208 (ndisMAllocateMiniportOffload.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisValidateOffloadCapability @ 0x1C009A90C (ndisValidateOffloadCapability.c)
 *     ndisValidateConnectionOffload @ 0x1C00D0C88 (ndisValidateConnectionOffload.c)
 */

__int64 __fastcall ndisMSetOffloadAttributes(__int64 a1, __int64 a2, _WORD *a3, _WORD *a4, _WORD *a5)
{
  unsigned int v8; // ebx
  int v9; // r14d
  int v10; // r15d
  unsigned __int16 v11; // ax
  unsigned int v12; // ecx
  unsigned __int16 v13; // cx
  unsigned __int8 v14; // al
  _BYTE *v15; // rax
  unsigned int v16; // ebx
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  int v22; // eax
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  int v34; // eax
  _OWORD *v35; // rax
  _OWORD *v36; // rcx
  __int128 v37; // xmm1
  _DWORD *v38; // rax
  _DWORD *v39; // rax
  unsigned __int16 v41; // ax
  unsigned int v42; // r14d
  unsigned int v43; // ecx
  unsigned __int16 v44; // ax
  __int128 v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rax
  __int128 v49; // [rsp+28h] [rbp-D8h] BYREF
  int v50; // [rsp+38h] [rbp-C8h]
  __int128 v51; // [rsp+40h] [rbp-C0h] BYREF
  int v52; // [rsp+50h] [rbp-B0h]
  _OWORD v53[12]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v54[12]; // [rsp+120h] [rbp+20h] BYREF

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qq(0xAu, &WPP_3b3cf53caa2a3bc57e3e25119abf216e_Traceguids, a1, a2);
  v8 = 180;
  memset(v53, 0, 0xB4uLL);
  memset(v54, 0, 0xB4uLL);
  v9 = 0;
  v10 = 0;
  v51 = 0uLL;
  v52 = 0;
  v49 = 0uLL;
  v50 = 0;
  if ( a2 && !a3 )
    goto LABEL_31;
  if ( a4 )
  {
    if ( !a5 )
      goto LABEL_31;
    v41 = a4[1];
    v42 = 20;
    v43 = v41;
    if ( v41 >= 0x14u )
      v43 = 20;
    memmove(&v51, a4, v43);
    v44 = a5[1];
    if ( v44 < 0x14u )
      v42 = v44;
    memmove(&v49, a5, v42);
    if ( !(unsigned __int8)ndisValidateConnectionOffload(&v51) || !(unsigned __int8)ndisValidateConnectionOffload(&v49) )
      goto LABEL_31;
    v9 = v52;
    v10 = v50;
  }
  if ( a2 )
  {
    v11 = *(_WORD *)(a2 + 2);
    v12 = v11;
    if ( v11 >= 0xB4u )
      v12 = 180;
    memmove(v53, (const void *)a2, v12);
    v13 = a3[1];
    if ( v13 < 0xB4u )
      v8 = v13;
    memmove(v54, a3, v8);
    if ( !(unsigned __int8)ndisValidateOffloadCapability(v53) || !(unsigned __int8)ndisValidateOffloadCapability(v54) )
      goto LABEL_31;
    if ( (*(_BYTE *)(a1 + 5016) & 2) != 0 )
    {
      HIDWORD(v53[6]) &= 0xFFFFFFF9;
      HIDWORD(v54[6]) &= 0xFFFFFFF9;
    }
    v14 = *(_BYTE *)(a1 + 32);
    if ( (v14 > 6u || v14 == 6 && *(_BYTE *)(a1 + 33))
      && *(_BYTE *)(a2 + 1) >= 2u
      && *(_DWORD *)(a2 + 112)
      && !*(_QWORD *)(*(_QWORD *)(a1 + 3816) + 248LL) )
    {
LABEL_31:
      v16 = -1073741637;
      goto LABEL_28;
    }
  }
  v15 = *(_BYTE **)(a1 + 4152);
  if ( v15 || (v16 = ndisMAllocateMiniportOffload(a1)) == 0 && (v15 = *(_BYTE **)(a1 + 4152)) != 0LL )
  {
    if ( a2 )
    {
      *v15 = 1;
      v17 = (_OWORD *)(*(_QWORD *)(a1 + 4152) + 368LL);
      v18 = v53[1];
      *v17 = v53[0];
      v17[1] = v18;
      v19 = v53[3];
      v17[2] = v53[2];
      v17[3] = v19;
      v20 = v53[5];
      v17[4] = v53[4];
      v17[5] = v20;
      v17[6] = v53[6];
      v17 += 8;
      *(v17 - 1) = v53[7];
      v21 = v53[9];
      *v17 = v53[8];
      v17[1] = v21;
      v22 = v53[11];
      v17[2] = v53[10];
      *((_DWORD *)v17 + 12) = v22;
      v23 = (_OWORD *)(*(_QWORD *)(a1 + 4152) + 548LL);
      v24 = v54[1];
      *v23 = v54[0];
      v25 = v54[2];
      v23[1] = v24;
      v26 = v54[3];
      v23[2] = v25;
      v27 = v54[4];
      v23[3] = v26;
      v28 = v54[5];
      v23[4] = v27;
      v29 = v54[6];
      v23[5] = v28;
      v30 = v54[7];
      v23[6] = v29;
      v23 += 8;
      v31 = v54[8];
      *(v23 - 1) = v30;
      v32 = v54[9];
      *v23 = v31;
      v33 = v54[10];
      v34 = v54[11];
      v23[1] = v32;
      v23[2] = v33;
      *((_DWORD *)v23 + 12) = v34;
      v35 = *(_OWORD **)(a1 + 4152);
      v36 = (_OWORD *)((char *)v35 + 8);
      v35 += 23;
      *v36 = *v35;
      v36[1] = v35[1];
      v36[2] = v35[2];
      v36[3] = v35[3];
      v36[4] = v35[4];
      v36[5] = v35[5];
      v36[6] = v35[6];
      v36 += 8;
      v37 = v35[7];
      v35 += 8;
      *(v36 - 1) = v37;
      *v36 = *v35;
      v36[1] = v35[1];
      v36[2] = v35[2];
      *((_DWORD *)v36 + 12) = *((_DWORD *)v35 + 12);
      v38 = *(_DWORD **)(a1 + 4152);
      v38[182] = 1835432;
      v38[183] = 2;
      v38[186] = 2;
      v39 = *(_DWORD **)(a1 + 4152);
      v39[189] = 1835432;
      v39[190] = 2;
      v39[193] = 2;
    }
    if ( a4 )
    {
      v45 = v51;
      *(_BYTE *)(*(_QWORD *)(a1 + 4152) + 2LL) = 1;
      v46 = *(_QWORD *)(a1 + 4152);
      *(_OWORD *)(v46 + 860) = v45;
      *(_DWORD *)(v46 + 876) = v9;
      v47 = *(_QWORD *)(a1 + 4152);
      *(_OWORD *)(v47 + 880) = v49;
      *(_DWORD *)(v47 + 896) = v10;
    }
    v16 = 0;
  }
LABEL_28:
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0xBu, &WPP_3b3cf53caa2a3bc57e3e25119abf216e_Traceguids, a1, v16);
  return v16;
}
