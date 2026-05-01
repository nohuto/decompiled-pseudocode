/*
 * XREFs of ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x1800128B0
 * Callers:
 *     ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180012D30 (-HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 *     ?ChangeCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z @ 0x18004DB54 (-ChangeCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z.c)
 *     ?GetResourceSetInfoForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore@2@W4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x18004E93C (-GetResourceSetInfoForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourc.c)
 *     ?NotifyPendingBackingResourceSetTransition@ResourceSetImpl@ExecutionModel@@QEAAJ_K@Z @ 0x18004EA08 (-NotifyPendingBackingResourceSetTransition@ResourceSetImpl@ExecutionModel@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetLegacyPriorityForActivityPriority@ResourcePolicyEngineHelper@ExecutionModel@@SAKE@Z @ 0x18001FFBC (-GetLegacyPriorityForActivityPriority@ResourcePolicyEngineHelper@ExecutionModel@@SAKE@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(
        int a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _DWORD *v6; // rcx
  int v7; // edx
  char *v8; // rdi
  __int64 v9; // rcx
  int v10; // edi
  int v11; // eax
  bool v12; // cf
  unsigned __int8 v13; // cl
  unsigned int LegacyPriorityForActivityPriority; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  int v18; // r11d
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned int v21; // edi
  int v22; // r14d
  int v23; // eax
  bool v24; // zf
  char v25; // dl
  unsigned __int8 *v26; // rax
  char *v27; // rdx
  __int64 v28; // rdi
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // cl
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // cl
  int *v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int64 v47; // rax
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
  __int64 v60; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v61; // [rsp+68h] [rbp-98h]
  int v62; // [rsp+70h] [rbp-90h]
  int v63; // [rsp+78h] [rbp-88h]
  __int64 v64; // [rsp+80h] [rbp-80h]
  _DWORD v65[4]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v66; // [rsp+98h] [rbp-68h]
  unsigned int v67; // [rsp+A0h] [rbp-60h]
  int v68; // [rsp+A8h] [rbp-58h]
  __int64 v69; // [rsp+B0h] [rbp-50h]
  unsigned int v70; // [rsp+B8h] [rbp-48h]
  char v71; // [rsp+C0h] [rbp-40h] BYREF
  char v72; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v73; // [rsp+180h] [rbp+80h]
  __int64 v74; // [rsp+188h] [rbp+88h]
  int v75; // [rsp+194h] [rbp+94h]

  v49 = -1;
  v3 = 2LL;
  v50 = 0;
  v58 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v6 = v65;
  v62 = 0;
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
  v73 = 0LL;
  v65[2] = 1;
  v8 = &v71;
  v74 = 0LL;
  v9 = 48LL;
  v63 = 0;
  v68 = 2;
  while ( v9 )
  {
    *(_DWORD *)v8 = 101;
    v8 += 4;
    --v9;
  }
  v59 = 0LL;
  v57 = 1;
  v54 = 0;
  if ( !a2 || !a3 )
    return 2147942487LL;
  v10 = a2[1];
  if ( (v10 & 1) == 0 )
    v10 = (unsigned __int16)v54 | 1;
  v11 = 57;
  v50 = -1;
  if ( a1 != 57 )
    v11 = a1;
  v12 = *a2 < 0xFFu;
  v49 = v11;
  if ( v12 )
  {
    v13 = *(_BYTE *)a2;
    if ( *(_BYTE *)a2 <= 1u )
      v13 = 1;
  }
  else
  {
    v13 = -1;
  }
  LegacyPriorityForActivityPriority = ExecutionModel::ResourcePolicyEngineHelper::GetLegacyPriorityForActivityPriority(v13);
  v19 = *(_QWORD *)(v17 + 16);
  v20 = *(_QWORD *)(v17 + 8);
  v52 = LegacyPriorityForActivityPriority;
  v65[0] = LegacyPriorityForActivityPriority;
  v67 = LegacyPriorityForActivityPriority;
  v70 = LegacyPriorityForActivityPriority;
  LOBYTE(LegacyPriorityForActivityPriority) = *(_BYTE *)v17;
  v54 = v10;
  HIBYTE(v54) = LegacyPriorityForActivityPriority;
  v60 = *(_QWORD *)(v17 + 32);
  v74 = *(_QWORD *)(v17 + 24);
  v61 = v20;
  if ( v19 && v19 < v20 && (*(_BYTE *)(v17 + 104) & 8) != 0 )
    v20 = v19;
  v21 = *(_DWORD *)(v17 + 104);
  v22 = v58;
  if ( (v21 & 0x40000000) != 0 )
    v20 = v16;
  v64 = *(unsigned int *)(v17 + 44);
  v23 = *(_DWORD *)(v17 + 48);
  v24 = *(_DWORD *)(v17 + 40) == 3;
  v66 = v20;
  if ( v24 )
    v22 = v18;
  v53 = v23;
  v69 = *(unsigned int *)(v17 + 52);
  v58 = v22;
  v73 = v16;
  v75 = v16 & 0xFFF0FFFE | ((v21 & 0x20 | (2 * (v21 & 0xE))) << 14);
  v62 = v18 & (v21 >> 4);
  v55 = v16 & 0xFFFC | v18 & (v21 >> 4) | (2 * (v18 & (v21 >> 10)));
  if ( (v21 & 2) != 0 )
  {
    if ( (v21 & 4) != 0 )
      v25 = 3;
    else
      v25 = 2;
  }
  else
  {
    v25 = v16;
    if ( (v21 & 0x80u) != 0 )
      v25 = v18;
  }
  v56 = v25 & 3 | ((unsigned __int8)(v21 >> 12) << 7) | (4
                                                       * (v18 & (v21 >> 9) | (2
                                                                            * (v18 & BYTE1(v21) | (2
                                                                                                 * (v18 & ((v21 & 0x80000000) != 0))))))) & 0x9F | (((unsigned __int8)v18 & (unsigned __int8)(v21 >> 7)) << 6);
  if ( (v21 & 0x800) != 0 )
  {
    v18 = v16;
  }
  else if ( (v21 & 0x40) != 0 )
  {
    v18 = 2;
  }
  v26 = (unsigned __int8 *)(v17 + 57);
  v27 = &v72;
  v57 = v18 & 0xFFFFFFF3 | (4 * (v22 != 0)) | (v21 >> 2) & 8;
  v28 = 9LL;
  do
  {
    v29 = *(v26 - 1);
    if ( v29 )
      *((_DWORD *)v27 - 1) = v29;
    if ( *v26 )
      *(_DWORD *)v27 = *v26;
    v30 = v26[1];
    if ( v30 )
      *((_DWORD *)v27 + 1) = v30;
    v31 = v26[2];
    if ( v31 )
      *((_DWORD *)v27 + 2) = v31;
    v32 = v26[3];
    if ( v32 )
      *((_DWORD *)v27 + 3) = v32;
    v26 += 5;
    v27 += 20;
    --v28;
  }
  while ( v28 );
  v33 = &v49;
  do
  {
    v15 += 128LL;
    v34 = *(_OWORD *)v33;
    v35 = *((_OWORD *)v33 + 1);
    v33 += 32;
    *(_OWORD *)(v15 - 128) = v34;
    v36 = *((_OWORD *)v33 - 6);
    *(_OWORD *)(v15 - 112) = v35;
    v37 = *((_OWORD *)v33 - 5);
    *(_OWORD *)(v15 - 96) = v36;
    v38 = *((_OWORD *)v33 - 4);
    *(_OWORD *)(v15 - 80) = v37;
    v39 = *((_OWORD *)v33 - 3);
    *(_OWORD *)(v15 - 64) = v38;
    v40 = *((_OWORD *)v33 - 2);
    *(_OWORD *)(v15 - 48) = v39;
    v41 = *((_OWORD *)v33 - 1);
    *(_OWORD *)(v15 - 32) = v40;
    *(_OWORD *)(v15 - 16) = v41;
    --v3;
  }
  while ( v3 );
  v42 = *((_OWORD *)v33 + 1);
  *(_OWORD *)v15 = *(_OWORD *)v33;
  v43 = *((_OWORD *)v33 + 2);
  *(_OWORD *)(v15 + 16) = v42;
  v44 = *((_OWORD *)v33 + 3);
  *(_OWORD *)(v15 + 32) = v43;
  v45 = *((_OWORD *)v33 + 4);
  *(_OWORD *)(v15 + 48) = v44;
  v46 = *((_OWORD *)v33 + 5);
  v47 = *((_QWORD *)v33 + 12);
  *(_OWORD *)(v15 + 64) = v45;
  *(_OWORD *)(v15 + 80) = v46;
  *(_QWORD *)(v15 + 96) = v47;
  return 0LL;
}
