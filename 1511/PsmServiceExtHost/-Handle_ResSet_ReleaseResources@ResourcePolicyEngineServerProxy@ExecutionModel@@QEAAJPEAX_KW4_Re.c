/*
 * XREFs of ?Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ReleaseResourcesType@@@Z @ 0x180015190
 * Callers:
 *     Srv_ResSet_ReleaseResources @ 0x180018A90 (Srv_ResSet_ReleaseResources.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180006290 (--1-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x1800138A0 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180013C80 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ @ 0x180015C60 (-Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@WnfStateRegistration@ExecutionModel@@UEAAKXZ @ 0x180018A30 (-Release@WnfStateRegistration@ExecutionModel@@UEAAKXZ.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ResourceSet_ForceReleaseResources@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x18004CBAC (-ResourceSet_ForceReleaseResources@ResourcePolicyEngine@ExecutionModel@@QEAAJPEAUIResourceSet@2@.c)
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
  char *v9; // rdx
  struct IUnknown **v10; // r8
  __int64 v11; // r10
  char *v12; // r13
  __int64 v13; // r9
  int v14; // eax
  char v15; // cl
  char *v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  struct IUnknown **v19; // rsi
  struct _RTL_CRITICAL_SECTION *v20; // rdi
  unsigned int v21; // edx
  __int64 (__fastcall *lpVtbl)(ExecutionModel::ResourceSetImpl *, unsigned int); // r15
  __int64 (__fastcall *v23)(ExecutionModel::ResourceSetImpl *); // r15
  int v24; // eax
  int v25; // r15d
  unsigned int v26; // edx
  __int64 (__fastcall *v27)(ExecutionModel::ResourceSetImpl *, unsigned int); // rdi
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
  unsigned int v39; // edx
  __int64 (__fastcall *v40)(ExecutionModel::ResourceSetImpl *, unsigned int); // rbx
  struct IUnknown *v42; // rdx
  struct IUnknown *v43; // rax
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
    v25 = -2147467259;
    goto LABEL_42;
  }
  if ( a4 > 2 )
  {
    v25 = -2147467259;
    goto LABEL_42;
  }
  v11 = *((_QWORD *)v4 + 9);
  v12 = (char *)v4 + 56;
  v45 = a3;
  if ( !v11 )
    goto LABEL_51;
  LODWORD(v9) = 0;
  v10 = &v45;
  v13 = 4LL;
  do
  {
    v14 = *(unsigned __int16 *)v10;
    v10 = (struct IUnknown **)((char *)v10 + 2);
    v9 = (char *)((1025 * ((_DWORD)v9 + v14)) ^ ((unsigned int)(1025 * ((_DWORD)v9 + v14)) >> 6));
    --v13;
  }
  while ( v13 );
  v45 = (struct IUnknown *)(unsigned int)v9;
  v15 = *((_BYTE *)v4 + 88);
  LODWORD(v45) = 32769 * (((unsigned int)(9 * (_DWORD)v9) >> 11) ^ (9 * (_DWORD)v9));
  v16 = *(char **)(v11 + 16 * ((unsigned __int64)v45 & ((8LL << v15) - 1)));
  if ( v16 && (v9 = **(char ***)(v11 + 16 * ((unsigned __int64)v45 & ((8LL << v15) - 1)) + 8), v16 != v9) )
  {
    while ( 1 )
    {
      v17 = *((_QWORD *)v16 + 2);
      if ( v17 >= (unsigned __int64)v45 )
      {
        if ( v17 > (unsigned __int64)v45 )
          goto LABEL_51;
        if ( a3 == *((struct IUnknown **)v16 + 3) )
          break;
      }
      v16 = *(char **)v16;
      if ( v16 == v9 )
        goto LABEL_51;
    }
  }
  else
  {
LABEL_51:
    v16 = (char *)v4 + 56;
  }
  if ( v16 == v12 )
  {
    v25 = -2147023728;
    goto LABEL_42;
  }
  v18 = *((_QWORD *)v16 + 4);
  if ( !v18 )
  {
    v25 = -2147467259;
    goto LABEL_42;
  }
  v19 = *(struct IUnknown ***)(v18 + 16);
  if ( !v19 )
  {
    v25 = -2147467259;
    goto LABEL_42;
  }
  ((void (__fastcall *)(struct IUnknown **, char *, struct IUnknown **))(*v19)[1].lpVtbl)(v19, v9, v10);
  v5 = (ExecutionModel::ResourceSetImpl *)v19;
  v44 = (ExecutionModel::ResourceSetImpl *)v19;
  if ( a4 == 1 )
  {
    v25 = ExecutionModel::ResourcePolicyEngine::ResourceSet_ForceReleaseResources(
            *((ExecutionModel::ResourcePolicyEngine **)v4 + 12),
            (struct ExecutionModel::IResourceSet *)v19);
    goto LABEL_27;
  }
  v45 = 0LL;
  v20 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v4 + 12);
  EnterCriticalSection(v20 + 1);
  ((void (__fastcall *)(struct IUnknown **))(*v19)[1].lpVtbl)(v19);
  ((void (__fastcall *)(struct IUnknown **))(*v19)[1].lpVtbl)(v19);
  lpVtbl = (__int64 (__fastcall *)(ExecutionModel::ResourceSetImpl *, unsigned int))(*v19)[2].lpVtbl;
  if ( lpVtbl == ExecutionModel::ResourceSetImpl::Release )
    ExecutionModel::ResourceSetImpl::Release((ExecutionModel::ResourceSetImpl *)v19, v21);
  else
    ((void (__fastcall *)(struct IUnknown **))lpVtbl)(v19);
  v23 = (__int64 (__fastcall *)(ExecutionModel::ResourceSetImpl *))(*v19)[15].lpVtbl;
  if ( v23 == ExecutionModel::ResourceSetImpl::ReleaseResources )
    v24 = ExecutionModel::ResourceSetImpl::ReleaseResources((ExecutionModel::ResourceSetImpl *)v19);
  else
    v24 = v23((ExecutionModel::ResourceSetImpl *)v19);
  v25 = v24;
  if ( a4 == 2 )
  {
    v25 = 0;
LABEL_21:
    if ( v19[21] )
      ATL::AtlComPtrAssign(v19 + 21, 0LL);
    goto LABEL_23;
  }
  if ( v24 >= 0 )
    goto LABEL_21;
LABEL_23:
  LeaveCriticalSection(v20 + 1);
  v27 = (__int64 (__fastcall *)(ExecutionModel::ResourceSetImpl *, unsigned int))(*v19)[2].lpVtbl;
  if ( v27 == ExecutionModel::ResourceSetImpl::Release )
    ExecutionModel::ResourceSetImpl::Release((ExecutionModel::ResourceSetImpl *)v19, v26);
  else
    ((void (__fastcall *)(struct IUnknown **))v27)(v19);
  if ( v25 < 0 )
    goto LABEL_42;
  if ( a4 == 2 )
  {
    v42 = (struct IUnknown *)*((_QWORD *)v16 + 4);
    v43 = 0LL;
    v45 = 0LL;
    if ( v42 )
    {
      ATL::AtlComPtrAssign(&v45, v42);
      v43 = v45;
    }
    BYTE1(v43[6].lpVtbl) = 1;
    ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::~CComPtrBase<ExecutionModel::IResourceSetCallback>((ExecutionModel::ResourceSetServerProxy **)&v45);
  }
LABEL_27:
  if ( v25 >= 0 )
  {
    v28 = *((_QWORD *)v16 + 4);
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
    v31 = *(char **)v16;
    v32 = (8LL << v12[32]) - 1;
    while ( v16 != v31 )
    {
      v33 = v16;
      v16 = *(char **)v16;
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
    v25 = 0;
    v8 = v46;
  }
LABEL_42:
  LeaveCriticalSection(v8);
  if ( v5 )
  {
    v40 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *, unsigned int))(*(_QWORD *)v5 + 16LL);
    if ( v40 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(v5, v39);
    else
      ((void (__fastcall *)(ExecutionModel::ResourceSetImpl *))v40)(v5);
  }
  return (unsigned int)v25;
}
