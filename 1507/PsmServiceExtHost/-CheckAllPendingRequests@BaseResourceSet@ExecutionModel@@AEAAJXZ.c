/*
 * XREFs of ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000DE60
 * Callers:
 *     ?CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000DDD0 (-CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INST.c)
 * Callees:
 *     ?ReassignResources@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAV12@@Z @ 0x180001258 (-ReassignResources@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_S.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON@@@Z @ 0x180001344 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_BUFFER@@@Z @ 0x180002280 (-RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180004E9C (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     RmpActivityHostQueryCommitDebt @ 0x1800059EC (RmpActivityHostQueryCommitDebt.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@W44PendType@2@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEA_N4PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18000E980 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x180010E60 (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Contain.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     RmpActivityHostCheckQueueWork @ 0x18003B7DC (RmpActivityHostCheckQueueWork.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckAllPendingRequests(ExecutionModel::BaseResourceSet *this)
{
  int v1; // r14d
  __int64 v2; // rdi
  _QWORD *i; // rdi
  _DWORD *v5; // rbx
  struct _RM_POLICY_REQUEST_BUFFER *v6; // r13
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  struct ExecutionModel::BaseResourceSet *v9; // rbx
  struct ExecutionModel::BaseResourceSet *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  ExecutionModel::BaseResourceSet *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // rax
  char v36; // [rsp+58h] [rbp-B0h] BYREF
  char v37; // [rsp+59h] [rbp-AFh] BYREF
  __int64 v38[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+70h] [rbp-98h]
  __int64 v40; // [rsp+78h] [rbp-90h]
  _QWORD v41[3]; // [rsp+80h] [rbp-88h] BYREF
  struct ExecutionModel::BaseResourceSet *v42; // [rsp+98h] [rbp-70h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v44; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v45; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v46; // [rsp+B8h] [rbp-50h]
  __int64 v47; // [rsp+C0h] [rbp-48h]
  __int64 v48; // [rsp+C8h] [rbp-40h]
  _QWORD v49[22]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE SystemInformation[8]; // [rsp+188h] [rbp+80h] BYREF
  unsigned int v51; // [rsp+190h] [rbp+88h]
  unsigned int v52; // [rsp+194h] [rbp+8Ch]
  _BYTE v53[48]; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned int v54; // [rsp+1F8h] [rbp+F0h]
  unsigned int v55; // [rsp+1FCh] [rbp+F4h]

  v1 = 0;
  v2 = *((_QWORD *)this + 3);
  v41[0] = v41;
  v41[1] = v41;
  v41[2] = 0LL;
  LODWORD(v40) = 0;
  if ( v2 )
    LODWORD(v40) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v2 + 8) + 24LL))(
                     v2 + 8,
                     *((unsigned int *)this + 4));
  for ( i = (_QWORD *)*((_QWORD *)this + 20); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)((char *)this + 160) )
    {
      v6 = (struct _RM_POLICY_REQUEST_BUFFER *)((char *)RmSvcGlobals + 384);
      NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
      NtQuerySystemInformation(SystemPerformanceInformation, v53, 0x158u, 0LL);
      NtQuerySystemInformation(SystemMemoryListInformation, v49, 0xB0u, 0LL);
      v7 = (_QWORD *)v41[0];
      v43 = v51 * (unsigned __int64)v55;
      v46 = v51 * (unsigned __int64)v52;
      v44 = v51 * (v55 - (unsigned __int64)v54);
      v45 = v43 - v44;
      v47 = v51 * (v49[0] + v49[1] + v49[12] + v49[11] + v49[10] + v49[9] + v49[8] + v49[7] + v49[5] + v49[6]);
      v48 = v46 - v47;
      while ( 1 )
      {
        v8 = 0LL;
        if ( v7 == v41 )
          goto LABEL_43;
        ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
          &v42,
          v7[2]);
        v9 = v42;
        v38[0] = (__int64)v38;
        v39 = 0LL;
        v38[1] = (__int64)v38;
        RmpPolicyRequestBufferInitialize((struct ExecutionModel::BaseResourceSet *)((char *)v42 + 192), 0x30u, v6);
        v10 = 0LL;
        if ( *((_DWORD *)this + 4) == 1 )
        {
          v8 = *((_QWORD *)v9 + 175);
          v10 = v9;
          if ( v8 )
            goto LABEL_19;
          v11 = *((_QWORD *)v9 + 225);
          if ( v11 )
          {
            v12 = v11 - 1368;
            if ( v12 )
              v8 = *(_QWORD *)(v12 + 1400);
          }
          if ( v8 )
          {
LABEL_19:
            if ( *(int *)(v8 + 20) >= 0 )
              RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)v8, (_QWORD *)v6 + 155);
          }
        }
        v1 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(
               this,
               1,
               (__int64)&v43,
               (__int64)&v37,
               (__int64)&v36,
               (__int64)v38);
        if ( v1 < 0 )
          break;
        if ( v36 )
        {
          if ( v37 )
          {
            ExecutionModel::BaseResourceSet::RevokeResourceList(v13, v38, v40, *((_DWORD *)v9 + 38));
            while ( 1 )
            {
              v17 = v38[0];
              if ( (__int64 *)v38[0] == v38 )
                break;
              v18 = *(_QWORD **)(v38[0] + 8);
              v19 = *(_QWORD *)v38[0];
              *v18 = *(_QWORD *)v38[0];
              *(_QWORD *)(v19 + 8) = v18;
              utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
                v18,
                v17);
            }
          }
          else if ( v8 && (*((_BYTE *)v10 + 1912) |= 0x10u, (unsigned int)RmpActivityHostCheckQueueWork(v8)) )
          {
            while ( 1 )
            {
              v20 = v38[0];
              if ( (__int64 *)v38[0] == v38 )
                break;
              v21 = *(_QWORD **)(v38[0] + 8);
              v22 = *(_QWORD *)v38[0];
              *v21 = *(_QWORD *)v38[0];
              *(_QWORD *)(v22 + 8) = v21;
              utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
                v21,
                v20);
            }
          }
          else
          {
            v1 = ExecutionModel::BaseResourceSet::ReassignResources(
                   this,
                   v6,
                   (struct _RM_SYSTEM_MEMORY_METRICS *)&v43,
                   v9);
            if ( v1 < 0 )
            {
              while ( 1 )
              {
                v26 = v38[0];
                if ( (__int64 *)v38[0] == v38 )
                  break;
                v27 = *(_QWORD **)(v38[0] + 8);
                v28 = *(_QWORD *)v38[0];
                *v27 = *(_QWORD *)v38[0];
                *(_QWORD *)(v28 + 8) = v27;
                utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
                  v27,
                  v26);
              }
LABEL_42:
              v39 = 0LL;
              (*(void (__fastcall **)(struct ExecutionModel::BaseResourceSet *))(*(_QWORD *)v9 + 16LL))(v9);
              goto LABEL_43;
            }
            *((_DWORD *)v9 + 338) = 2;
            (*(void (__fastcall **)(struct ExecutionModel::BaseResourceSet *))(*(_QWORD *)v9 + 64LL))(v9);
            while ( 1 )
            {
              v23 = v38[0];
              if ( (__int64 *)v38[0] == v38 )
                break;
              v24 = *(_QWORD **)(v38[0] + 8);
              v25 = *(_QWORD *)v38[0];
              *v24 = *(_QWORD *)v38[0];
              *(_QWORD *)(v25 + 8) = v24;
              utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
                v24,
                v23);
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v14 = v38[0];
            if ( (__int64 *)v38[0] == v38 )
              break;
            v15 = *(_QWORD **)(v38[0] + 8);
            v16 = *(_QWORD *)v38[0];
            *v15 = *(_QWORD *)v38[0];
            *(_QWORD *)(v16 + 8) = v15;
            utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
              v15,
              v14);
          }
        }
        v39 = 0LL;
        (*(void (__fastcall **)(struct ExecutionModel::BaseResourceSet *))(*(_QWORD *)v9 + 16LL))(v9);
        v7 = (_QWORD *)*v7;
      }
      while ( 1 )
      {
        v29 = v38[0];
        if ( (__int64 *)v38[0] == v38 )
          break;
        v30 = *(_QWORD **)(v38[0] + 8);
        v31 = *(_QWORD *)v38[0];
        *v30 = *(_QWORD *)v38[0];
        *(_QWORD *)(v31 + 8) = v30;
        utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
          v30,
          v29);
      }
      goto LABEL_42;
    }
    v5 = (_DWORD *)i[2];
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(i[2]);
    if ( v5[338] == 1 )
    {
      v1 = ExecutionModel::BaseResourceSet::AddToListPrioritized((__int64)v41, (__int64)v5);
      if ( v1 < 0 )
        break;
    }
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
LABEL_43:
  while ( 1 )
  {
    v32 = v41[0];
    if ( (_QWORD *)v41[0] == v41 )
      break;
    v33 = *(_QWORD **)(v41[0] + 8LL);
    v34 = *(_QWORD *)v41[0];
    *v33 = *(_QWORD *)v41[0];
    *(_QWORD *)(v34 + 8) = v33;
    utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>(
      v33,
      v32);
  }
  return (unsigned int)v1;
}
