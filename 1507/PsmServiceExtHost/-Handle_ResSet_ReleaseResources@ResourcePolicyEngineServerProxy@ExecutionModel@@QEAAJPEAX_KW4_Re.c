/*
 * XREFs of ?Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ReleaseResourcesType@@@Z @ 0x180016020
 * Callers:
 *     Srv_ResSet_ReleaseResources @ 0x180017990 (Srv_ResSet_ReleaseResources.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x180014A00 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014D40 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ @ 0x180016AE0 (-Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@WnfStateRegistration@ExecutionModel@@UEAAKXZ @ 0x180017930 (-Release@WnfStateRegistration@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ResourceSet_ForceReleaseResources@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x1800470DC (-ResourceSet_ForceReleaseResources@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineServerProxy::Handle_ResSet_ReleaseResources(
        __int64 a1,
        struct IUnknown *a2,
        struct IUnknown *a3,
        unsigned int a4)
{
  struct ExecutionModel::ResourcePolicyEngineServerProxy *v4; // r15
  ExecutionModel::ResourceSetImpl *v5; // r14
  struct _RTL_CRITICAL_SECTION *v8; // rbp
  unsigned __int64 v9; // rdx
  struct IUnknown **v10; // r8
  __int64 v11; // r10
  char *v12; // r13
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  char v16; // cl
  char *v17; // rbx
  char *v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  struct IUnknown **v21; // rsi
  struct _RTL_CRITICAL_SECTION *v22; // rdi
  __int64 (__fastcall *lpVtbl)(ExecutionModel::ResourceSetImpl *); // r15
  __int64 (__fastcall *v24)(ExecutionModel::ResourceSetImpl *); // r15
  int v25; // eax
  int v26; // r15d
  __int64 (__fastcall *v27)(ExecutionModel::ResourceSetImpl *); // rdi
  __int64 v28; // rdi
  __int64 v29; // rsi
  unsigned int (__fastcall *v30)(ExecutionModel::WnfStateRegistration *__hidden); // r15
  char *v31; // rsi
  __int64 v32; // rbp
  char *v33; // rdi
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  void **v36; // rcx
  __int64 v37; // r15
  unsigned int (__fastcall *v38)(ExecutionModel::ResourceSetServerProxy *__hidden); // r12
  __int64 (__fastcall *v39)(ExecutionModel::ResourceSetImpl *); // rbx
  struct IUnknown *v41; // rdx
  ExecutionModel::ResourceSetServerProxy *v42; // rdi
  unsigned int (__fastcall *v43)(ExecutionModel::ResourceSetServerProxy *__hidden); // rsi
  ExecutionModel::ResourceSetImpl *v44; // [rsp+60h] [rbp+8h]
  struct IUnknown *v45; // [rsp+68h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v46; // [rsp+70h] [rbp+18h]

  v45 = a2;
  v4 = g_pResourcePolicyEngineServerProxy;
  v5 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_pResourcePolicyEngineServerProxy + 16);
  v46 = (struct _RTL_CRITICAL_SECTION *)((char *)g_pResourcePolicyEngineServerProxy + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pResourcePolicyEngineServerProxy + 16));
  if ( !a3 )
  {
    v26 = -2147467259;
    goto LABEL_42;
  }
  if ( a4 > 2 )
  {
    v26 = -2147467259;
    goto LABEL_42;
  }
  v11 = *((_QWORD *)v4 + 9);
  v12 = (char *)v4 + 56;
  v45 = a3;
  if ( !v11 )
    goto LABEL_53;
  v13 = 0LL;
  v10 = &v45;
  v14 = 4LL;
  do
  {
    v15 = *(unsigned __int16 *)v10;
    v10 = (struct IUnknown **)((char *)v10 + 2);
    v13 = (1025 * (v13 + v15)) ^ ((1025 * (v13 + v15)) >> 6);
    --v14;
  }
  while ( v14 );
  v9 = 32769 * ((9 * v13) ^ ((9 * v13) >> 11));
  v16 = *((_BYTE *)v4 + 88);
  v17 = *(char **)(v11 + 16 * (v9 & ((8LL << v16) - 1)));
  if ( v17 && (v18 = **(char ***)(v11 + 16 * (v9 & ((8LL << v16) - 1)) + 8), v17 != v18) )
  {
    while ( 1 )
    {
      v19 = *((_QWORD *)v17 + 2);
      if ( v19 >= v9 )
      {
        if ( v19 > v9 )
          goto LABEL_53;
        if ( a3 == *((struct IUnknown **)v17 + 3) )
          break;
      }
      v17 = *(char **)v17;
      if ( v17 == v18 )
        goto LABEL_53;
    }
  }
  else
  {
LABEL_53:
    v17 = (char *)v4 + 56;
  }
  if ( v17 == v12 )
  {
    v26 = -2147023728;
    goto LABEL_42;
  }
  v20 = *((_QWORD *)v17 + 4);
  if ( !v20 )
  {
    v26 = -2147467259;
    goto LABEL_42;
  }
  v21 = *(struct IUnknown ***)(v20 + 16);
  if ( !v21 )
  {
    v26 = -2147467259;
    goto LABEL_42;
  }
  ((void (__fastcall *)(struct IUnknown **, unsigned __int64, struct IUnknown **))(*v21)[1].lpVtbl)(v21, v9, v10);
  v5 = (ExecutionModel::ResourceSetImpl *)v21;
  v44 = (ExecutionModel::ResourceSetImpl *)v21;
  if ( a4 == 1 )
  {
    v26 = ExecutionModel::ResourcePolicyEngine::ResourceSet_ForceReleaseResources(
            *((ExecutionModel::ResourcePolicyEngine **)v4 + 12),
            (struct ExecutionModel::IResourceSet *)v21);
    goto LABEL_27;
  }
  v45 = 0LL;
  v22 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v4 + 12);
  EnterCriticalSection(v22 + 1);
  ((void (__fastcall *)(struct IUnknown **))(*v21)[1].lpVtbl)(v21);
  ((void (__fastcall *)(struct IUnknown **))(*v21)[1].lpVtbl)(v21);
  lpVtbl = (__int64 (__fastcall *)(ExecutionModel::ResourceSetImpl *))(*v21)[2].lpVtbl;
  if ( lpVtbl == ExecutionModel::ResourceSetImpl::Release )
    ExecutionModel::ResourceSetImpl::Release((ExecutionModel::ResourceSetImpl *)v21);
  else
    lpVtbl((ExecutionModel::ResourceSetImpl *)v21);
  v24 = (__int64 (__fastcall *)(ExecutionModel::ResourceSetImpl *))(*v21)[15].lpVtbl;
  if ( v24 == ExecutionModel::ResourceSetImpl::ReleaseResources )
    v25 = ExecutionModel::ResourceSetImpl::ReleaseResources((ExecutionModel::ResourceSetImpl *)v21);
  else
    v25 = v24((ExecutionModel::ResourceSetImpl *)v21);
  v26 = v25;
  if ( a4 == 2 )
  {
    v26 = 0;
LABEL_21:
    if ( v21[20] )
      ATL::AtlComPtrAssign(v21 + 20, 0LL);
    goto LABEL_23;
  }
  if ( v25 >= 0 )
    goto LABEL_21;
LABEL_23:
  LeaveCriticalSection(v22 + 1);
  v27 = (__int64 (__fastcall *)(ExecutionModel::ResourceSetImpl *))(*v21)[2].lpVtbl;
  if ( v27 == ExecutionModel::ResourceSetImpl::Release )
    ExecutionModel::ResourceSetImpl::Release((ExecutionModel::ResourceSetImpl *)v21);
  else
    v27((ExecutionModel::ResourceSetImpl *)v21);
  if ( v26 < 0 )
    goto LABEL_42;
  if ( a4 == 2 )
  {
    v41 = (struct IUnknown *)*((_QWORD *)v17 + 4);
    v45 = 0LL;
    v42 = 0LL;
    if ( v41 )
    {
      ATL::AtlComPtrAssign(&v45, v41);
      v42 = (ExecutionModel::ResourceSetServerProxy *)v45;
    }
    *((_BYTE *)v42 + 49) = 1;
    v43 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetServerProxy *__hidden))(*(_QWORD *)v42 + 16LL);
    if ( v43 == ExecutionModel::ResourceSetServerProxy::Release )
      ExecutionModel::ResourceSetServerProxy::Release(v42);
    else
      v43(v42);
  }
LABEL_27:
  if ( v26 >= 0 )
  {
    v28 = *((_QWORD *)v17 + 4);
    v29 = *(_QWORD *)(v28 + 32);
    if ( v29 )
    {
      v30 = *(unsigned int (__fastcall **)(ExecutionModel::WnfStateRegistration *__hidden))(*(_QWORD *)v29 + 16LL);
      if ( v30 == ExecutionModel::WnfStateRegistration::Release )
        ExecutionModel::WnfStateRegistration::Release(*(ExecutionModel::WnfStateRegistration **)(v28 + 32));
      else
        v30(*(ExecutionModel::WnfStateRegistration **)(v28 + 32));
      *(_QWORD *)(v28 + 32) = 0LL;
    }
    *(_WORD *)(v28 + 48) = 0;
    *(_QWORD *)(v28 + 40) = 0LL;
    v31 = *(char **)v17;
    v32 = (8LL << v12[32]) - 1;
    while ( v17 != v31 )
    {
      v33 = v17;
      v17 = *(char **)v17;
      v34 = (_QWORD *)*((_QWORD *)v33 + 1);
      v35 = *(_QWORD **)v33;
      *v34 = *(_QWORD *)v33;
      v35[1] = v34;
      v36 = (void **)(*((_QWORD *)v12 + 2) + 16 * (v32 & *((_QWORD *)v33 + 2)));
      if ( *v36 == v33 )
      {
        if ( v36[1] == v33 )
        {
          *v36 = 0LL;
          v36[1] = 0LL;
        }
        else
        {
          *v36 = *(void **)v33;
        }
      }
      else if ( v36[1] == v33 )
      {
        v36[1] = (void *)*((_QWORD *)v33 + 1);
      }
      v37 = *((_QWORD *)v33 + 4);
      if ( v37 )
      {
        v38 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetServerProxy *__hidden))(*(_QWORD *)v37 + 16LL);
        if ( v38 == ExecutionModel::ResourceSetServerProxy::Release )
          ExecutionModel::ResourceSetServerProxy::Release(*((ExecutionModel::ResourceSetServerProxy **)v33 + 4));
        else
          v38(*((ExecutionModel::ResourceSetServerProxy **)v33 + 4));
      }
      operator delete(v33);
      --*((_QWORD *)v12 + 3);
    }
    v5 = v44;
    v26 = 0;
    v8 = v46;
  }
LABEL_42:
  LeaveCriticalSection(v8);
  if ( v5 )
  {
    v39 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)v5 + 16LL);
    if ( v39 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(v5);
    else
      v39(v5);
  }
  return (unsigned int)v26;
}
