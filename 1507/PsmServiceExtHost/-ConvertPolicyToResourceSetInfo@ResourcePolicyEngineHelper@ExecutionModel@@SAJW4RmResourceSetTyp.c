/*
 * XREFs of ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x18000D970
 * Callers:
 *     ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x1800143F0 (-HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 *     ?GetResourceSetInfoForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore@2@W4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x180047B0C (-GetResourceSetInfoForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourc.c)
 * Callees:
 *     ?GetLegacyPriorityForActivityPriority@ResourcePolicyEngineHelper@ExecutionModel@@SAKE@Z @ 0x18000CF20 (-GetLegacyPriorityForActivityPriority@ResourcePolicyEngineHelper@ExecutionModel@@SAKE@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(
        int a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 v3; // r14
  _DWORD *v6; // rcx
  int v7; // edx
  char *v8; // rdi
  __int64 v9; // rcx
  int v10; // edi
  char v11; // bl
  int v12; // eax
  bool v13; // cf
  unsigned __int8 v14; // cl
  int LegacyPriorityForActivityPriority; // eax
  _OWORD *v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  int v19; // r11d
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned int v22; // edi
  int v23; // r15d
  int v24; // eax
  bool v25; // zf
  unsigned int v26; // edx
  unsigned __int8 *v27; // rax
  char *v28; // rdx
  __int64 v29; // rdi
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
  int v49; // [rsp+30h] [rbp-D0h] BYREF
  int v50; // [rsp+34h] [rbp-CCh]
  int v51; // [rsp+38h] [rbp-C8h]
  int v52; // [rsp+3Ch] [rbp-C4h]
  int v53; // [rsp+40h] [rbp-C0h]
  int v54; // [rsp+44h] [rbp-BCh]
  __int16 v55; // [rsp+48h] [rbp-B8h]
  char v56; // [rsp+4Ah] [rbp-B6h]
  unsigned int v57; // [rsp+4Ch] [rbp-B4h]
  int v58; // [rsp+50h] [rbp-B0h]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v60; // [rsp+60h] [rbp-A0h]
  int v61; // [rsp+68h] [rbp-98h]
  int v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  _DWORD v64[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v65; // [rsp+90h] [rbp-70h]
  int v66; // [rsp+98h] [rbp-68h]
  int v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  int v69; // [rsp+B0h] [rbp-50h]
  char v70; // [rsp+B8h] [rbp-48h] BYREF
  char v71; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v72; // [rsp+178h] [rbp+78h]
  __int64 v73; // [rsp+180h] [rbp+80h]
  int v74; // [rsp+18Ch] [rbp+8Ch]

  v49 = -1;
  v3 = 2LL;
  v50 = 0;
  v58 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v6 = v64;
  v61 = 0;
  v7 = 2;
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
  v72 = 0LL;
  v64[2] = 1;
  v8 = &v70;
  v73 = 0LL;
  v9 = 48LL;
  v62 = 0;
  v67 = 2;
  while ( v9 )
  {
    *(_DWORD *)v8 = 101;
    v8 += 4;
    --v9;
  }
  v57 = 1;
  v54 = 0;
  if ( !a2 || !a3 )
    return 2147942487LL;
  v10 = a2[1];
  v11 = v10;
  if ( (v10 & 1) == 0 )
  {
    v11 = v54 | 1;
    v10 = (unsigned __int16)v54 | 1;
  }
  v12 = 57;
  v50 = -1;
  if ( a1 != 57 )
    v12 = a1;
  v13 = *a2 < 0xFFu;
  v49 = v12;
  if ( v13 )
  {
    v14 = *(_BYTE *)a2;
    if ( *(_BYTE *)a2 <= 1u )
      v14 = 1;
  }
  else
  {
    v14 = -1;
  }
  LegacyPriorityForActivityPriority = ExecutionModel::ResourcePolicyEngineHelper::GetLegacyPriorityForActivityPriority(v14);
  v20 = *(_QWORD *)(v18 + 16);
  v21 = *(_QWORD *)(v18 + 8);
  v52 = LegacyPriorityForActivityPriority;
  v64[0] = LegacyPriorityForActivityPriority;
  v66 = LegacyPriorityForActivityPriority;
  v69 = LegacyPriorityForActivityPriority;
  LOBYTE(LegacyPriorityForActivityPriority) = *(_BYTE *)v18;
  v54 = v10;
  HIBYTE(v54) = LegacyPriorityForActivityPriority;
  v59 = *(_QWORD *)(v18 + 32);
  v73 = *(_QWORD *)(v18 + 24);
  v60 = v21;
  if ( v20 && v20 < v21 && (*(_BYTE *)(v18 + 104) & 8) != 0 )
    v21 = v20;
  v22 = *(_DWORD *)(v18 + 104);
  v23 = v58;
  if ( (v22 & 0x40000000) != 0 )
    v21 = v17;
  v63 = *(unsigned int *)(v18 + 44);
  v24 = *(_DWORD *)(v18 + 48);
  v25 = *(_DWORD *)(v18 + 40) == 3;
  v65 = v21;
  if ( v25 )
    v23 = v19;
  v53 = v24;
  v68 = *(unsigned int *)(v18 + 52);
  v58 = v23;
  v72 = v17;
  v74 = v17 & 0xFFF0FFFE | ((v22 & 0x20 | (2 * (v22 & 0xE))) << 14);
  v61 = v19 & (v22 >> 4);
  v55 = v17 & 0xFFFC | v19 & (v22 >> 4) | (2 * (v19 & (v22 >> 10)));
  if ( (v22 & 2) != 0 )
  {
    v26 = (v22 & 4 | 8) >> 2;
  }
  else
  {
    LOBYTE(v26) = v17;
    if ( (v22 & 0x80u) != 0 )
      LOBYTE(v26) = v19;
  }
  v56 = v26 & 3 | ((unsigned __int8)(v22 >> 12) << 7) | (4
                                                       * (v19 & (v22 >> 9) | (2
                                                                            * (v19 & BYTE1(v22) | (2
                                                                                                 * (v19 & ((v22 & 0x80000000) != 0))))))) & 0x9F | (((unsigned __int8)v19 & (unsigned __int8)(v22 >> 7)) << 6);
  if ( (v22 & 0x800) != 0 )
  {
    v19 = v17;
  }
  else if ( (v22 & 0x40) != 0 && (v11 & 0xE) == 8 && (v11 & 0x30) == 0x20 && (v11 & 0x40) != 0 )
  {
    v19 = 2;
  }
  v27 = (unsigned __int8 *)(v18 + 57);
  v28 = &v71;
  v57 = v19 & 0xFFFFFFF3 | (4 * (v23 != 0)) | (v22 >> 2) & 8;
  v29 = 9LL;
  do
  {
    v30 = *(v27 - 1);
    if ( v30 )
      *((_DWORD *)v28 - 1) = v30;
    if ( *v27 )
      *(_DWORD *)v28 = *v27;
    v31 = v27[1];
    if ( v31 )
      *((_DWORD *)v28 + 1) = v31;
    v32 = v27[2];
    if ( v32 )
      *((_DWORD *)v28 + 2) = v32;
    v33 = v27[3];
    if ( v33 )
      *((_DWORD *)v28 + 3) = v33;
    v27 += 5;
    v28 += 20;
    --v29;
  }
  while ( v29 );
  v34 = &v49;
  do
  {
    v16 += 8;
    v35 = *(_OWORD *)v34;
    v36 = *((_OWORD *)v34 + 1);
    v34 += 32;
    *(v16 - 8) = v35;
    v37 = *((_OWORD *)v34 - 6);
    *(v16 - 7) = v36;
    v38 = *((_OWORD *)v34 - 5);
    *(v16 - 6) = v37;
    v39 = *((_OWORD *)v34 - 4);
    *(v16 - 5) = v38;
    v40 = *((_OWORD *)v34 - 3);
    *(v16 - 4) = v39;
    v41 = *((_OWORD *)v34 - 2);
    *(v16 - 3) = v40;
    v42 = *((_OWORD *)v34 - 1);
    *(v16 - 2) = v41;
    *(v16 - 1) = v42;
    --v3;
  }
  while ( v3 );
  v43 = *((_OWORD *)v34 + 1);
  *v16 = *(_OWORD *)v34;
  v44 = *((_OWORD *)v34 + 2);
  v16[1] = v43;
  v45 = *((_OWORD *)v34 + 3);
  v16[2] = v44;
  v46 = *((_OWORD *)v34 + 4);
  v16[3] = v45;
  v47 = *((_OWORD *)v34 + 5);
  result = 0LL;
  v16[4] = v46;
  v16[5] = v47;
  return result;
}
