/*
 * XREFs of ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014D40
 * Callers:
 *     ?PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x180014338 (-PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ?Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ReleaseResourcesType@@@Z @ 0x180016020 (-Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Re.c)
 * Callees:
 *     ??$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z @ 0x1800048C4 (--$_HashRange@PEBG@utl@@YA_KPEBG0_K@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x180004C70 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?empty@?$_Dlist@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEBA_NXZ @ 0x180004FF0 (-empty@-$_Dlist@U-$_DlistNode@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@.c)
 *     ?ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180010690 (-ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?Release@HostResourceInfo@ExecutionModel@@UEAAKXZ @ 0x180013EA0 (-Release@HostResourceInfo@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x180014A00 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?IsReleased@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180014CA0 (-IsReleased@ResourceSetImpl@ExecutionModel@@UEBA_NXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Copy@ActivationIdHelper@ExecutionModel@@QEAA_NAEBU_AppModelActivationId@@@Z @ 0x180017370 (-Copy@ActivationIdHelper@ExecutionModel@@QEAA_NAEBU_AppModelActivationId@@@Z.c)
 *     ?DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x1800184C4 (-DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 *     ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x1800186AC (-RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z.c)
 *     ?erase@?$list@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@2@@Z @ 0x1800237D0 (-erase@-$list@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator@V-$.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::ReleaseResources(ExecutionModel::ResourceSetImpl *this)
{
  unsigned int v1; // ebp
  ExecutionModel::HostResources *v2; // rdi
  bool v4; // r15
  __int64 v5; // rdx
  bool v6; // al
  __int64 **v7; // r12
  ExecutionModel::HostResourceInfo *v8; // rsi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(ExecutionModel::ResourceSetImpl *); // rbx
  char IsReleased; // al
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(ExecutionModel::ResourceSet *); // rdi
  int v14; // eax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(ExecutionModel::ResourceSetImpl *); // rbx
  int v17; // eax
  __int64 *v18; // rbx
  __int64 *v19; // rbx
  __int64 *v20; // rdi
  __int64 *v21; // rcx
  __int64 v22; // rax
  ExecutionModel::ResourceSetImpl *v23; // r13
  __int64 **v24; // r12
  __int64 *v25; // rbx
  __int64 (__fastcall *v26)(ExecutionModel::ResourceSetImpl *); // rbx
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(ExecutionModel::HostResourceInfo *); // rdi
  __int64 (__fastcall *v29)(ExecutionModel::HostResourceInfo *); // rbx
  __int64 (__fastcall *v30)(ExecutionModel::ResourceSetImpl *); // rbx
  char v31; // al
  struct ExecutionModel::HostResourceInfo *v32; // rbx
  char *v33; // rdi
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r8
  __int64 v36; // rdx
  char *v37; // rax
  char *v38; // r9
  unsigned __int64 v39; // rcx
  bool v40; // zf
  __int64 (__fastcall *v41)(ExecutionModel::ResourceSetImpl *); // rbx
  __int64 (__fastcall *v43)(ExecutionModel::ResourceSetImpl *); // rbx
  __int64 *v45; // r8
  __int64 *v46; // r8
  int v47; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int16 *v48; // [rsp+28h] [rbp-50h]
  __int64 v49; // [rsp+30h] [rbp-48h]
  void *Block; // [rsp+38h] [rbp-40h]
  __int64 v51; // [rsp+80h] [rbp+8h] BYREF
  ExecutionModel::HostResources *v52; // [rsp+88h] [rbp+10h] BYREF
  struct ExecutionModel::HostResourceInfo *v53; // [rsp+90h] [rbp+18h] BYREF

  v1 = 0;
  v2 = 0LL;
  v4 = 0;
  v52 = 0LL;
  Block = 0LL;
  v47 = 5;
  v49 = -1LL;
  v48 = 0LL;
  if ( this )
    (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 8LL))(this);
  if ( !*((_QWORD *)this + 19) )
  {
    v43 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 72LL);
    if ( !(v43 == ExecutionModel::ResourceSetImpl::IsReleased
         ? ExecutionModel::ResourceSetImpl::IsReleased(this)
         : (unsigned __int8)v43(this)) )
    {
      v1 = -2147467259;
      goto LABEL_62;
    }
  }
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
  {
    v2 = *(ExecutionModel::HostResources **)(*(_QWORD *)(v5 + 16) + 80LL);
    v52 = v2;
    v6 = ExecutionModel::ActivationIdHelper::Copy(
           (ExecutionModel::ActivationIdHelper *)&v47,
           (const struct _AppModelActivationId *)(v5 + 24));
    v7 = (__int64 **)*((_QWORD *)this + 19);
    v4 = v6;
    LOBYTE(v51) = v6;
    v8 = 0LL;
    v9 = *(_QWORD *)this;
    v53 = 0LL;
    v10 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(v9 + 72);
    if ( v10 == ExecutionModel::ResourceSetImpl::IsReleased )
      IsReleased = ExecutionModel::ResourceSetImpl::IsReleased(this);
    else
      IsReleased = v10(this);
    if ( IsReleased || (*((_DWORD *)this + 7) & 0x20000) != 0 )
    {
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v53);
      goto LABEL_42;
    }
    if ( v7 )
    {
      ((void (__fastcall *)(__int64 **))(*v7)[1])(v7);
      v8 = (ExecutionModel::HostResourceInfo *)v7;
    }
    v12 = *((_QWORD *)this + 22);
    if ( v12 )
    {
      v13 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v12 + 120LL);
      v14 = v13 == ExecutionModel::ResourceSet::ReleaseResources
          ? ExecutionModel::ResourceSet::ReleaseResources(*((ExecutionModel::ResourceSet **)this + 22))
          : v13(*((ExecutionModel::ResourceSet **)this + 22));
      if ( v14 >= 0 )
      {
        v15 = *((_QWORD *)this + 22);
        if ( v15 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 16LL))(*((_QWORD *)this + 22));
          *((_QWORD *)this + 22) = 0LL;
        }
        v16 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 16LL);
        if ( v16 == ExecutionModel::ResourceSetImpl::Release )
          ExecutionModel::ResourceSetImpl::Release(this);
        else
          v16(this);
      }
    }
    v17 = *((_DWORD *)this + 7);
    if ( (v17 & 0x10) == 0 )
      *((_DWORD *)this + 7) = v17 & 0xFFFFFFE3 | 0x10;
    (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 8LL))(this);
    v18 = v7[10];
    while ( v18 != (__int64 *)(v7 + 10) )
    {
      if ( (ExecutionModel::ResourceSetImpl *)v18[2] == this )
      {
        v45 = v18;
        v18 = (__int64 *)*v18;
        utl::list<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::erase(
          v7 + 10,
          &v53,
          v45);
      }
      else
      {
        v18 = (__int64 *)*v18;
      }
    }
    v19 = v7[13];
    while ( v19 != (__int64 *)(v7 + 13) )
    {
      if ( (ExecutionModel::ResourceSetImpl *)v19[2] == this )
      {
        v20 = v19;
        v19 = (__int64 *)*v19;
        v21 = (__int64 *)v20[1];
        v22 = *v20;
        *v21 = *v20;
        *(_QWORD *)(v22 + 8) = v21;
        v23 = (ExecutionModel::ResourceSetImpl *)v20[2];
        if ( v23 )
        {
          v53 = *(struct ExecutionModel::HostResourceInfo **)(*(_QWORD *)v23 + 16LL);
          if ( v53 == (struct ExecutionModel::HostResourceInfo *)ExecutionModel::ResourceSetImpl::Release )
            ExecutionModel::ResourceSetImpl::Release(v23);
          else
            ((void (__fastcall *)(ExecutionModel::ResourceSetImpl *))v53)(v23);
        }
        operator delete(v20);
        v7[15] = (__int64 *)((char *)v7[15] - 1);
      }
      else
      {
        v19 = (__int64 *)*v19;
      }
    }
    v24 = v7 + 16;
    v1 = 0;
    v25 = *v24;
    while ( v25 != (__int64 *)v24 )
    {
      if ( (ExecutionModel::ResourceSetImpl *)v25[2] == this )
      {
        v46 = v25;
        v25 = (__int64 *)*v25;
        utl::list<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::erase(
          v24,
          &v53,
          v46);
      }
      else
      {
        v25 = (__int64 *)*v25;
      }
    }
    v26 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 16LL);
    if ( v26 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(this);
    else
      v26(this);
    v27 = *((_QWORD *)this + 19);
    if ( v27 )
    {
      v28 = *(__int64 (__fastcall **)(ExecutionModel::HostResourceInfo *))(*(_QWORD *)v27 + 16LL);
      if ( v28 == ExecutionModel::HostResourceInfo::Release )
        ExecutionModel::HostResourceInfo::Release(*((ExecutionModel::HostResourceInfo **)this + 19));
      else
        v28(*((ExecutionModel::HostResourceInfo **)this + 19));
      *((_QWORD *)this + 19) = 0LL;
    }
    if ( v8 )
    {
      v29 = *(__int64 (__fastcall **)(ExecutionModel::HostResourceInfo *))(*(_QWORD *)v8 + 16LL);
      if ( v29 != ExecutionModel::HostResourceInfo::Release )
      {
        v29(v8);
        v2 = v52;
        v4 = v51;
        goto LABEL_42;
      }
      ExecutionModel::HostResourceInfo::Release(v8);
    }
    v2 = v52;
    v4 = v51;
  }
LABEL_42:
  if ( *((_QWORD *)this + 19)
    || ((v30 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 72LL),
         v30 != ExecutionModel::ResourceSetImpl::IsReleased)
      ? (v31 = v30(this))
      : (v31 = ExecutionModel::ResourceSetImpl::IsReleased(this)),
        v31) )
  {
    if ( *((_QWORD *)this + 20) )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 20, 0LL);
    *((_WORD *)this + 14) = 0;
    *((_DWORD *)this + 7) |= 0x11u;
    if ( v2 && v4 )
    {
      v32 = 0LL;
      v53 = 0LL;
      v51 = v49;
      if ( v49 != -1 )
      {
        v33 = (char *)v2 + 16;
        if ( *((_QWORD *)v33 + 2)
          && (v34 = utl::_HashRange<unsigned short const *>((unsigned __int16 *)&v51, (unsigned __int64)&v52),
              v35 = 32769 * ((9 * v34) ^ ((9 * v34) >> 11)),
              v36 = *((_QWORD *)v33 + 2) + 16 * (v35 & ((8LL << v33[32]) - 1)),
              (v37 = *(char **)v36) != 0LL)
          && (v38 = **(char ***)(v36 + 8), v37 != v38) )
        {
          while ( 1 )
          {
            v39 = *((_QWORD *)v37 + 2);
            if ( v39 >= v35 )
            {
              if ( v39 > v35 )
                goto LABEL_73;
              if ( v51 == *((_QWORD *)v37 + 3) )
                break;
            }
            v37 = *(char **)v37;
            if ( v37 == v38 )
              goto LABEL_73;
          }
        }
        else
        {
LABEL_73:
          v37 = v33;
        }
        v40 = v37 == v33;
        v2 = v52;
        if ( !v40 )
          v32 = (struct ExecutionModel::HostResourceInfo *)*((_QWORD *)v37 + 4);
      }
      v53 = v32;
      if ( v32
        && *((struct ExecutionModel::HostResourceInfo **)v32 + 10) == (struct ExecutionModel::HostResourceInfo *)((char *)v32 + 80)
        && *((struct ExecutionModel::HostResourceInfo **)v32 + 13) == (struct ExecutionModel::HostResourceInfo *)((char *)v32 + 104)
        && utl::_Dlist<utl::_DlistNode<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::empty((_QWORD *)v32 + 16) )
      {
        if ( v47 )
          ExecutionModel::HostResources::DecrementPackageHostCount(v2, *((_DWORD *)v53 + 44), *((void **)v53 + 23), v48);
        ExecutionModel::HostResources::RemoveAndDeleteHostResourceInfo(v2, &v53);
      }
    }
  }
  else
  {
    v1 = -2147467259;
  }
LABEL_62:
  v41 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 16LL);
  if ( v41 == ExecutionModel::ResourceSetImpl::Release )
    ExecutionModel::ResourceSetImpl::Release(this);
  else
    v41(this);
  if ( Block )
    operator delete(Block);
  return v1;
}
