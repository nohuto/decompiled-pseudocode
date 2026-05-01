/*
 * XREFs of ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x180005620
 * Callers:
 *     ?GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800050C0 (-GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(
        int a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v4; // r14
  _DWORD *v6; // rax
  int v7; // ecx
  _OWORD *v8; // r9
  char v9; // r10
  char *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  char v13; // di
  int v14; // ecx
  bool v15; // cf
  char v16; // cl
  int v17; // edx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned int v21; // r8d
  bool v22; // zf
  int v23; // esi
  unsigned int v24; // edx
  int v25; // eax
  char *v26; // rdx
  unsigned int v27; // r8d
  unsigned __int8 *v28; // rax
  __int64 v29; // r8
  unsigned __int8 v30; // cl
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // cl
  unsigned __int8 v33; // cl
  int *v34; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 result; // rax
  int v49; // [rsp+10h] [rbp-F0h] BYREF
  int v50; // [rsp+14h] [rbp-ECh]
  int v51; // [rsp+18h] [rbp-E8h]
  int v52; // [rsp+1Ch] [rbp-E4h]
  int v53; // [rsp+20h] [rbp-E0h]
  int v54; // [rsp+24h] [rbp-DCh]
  __int16 v55; // [rsp+28h] [rbp-D8h]
  char v56; // [rsp+2Ah] [rbp-D6h]
  int v57; // [rsp+2Ch] [rbp-D4h]
  int v58; // [rsp+30h] [rbp-D0h]
  __int64 v59; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v60; // [rsp+40h] [rbp-C0h]
  int v61; // [rsp+48h] [rbp-B8h]
  int v62; // [rsp+50h] [rbp-B0h]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  _DWORD v64[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v65; // [rsp+70h] [rbp-90h]
  int v66; // [rsp+78h] [rbp-88h]
  int v67; // [rsp+80h] [rbp-80h]
  __int64 v68; // [rsp+88h] [rbp-78h]
  int v69; // [rsp+90h] [rbp-70h]
  char v70; // [rsp+98h] [rbp-68h] BYREF
  char v71; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v72; // [rsp+158h] [rbp+58h]
  __int64 v73; // [rsp+160h] [rbp+60h]
  int v74; // [rsp+16Ch] [rbp+6Ch]

  v49 = -1;
  v50 = 0;
  v4 = 2LL;
  v58 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v6 = v64;
  v61 = 0;
  v7 = 2;
  v8 = a3;
  v51 = -1;
  v52 = 101;
  v53 = 32;
  do
  {
    --v7;
    *(v6 - 4) = -1;
    *((_QWORD *)v6 - 1) = 0LL;
    *v6 = 101;
    *((_WORD *)v6 + 2) = 0;
    v6 += 6;
  }
  while ( v7 >= 0 );
  v9 = 1;
  v72 = 0LL;
  v73 = 0LL;
  v10 = &v70;
  v64[2] = 1;
  v62 = 0;
  v11 = 3LL;
  v67 = 2;
  do
  {
    *(_QWORD *)v10 = 0x6500000065LL;
    *((_QWORD *)v10 + 1) = 0x6500000065LL;
    *((_QWORD *)v10 + 2) = 0x6500000065LL;
    v10 += 64;
    *((_QWORD *)v10 - 5) = 0x6500000065LL;
    *((_QWORD *)v10 - 4) = 0x6500000065LL;
    *((_QWORD *)v10 - 3) = 0x6500000065LL;
    *((_QWORD *)v10 - 2) = 0x6500000065LL;
    *((_QWORD *)v10 - 1) = 0x6500000065LL;
    --v11;
  }
  while ( v11 );
  v57 = 1;
  v54 = 0;
  if ( !a2 || !a3 )
    return 2147942487LL;
  v12 = *(_DWORD *)(a2 + 4);
  v13 = v12;
  if ( (v12 & 1) == 0 )
  {
    v12 = (unsigned __int16)v54 | 1;
    v13 = v54 | 1;
  }
  v14 = 57;
  v50 = -1;
  if ( a1 != 57 )
    v14 = a1;
  v15 = *(_DWORD *)a2 < 0xFFu;
  v49 = v14;
  if ( v15 )
  {
    v16 = *(_BYTE *)a2;
    if ( *(_BYTE *)a2 <= 1u )
      v16 = 1;
  }
  else
  {
    v16 = -1;
  }
  v17 = 100;
  if ( (unsigned __int8)v16 >= 0xC8u )
  {
    v17 = 2;
  }
  else if ( (unsigned __int8)v16 >= 0xAAu )
  {
    v17 = 10;
  }
  else if ( (unsigned __int8)v16 >= 0xA0u )
  {
    v17 = 20;
  }
  else if ( (unsigned __int8)v16 >= 0x96u )
  {
    v17 = 30;
  }
  else if ( (unsigned __int8)v16 >= 0x8Cu )
  {
    v17 = 40;
  }
  else if ( (unsigned __int8)v16 < 0x82u )
  {
    if ( (unsigned __int8)v16 >= 0x50u )
    {
      v17 = 60;
    }
    else if ( (unsigned __int8)v16 >= 0x14u )
    {
      v17 = 70;
    }
    else if ( (unsigned __int8)v16 < 0xFu )
    {
      if ( (unsigned __int8)v16 >= 5u )
        v17 = 90;
    }
    else
    {
      v17 = 80;
    }
  }
  else
  {
    v17 = 50;
  }
  v18 = *(_QWORD *)(a2 + 8);
  v54 = v12;
  HIBYTE(v54) = *(_BYTE *)a2;
  v19 = *(_QWORD *)(a2 + 32);
  v52 = v17;
  v64[0] = v17;
  v66 = v17;
  v69 = v17;
  v20 = *(_QWORD *)(a2 + 16);
  v59 = v19;
  v73 = *(_QWORD *)(a2 + 24);
  v60 = v18;
  if ( v20 && v20 < v18 && (*(_BYTE *)(a2 + 104) & 8) != 0 )
    v18 = v20;
  v21 = *(_DWORD *)(a2 + 104);
  if ( (v21 & 0x40000000) != 0 )
    v18 = 0LL;
  v22 = *(_DWORD *)(a2 + 40) == 3;
  v65 = v18;
  if ( v22 )
  {
    v23 = 1;
    v58 = 1;
  }
  else
  {
    v23 = v58;
  }
  v63 = *(unsigned int *)(a2 + 44);
  v53 = *(_DWORD *)(a2 + 48);
  v68 = *(unsigned int *)(a2 + 52);
  v72 = 0LL;
  v74 = (v21 & 0x20 | (2 * (v21 & 0xE))) << 14;
  v61 = (v21 >> 4) & 1;
  v55 = (v21 >> 4) & 1 | (2 * ((v21 >> 10) & 1));
  if ( (v21 & 2) != 0 )
    v24 = (v21 & 4 | 8) >> 2;
  else
    LOBYTE(v24) = (v21 & 0x80u) != 0;
  v56 = v24 & 3 | ((unsigned __int8)(v21 >> 12) << 7) | (4
                                                       * (((v21 & 0x200) != 0) | (2
                                                                                * (BYTE1(v21) & 1 | (2 * ((v21 & 0x80000000) != 0)))))) & 0x9F | (((v21 & 0x80) != 0) << 6);
  if ( (v21 & 0x800) != 0 )
  {
    v25 = 0;
  }
  else if ( (v21 & 0x40) == 0 || (v13 & 0xE) != 8 || (v13 & 0x30) != 0x20 || (v25 = 2, (v13 & 0x40) == 0) )
  {
    v25 = 1;
  }
  if ( !v23 )
    v9 = 0;
  v26 = &v71;
  v27 = v25 & 0xFFFFFFF3 | (4 * (v9 & 1)) | (v21 >> 2) & 8;
  v28 = (unsigned __int8 *)(a2 + 57);
  v57 = v27;
  v29 = 9LL;
  do
  {
    v30 = *(v28 - 1);
    if ( v30 )
      *((_DWORD *)v26 - 1) = v30;
    if ( *v28 )
      *(_DWORD *)v26 = *v28;
    v31 = v28[1];
    if ( v31 )
      *((_DWORD *)v26 + 1) = v31;
    v32 = v28[2];
    if ( v32 )
      *((_DWORD *)v26 + 2) = v32;
    v33 = v28[3];
    if ( v33 )
      *((_DWORD *)v26 + 3) = v33;
    v28 += 5;
    v26 += 20;
    --v29;
  }
  while ( v29 );
  v34 = &v49;
  do
  {
    v8 += 8;
    v35 = *(_OWORD *)v34;
    v36 = *((_OWORD *)v34 + 1);
    v34 += 32;
    *(v8 - 8) = v35;
    v37 = *((_OWORD *)v34 - 6);
    *(v8 - 7) = v36;
    v38 = *((_OWORD *)v34 - 5);
    *(v8 - 6) = v37;
    v39 = *((_OWORD *)v34 - 4);
    *(v8 - 5) = v38;
    v40 = *((_OWORD *)v34 - 3);
    *(v8 - 4) = v39;
    v41 = *((_OWORD *)v34 - 2);
    *(v8 - 3) = v40;
    v42 = *((_OWORD *)v34 - 1);
    *(v8 - 2) = v41;
    *(v8 - 1) = v42;
    --v4;
  }
  while ( v4 );
  v43 = *((_OWORD *)v34 + 1);
  *v8 = *(_OWORD *)v34;
  v44 = *((_OWORD *)v34 + 2);
  v8[1] = v43;
  v45 = *((_OWORD *)v34 + 3);
  v8[2] = v44;
  v46 = *((_OWORD *)v34 + 4);
  v8[3] = v45;
  v47 = *((_OWORD *)v34 + 5);
  result = 0LL;
  v8[4] = v46;
  v8[5] = v47;
  return result;
}
