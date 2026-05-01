/*
 * XREFs of ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x1800156E0
 * Callers:
 *     Srv_AcquireResources @ 0x180017190 (Srv_AcquireResources.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?_InitBuckets@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEAAXXZ @ 0x18000A8F0 (-_InitBuckets@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U-$hash.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x180014A00 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@2@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@utl@@@Z @ 0x1800153E0 (-FindResourceSetById@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJ_KPEAPEAUIResourceSet@.c)
 *     ?Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ @ 0x180016AE0 (-Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU82@@Z @ 0x1800176F0 (-AcquireTransitionalResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@P.c)
 *     ?AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAX3KPEBU_AppModelActivationId@@PEAW4_ResourcePendingReason@@PEAPEAUIResourceSet@2@@Z @ 0x1800177E0 (-AcquireResourceSet@ResourcePolicyEngine@ExecutionModel@@UEAAJW4RmResourceSetType@@PEAT_RM_ACTIV.c)
 *     ?_Rehash@?$_HashTable@_KU?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@2@$0A@@utl@@AEAA_NE@Z @ 0x180019458 (-_Rehash@-$_HashTable@_KU-$pair@$$CB_KV-$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VReso.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_DeleteNode@U?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@V?$allocator@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@$$CB_KV?$CComImplPtr@UIResourceSetCallback@ExecutionModel@@VResourceSetServerProxy@2@@@@utl@@@1@@Z @ 0x18002F6B0 (--$_DeleteNode@U-$_HashNode@U-$pair@$$CB_KV-$CComImplPtr@UIResourceSetCallback@ExecutionModel@@V.c)
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
        int a10,
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
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, _QWORD, __int64, ExecutionModel::ResourceSetServerProxy *, _QWORD, PSID, int, __int64 *, __int64 *, ExecutionModel::ResourceSetImpl **); // r12
  int v29; // eax
  ExecutionModel::ResourceSetImpl *v30; // rbx
  unsigned __int64 v31; // rax
  __int64 (__fastcall *v32)(ExecutionModel::ResourceSetImpl *); // r12
  _QWORD *v33; // rax
  _QWORD *v34; // r12
  unsigned __int64 v35; // r8
  unsigned __int16 *v36; // r9
  __int64 v37; // r10
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r9
  _QWORD *v41; // rdx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // r10
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rbx
  _QWORD *v49; // rax
  int v50; // ecx
  ExecutionModel::ResourceSetServerProxy *v51; // r12
  int v52; // ebx
  unsigned int (__fastcall *v53)(ExecutionModel::ResourceSetServerProxy *__hidden); // r12
  unsigned int (__fastcall *v54)(ExecutionModel::ResourceSetServerProxy *__hidden); // rbx
  __int64 (__fastcall *v55)(ExecutionModel::ResourceSetImpl *); // rbx
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v57; // rbx
  __int64 v58; // rbx
  __int64 (__fastcall *v59)(__int64, _QWORD, __int64, ExecutionModel::ResourceSetServerProxy *, _QWORD, PSID, int, __int64 *, __int64 *, ExecutionModel::ResourceSetImpl *, ExecutionModel::ResourceSetImpl **); // r12
  __int64 (__fastcall *v60)(ExecutionModel::ResourceSetImpl *); // rbx
  _QWORD *v61; // r8
  unsigned __int64 v62; // rax
  void *v63; // rax
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v64; // rbx
  ExecutionModel::ResourceSetImpl *v65; // r12
  struct _RTL_CRITICAL_SECTION *v66; // rbx
  __int64 v67; // [rsp+68h] [rbp-89h] BYREF
  ExecutionModel::ResourceSetImpl *v68; // [rsp+70h] [rbp-81h] BYREF
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v69; // [rsp+78h] [rbp-79h]
  ExecutionModel::ResourceSetImpl *v70; // [rsp+80h] [rbp-71h] BYREF
  struct IUnknown *v71; // [rsp+88h] [rbp-69h] BYREF
  unsigned __int64 v72; // [rsp+90h] [rbp-61h] BYREF
  __int64 v73; // [rsp+98h] [rbp-59h] BYREF
  __int64 v74; // [rsp+A0h] [rbp-51h]
  __int64 v75; // [rsp+A8h] [rbp-49h]
  ExecutionModel::ResourceSetServerProxy *v76; // [rsp+B0h] [rbp-41h]
  struct IUnknown *v77[4]; // [rsp+B8h] [rbp-39h] BYREF
  int ResourceSetById; // [rsp+128h] [rbp+37h]

  v14 = g_pResourcePolicyEngineServerProxy;
  v15 = 0LL;
  v69 = g_pResourcePolicyEngineServerProxy;
  v76 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v70 = 0LL;
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
      goto LABEL_107;
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
  v77[2] = 0LL;
  if ( !v14 )
  {
    ResourceSetById = -2147024809;
    goto LABEL_131;
  }
  v77[1] = 0LL;
  v21 = 0LL;
  v22 = malloc(0x38uLL);
  v23 = v22;
  if ( !v22 )
  {
    ResourceSetById = -2147024882;
    goto LABEL_131;
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
    if ( *((struct ExecutionModel::ResourcePolicyEngineServerProxy **)v23 + 3) != v69 )
    {
      (*(void (__fastcall **)(struct ExecutionModel::ResourcePolicyEngineServerProxy *))(*(_QWORD *)v69 + 8LL))(v69);
      v24 = (struct IUnknown *)*((_QWORD *)v23 + 3);
      v71 = v24;
      if ( v24 )
        ((void (__fastcall *)(struct IUnknown *))v24->lpVtbl->Release)(v71);
      *((_QWORD *)v23 + 3) = v69;
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
    goto LABEL_131;
  v17 = v21;
  if ( !a4 )
  {
    v27 = *((_QWORD *)v69 + 12);
    v28 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, ExecutionModel::ResourceSetServerProxy *, _QWORD, PSID, int, __int64 *, __int64 *, ExecutionModel::ResourceSetImpl **))(*(_QWORD *)v27 + 32LL);
    if ( (char *)v28 == (char *)ExecutionModel::ResourcePolicyEngine::AcquireResourceSet )
      v29 = ExecutionModel::ResourcePolicyEngine::AcquireResourceSet(v27, a5, a6, v21, 0LL, Sid, a10, &v73, &v67, &v70);
    else
      v29 = v28(v27, a5, a6, v21, 0LL, Sid, a10, &v73, &v67, &v70);
    goto LABEL_34;
  }
  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      ResourceSetById = -2147467259;
      LeaveCriticalSection(v20);
      goto LABEL_106;
    }
    v64 = v69;
    if ( a13 )
    {
      ResourceSetById = ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById(
                          (__int64)v69,
                          a13,
                          &v68,
                          &v72);
      if ( ResourceSetById < 0 )
      {
LABEL_115:
        LeaveCriticalSection(v20);
        v16 = v68;
        goto LABEL_64;
      }
      v16 = v68;
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, ExecutionModel::ResourceSetServerProxy *, _QWORD, PSID, int, __int64 *, int, __int64 *, ExecutionModel::ResourceSetImpl *, ExecutionModel::ResourceSetImpl **))(**((_QWORD **)v64 + 12) + 40LL))(
            *((_QWORD *)v64 + 12),
            a5,
            a6,
            v21,
            0LL,
            Sid,
            a10,
            &v73,
            a11,
            &v67,
            v16,
            &v70);
    goto LABEL_34;
  }
  if ( !a13 )
  {
    ResourceSetById = -2147024809;
    LeaveCriticalSection(v20);
    goto LABEL_106;
  }
  v57 = v69;
  ResourceSetById = ExecutionModel::ResourcePolicyEngineServerProxy::FindResourceSetById((__int64)v69, a13, &v68, &v72);
  if ( ResourceSetById < 0 )
    goto LABEL_115;
  v58 = *((_QWORD *)v57 + 12);
  v59 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, ExecutionModel::ResourceSetServerProxy *, _QWORD, PSID, int, __int64 *, __int64 *, ExecutionModel::ResourceSetImpl *, ExecutionModel::ResourceSetImpl **))(*(_QWORD *)v58 + 56LL);
  v16 = v68;
  if ( (char *)v59 == (char *)ExecutionModel::ResourcePolicyEngine::AcquireTransitionalResourceSet )
    v29 = ExecutionModel::ResourcePolicyEngine::AcquireTransitionalResourceSet(
            v58,
            a5,
            a6,
            v21,
            0LL,
            Sid,
            a10,
            &v73,
            &v67,
            v68,
            &v70);
  else
    v29 = v59(v58, a5, a6, v21, 0LL, Sid, a10, &v73, &v67, v68, &v70);
LABEL_34:
  ResourceSetById = v29;
  if ( v29 >= 0 )
  {
    v30 = v70;
    if ( v21 )
      (*(void (__fastcall **)(ExecutionModel::ResourceSetServerProxy *))(*(_QWORD *)v21 + 8LL))(v21);
    if ( !v30 )
    {
      ResourceSetById = -2147024809;
      v52 = -2147024809;
      goto LABEL_128;
    }
    if ( v21 )
    {
      ResourceSetById = 0;
      (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v30 + 8LL))(v30);
      if ( *((ExecutionModel::ResourceSetImpl **)v21 + 2) != v30 )
      {
        (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v30 + 8LL))(v30);
        v31 = *((_QWORD *)v21 + 2);
        v72 = v31;
        if ( v31 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v31 + 16LL))(v72);
        *((_QWORD *)v21 + 2) = v30;
      }
      v32 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v30 + 16LL);
      if ( v32 == ExecutionModel::ResourceSetImpl::Release )
        ExecutionModel::ResourceSetImpl::Release(v30);
      else
        v32(v30);
      v68 = (struct ExecutionModel::ResourcePolicyEngineServerProxy *)((char *)v69 + 56);
      v33 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v34 = v33;
      if ( v33 )
      {
        v33[3] = v21;
        v33[4] = v21;
        (*(void (__fastcall **)(ExecutionModel::ResourceSetServerProxy *))(*(_QWORD *)v21 + 8LL))(v21);
        v35 = 0LL;
        v36 = (unsigned __int16 *)(v34 + 3);
        v37 = 0LL;
        v38 = 4LL;
        if ( v34 + 3 > v34 + 4 )
          v38 = 0LL;
        if ( v38 )
        {
          do
          {
            v39 = *v36++;
            ++v37;
            v35 = (1025 * (v35 + v39)) ^ ((1025 * (v35 + v39)) >> 6);
          }
          while ( v37 != v38 );
        }
        v40 = (__int64)v68;
        v41 = 0LL;
        v42 = 32769 * ((9 * v35) ^ ((9 * v35) >> 11));
        v34[2] = v42;
        v43 = *(unsigned __int8 *)(v40 + 32);
        v44 = 8LL << v43;
        v72 = v42;
        v45 = v42 & ((8LL << v43) - 1);
        v46 = *(_QWORD *)(v40 + 16);
        if ( v46 )
        {
          v47 = 2 * v45;
          if ( *(_QWORD *)(v46 + 8 * v47) )
          {
            v41 = *(_QWORD **)(v46 + 8 * v47);
            v61 = **(_QWORD ***)(v46 + 8 * v47 + 8);
            if ( v41 != v61 )
            {
              v43 = v72;
              do
              {
                v62 = v41[2];
                if ( v62 > v72 )
                  break;
                if ( v62 >= v72 && v34[3] == v41[3] )
                  goto LABEL_126;
                v41 = (_QWORD *)*v41;
              }
              while ( v41 != v61 );
            }
          }
LABEL_52:
          v48 = *(_QWORD *)(v40 + 16) + 16 * (v34[2] & ((8LL << *(_BYTE *)(v40 + 32)) - 1));
          if ( v41 )
          {
            if ( *(_QWORD **)v48 == v41 )
            {
              *(_QWORD *)v48 = v34;
              goto LABEL_55;
            }
            if ( **(_QWORD ***)(v48 + 8) != v41 )
              goto LABEL_55;
          }
          else
          {
            *(_QWORD *)v48 = v34;
            v41 = (_QWORD *)v40;
          }
          *(_QWORD *)(v48 + 8) = v34;
LABEL_55:
          v49 = (_QWORD *)v41[1];
          v34[1] = v49;
          *v34 = v41;
          *v49 = v34;
          v41[1] = v34;
          ++*(_QWORD *)(v40 + 24);
          v50 = *(unsigned __int8 *)(v40 + 32);
          if ( (unsigned __int64)*(unsigned __int8 *)(v40 + 33) < *(_QWORD *)(v40 + 24) >> v50 )
            utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>>,0>::_Rehash(
              v40,
              (unsigned int)(v50 + 1));
          v51 = v21;
          v76 = v21;
          v52 = 0;
LABEL_58:
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
            goto LABEL_64;
          }
          goto LABEL_131;
        }
        if ( v44 > 0xFFFFFFFFFFFFFFFLL )
        {
          v63 = 0LL;
        }
        else
        {
          v63 = operator new(16 * v44, (const struct std::nothrow_t *)&std::nothrow);
          v40 = (__int64)v68;
        }
        *(_QWORD *)(v40 + 16) = v63;
        if ( v63 )
        {
          utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_InitBuckets(v40);
          v40 = (__int64)v68;
          v41 = 0LL;
          goto LABEL_52;
        }
LABEL_126:
        utl::_ContainerBase<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>,utl::allocator<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>>>::_DeleteNode<utl::_HashNode<utl::pair<unsigned __int64 const,CComImplPtr<ExecutionModel::IResourceSetCallback,ExecutionModel::ResourceSetServerProxy>>>>(
          v43,
          v34);
      }
      v52 = -2147024882;
      ResourceSetById = -2147024882;
LABEL_128:
      v51 = 0LL;
      goto LABEL_58;
    }
    ResourceSetById = -2147024809;
  }
LABEL_131:
  LeaveCriticalSection(v20);
LABEL_64:
  if ( ResourceSetById < 0 )
  {
LABEL_106:
    v14 = v69;
LABEL_107:
    v65 = v70;
    if ( v70 )
    {
      v66 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v14 + 12);
      v71 = 0LL;
      EnterCriticalSection(v66 + 1);
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        v77,
        (__int64)v65);
      if ( v77[0] )
      {
        ATL::AtlComPtrAssign(&v71, v77[0]);
        v15 = v71;
      }
      ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>((ExecutionModel::ResourceSetImpl **)v77);
      if ( (*(int (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v65 + 120LL))(v65) >= 0
        && v15[20].lpVtbl )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)&v15[20], 0LL);
      }
      LeaveCriticalSection(v66 + 1);
      ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>((ExecutionModel::ResourceSetImpl **)&v71);
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
    v60 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v16 + 16LL);
    if ( v60 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(v16);
    else
      v60(v16);
  }
  if ( v70 )
  {
    v55 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v70 + 16LL);
    if ( v55 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(v70);
    else
      v55(v70);
  }
  return (unsigned int)ResourceSetById;
}
