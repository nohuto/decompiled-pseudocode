/*
 * XREFs of ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180012D30
 * Callers:
 *     ?AcquireResourceSetFromSponsorProcess@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x1800052E0 (-AcquireResourceSetFromSponsorProcess@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetT.c)
 *     ?AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180019640 (-AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@P.c)
 *     ?AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x1800197A0 (-AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIV.c)
 * Callees:
 *     ?GetResourcePolicyInformation@ResourcePolicyStore@ExecutionModel@@UEBAJW4RmResourceSetType@@PEAU_ResourcePolicyDetails@@@Z @ 0x1800057E0 (-GetResourcePolicyInformation@ResourcePolicyStore@ExecutionModel@@UEBAJW4RmResourceSetType@@PEAU.c)
 *     ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x1800128B0 (-ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetTyp.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x1800138A0 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?TEMP_PerformAcquireResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@KPEA_NPEAUIResourceSet@2@@Z @ 0x180014280 (-TEMP_PerformAcquireResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::HostAcquireTransitionalResourceSet(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int *a7,
        struct ExecutionModel::IResourceSet *a8,
        _QWORD *a9)
{
  int v10; // r13d
  char *v13; // rcx
  int v14; // edx
  char *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, int, _OWORD *); // rsi
  __int64 result; // rax
  __int64 v20; // rbx
  _DWORD *v21; // rax
  _DWORD *v22; // rsi
  int v23; // r15d
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r15
  _OWORD *v29; // rax
  int v30; // r15d
  bool *v31; // rcx
  int v32; // ecx
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // r14
  _QWORD *v36; // rax
  _QWORD *v37; // rbx
  _QWORD *v38; // rax
  unsigned int (__fastcall *v39)(ExecutionModel::ResourceSetImpl *__hidden); // rdi
  unsigned __int8 v40; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v41; // [rsp+34h] [rbp-CCh]
  BOOL v42; // [rsp+38h] [rbp-C8h]
  struct ExecutionModel::IResourceSet *v43; // [rsp+40h] [rbp-C0h]
  _QWORD *v44; // [rsp+48h] [rbp-B8h]
  __int64 v45; // [rsp+50h] [rbp-B0h]
  int *v46; // [rsp+58h] [rbp-A8h]
  _BYTE v47[48]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v48; // [rsp+90h] [rbp-70h]
  __int128 v49; // [rsp+A0h] [rbp-60h]
  __int128 v50; // [rsp+B0h] [rbp-50h]
  __int128 v51; // [rsp+C0h] [rbp-40h]
  _DWORD v52[6]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v53; // [rsp+E8h] [rbp-18h]
  char v54; // [rsp+EAh] [rbp-16h]
  int v55; // [rsp+ECh] [rbp-14h]
  int v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  __int64 v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]
  int v60; // [rsp+110h] [rbp+10h]
  int v61; // [rsp+118h] [rbp+18h]
  char v62; // [rsp+128h] [rbp+28h] BYREF
  int v63; // [rsp+130h] [rbp+30h]
  int v64; // [rsp+148h] [rbp+48h]
  char v65; // [rsp+160h] [rbp+60h] BYREF
  __int64 v66; // [rsp+220h] [rbp+120h]
  __int64 v67; // [rsp+228h] [rbp+128h]
  int v68; // [rsp+234h] [rbp+134h]

  v43 = a8;
  v10 = 2;
  v41 = a2;
  v44 = a9;
  v13 = &v62;
  v45 = a4;
  v14 = 2;
  v46 = a7;
  v40 = 0;
  v52[0] = -1;
  v52[1] = 0;
  v52[2] = -1;
  v52[3] = 101;
  v52[4] = 32;
  v56 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0;
  do
  {
    --v14;
    *((_DWORD *)v13 - 4) = -1;
    *((_QWORD *)v13 - 1) = 0LL;
    *(_DWORD *)v13 = 101;
    *((_WORD *)v13 + 2) = 0;
    v13 += 24;
  }
  while ( v14 >= 0 );
  v66 = 0LL;
  v15 = &v65;
  v67 = 0LL;
  v61 = 0;
  v16 = 48LL;
  v63 = 1;
  v64 = 2;
  while ( v16 )
  {
    *(_DWORD *)v15 = 101;
    v15 += 4;
    --v16;
  }
  v68 = 0;
  v53 = 0;
  v54 = 0;
  v57 = 0LL;
  v55 = 1;
  v52[5] = 0;
  memset_0(v47, 0, 0x70uLL);
  if ( !a7 )
    return 2147942487LL;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  v18 = *(__int64 (__fastcall **)(__int64, int, _OWORD *))(*(_QWORD *)v17 + 32LL);
  if ( v18 == ExecutionModel::ResourcePolicyStore::GetResourcePolicyInformation )
    result = ExecutionModel::ResourcePolicyStore::GetResourcePolicyInformation(v17, a2, v47);
  else
    result = v18(v17, a2, v47);
  if ( (int)result >= 0 )
  {
    v42 = *a7 != 0;
    if ( a3 && (*(_BYTE *)a3 & 1) != 0 )
      *(_DWORD *)&v47[4] = *a3;
    if ( a6 )
      DWORD2(v51) |= 2u;
    v20 = v45;
    if ( v45 )
    {
      v21 = malloc(0xD0uLL);
      v22 = v21;
      if ( v21 )
      {
        v21[8] = 0;
        *(_QWORD *)v21 = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IResourceSet'};
        *((_QWORD *)v21 + 1) = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IResourceSetCallback'};
        *((_QWORD *)v21 + 2) = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IRMExecServicesProviderCallback'};
        v21[6] = 0;
        v23 = v41;
        v21[38] = v41;
        *((_QWORD *)v21 + 20) = a1;
        *((_QWORD *)v21 + 21) = v20;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        *((_QWORD *)v22 + 22) = a5;
        *((_QWORD *)v22 + 23) = 0LL;
        *((_QWORD *)v22 + 24) = 0LL;
        *((_QWORD *)v22 + 25) = 0LL;
        v24 = *((_QWORD *)v22 + 20);
        v22[7] = 0;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
        v25 = *(_DWORD *)(a1 + 32);
        v22[7] |= 0x10001u;
        v22[39] = v25;
        v26 = *((_QWORD *)v22 + 20);
        *(_OWORD *)(v22 + 10) = *(_OWORD *)v47;
        *(_OWORD *)(v22 + 14) = *(_OWORD *)&v47[16];
        *(_OWORD *)(v22 + 18) = *(_OWORD *)&v47[32];
        *(_OWORD *)(v22 + 22) = v48;
        *(_OWORD *)(v22 + 26) = v49;
        *(_OWORD *)(v22 + 30) = v50;
        *(_OWORD *)(v22 + 34) = v51;
        v27 = *(_QWORD *)(v26 + 16);
        if ( *((_QWORD *)v22 + 24) != v27 )
        {
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
          v28 = *((_QWORD *)v22 + 24);
          if ( v28 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28 + 16LL))(*((_QWORD *)v22 + 24));
          v23 = v41;
          *((_QWORD *)v22 + 24) = v27;
        }
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
        v29 = *(_OWORD **)(a1 + 184);
        if ( v29 )
        {
          *(_OWORD *)&v47[8] = *v29;
          *(_OWORD *)&v47[24] = v29[1];
        }
        v30 = ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(v23, v47, (__int64)v52);
        if ( v30 < 0 )
          goto LABEL_46;
        v31 = (bool *)&v40;
        if ( !v42 )
          v31 = 0LL;
        v30 = ExecutionModel::ResourceSetImpl::TEMP_PerformAcquireResourceSet(
                (ExecutionModel::ResourceSetImpl *)v22,
                *(struct IResourceManager **)(*(_QWORD *)(a1 + 16) + 24LL),
                (struct ExecutionModel::_ResourceSetInfo *)v52,
                a6,
                v31,
                v43);
        if ( v30 < 0 )
        {
LABEL_46:
          if ( v22 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 120LL))(v22);
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
        else
        {
          v32 = v22[7];
          v22[8] = a6;
          v33 = v40;
          if ( (v32 & 0x19) == 1 )
          {
            v34 = v32 ^ (v32 ^ (2 * v40)) & 2;
            v22[7] = v34;
            if ( !(_BYTE)v33 )
              v22[7] = v34 | 4;
          }
          (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v22 + 8LL))(v22, v33);
          v35 = a1 + 88;
          v36 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          v37 = v36;
          if ( v36 )
          {
            v36[2] = v22;
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
            v38 = *(_QWORD **)(v35 + 8);
            v37[1] = v38;
            *v37 = v35;
            *v38 = v37;
            *(_QWORD *)(v35 + 8) = v37;
            ++*(_QWORD *)(v35 + 16);
          }
          v39 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetImpl *__hidden))(*(_QWORD *)v22 + 16LL);
          if ( v39 == ExecutionModel::ResourceSetImpl::Release )
            ExecutionModel::ResourceSetImpl::Release((ExecutionModel::ResourceSetImpl *)v22);
          else
            v39((ExecutionModel::ResourceSetImpl *)v22);
          if ( !v40 )
            v10 = 0;
          *v46 = v10;
          *v44 = v22;
        }
        return (unsigned int)v30;
      }
      else
      {
        return 2147942414LL;
      }
    }
    else
    {
      return 2147942487LL;
    }
  }
  return result;
}
