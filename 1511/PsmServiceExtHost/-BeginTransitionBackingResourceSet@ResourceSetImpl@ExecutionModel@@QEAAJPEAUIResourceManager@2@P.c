/*
 * XREFs of ?BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@PEBU_MemoryPolicyManifest@@PEA_N@Z @ 0x18004E4F8
 * Callers:
 *     ?ChangeCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z @ 0x18004DB54 (-ChangeCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z.c)
 * Callees:
 *     ?CompleteTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@IEAAJPEAUPendingMemoryLimitInfo@12@@Z @ 0x180003B54 (-CompleteTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@IEAAJPEAUPendingMemoryLimi.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U?$default_delete@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x180036EC8 (--1-$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U-$default_delete@UPendi.c)
 *     ??4?$unique_ptr@U_MemoryPolicyManifest@@U?$default_delete@U_MemoryPolicyManifest@@@utl@@@utl@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004D8B8 (--4-$unique_ptr@U_MemoryPolicyManifest@@U-$default_delete@U_MemoryPolicyManifest@@@utl@@@utl@@QE.c)
 *     ??$make_unique@U_MemoryPolicyManifest@@$$$V$0A@@utl@@YA?AV?$unique_ptr@U_MemoryPolicyManifest@@U?$default_delete@U_MemoryPolicyManifest@@@utl@@@0@XZ @ 0x18004E3DC (--$make_unique@U_MemoryPolicyManifest@@$$$V$0A@@utl@@YA-AV-$unique_ptr@U_MemoryPolicyManifest@@U.c)
 *     ??4?$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U?$default_delete@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@@utl@@@utl@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004E42C (--4-$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U-$default_delete@UPendi.c)
 *     ??_GPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@QEAAPEAXI@Z @ 0x18004E45C (--_GPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@QEAAPEAXI@Z.c)
 *     ?TryCancelBackingResourceSetTransition@ResourceSetImpl@ExecutionModel@@IEAAJAEAV?$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U?$default_delete@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@@utl@@@utl@@@Z @ 0x18004EF3C (-TryCancelBackingResourceSetTransition@ResourceSetImpl@ExecutionModel@@IEAAJAEAV-$unique_ptr@UPe.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::BeginTransitionBackingResourceSet(
        ExecutionModel::ResourceSetImpl *this,
        struct IResourceManager *a2,
        struct ExecutionModel::_ResourceSetInfo *a3,
        const struct _MemoryPolicyManifest *a4,
        bool *a5)
{
  ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo **v5; // r14
  __int64 v6; // r12
  unsigned int v9; // edx
  int v10; // ebx
  _QWORD *v11; // rax
  unsigned int v12; // edx
  ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *v13; // rbx
  void **v14; // rax
  _OWORD *v15; // rcx
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rcx
  bool v19; // cc
  int v20; // r13d
  __int64 v21; // rax
  int v22; // edx
  int v23; // eax
  bool v24; // zf
  __int64 v25; // rax
  int v26; // r13d
  __int64 v27; // r15
  ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *v28; // rcx
  unsigned int v29; // edx
  void *Block; // [rsp+70h] [rbp-51h] BYREF
  struct IResourceManager *v32; // [rsp+78h] [rbp-49h]
  struct IUnknown *v33; // [rsp+80h] [rbp-41h] BYREF
  bool *v34; // [rsp+88h] [rbp-39h]
  __int64 v35; // [rsp+90h] [rbp-31h]
  __int64 v36; // [rsp+98h] [rbp-29h]
  __int64 v37; // [rsp+A0h] [rbp-21h]
  struct ExecutionModel::_ResourceSetInfo *v38; // [rsp+A8h] [rbp-19h]
  ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *v39; // [rsp+B0h] [rbp-11h] BYREF
  int v40; // [rsp+B8h] [rbp-9h]
  int v41; // [rsp+BCh] [rbp-5h]
  int v42; // [rsp+C0h] [rbp-1h]
  int v43; // [rsp+C4h] [rbp+3h]
  int v44; // [rsp+C8h] [rbp+7h]

  v5 = (ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo **)((char *)this + 200);
  v6 = 0LL;
  v38 = a3;
  v32 = a2;
  v34 = a5;
  v33 = 0LL;
  v39 = 0LL;
  if ( *((_QWORD *)this + 25)
    && (int)ExecutionModel::ResourceSetImpl::TryCancelBackingResourceSetTransition(this, &v39) < 0 )
  {
    v10 = -2147483638;
    goto LABEL_37;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 88LL))(this)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 88LL))(*((_QWORD *)this + 23)) )
  {
    v10 = -2147467259;
    goto LABEL_40;
  }
  if ( *v5 )
  {
    v10 = -2147483635;
    goto LABEL_40;
  }
  v11 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    *v11 = 0LL;
    v11[1] = 0LL;
    v11[2] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  Block = v11;
  utl::unique_ptr<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo,utl::default_delete<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo>>::operator=(
    v5,
    (ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo **)&Block);
  utl::unique_ptr<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo,utl::default_delete<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo>>::~unique_ptr<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo,utl::default_delete<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo>>(
    (ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo **)&Block,
    v12);
  if ( !*v5 )
  {
LABEL_12:
    v10 = -2147024882;
LABEL_37:
    v28 = *v5;
    *v5 = 0LL;
    if ( v28 )
      ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo::`scalar deleting destructor'(v28, v9);
    goto LABEL_40;
  }
  *((_QWORD *)*v5 + 2) = this;
  if ( a4 )
  {
    v13 = *v5;
    v14 = (void **)utl::make_unique<_MemoryPolicyManifest,,0>(&Block);
    utl::unique_ptr<_MemoryPolicyManifest,utl::default_delete<_MemoryPolicyManifest>>::operator=((void **)v13 + 1, v14);
    if ( Block )
      operator delete(Block);
    v15 = (_OWORD *)*((_QWORD *)*v5 + 1);
    if ( !v15 )
      goto LABEL_12;
    *v15 = *(_OWORD *)a4;
    v15[1] = *((_OWORD *)a4 + 1);
  }
  v16 = *((_DWORD *)this + 8);
  v17 = *((_QWORD *)this + 23);
  v18 = *((_QWORD *)this + 20);
  v40 = 0;
  v42 = 4;
  v43 = 8;
  if ( v16 )
  {
    v19 = *(_DWORD *)(v18 + 32) < 5;
    v35 = v17;
    v37 = *(_QWORD *)(v18 + 48);
    v41 = 2;
    v44 = 2;
    if ( v19 )
      v20 = *(&v40 + *(int *)(v18 + 32));
    else
      v20 = 0;
    v21 = *(_QWORD *)(v18 + 24);
    v22 = *(_DWORD *)(v21 + 48);
    v36 = *(_QWORD *)(v21 + 56);
    LODWORD(Block) = v22;
    if ( *(_DWORD *)(v18 + 32) )
      v6 = *(_QWORD *)(v18 + 40);
    v23 = ((__int64 (__fastcall *)(struct IResourceManager *, struct ExecutionModel::_ResourceSetInfo *, char *, ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *, __int64, __int64, _DWORD, int, __int64, int, bool *, __int64, struct IUnknown **))v32->lpVtbl[3].Register)(
            v32,
            v38,
            (char *)this + 8,
            *v5,
            v6,
            v36,
            (_DWORD)Block,
            v20,
            v37,
            v16,
            v34,
            v35,
            &v33);
  }
  else
  {
    v19 = *(_DWORD *)(v18 + 32) < 5;
    v36 = v17;
    v37 = *(_QWORD *)(v18 + 48);
    v41 = 2;
    v44 = 2;
    if ( v19 )
      LODWORD(v6) = *(&v40 + *(int *)(v18 + 32));
    v24 = *(_DWORD *)(v18 + 32) == 0;
    v25 = *(_QWORD *)(v18 + 24);
    v26 = *(_DWORD *)(v25 + 48);
    v35 = *(_QWORD *)(v25 + 56);
    if ( v24 )
      v27 = 0LL;
    else
      v27 = *(_QWORD *)(v18 + 40);
    v23 = ((__int64 (__fastcall *)(struct IResourceManager *, struct ExecutionModel::_ResourceSetInfo *, char *, ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *, __int64, __int64, int, _DWORD, __int64, bool *, __int64, struct IUnknown **))v32->lpVtbl->RequestResource)(
            v32,
            v38,
            (char *)this + 8,
            *v5,
            v27,
            v35,
            v26,
            v6,
            v37,
            v34,
            v36,
            &v33);
  }
  v10 = v23;
  if ( v23 < 0 )
    goto LABEL_37;
  v9 = (unsigned int)v33;
  if ( *(struct IUnknown **)*v5 != v33 )
    ATL::AtlComPtrAssign((struct IUnknown **)*v5, v33);
  if ( !*v34 )
    v10 = ExecutionModel::ResourceSetImpl::CompleteTransitionBackingResourceSet(this, *v5);
  if ( v10 < 0 )
    goto LABEL_37;
LABEL_40:
  utl::unique_ptr<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo,utl::default_delete<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo>>::~unique_ptr<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo,utl::default_delete<ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo>>(
    &v39,
    v9);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
    (ExecutionModel::ResourceSetImpl **)&v33,
    v29);
  return (unsigned int)v10;
}
