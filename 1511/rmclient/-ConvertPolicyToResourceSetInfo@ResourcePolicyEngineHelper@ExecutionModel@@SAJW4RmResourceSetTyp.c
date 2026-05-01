/*
 * XREFs of ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x180004F50
 * Callers:
 *     ?GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800049E0 (-GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(
        int a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdi
  _DWORD *v6; // rax
  int v7; // ecx
  __int64 v8; // r10
  int v9; // ebx
  char *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ecx
  bool v14; // cf
  char v15; // cl
  int v16; // edx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned int v20; // r8d
  int v21; // r14d
  int v22; // eax
  bool v23; // zf
  unsigned int v24; // edx
  unsigned __int8 *v25; // rax
  char *v26; // rdx
  __int64 v27; // r8
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // cl
  unsigned __int8 v31; // cl
  int *v32; // rax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // rax
  int v48; // [rsp+10h] [rbp-F0h] BYREF
  int v49; // [rsp+14h] [rbp-ECh]
  int v50; // [rsp+18h] [rbp-E8h]
  int v51; // [rsp+1Ch] [rbp-E4h]
  int v52; // [rsp+20h] [rbp-E0h]
  int v53; // [rsp+24h] [rbp-DCh]
  __int16 v54; // [rsp+28h] [rbp-D8h]
  char v55; // [rsp+2Ah] [rbp-D6h]
  unsigned int v56; // [rsp+2Ch] [rbp-D4h]
  int v57; // [rsp+30h] [rbp-D0h]
  __int64 v58; // [rsp+38h] [rbp-C8h]
  __int64 v59; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v60; // [rsp+48h] [rbp-B8h]
  int v61; // [rsp+50h] [rbp-B0h]
  int v62; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+60h] [rbp-A0h]
  _DWORD v64[4]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v65; // [rsp+78h] [rbp-88h]
  int v66; // [rsp+80h] [rbp-80h]
  int v67; // [rsp+88h] [rbp-78h]
  __int64 v68; // [rsp+90h] [rbp-70h]
  int v69; // [rsp+98h] [rbp-68h]
  char v70; // [rsp+A0h] [rbp-60h] BYREF
  char v71; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v72; // [rsp+160h] [rbp+60h]
  __int64 v73; // [rsp+168h] [rbp+68h]
  int v74; // [rsp+174h] [rbp+74h]

  v48 = -1;
  v49 = 0;
  v4 = 2LL;
  v57 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v6 = v64;
  v61 = 0;
  v7 = 2;
  v8 = a3;
  v50 = -1;
  v51 = 101;
  v52 = 32;
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
  v58 = 0LL;
  v56 = 1;
  v53 = 0;
  if ( !a2 || !a3 )
    return 2147942487LL;
  v12 = *(_DWORD *)(a2 + 4);
  if ( (v12 & 1) == 0 )
    v12 = (unsigned __int16)v53 | 1;
  v13 = 57;
  v49 = -1;
  if ( a1 != 57 )
    v13 = a1;
  v14 = *(_DWORD *)a2 < 0xFFu;
  v48 = v13;
  if ( v14 )
  {
    v15 = *(_BYTE *)a2;
    if ( *(_BYTE *)a2 <= 1u )
      v15 = 1;
  }
  else
  {
    v15 = -1;
  }
  v16 = 100;
  if ( (unsigned __int8)v15 < 0xC8u )
  {
    if ( (unsigned __int8)v15 >= 0xAAu )
    {
      v16 = 10;
    }
    else if ( (unsigned __int8)v15 >= 0xA0u )
    {
      v16 = 20;
    }
    else if ( (unsigned __int8)v15 >= 0x96u )
    {
      v16 = 30;
    }
    else if ( (unsigned __int8)v15 >= 0x8Cu )
    {
      v16 = 40;
    }
    else if ( (unsigned __int8)v15 < 0x82u )
    {
      if ( (unsigned __int8)v15 >= 0x50u )
      {
        v16 = 60;
      }
      else if ( (unsigned __int8)v15 < 0x14u )
      {
        if ( (unsigned __int8)v15 < 0xFu )
        {
          if ( (unsigned __int8)v15 >= 5u )
            v16 = 90;
        }
        else
        {
          v16 = 80;
        }
      }
      else
      {
        v16 = 70;
      }
    }
    else
    {
      v16 = 50;
    }
  }
  else
  {
    v16 = 2;
  }
  v17 = *(_QWORD *)(a2 + 8);
  v53 = v12;
  HIBYTE(v53) = *(_BYTE *)a2;
  v18 = *(_QWORD *)(a2 + 32);
  v51 = v16;
  v64[0] = v16;
  v66 = v16;
  v69 = v16;
  v19 = *(_QWORD *)(a2 + 16);
  v59 = v18;
  v73 = *(_QWORD *)(a2 + 24);
  v60 = v17;
  if ( v19 && v19 < v17 && (*(_BYTE *)(a2 + 104) & 8) != 0 )
    v17 = v19;
  v20 = *(_DWORD *)(a2 + 104);
  v21 = v57;
  if ( (v20 & 0x40000000) != 0 )
    v17 = 0LL;
  v63 = *(unsigned int *)(a2 + 44);
  v22 = *(_DWORD *)(a2 + 48);
  v23 = *(_DWORD *)(a2 + 40) == 3;
  v65 = v17;
  if ( v23 )
    v21 = 1;
  v52 = v22;
  v68 = *(unsigned int *)(a2 + 52);
  v57 = v21;
  v72 = 0LL;
  v74 = (v20 & 0x20 | (2 * (v20 & 0xE))) << 14;
  v61 = (v20 >> 4) & 1;
  v54 = (v20 >> 4) & 1 | (2 * ((v20 >> 10) & 1));
  if ( (v20 & 2) != 0 )
    v24 = (v20 & 4 | 8) >> 2;
  else
    LOBYTE(v24) = (v20 & 0x80u) != 0;
  v55 = v24 & 3 | ((unsigned __int8)(v20 >> 12) << 7) | (4
                                                       * (((v20 & 0x200) != 0) | (2
                                                                                * (BYTE1(v20) & 1 | (2 * ((v20 & 0x80000000) != 0)))))) & 0x9F | (((v20 & 0x80) != 0) << 6);
  if ( (v20 & 0x800) != 0 )
  {
    v9 = 0;
  }
  else if ( (v20 & 0x40) != 0 )
  {
    v9 = 2;
  }
  v25 = (unsigned __int8 *)(a2 + 57);
  v26 = &v71;
  v56 = v9 & 0xFFFFFFF3 | (4 * (v21 != 0)) | (v20 >> 2) & 8;
  v27 = 9LL;
  do
  {
    v28 = *(v25 - 1);
    if ( v28 )
      *((_DWORD *)v26 - 1) = v28;
    if ( *v25 )
      *(_DWORD *)v26 = *v25;
    v29 = v25[1];
    if ( v29 )
      *((_DWORD *)v26 + 1) = v29;
    v30 = v25[2];
    if ( v30 )
      *((_DWORD *)v26 + 2) = v30;
    v31 = v25[3];
    if ( v31 )
      *((_DWORD *)v26 + 3) = v31;
    v25 += 5;
    v26 += 20;
    --v27;
  }
  while ( v27 );
  v32 = &v48;
  do
  {
    v8 += 128LL;
    v33 = *(_OWORD *)v32;
    v34 = *((_OWORD *)v32 + 1);
    v32 += 32;
    *(_OWORD *)(v8 - 128) = v33;
    v35 = *((_OWORD *)v32 - 6);
    *(_OWORD *)(v8 - 112) = v34;
    v36 = *((_OWORD *)v32 - 5);
    *(_OWORD *)(v8 - 96) = v35;
    v37 = *((_OWORD *)v32 - 4);
    *(_OWORD *)(v8 - 80) = v36;
    v38 = *((_OWORD *)v32 - 3);
    *(_OWORD *)(v8 - 64) = v37;
    v39 = *((_OWORD *)v32 - 2);
    *(_OWORD *)(v8 - 48) = v38;
    v40 = *((_OWORD *)v32 - 1);
    *(_OWORD *)(v8 - 32) = v39;
    *(_OWORD *)(v8 - 16) = v40;
    --v4;
  }
  while ( v4 );
  v41 = *((_OWORD *)v32 + 1);
  *(_OWORD *)v8 = *(_OWORD *)v32;
  v42 = *((_OWORD *)v32 + 2);
  *(_OWORD *)(v8 + 16) = v41;
  v43 = *((_OWORD *)v32 + 3);
  *(_OWORD *)(v8 + 32) = v42;
  v44 = *((_OWORD *)v32 + 4);
  *(_OWORD *)(v8 + 48) = v43;
  v45 = *((_OWORD *)v32 + 5);
  v46 = *((_QWORD *)v32 + 12);
  *(_OWORD *)(v8 + 64) = v44;
  *(_OWORD *)(v8 + 80) = v45;
  *(_QWORD *)(v8 + 96) = v46;
  return 0LL;
}
