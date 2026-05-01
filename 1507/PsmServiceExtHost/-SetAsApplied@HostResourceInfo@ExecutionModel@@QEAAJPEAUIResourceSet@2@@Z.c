/*
 * XREFs of ?SetAsApplied@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180013EF0
 * Callers:
 *     ?Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180015270 (-Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z @ 0x18002EBC4 (-HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z.c)
 * Callees:
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x180014A00 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?erase@?$list@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@2@@Z @ 0x1800237D0 (-erase@-$list@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator@V-$.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::SetAsApplied(
        ExecutionModel::HostResourceInfo *this,
        struct ExecutionModel::IResourceSet *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  char v7; // di
  unsigned int (__fastcall *v8)(ExecutionModel::ResourceSetImpl *__hidden); // rbx
  struct ExecutionModel::IResourceSet **v9; // rbx
  unsigned int (__fastcall *v10)(ExecutionModel::ResourceSetImpl *__hidden); // rbx
  struct ExecutionModel::IResourceSet **v11; // rbx
  char *v12; // r14
  struct ExecutionModel::IResourceSet **v13; // rdi
  struct ExecutionModel::IResourceSet **v14; // rcx
  struct ExecutionModel::IResourceSet *v15; // rax
  struct ExecutionModel::IResourceSet *v16; // r15
  unsigned int (__fastcall *v17)(ExecutionModel::ResourceSetImpl *__hidden); // rbp
  unsigned int (__fastcall *v18)(ExecutionModel::ResourceSetImpl *__hidden); // rbx
  struct ExecutionModel::IResourceSet **v20; // r8
  char v21; // [rsp+50h] [rbp+8h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
    goto LABEL_32;
  v4[2] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v5 )
  {
    v6 = (_QWORD *)*((_QWORD *)this + 14);
    v5[1] = v6;
    *v5 = (char *)this + 104;
    *v6 = v5;
    *((_QWORD *)this + 14) = v5;
    ++*((_QWORD *)this + 15);
    v7 = 0;
  }
  else
  {
LABEL_32:
    v7 = 1;
  }
  if ( a2 )
  {
    v8 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetImpl *__hidden))(*(_QWORD *)a2 + 16LL);
    if ( v8 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(a2);
    else
      v8(a2);
  }
  if ( v7 )
    return 2147942414LL;
  if ( a2 )
    (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = (struct ExecutionModel::IResourceSet **)*((_QWORD *)this + 16);
  while ( v9 != (struct ExecutionModel::IResourceSet **)((char *)this + 128) )
  {
    if ( v9[2] == a2 )
    {
      v20 = v9;
      v9 = (struct ExecutionModel::IResourceSet **)*v9;
      utl::list<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::erase(
        (char *)this + 128,
        &v21,
        v20);
    }
    else
    {
      v9 = (struct ExecutionModel::IResourceSet **)*v9;
    }
  }
  if ( a2 )
  {
    v10 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetImpl *__hidden))(*(_QWORD *)a2 + 16LL);
    if ( v10 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(a2);
    else
      v10(a2);
    (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  v11 = (struct ExecutionModel::IResourceSet **)*((_QWORD *)this + 10);
  v12 = (char *)this + 80;
  while ( v11 != (struct ExecutionModel::IResourceSet **)v12 )
  {
    if ( v11[2] == a2 )
    {
      v13 = v11;
      v11 = (struct ExecutionModel::IResourceSet **)*v11;
      v14 = (struct ExecutionModel::IResourceSet **)v13[1];
      v15 = *v13;
      *v14 = *v13;
      *((_QWORD *)v15 + 1) = v14;
      v16 = v13[2];
      if ( v16 )
      {
        v17 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetImpl *__hidden))(*(_QWORD *)v16 + 16LL);
        if ( v17 == ExecutionModel::ResourceSetImpl::Release )
          ExecutionModel::ResourceSetImpl::Release(v13[2]);
        else
          v17(v13[2]);
      }
      operator delete(v13);
      --*((_QWORD *)v12 + 2);
    }
    else
    {
      v11 = (struct ExecutionModel::IResourceSet **)*v11;
    }
  }
  if ( a2 )
  {
    v18 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetImpl *__hidden))(*(_QWORD *)a2 + 16LL);
    if ( v18 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(a2);
    else
      v18(a2);
  }
  return 0LL;
}
