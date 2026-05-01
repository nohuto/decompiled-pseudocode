/*
 * XREFs of ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000C690
 * Callers:
 *     ?CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000B380 (-CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INST.c)
 * Callees:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180003050 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?ReassignResources@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAV12@@Z @ 0x18000332C (-ReassignResources@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_S.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@W44PendType@2@PEA_N5PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003574 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON@@@Z @ 0x18000382C (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180003F40 (-OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_BUFFER@@@Z @ 0x180004CC0 (-RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_.c)
 *     RmpActivityHostQueryCommitDebt @ 0x180005A94 (RmpActivityHostQueryCommitDebt.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     RmpPolicyGetCurrentUsageLimits @ 0x180006F48 (RmpPolicyGetCurrentUsageLimits.c)
 *     RmpActivityHostCheckQueueWork @ 0x18000ADC0 (RmpActivityHostCheckQueueWork.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000B3D0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18000ED00 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x18000F0E0 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Contain.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18001FC64 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckAllPendingRequests(ExecutionModel::BaseResourceSet *this)
{
  __int64 v1; // r9
  ExecutionModel::BaseResourceSet *v2; // r8
  unsigned int *v3; // r13
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *i; // rax
  __int64 v7; // rcx
  int v8; // r8d
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  unsigned int (__fastcall *v12)(ExecutionModel::ResourceSet *__hidden); // rsi
  _QWORD *v13; // rbx
  struct _RM_POLICY_REQUEST_BUFFER *v14; // rsi
  unsigned int v15; // r12d
  void *(__fastcall *v17)(ExecutionModel::ResourceSet *__hidden, unsigned int); // rsi
  unsigned int *v18; // rdi
  ExecutionModel::BaseResourceSet *v19; // rcx
  __int64 v20; // r12
  const GUID *v21; // r8
  const GUID *v22; // r9
  ExecutionModel::BaseResourceSet *v23; // rcx
  __int64 (__fastcall *v24)(ExecutionModel::ResourceSet *); // r12
  unsigned int (__fastcall *v25)(ExecutionModel::ResourceSet *__hidden); // r12
  _QWORD *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rax
  __int64 (__fastcall *v32)(ExecutionModel::BaseResourceSet *); // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rax
  __int64 (__fastcall *v37)(ExecutionModel::BaseResourceSet *); // r12
  _QWORD *v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  __int64 (__fastcall *v42)(ExecutionModel::BaseResourceSet *); // rbx
  _QWORD *v43; // rcx
  __int64 v44; // rax
  __int64 (__fastcall *v45)(ExecutionModel::BaseResourceSet *); // rbx
  int v46; // [rsp+58h] [rbp-B0h]
  char v47; // [rsp+5Ch] [rbp-ACh] BYREF
  char v48; // [rsp+5Dh] [rbp-ABh] BYREF
  _QWORD v49[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+70h] [rbp-98h]
  __int64 v51; // [rsp+78h] [rbp-90h]
  ExecutionModel::BaseResourceSet *v52; // [rsp+80h] [rbp-88h]
  _QWORD v53[3]; // [rsp+88h] [rbp-80h] BYREF
  ExecutionModel::BaseResourceSet *v54; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int *v55; // [rsp+B0h] [rbp-58h] BYREF
  _OWORD v56[3]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v57[128]; // [rsp+E8h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+168h] [rbp+60h] BYREF
  unsigned int *v59; // [rsp+188h] [rbp+80h]
  __int64 v60; // [rsp+190h] [rbp+88h]
  _QWORD *v61; // [rsp+198h] [rbp+90h]
  __int64 v62; // [rsp+1A0h] [rbp+98h]
  char *v63; // [rsp+1A8h] [rbp+A0h]
  __int64 v64; // [rsp+1B0h] [rbp+A8h]
  unsigned int *v65; // [rsp+1B8h] [rbp+B0h]
  __int64 v66; // [rsp+1C0h] [rbp+B8h]
  char *v67; // [rsp+1C8h] [rbp+C0h]
  __int64 v68; // [rsp+1D0h] [rbp+C8h]
  unsigned int **v69; // [rsp+1D8h] [rbp+D0h]
  __int64 v70; // [rsp+1E0h] [rbp+D8h]

  v1 = *((_QWORD *)this + 3);
  v2 = this;
  v3 = 0LL;
  v53[0] = v53;
  v53[1] = v53;
  v52 = this;
  v46 = 0;
  v53[2] = 0LL;
  LODWORD(v51) = 0;
  if ( v1 )
  {
    v4 = *((int *)this + 4);
    if ( (_DWORD)v4 == 1 )
    {
      v5 = (_QWORD *)(*(_QWORD *)(v1 + 8 * v4 + 176) + 160LL);
      for ( i = (_QWORD *)*v5; ; i = (_QWORD *)*i )
      {
        if ( i == v5 )
        {
          v2 = v52;
          goto LABEL_10;
        }
        v7 = i[2];
        if ( (*(_BYTE *)(v7 + 1434) & 8) != 0 )
          break;
        v8 = *(_DWORD *)(v7 + 1408);
        if ( v8 == 11 || v8 == 55 )
          break;
      }
      v2 = v52;
      LODWORD(v51) = *(_DWORD *)(v1 + 80);
    }
    else
    {
LABEL_10:
      LODWORD(v51) = 0;
    }
  }
  v9 = (_QWORD *)((char *)v2 + 160);
  v10 = (_QWORD *)*((_QWORD *)v2 + 20);
  while ( v10 != v9 )
  {
    v11 = v10[2];
    if ( v11 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(v10[2]);
    if ( *(_DWORD *)(v11 + 1352) == 1 )
    {
      v46 = ExecutionModel::BaseResourceSet::AddToListPrioritized(v53, v11);
      v15 = v46;
      if ( v46 < 0 )
      {
        v32 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v11 + 16LL);
        if ( (char *)v32 == (char *)ExecutionModel::ResourceSet::Release )
        {
          ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v11);
        }
        else if ( v32 == ExecutionModel::BaseResourceSet::Release )
        {
          ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v11);
        }
        else if ( (char *)v32 == (char *)ExecutionModel::ExternalResourceSet::Release )
        {
          ExecutionModel::ExternalResourceSet::Release((ExecutionModel::ExternalResourceSet *)v11);
        }
        else
        {
          v32((ExecutionModel::BaseResourceSet *)v11);
        }
        goto LABEL_24;
      }
    }
    v12 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v11 + 16LL);
    if ( v12 != ExecutionModel::ResourceSet::Release )
    {
      v12((ExecutionModel::ResourceSet *)v11);
      goto LABEL_18;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 156), 0xFFFFFFFF) != 1 )
      goto LABEL_18;
    v17 = *(void *(__fastcall **)(ExecutionModel::ResourceSet *__hidden, unsigned int))(*(_QWORD *)v11 + 24LL);
    if ( v17 == ExecutionModel::ResourceSet::`scalar deleting destructor' )
    {
      ExecutionModel::ResourceSet::`scalar deleting destructor'((ExecutionModel::ResourceSet *)v11, 1u);
      v10 = (_QWORD *)*v10;
    }
    else
    {
      v17((ExecutionModel::ResourceSet *)v11, 1u);
LABEL_18:
      v10 = (_QWORD *)*v10;
    }
  }
  v13 = (_QWORD *)v53[0];
  if ( (_QWORD *)v53[0] != v53 )
  {
    memset_0(v57, 0, 0x78uLL);
    RmpPolicyGetCurrentUsageLimits((__int64)RmSvcGlobals + 208, (__int64)RmSvcGlobals + 264, (__int64)v57, v56);
    v13 = (_QWORD *)v53[0];
  }
  v14 = (struct _RM_POLICY_REQUEST_BUFFER *)((char *)RmSvcGlobals + 304);
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v13 == v53 )
        goto LABEL_23;
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        &v54,
        v13[2]);
      v18 = (unsigned int *)v54;
      v49[0] = v49;
      v50 = 0LL;
      v49[1] = v49;
      RmpPolicyRequestBufferInitialize((ExecutionModel::BaseResourceSet *)((char *)v54 + 192), 0x30u, v14);
      v19 = v52;
      v20 = 0LL;
      if ( *((_DWORD *)v52 + 4) == 1 )
      {
        v20 = *((_QWORD *)v18 + 175);
        v3 = v18;
        if ( v20 )
          goto LABEL_31;
        v33 = *((_QWORD *)v18 + 226);
        if ( v33 )
        {
          v34 = v33 - 1368;
          if ( v34 )
            v20 = *(_QWORD *)(v34 + 1400);
        }
        if ( v20 )
        {
LABEL_31:
          if ( *(int *)(v20 + 20) >= 0 )
          {
            RmpActivityHostQueryCommitDebt(v20, (_QWORD *)v14 + 155);
            v19 = v52;
          }
        }
        if ( *((_DWORD *)v19 + 4) == 1 && (unsigned int)dword_180071060 > 5 && TlgKeywordOn(v19, 1uLL) )
        {
          v60 = 8LL;
          v59 = v18 + 56;
          v61 = (_QWORD *)((char *)v14 + 1240);
          v63 = (char *)v56 + 8;
          v65 = v18 + 62;
          v67 = (char *)v19 + 248;
          v69 = &v55;
          v62 = 8LL;
          v64 = 8LL;
          v66 = 8LL;
          v68 = 8LL;
          v55 = v18;
          v70 = 8LL;
          TlgWrite(v19, &unk_180063EBB, v21, v22, 8u, &pData);
          v19 = v52;
        }
      }
      v46 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(
              v19,
              (__int64)v14,
              v18[2],
              v18[340],
              v56,
              (__int64)v57,
              1,
              &v47,
              &v48,
              (__int64)v49);
      if ( v46 < 0 )
      {
        while ( (_QWORD *)v49[0] != v49 )
        {
          v43 = *(_QWORD **)(v49[0] + 8LL);
          v44 = *(_QWORD *)v49[0];
          *v43 = *(_QWORD *)v49[0];
          *(_QWORD *)(v44 + 8) = v43;
          utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>();
        }
        v50 = 0LL;
        v45 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v18 + 16LL);
        if ( (char *)v45 == (char *)ExecutionModel::ResourceSet::Release )
        {
          ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v18);
        }
        else if ( v45 == ExecutionModel::BaseResourceSet::Release )
        {
          ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v18);
        }
        else if ( (char *)v45 == (char *)ExecutionModel::ExternalResourceSet::Release )
        {
          ExecutionModel::ExternalResourceSet::Release((ExecutionModel::ExternalResourceSet *)v18);
        }
        else
        {
          v45((ExecutionModel::BaseResourceSet *)v18);
        }
LABEL_23:
        v15 = v46;
        goto LABEL_24;
      }
      if ( !v48 )
      {
        while ( (_QWORD *)v49[0] != v49 )
        {
          v35 = *(_QWORD **)(v49[0] + 8LL);
          v36 = *(_QWORD *)v49[0];
          *v35 = *(_QWORD *)v49[0];
          *(_QWORD *)(v36 + 8) = v35;
          utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>();
        }
        v50 = 0LL;
        v37 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v18 + 16LL);
        if ( (char *)v37 == (char *)ExecutionModel::ResourceSet::Release )
        {
          ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v18);
          v3 = 0LL;
        }
        else if ( v37 == ExecutionModel::BaseResourceSet::Release )
        {
          ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v18);
          v3 = 0LL;
        }
        else
        {
          if ( (char *)v37 == (char *)ExecutionModel::ExternalResourceSet::Release )
            ExecutionModel::ExternalResourceSet::Release((ExecutionModel::ExternalResourceSet *)v18);
          else
            v37((ExecutionModel::BaseResourceSet *)v18);
          v3 = 0LL;
        }
        goto LABEL_48;
      }
      if ( v47 )
      {
        ExecutionModel::BaseResourceSet::RevokeResourceList(v23, v49, v51, v18[38]);
        while ( (_QWORD *)v49[0] != v49 )
        {
          v38 = *(_QWORD **)(v49[0] + 8LL);
          v39 = *(_QWORD *)v49[0];
          *v38 = *(_QWORD *)v49[0];
          *(_QWORD *)(v39 + 8) = v38;
          utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>();
        }
        v3 = 0LL;
        v50 = 0LL;
        v25 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v18 + 16LL);
        if ( v25 == ExecutionModel::ResourceSet::Release )
          goto LABEL_47;
        if ( (char *)v25 == (char *)ExecutionModel::BaseResourceSet::Release )
        {
          ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v18);
          goto LABEL_48;
        }
        if ( v25 != ExecutionModel::ExternalResourceSet::Release )
        {
LABEL_93:
          v25((ExecutionModel::ResourceSet *)v18);
          goto LABEL_48;
        }
        goto LABEL_62;
      }
      if ( v20 )
      {
        *((_BYTE *)v3 + 1920) |= 0x10u;
        if ( (unsigned int)RmpActivityHostCheckQueueWork(v20) )
        {
          while ( (_QWORD *)v49[0] != v49 )
          {
            v30 = *(_QWORD **)(v49[0] + 8LL);
            v31 = *(_QWORD *)v49[0];
            *v30 = *(_QWORD *)v49[0];
            *(_QWORD *)(v31 + 8) = v30;
            utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>();
          }
          v3 = 0LL;
          v50 = 0LL;
          v25 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v18 + 16LL);
          if ( v25 == ExecutionModel::ResourceSet::Release )
          {
            ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v18);
            v13 = (_QWORD *)*v13;
            continue;
          }
          if ( (char *)v25 == (char *)ExecutionModel::BaseResourceSet::Release )
            goto LABEL_54;
LABEL_61:
          if ( v25 != ExecutionModel::ExternalResourceSet::Release )
            goto LABEL_93;
LABEL_62:
          ExecutionModel::ExternalResourceSet::Release((ExecutionModel::ExternalResourceSet *)v18);
          v13 = (_QWORD *)*v13;
          continue;
        }
      }
      break;
    }
    v46 = ExecutionModel::BaseResourceSet::ReassignResources(
            v52,
            v14,
            (struct _RM_SYSTEM_MEMORY_METRICS *)v56,
            (struct ExecutionModel::BaseResourceSet *)v18);
    v15 = v46;
    if ( v46 >= 0 )
    {
      v18[338] = 2;
      v24 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v18 + 64LL);
      if ( v24 == ExecutionModel::ResourceSet::OnAcquired )
        ExecutionModel::ResourceSet::OnAcquired((ExecutionModel::ResourceSet *)v18);
      else
        v24((ExecutionModel::ResourceSet *)v18);
      while ( (_QWORD *)v49[0] != v49 )
      {
        v28 = *(_QWORD **)(v49[0] + 8LL);
        v29 = *(_QWORD *)v49[0];
        *v28 = *(_QWORD *)v49[0];
        *(_QWORD *)(v29 + 8) = v28;
        utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>();
      }
      v3 = 0LL;
      v50 = 0LL;
      v25 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v18 + 16LL);
      if ( v25 == ExecutionModel::ResourceSet::Release )
      {
LABEL_47:
        ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v18);
LABEL_48:
        v13 = (_QWORD *)*v13;
        continue;
      }
      if ( (char *)v25 == (char *)ExecutionModel::BaseResourceSet::Release )
      {
LABEL_54:
        ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v18);
        v13 = (_QWORD *)*v13;
        continue;
      }
      goto LABEL_61;
    }
    break;
  }
  while ( (_QWORD *)v49[0] != v49 )
  {
    v40 = *(_QWORD **)(v49[0] + 8LL);
    v41 = *(_QWORD *)v49[0];
    *v40 = *(_QWORD *)v49[0];
    *(_QWORD *)(v41 + 8) = v40;
    utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>();
  }
  v50 = 0LL;
  v42 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v18 + 16LL);
  if ( (char *)v42 == (char *)ExecutionModel::ResourceSet::Release )
  {
    ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v18);
  }
  else if ( v42 == ExecutionModel::BaseResourceSet::Release )
  {
    ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v18);
  }
  else if ( (char *)v42 == (char *)ExecutionModel::ExternalResourceSet::Release )
  {
    ExecutionModel::ExternalResourceSet::Release((ExecutionModel::ExternalResourceSet *)v18);
  }
  else
  {
    v42((ExecutionModel::BaseResourceSet *)v18);
  }
LABEL_24:
  while ( (_QWORD *)v53[0] != v53 )
  {
    v26 = *(_QWORD **)(v53[0] + 8LL);
    v27 = *(_QWORD *)v53[0];
    *v26 = *(_QWORD *)v53[0];
    *(_QWORD *)(v27 + 8) = v26;
    utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>();
  }
  return v15;
}
