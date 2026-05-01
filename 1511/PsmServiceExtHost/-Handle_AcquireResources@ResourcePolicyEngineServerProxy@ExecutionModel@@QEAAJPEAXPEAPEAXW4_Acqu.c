/*
 * XREFs of ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x180014750
 * Callers:
 *     Srv_AcquireResources @ 0x18001FBC0 (Srv_AcquireResources.c)
 * Callees:
 *     ?_InitBuckets@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x180002CA4 (-_InitBuckets@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U-$hash.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x1800052E0 (-AcquireResourceSetFromSponsorProcess@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetT.c)
 *     ?_Rehash@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x180005458 (-_Rehash@-$_HashTable@PEBGU-$pair@QEBGW4RmResourceSetType@@@utl@@U-$hash@PEBG@2@U-$equal_to@PEBG.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x1800138A0 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@2@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x180014620 (-FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@.c)
 *     ?Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ @ 0x180015C60 (-Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x180019640 (-AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@P.c)
 *     ?AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x1800197A0 (-AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIV.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_DeleteNode@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@V?$allocator@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@1@@Z @ 0x180036E64 (--$_DeleteNode@U-$_HashNode@U-$pair@$$CB_KV-$CComImplPtr@UIResourceSetCallback@ExecutionModel@@V.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_AcquireResources(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        PSID Sid,
        unsigned int a9,
        unsigned int a10,
        int a11,
        int *a12,
        __int64 a13,
        ExecutionModel::ResourceSetServerProxy **a14)
{
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v14; // r13
  struct IUnknown *v15; // rdi
  ExecutionModel::ResourceSetImpl *v16; // r14
  ExecutionModel::ResourceSetServerProxy *v17; // rsi
  int v18; // ecx
  __int64 v19; // rdx
  struct _RTL_CRITICAL_SECTION *v20; // r15
  ExecutionModel::ResourceSetServerProxy *v21; // r13
  _DWORD *v22; // rax
  _DWORD *v23; // rbx
  struct IUnknown *v24; // rax
  struct IUnknown *v25; // rax
  int v26; // r12d
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v27; // rbx
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, _QWORD, __int64, ExecutionModel::ResourceSetServerProxy *, _QWORD, PSID, unsigned int, __int64 *, __int64 *, ExecutionModel::ResourceSetImpl *, ExecutionModel::ResourceSetImpl **); // r12
  int v30; // eax
  ExecutionModel::ResourceSetImpl *v31; // rbx
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 (__fastcall *v34)(ExecutionModel::ResourceSetImpl *, unsigned int); // r12
  _QWORD *v35; // rax
  _QWORD *v36; // r12
  unsigned int v37; // edx
  unsigned __int16 *v38; // r9
  __int64 v39; // r10
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // r9
  unsigned __int64 v43; // r11
  __int64 i; // rcx
  __int64 v45; // r8
  unsigned __int64 v46; // r10
  __int128 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rbx
  char v50; // cl
  ExecutionModel::ResourceSetServerProxy *v51; // r12
  int v52; // ebx
  unsigned int (__fastcall *v53)(ExecutionModel::ResourceSetServerProxy *__hidden); // r12
  unsigned int (__fastcall *v54)(ExecutionModel::ResourceSetServerProxy *__hidden); // rbx
  __int64 (__fastcall *v55)(ExecutionModel::ResourceSetImpl *, unsigned int); // rbx
  __int64 (__fastcall *v56)(ExecutionModel::ResourceSetImpl *, unsigned int); // rbx
  __int64 v58; // rbx
  __int64 (__fastcall *v59)(__int64, _QWORD, __int64, ExecutionModel::ResourceSetServerProxy *, _QWORD, PSID, unsigned int, __int64 *, __int64 *, ExecutionModel::ResourceSetImpl **); // r12
  unsigned __int64 v60; // rax
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v61; // rbx
  __int64 v62; // rbx
  __int64 (__fastcall *v63)(__int64, unsigned int, __int64, __int64, __int64, void *, unsigned int, struct _AppModelActivationId *, int, __int64, __int64, ExecutionModel::ResourceSetImpl **); // r12
  void *v64; // rax
  ExecutionModel::ResourceSetImpl *v65; // r12
  struct _RTL_CRITICAL_SECTION *v66; // rbx
  __int64 v67; // [rsp+68h] [rbp-89h] BYREF
  ExecutionModel::ResourceSetImpl *v68; // [rsp+70h] [rbp-81h] BYREF
  ExecutionModel::ResourceSetImpl *v69; // [rsp+78h] [rbp-79h] BYREF
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v70; // [rsp+80h] [rbp-71h]
  struct IUnknown *v71; // [rsp+88h] [rbp-69h] BYREF
  __int64 v72; // [rsp+90h] [rbp-61h] BYREF
  __int64 v73; // [rsp+98h] [rbp-59h] BYREF
  __int64 v74; // [rsp+A0h] [rbp-51h]
  __int64 v75; // [rsp+A8h] [rbp-49h]
  ExecutionModel::ResourceSetServerProxy *v76; // [rsp+B0h] [rbp-41h]
  __int64 v77; // [rsp+B8h] [rbp-39h]
  struct IUnknown *v78[3]; // [rsp+C0h] [rbp-31h] BYREF
  int ResourceSetById; // [rsp+128h] [rbp+37h]

  v14 = g_pResourcePolicyEngineServerProxy;
  v15 = 0LL;
  v70 = g_pResourcePolicyEngineServerProxy;
  v76 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  v72 = 0LL;
  if ( a4 >= 5 )
    return 2147942487LL;
  if ( a5 == 57 )
    return 2147942487LL;
  if ( !a7 )
    return 2147942487LL;
  v18 = *(_DWORD *)a7;
  if ( *(int *)a7 > 5 )
    return 2147942487LL;
  v19 = *(_QWORD *)(a7 + 8);
  if ( !v19 )
    return 2147942487LL;
  if ( !a12 || *a12 >= 3 || !a14 )
    return 2147942487LL;
  v75 = *(_QWORD *)(a7 + 16);
  LODWORD(v73) = v18;
  v74 = v19;
  if ( v18 )
  {
    if ( Sid && (a9 < 0xC || a9 != RtlLengthSid(Sid) || !RtlValidSid(Sid)) )
    {
      ResourceSetById = -2147024809;
      goto LABEL_109;
    }
  }
  else if ( Sid || a10 )
  {
    return 2147942487LL;
  }
  v20 = (struct _RTL_CRITICAL_SECTION *)((char *)v14 + 16);
  LODWORD(v67) = *a12;
  *a12 = 0;
  *a14 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v14 + 16));
  v78[1] = 0LL;
  if ( !v14 )
  {
    ResourceSetById = -2147024809;
    goto LABEL_133;
  }
  v78[2] = 0LL;
  v21 = 0LL;
  v22 = malloc(0x38uLL);
  v23 = v22;
  if ( !v22 )
  {
    ResourceSetById = -2147024882;
    goto LABEL_133;
  }
  *(_QWORD *)v22 = &ExecutionModel::ResourceSetServerProxy::`vftable';
  v22[2] = 0;
  *((_QWORD *)v22 + 2) = 0LL;
  *((_QWORD *)v22 + 3) = 0LL;
  *((_QWORD *)v22 + 4) = 0LL;
  *((_QWORD *)v22 + 5) = 0LL;
  *((_WORD *)v22 + 24) = 0;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 8LL))(v22);
  ResourceSetById = 0;
  if ( a2 )
  {
    if ( *((struct ExecutionModel::ResourcePolicyEngineServerProxy **)v23 + 3) != v70 )
    {
      (*(void (__fastcall **)(struct ExecutionModel::ResourcePolicyEngineServerProxy *))(*(_QWORD *)v70 + 8LL))(v70);
      v24 = (struct IUnknown *)*((_QWORD *)v23 + 3);
      v71 = v24;
      if ( v24 )
        ((void (__fastcall *)(struct IUnknown *))v24->lpVtbl->Release)(v71);
      *((_QWORD *)v23 + 3) = v70;
    }
    if ( *((_QWORD *)v23 + 4) != a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v25 = (struct IUnknown *)*((_QWORD *)v23 + 4);
      v71 = v25;
      if ( v25 )
        ((void (__fastcall *)(struct IUnknown *))v25->lpVtbl->Release)(v71);
      *((_QWORD *)v23 + 4) = a2;
    }
    if ( a3 )
    {
      *((_QWORD *)v23 + 5) = *a3;
      *((_BYTE *)v23 + 48) = 1;
    }
    v21 = (ExecutionModel::ResourceSetServerProxy *)v23;
    v23 = 0LL;
    v26 = 0;
  }
  else
  {
    v26 = -2147024882;
    ResourceSetById = -2147024882;
  }
  if ( v23 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 16LL))(v23);
    v26 = ResourceSetById;
  }
  if ( v26 < 0 )
    goto LABEL_133;
  v17 = v21;
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      if ( !a13 )
      {
        ResourceSetById = -2147024809;
        LeaveCriticalSection(v20);
        goto LABEL_108;
      }
      v27 = v70;
      ResourceSetById = ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById(
                          (__int64)v70,
                          a13,
                          &v68,
                          &v72);
      if ( ResourceSetById >= 0 )
      {
        v28 = *((_QWORD *)v27 + 12);
        v29 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, ExecutionModel::ResourceSetServerProxy *, _QWORD, PSID, unsigned int, __int64 *, __int64 *, ExecutionModel::ResourceSetImpl *, ExecutionModel::ResourceSetImpl **))(*(_QWORD *)v28 + 56LL);
        v16 = v68;
        if ( (char *)v29 == (char *)ExecutionModel::ResourcePolicyEngine::AcquireTransitionalResourceSet )
          v30 = ExecutionModel::ResourcePolicyEngine::AcquireTransitionalResourceSet(
                  v28,
                  a5,
                  a6,
                  v21,
                  0LL,
                  Sid,
                  a10,
                  &v73,
                  &v67,
                  v68,
                  &v69);
        else
          v30 = v29(v28, a5, a6, v21, 0LL, Sid, a10, &v73, &v67, v68, &v69);
        goto LABEL_37;
      }
LABEL_117:
      LeaveCriticalSection(v20);
      v16 = v68;
      goto LABEL_67;
    }
    if ( a4 != 2 )
    {
      ResourceSetById = -2147467259;
      LeaveCriticalSection(v20);
      goto LABEL_108;
    }
    v61 = v70;
    if ( a13 )
    {
      ResourceSetById = ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById(
                          (__int64)v70,
                          a13,
                          &v68,
                          &v72);
      if ( ResourceSetById < 0 )
        goto LABEL_117;
      v16 = v68;
    }
    v62 = *((_QWORD *)v61 + 12);
    v63 = *(__int64 (__fastcall **)(__int64, unsigned int, __int64, __int64, __int64, void *, unsigned int, struct _AppModelActivationId *, int, __int64, __int64, ExecutionModel::ResourceSetImpl **))(*(_QWORD *)v62 + 40LL);
    if ( (char *)v63 == (char *)ExecutionModel::ResourcePolicyEngine::AcquireResourceSetFromSponsorProcess )
      v30 = ExecutionModel::ResourcePolicyEngine::AcquireResourceSetFromSponsorProcess(
              v62,
              a5,
              a6,
              (__int64)v21,
              0LL,
              Sid,
              a10,
              (struct _AppModelActivationId *)&v73,
              a11,
              (__int64)&v67,
              (__int64)v16,
              &v69);
    else
      v30 = v63(
              v62,
              a5,
              a6,
              (__int64)v21,
              0LL,
              Sid,
              a10,
              (struct _AppModelActivationId *)&v73,
              a11,
              (__int64)&v67,
              (__int64)v16,
              &v69);
  }
  else
  {
    v58 = *((_QWORD *)v70 + 12);
    v59 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, ExecutionModel::ResourceSetServerProxy *, _QWORD, PSID, unsigned int, __int64 *, __int64 *, ExecutionModel::ResourceSetImpl **))(*(_QWORD *)v58 + 32LL);
    if ( (char *)v59 == (char *)ExecutionModel::ResourcePolicyEngine::AcquireResourceSet )
      v30 = ExecutionModel::ResourcePolicyEngine::AcquireResourceSet(v58, a5, a6, v21, 0LL, Sid, a10, &v73, &v67, &v69);
    else
      v30 = v59(v58, a5, a6, v21, 0LL, Sid, a10, &v73, &v67, &v69);
  }
LABEL_37:
  ResourceSetById = v30;
  if ( v30 >= 0 )
  {
    v31 = v69;
    if ( v21 )
      (*(void (__fastcall **)(ExecutionModel::ResourceSetServerProxy *))(*(_QWORD *)v21 + 8LL))(v21);
    if ( !v31 )
    {
      ResourceSetById = -2147024809;
      v52 = -2147024809;
LABEL_130:
      v51 = 0LL;
      goto LABEL_61;
    }
    if ( v21 )
    {
      ResourceSetById = 0;
      (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v31 + 8LL))(v31);
      if ( *((ExecutionModel::ResourceSetImpl **)v21 + 2) != v31 )
      {
        (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v31 + 8LL))(v31);
        v33 = *((_QWORD *)v21 + 2);
        v72 = v33;
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v72);
        *((_QWORD *)v21 + 2) = v31;
      }
      v34 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *, unsigned int))(*(_QWORD *)v31 + 16LL);
      if ( v34 == ExecutionModel::ResourceSetImpl::Release )
        ExecutionModel::ResourceSetImpl::Release(v31, v32);
      else
        ((void (__fastcall *)(ExecutionModel::ResourceSetImpl *))v34)(v31);
      v68 = (struct ExecutionModel::ResourcePolicyEngineServerProxy *)((char *)v70 + 56);
      v35 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v36 = v35;
      if ( !v35 )
        goto LABEL_129;
      v35[3] = v21;
      v35[4] = v21;
      (*(void (__fastcall **)(ExecutionModel::ResourceSetServerProxy *))(*(_QWORD *)v21 + 8LL))(v21);
      v37 = 0;
      v38 = (unsigned __int16 *)(v36 + 3);
      v39 = 0LL;
      v40 = 4LL;
      if ( v36 + 3 > v36 + 4 )
        v40 = 0LL;
      if ( v40 )
      {
        do
        {
          v41 = *v38++;
          ++v39;
          v37 = (1025 * (v37 + v41)) ^ ((1025 * (v37 + v41)) >> 6);
        }
        while ( v39 != v40 );
      }
      v42 = (__int64)v68;
      v47 = v37;
      LODWORD(v47) = 32769 * (((unsigned int)(9 * v47) >> 11) ^ (9 * v47));
      v77 = v47;
      v43 = v47;
      v36[2] = v47;
      i = *(unsigned __int8 *)(v42 + 32);
      v45 = *(_QWORD *)(v42 + 16);
      v46 = 8LL << i;
      *(_QWORD *)&v47 = v47 & ((8LL << i) - 1);
      if ( v45 )
      {
        v48 = 2 * v47;
        if ( *(_QWORD *)(v45 + 8 * v48) )
        {
          *((_QWORD *)&v47 + 1) = *(_QWORD *)(v45 + 8 * v48);
          for ( i = **(_QWORD **)(v45 + 8 * v48 + 8);
                *((_QWORD *)&v47 + 1) != i;
                *((_QWORD *)&v47 + 1) = **((_QWORD **)&v47 + 1) )
          {
            v60 = *(_QWORD *)(*((_QWORD *)&v47 + 1) + 16LL);
            if ( v60 >= v43 )
            {
              if ( v60 > v43 )
                break;
              if ( v36[3] == *(_QWORD *)(*((_QWORD *)&v47 + 1) + 24LL) )
                goto LABEL_128;
            }
          }
        }
      }
      else
      {
        if ( v46 > 0xFFFFFFFFFFFFFFFLL )
        {
          v64 = 0LL;
        }
        else
        {
          v64 = operator new(16 * v46, (const struct std::nothrow_t *)&std::nothrow);
          v42 = (__int64)v68;
        }
        *(_QWORD *)(v42 + 16) = v64;
        if ( !v64 )
        {
LABEL_128:
          utl::_ContainerBase<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>,utl::allocator<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>>>::_DeleteNode<utl::_HashNode<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>>>(
            i,
            v36);
LABEL_129:
          v52 = -2147024882;
          ResourceSetById = -2147024882;
          goto LABEL_130;
        }
        utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_InitBuckets(v42);
        v42 = (__int64)v68;
        *((_QWORD *)&v47 + 1) = 0LL;
      }
      v49 = *(_QWORD *)(v42 + 16) + 16 * (v36[2] & ((8LL << *(_BYTE *)(v42 + 32)) - 1));
      if ( *((_QWORD *)&v47 + 1) )
      {
        if ( *(_QWORD *)v49 == *((_QWORD *)&v47 + 1) )
        {
          *(_QWORD *)v49 = v36;
          goto LABEL_58;
        }
        if ( **(_QWORD **)(v49 + 8) != *((_QWORD *)&v47 + 1) )
          goto LABEL_58;
      }
      else
      {
        *(_QWORD *)v49 = v36;
        *((_QWORD *)&v47 + 1) = v42;
      }
      *(_QWORD *)(v49 + 8) = v36;
LABEL_58:
      *(_QWORD *)&v47 = *(_QWORD *)(*((_QWORD *)&v47 + 1) + 8LL);
      v36[1] = v47;
      *v36 = *((_QWORD *)&v47 + 1);
      *(_QWORD *)v47 = v36;
      *(_QWORD *)(*((_QWORD *)&v47 + 1) + 8LL) = v36;
      ++*(_QWORD *)(v42 + 24);
      v50 = *(_BYTE *)(v42 + 32);
      if ( (unsigned __int64)*(unsigned __int8 *)(v42 + 33) < *(_QWORD *)(v42 + 24) >> v50 )
        utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_Rehash(
          v42,
          v50 + 1);
      v51 = v21;
      v76 = v21;
      v52 = 0;
LABEL_61:
      if ( v21 )
      {
        v53 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetServerProxy *__hidden))(*(_QWORD *)v21 + 16LL);
        if ( v53 == ExecutionModel::ResourceSetServerProxy::Release )
          ExecutionModel::ResourceSetServerProxy::Release(v21);
        else
          v53(v21);
        v51 = v76;
      }
      if ( v52 >= 0 )
      {
        LeaveCriticalSection(v20);
        *a12 = v67;
        *a14 = v51;
        goto LABEL_67;
      }
      goto LABEL_133;
    }
    ResourceSetById = -2147024809;
  }
LABEL_133:
  LeaveCriticalSection(v20);
LABEL_67:
  if ( ResourceSetById < 0 )
  {
LABEL_108:
    v14 = v70;
LABEL_109:
    v65 = v69;
    if ( v69 )
    {
      v66 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v14 + 12);
      v71 = 0LL;
      EnterCriticalSection(v66 + 1);
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        v78,
        (__int64)v65);
      if ( v78[0] )
      {
        ATL::AtlComPtrAssign(&v71, v78[0]);
        v15 = v71;
      }
      ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(v78);
      if ( (*(int (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v65 + 120LL))(v65) >= 0
        && v15[21].lpVtbl )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)&v15[21], 0LL);
      }
      LeaveCriticalSection(v66 + 1);
      ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v71);
    }
  }
  if ( v17 )
  {
    v54 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetServerProxy *__hidden))(*(_QWORD *)v17 + 16LL);
    if ( v54 == ExecutionModel::ResourceSetServerProxy::Release )
      ExecutionModel::ResourceSetServerProxy::Release(v17);
    else
      v54(v17);
  }
  if ( v16 )
  {
    v55 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *, unsigned int))(*(_QWORD *)v16 + 16LL);
    if ( v55 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(v16, v19);
    else
      ((void (__fastcall *)(ExecutionModel::ResourceSetImpl *))v55)(v16);
  }
  if ( v69 )
  {
    v56 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *, unsigned int))(*(_QWORD *)v69 + 16LL);
    if ( v56 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(v69, v19);
    else
      ((void (__fastcall *)(ExecutionModel::ResourceSetImpl *))v56)(v69);
  }
  return (unsigned int)ResourceSetById;
}
