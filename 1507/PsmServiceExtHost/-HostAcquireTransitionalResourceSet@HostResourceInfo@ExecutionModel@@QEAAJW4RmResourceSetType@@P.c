/*
 * XREFs of ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x1800143F0
 * Callers:
 *     ?AcquireResourceSetFromSponsorProcess@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180002900 (-AcquireResourceSetFromSponsorProcess@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetT.c)
 *     ?AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x1800176F0 (-AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@P.c)
 *     ?AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x1800177E0 (-AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIV.c)
 * Callees:
 *     ?Temp_PerformAcquireResourceSetFromSponsorProcess@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@PEA_NKPEAUIResourceSet@2@@Z @ 0x180001448 (-Temp_PerformAcquireResourceSetFromSponsorProcess@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIReso.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x18000D970 (-ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetTyp.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x180013C90 (-AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSet.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x180014A00 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?GetResourcePolicyInformation@ResourcePolicyStore@ExecutionModel@@UEBAJW4RmResourceSetType@@PEAU_ResourcePolicyDetails@@@Z @ 0x1800170F0 (-GetResourcePolicyInformation@ResourcePolicyStore@ExecutionModel@@UEBAJW4RmResourceSetType@@PEAU.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::HostAcquireTransitionalResourceSet(
        __int64 a1,
        unsigned int a2,
        ExecutionModel::ResourceSetImpl *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int *a7,
        struct ExecutionModel::IResourceSet *a8,
        _QWORD *a9)
{
  int v9; // r12d
  __int64 v11; // r15
  char *v12; // rcx
  int v13; // edx
  char *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(_QWORD, _QWORD, _OWORD *); // rsi
  __int64 result; // rax
  bool v19; // r14
  __int64 v20; // rdi
  _DWORD *v21; // rax
  _DWORD *v22; // rsi
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r15
  bool *v28; // r15
  struct ExecutionModel::IResourceSet *v29; // rdi
  ExecutionModel::ResourceManager *v30; // r14
  ExecutionModel::ResourceSetImpl *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // r11
  unsigned int v35; // r10d
  bool v36; // zf
  void *Sid; // r9
  unsigned int v38; // r8d
  unsigned __int16 *v39; // r13
  __int64 (__fastcall *v40)(ExecutionModel::ResourceManager *, struct ExecutionModel::_ResourceSetInfo *, struct ExecutionModel::IResourceSetCallback *, void *, unsigned __int16 *, PSID, unsigned int, unsigned int, unsigned __int64, bool *, struct ExecutionModel::IResourceSet *, struct ExecutionModel::IResourceSet **); // rbx
  struct IUnknown **v41; // rbx
  int v42; // eax
  int v43; // r15d
  bool v44; // sf
  _BOOL8 v45; // rdx
  int v46; // ecx
  __int64 v47; // r14
  _QWORD *v48; // rax
  _QWORD *v49; // rbx
  _QWORD *v50; // rax
  unsigned int (__fastcall *v51)(ExecutionModel::ResourceSetImpl *__hidden); // rdi
  struct IUnknown *v52; // rbx
  bool *v53; // r9
  bool v54; // [rsp+60h] [rbp-A0h] BYREF
  ExecutionModel::ResourceSetImpl *v55; // [rsp+68h] [rbp-98h] BYREF
  struct IUnknown *v56; // [rsp+70h] [rbp-90h] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  int *v59; // [rsp+88h] [rbp-78h]
  _QWORD *v60; // [rsp+90h] [rbp-70h]
  unsigned __int64 v61; // [rsp+98h] [rbp-68h]
  void *v62; // [rsp+A0h] [rbp-60h]
  _OWORD v63[7]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v64[6]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v65; // [rsp+138h] [rbp+38h]
  char v66; // [rsp+13Ah] [rbp+3Ah]
  int v67; // [rsp+13Ch] [rbp+3Ch]
  int v68; // [rsp+140h] [rbp+40h]
  __int64 v69; // [rsp+148h] [rbp+48h]
  __int64 v70; // [rsp+150h] [rbp+50h]
  int v71; // [rsp+158h] [rbp+58h]
  int v72; // [rsp+160h] [rbp+60h]
  char v73; // [rsp+170h] [rbp+70h] BYREF
  int v74; // [rsp+178h] [rbp+78h]
  int v75; // [rsp+190h] [rbp+90h]
  char v76; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v77; // [rsp+268h] [rbp+168h]
  __int64 v78; // [rsp+270h] [rbp+170h]
  int v79; // [rsp+27Ch] [rbp+17Ch]
  unsigned int v80[6]; // [rsp+280h] [rbp+180h]

  v9 = 2;
  v11 = a1;
  v55 = a3;
  v58 = a1;
  v64[1] = 0;
  v12 = &v73;
  v68 = 0;
  v13 = 2;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0;
  v57 = a4;
  v59 = a7;
  v60 = a9;
  v54 = 0;
  v64[0] = -1;
  v64[2] = -1;
  v64[3] = 101;
  v64[4] = 32;
  do
  {
    --v13;
    *((_DWORD *)v12 - 4) = -1;
    *((_QWORD *)v12 - 1) = 0LL;
    *(_DWORD *)v12 = 101;
    *((_WORD *)v12 + 2) = 0;
    v12 += 24;
  }
  while ( v13 >= 0 );
  v77 = 0LL;
  v14 = &v76;
  v78 = 0LL;
  v72 = 0;
  v15 = 48LL;
  v74 = 1;
  v75 = 2;
  while ( v15 )
  {
    *(_DWORD *)v14 = 101;
    v14 += 4;
    --v15;
  }
  v79 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 1;
  v64[5] = 0;
  memset_0(v63, 0, sizeof(v63));
  if ( !a7 )
    return 2147942487LL;
  v16 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 32LL);
  v17 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *))(*(_QWORD *)v16 + 32LL);
  if ( (char *)v17 == (char *)ExecutionModel::ResourcePolicyStore::GetResourcePolicyInformation )
    result = ExecutionModel::ResourcePolicyStore::GetResourcePolicyInformation(v16, a2, v63);
  else
    result = v17(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 32LL), a2, v63);
  if ( (int)result >= 0 )
  {
    v19 = *v59 != 0;
    if ( v55 && (*(_BYTE *)v55 & 1) != 0 )
      DWORD1(v63[0]) = *(_DWORD *)v55;
    result = ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(a2, v63, (__int64)v64);
    if ( (int)result >= 0 )
    {
      v20 = v57;
      if ( v57 )
      {
        v21 = malloc(0xC0uLL);
        v22 = v21;
        if ( v21 )
        {
          v21[36] = a2;
          *(_QWORD *)v21 = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IResourceSet'};
          *((_QWORD *)v21 + 1) = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IResourceSetCallback'};
          *((_QWORD *)v21 + 2) = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IRMExecServicesProviderCallback'};
          v21[6] = 0;
          *((_QWORD *)v21 + 19) = v11;
          *((_QWORD *)v21 + 20) = v20;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v57);
          *((_QWORD *)v22 + 21) = a5;
          *((_QWORD *)v22 + 22) = 0LL;
          *((_QWORD *)v22 + 23) = 0LL;
          v23 = *((_QWORD *)v22 + 19);
          v22[7] = 0;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
          v24 = *(_DWORD *)(v11 + 24);
          v22[7] |= 0x10001u;
          v22[37] = v24;
          v25 = *((_QWORD *)v22 + 19);
          *((_OWORD *)v22 + 2) = v63[0];
          *((_OWORD *)v22 + 3) = v63[1];
          *((_OWORD *)v22 + 4) = v63[2];
          *((_OWORD *)v22 + 5) = v63[3];
          *((_OWORD *)v22 + 6) = v63[4];
          *((_OWORD *)v22 + 7) = v63[5];
          *((_OWORD *)v22 + 8) = v63[6];
          v26 = *(_QWORD *)(v25 + 16);
          if ( *((_QWORD *)v22 + 23) != v26 )
          {
            if ( v26 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
            v27 = *((_QWORD *)v22 + 23);
            if ( v27 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27 + 16LL))(*((_QWORD *)v22 + 23));
            v11 = v58;
            *((_QWORD *)v22 + 23) = v26;
          }
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( a6 )
          {
            v79 |= 0x10000u;
            if ( v19 )
              v53 = &v54;
            else
              v53 = 0LL;
            v43 = ExecutionModel::ResourceSetImpl::Temp_PerformAcquireResourceSetFromSponsorProcess(
                    (ExecutionModel::ResourceSetImpl *)v22,
                    *(struct IResourceManager **)(*(_QWORD *)(v11 + 16) + 24LL),
                    (struct ExecutionModel::_ResourceSetInfo *)v64,
                    v53,
                    a6,
                    a8);
            v44 = v43 < 0;
          }
          else
          {
            v28 = &v54;
            v56 = 0LL;
            v29 = 0LL;
            v55 = a8;
            if ( !v19 )
              v28 = 0LL;
            v30 = *(ExecutionModel::ResourceManager **)(*(_QWORD *)(v58 + 16) + 24LL);
            if ( a8 )
            {
              (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)a8 + 8LL))(a8);
              v52 = (struct IUnknown *)*((_QWORD *)a8 + 22);
              ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v55);
              if ( v52 )
              {
                ATL::AtlComPtrAssign(&v56, v52);
                v29 = (struct ExecutionModel::IResourceSet *)v56;
              }
            }
            if ( v22 )
              v31 = (ExecutionModel::ResourceSetImpl *)(v22 + 2);
            else
              v31 = 0LL;
            v32 = *((_QWORD *)v22 + 19);
            v55 = v31;
            v80[0] = 0;
            v80[1] = 2;
            v33 = *(int *)(v32 + 24);
            v34 = *(_QWORD *)(v32 + 40);
            v61 = v34;
            v80[2] = 4;
            v80[3] = 8;
            v80[4] = 2;
            if ( (int)v33 >= 5 )
              v35 = 0;
            else
              v35 = v80[v33];
            v36 = *(_DWORD *)(v32 + 24) == 0;
            Sid = *(void **)(v32 + 184);
            v38 = *(_DWORD *)(v32 + 176);
            v62 = Sid;
            LODWORD(v56) = v35;
            LODWORD(v57) = v38;
            if ( v36 )
              v39 = 0LL;
            else
              v39 = *(unsigned __int16 **)(v32 + 32);
            v40 = *(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, struct ExecutionModel::_ResourceSetInfo *, struct ExecutionModel::IResourceSetCallback *, void *, unsigned __int16 *, PSID, unsigned int, unsigned int, unsigned __int64, bool *, struct ExecutionModel::IResourceSet *, struct ExecutionModel::IResourceSet **))(*(_QWORD *)v30 + 40LL);
            if ( v40 == ExecutionModel::ResourceManager::AcquireResourceSet )
            {
              v41 = (struct IUnknown **)(v22 + 44);
              v42 = ExecutionModel::ResourceManager::AcquireResourceSet(
                      v30,
                      (struct ExecutionModel::_ResourceSetInfo *)v64,
                      v31,
                      0LL,
                      v39,
                      Sid,
                      v38,
                      v35,
                      v34,
                      v28,
                      v29,
                      (struct ExecutionModel::IResourceSet **)v22 + 22);
            }
            else
            {
              v42 = v40(
                      v30,
                      (struct ExecutionModel::_ResourceSetInfo *)v64,
                      v55,
                      0LL,
                      v39,
                      v62,
                      v57,
                      (unsigned int)v56,
                      v61,
                      v28,
                      v29,
                      (struct ExecutionModel::IResourceSet **)v22 + 22);
              v41 = (struct IUnknown **)(v22 + 44);
            }
            v43 = v42;
            if ( v42 < 0 )
            {
              if ( *v41 )
                ATL::AtlComPtrAssign(v41, 0LL);
            }
            else
            {
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
            }
            if ( v29 )
              (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)v29 + 16LL))(v29);
            v44 = v43 < 0;
          }
          if ( v44 )
            goto LABEL_71;
          v45 = v54;
          if ( (v22[7] & 0x19) == 1 )
          {
            v46 = v22[7] ^ (v22[7] ^ (2 * v54)) & 2;
            v22[7] = v46;
            if ( !v45 )
              v22[7] = v46 | 4;
          }
          (*(void (__fastcall **)(_DWORD *, _BOOL8))(*(_QWORD *)v22 + 8LL))(v22, v45);
          v47 = v58 + 80;
          v48 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          v49 = v48;
          if ( v48 )
          {
            v48[2] = v22;
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
            v50 = *(_QWORD **)(v47 + 8);
            v49[1] = v50;
            *v49 = v47;
            *v50 = v49;
            *(_QWORD *)(v47 + 8) = v49;
            ++*(_QWORD *)(v47 + 16);
          }
          v51 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetImpl *__hidden))(*(_QWORD *)v22 + 16LL);
          if ( v51 == ExecutionModel::ResourceSetImpl::Release )
            ExecutionModel::ResourceSetImpl::Release((ExecutionModel::ResourceSetImpl *)v22);
          else
            v51((ExecutionModel::ResourceSetImpl *)v22);
          if ( !v54 )
            v9 = 0;
          *v59 = v9;
          if ( v43 < 0 )
          {
LABEL_71:
            if ( v22 )
            {
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 120LL))(v22);
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 16LL))(v22);
            }
          }
          else
          {
            *v60 = v22;
          }
          return (unsigned int)v43;
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
  }
  return result;
}
