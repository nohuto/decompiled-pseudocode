/*
 * XREFs of ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x180010E80
 * Callers:
 *     ?CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800108A0 (-CheckPendingRequestsThreadpoolCallback@ResourceManager@ExecutionModel@@KAXPEAU_TP_CALLBACK_INST.c)
 * Callees:
 *     ??0?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800037C0 (--0-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800041D0 (-AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180004270 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800108F0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180010B48 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 *     ?ReassignResources@BaseResourceSet@ExecutionModel@@AEAAXPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAV12@@Z @ 0x1800111C8 (-ReassignResources@BaseResourceSet@ExecutionModel@@AEAAXPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_S.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180012AE0 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@?$_ContainerBase@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@1@@Z @ 0x180012C0C (--$_DeleteNode@U-$_DlistNode@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@-$_Contain.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180014CC0 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x1800150D4 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_BUFFER@@@Z @ 0x1800153B0 (-RmpPolicyRequestBufferInitialize@@YAXPEBU_ResourceInfo@ExecutionModel@@KPEAU_RM_POLICY_REQUEST_.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180037108 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckAllPendingRequests(ExecutionModel::BaseResourceSet *this)
{
  char *v1; // rsi
  char *v2; // rdi
  int v3; // r14d
  __int64 v4; // rax
  __int64 v6; // r12
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rbx
  unsigned int (__fastcall *v9)(ExecutionModel::ResourceSet *__hidden); // rax
  unsigned int (__fastcall *v10)(ExecutionModel::ResourceSet *__hidden); // rax
  int v11; // ecx
  volatile signed __int32 *v13; // rcx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  ExecutionModel::ExternalResourceSet *v16; // rcx
  __int64 **v17; // rdi
  struct _RM_POLICY_REQUEST_BUFFER *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 (__fastcall *v21)(ExecutionModel::BaseResourceSet *); // rax
  __int64 (__fastcall *v22)(ExecutionModel::BaseResourceSet *); // rax
  char v23; // [rsp+48h] [rbp-C0h] BYREF
  char v24; // [rsp+49h] [rbp-BFh] BYREF
  _QWORD v25[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v26[3]; // [rsp+68h] [rbp-A0h] BYREF
  ExecutionModel::ResourceSet *v27; // [rsp+80h] [rbp-88h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+88h] [rbp-80h] BYREF
  struct _EXCEPTION_RECORD v29; // [rsp+128h] [rbp+20h] BYREF

  v1 = (char *)this + 160;
  v2 = (char *)*((_QWORD *)this + 20);
  v3 = 0;
  v25[0] = v25;
  v25[1] = v25;
  v4 = *((_QWORD *)this + 3);
  v25[2] = 0LL;
  v6 = *(_QWORD *)(v4 + 224);
  while ( 1 )
  {
    v7 = (__int64)ExecutionModel::ExternalResourceSet::AddRef;
    if ( v2 == v1 )
      break;
    v8 = (volatile signed __int32 *)*((_QWORD *)v2 + 2);
    if ( v8 )
    {
      v9 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v8 + 8LL);
      if ( v9 == ExecutionModel::ResourceSet::AddRef )
      {
        if ( (unsigned int)_InterlockedIncrement(v8 + 39) < 2 )
        {
          memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
          pExceptionRecord.ExceptionCode = -1073741675;
          pExceptionRecord.ExceptionFlags = 1;
          RaiseFailFastException(&pExceptionRecord, 0LL, 0);
        }
      }
      else
      {
        v16 = (ExecutionModel::ExternalResourceSet *)*((_QWORD *)v2 + 2);
        if ( v9 == ExecutionModel::ExternalResourceSet::AddRef )
          ExecutionModel::ExternalResourceSet::AddRef(v16);
        else
          ((void (__fastcall *)(ExecutionModel::ExternalResourceSet *, unsigned int (__fastcall *)(ExecutionModel::ExternalResourceSet *)))v9)(
            v16,
            ExecutionModel::ExternalResourceSet::AddRef);
      }
    }
    if ( *((_DWORD *)v8 + 338) == 1 )
    {
      v3 = ExecutionModel::BaseResourceSet::AddToListPrioritized(v25, v8);
      if ( v3 < 0 )
      {
LABEL_45:
        v22 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v8 + 16LL);
        if ( v22 == ExecutionModel::BaseResourceSet::Release )
        {
          ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v8);
        }
        else if ( (char *)v22 == (char *)ExecutionModel::ResourceSet::Release )
        {
          ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v8);
        }
        else
        {
          v22((ExecutionModel::BaseResourceSet *)v8);
        }
        goto LABEL_14;
      }
    }
    v10 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v8 + 16LL);
    if ( v10 == ExecutionModel::ResourceSet::Release )
    {
      v11 = _InterlockedDecrement(v8 + 39);
      if ( v11 < 0 )
      {
        memset_0(&v29.ExceptionFlags, 0, 0x94uLL);
        v29.ExceptionCode = -1073741675;
        v29.ExceptionFlags = 1;
        RaiseFailFastException(&v29, 0LL, 0);
        goto LABEL_11;
      }
      if ( v11 )
        goto LABEL_11;
      v7 = 1LL;
      v10 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v8 + 24LL);
      v13 = v8;
      if ( (char *)v10 == (char *)ExecutionModel::ResourceSet::`scalar deleting destructor' )
      {
        ExecutionModel::ResourceSet::`scalar deleting destructor'((ExecutionModel::ResourceSet *)v8, 1u);
        v2 = *(char **)v2;
      }
      else
      {
LABEL_29:
        ((void (__fastcall *)(volatile signed __int32 *, __int64))v10)(v13, v7);
LABEL_11:
        v2 = *(char **)v2;
      }
    }
    else
    {
      v13 = v8;
      if ( v10 != ExecutionModel::ExternalResourceSet::Release )
        goto LABEL_29;
      ExecutionModel::ExternalResourceSet::Release((ExecutionModel::ExternalResourceSet *)v8);
      v2 = *(char **)v2;
    }
  }
  if ( (_QWORD *)v25[0] == v25 )
  {
    v3 = 0;
  }
  else if ( *((_DWORD *)this + 4) == 1 )
  {
    ExecutionModel::ResourceSet::ProcessPendingRequestList(this);
    v3 = 0;
  }
  else
  {
    v17 = (__int64 **)v25[0];
    v18 = (struct _RM_POLICY_REQUEST_BUFFER *)(v6 + 536);
    while ( v17 != v25 )
    {
      ATL::CComPtrBase<ExecutionModel::ResourceSet>::CComPtrBase<ExecutionModel::ResourceSet>(
        &v27,
        (ExecutionModel::ResourceSet *)v17[2]);
      v8 = (volatile signed __int32 *)v27;
      v26[0] = v26;
      v26[2] = 0LL;
      v26[1] = v26;
      RmpPolicyRequestBufferInitialize((ExecutionModel::ResourceSet *)((char *)v27 + 192), 0x30u, v18);
      v3 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(
             this,
             (__int64)v18,
             *((unsigned int *)v8 + 2),
             *((_DWORD *)v8 + 340),
             1,
             &v24,
             &v23,
             (__int64)v26);
      if ( v3 < 0 )
      {
        utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v26);
        goto LABEL_45;
      }
      if ( v23 )
      {
        if ( v24 )
        {
          ExecutionModel::BaseResourceSet::RevokeResourceList(v19, v26, v20, *((unsigned int *)v8 + 38));
        }
        else
        {
          ExecutionModel::BaseResourceSet::ReassignResources(
            this,
            v18,
            0LL,
            (struct ExecutionModel::BaseResourceSet *)v8);
          *((_DWORD *)v8 + 338) = 2;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 56LL))(v8);
        }
      }
      utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v26);
      v21 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v8 + 16LL);
      if ( v21 == ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release((ExecutionModel::BaseResourceSet *)v8);
      }
      else if ( (char *)v21 == (char *)ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)v8);
      }
      else
      {
        v21((ExecutionModel::BaseResourceSet *)v8);
      }
      v17 = (__int64 **)*v17;
    }
  }
LABEL_14:
  while ( (_QWORD *)v25[0] != v25 )
  {
    v14 = *(_QWORD **)(v25[0] + 8LL);
    v15 = *(_QWORD *)v25[0];
    *v14 = *(_QWORD *)v25[0];
    *(_QWORD *)(v15 + 8) = v14;
    utl::_ContainerBase<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::_DeleteNode<utl::_DlistNode<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>();
  }
  return (unsigned int)v3;
}
