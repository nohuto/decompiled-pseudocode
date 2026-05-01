/*
 * XREFs of ?HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z @ 0x180013280
 * Callers:
 *     ?Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014250 (-Apply@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?Apply@ResourceSetImpl@ExecutionModel@@UEAAJK@Z @ 0x18004E4D0 (-Apply@ResourceSetImpl@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x18000CDA0 (-Apply@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?CanSponsorPPLE@HostResourceInfo@ExecutionModel@@QEBA_NXZ @ 0x180013230 (-CanSponsorPPLE@HostResourceInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x1800138A0 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?IsApplied@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180013B30 (-IsApplied@ResourceSetImpl@ExecutionModel@@UEBA_NXZ.c)
 *     ?IsValid@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180013B50 (-IsValid@ResourceSetImpl@ExecutionModel@@UEBA_NXZ.c)
 *     ?HasSponsorHost@ApplicationPackageInfo@ExecutionModel@@QEBA_NXZ @ 0x18001BA88 (-HasSponsorHost@ApplicationPackageInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?TriggerPackageLostSponsorNotifications@ApplicationPackageInfo@ExecutionModel@@QEBAXXZ @ 0x18001BABC (-TriggerPackageLostSponsorNotifications@ApplicationPackageInfo@ExecutionModel@@QEBAXXZ.c)
 *     ?erase@?$list@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@2@@Z @ 0x18001FB3C (-erase@-$list@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator@V-$.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::HostApplyResourceSet(
        ExecutionModel::HostResourceInfo *this,
        struct ExecutionModel::ResourceSetImpl *a2,
        unsigned int a3)
{
  ExecutionModel::HostResourceInfo *v5; // r13
  bool (__fastcall *v6)(ExecutionModel::ResourceSetImpl *__hidden); // rbx
  bool IsValid; // al
  bool (__fastcall *v8)(ExecutionModel::ResourceSetImpl *__hidden); // rbx
  bool IsApplied; // al
  char CanSponsorPPLE; // r15
  __int64 (__fastcall *v11)(ExecutionModel::ResourceSet *); // rdi
  int v12; // eax
  unsigned int v13; // r12d
  int v14; // ecx
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  _QWORD *v17; // rax
  char v18; // di
  unsigned int (__fastcall *v19)(ExecutionModel::ResourceSetImpl *__hidden); // rbx
  struct ExecutionModel::ResourceSetImpl **v20; // rbx
  unsigned int (__fastcall *v21)(ExecutionModel::ResourceSetImpl *__hidden); // rbx
  struct ExecutionModel::ResourceSetImpl **v22; // rbx
  struct ExecutionModel::ResourceSetImpl **v23; // rdi
  struct ExecutionModel::ResourceSetImpl **v24; // rcx
  struct ExecutionModel::ResourceSetImpl *v25; // rax
  struct ExecutionModel::ResourceSetImpl *v26; // r15
  unsigned int (__fastcall *v27)(ExecutionModel::ResourceSetImpl *__hidden); // rbp
  unsigned int (__fastcall *v28)(ExecutionModel::ResourceSetImpl *__hidden); // rbx
  struct ExecutionModel::ResourceSetImpl **v30; // r8
  ExecutionModel::ApplicationPackageInfo *v32; // r11
  char v34; // [rsp+68h] [rbp+10h]
  char v35; // [rsp+78h] [rbp+20h] BYREF

  v5 = this;
  if ( !a2 )
    __int2c();
  v6 = *(bool (__fastcall **)(ExecutionModel::ResourceSetImpl *__hidden))(*(_QWORD *)a2 + 80LL);
  if ( v6 == ExecutionModel::ResourceSetImpl::IsValid )
    IsValid = ExecutionModel::ResourceSetImpl::IsValid(a2);
  else
    IsValid = v6(a2);
  if ( !IsValid )
    return 2147747078LL;
  v8 = *(bool (__fastcall **)(ExecutionModel::ResourceSetImpl *__hidden))(*(_QWORD *)a2 + 88LL);
  if ( v8 == ExecutionModel::ResourceSetImpl::IsApplied )
    IsApplied = ExecutionModel::ResourceSetImpl::IsApplied(a2);
  else
    IsApplied = v8(a2);
  if ( IsApplied )
    return 2147747076LL;
  if ( (*((_BYTE *)a2 + 28) & 4) != 0 )
  {
    CanSponsorPPLE = ExecutionModel::HostResourceInfo::CanSponsorPPLE(v5);
    v34 = CanSponsorPPLE;
    if ( *(_DWORD *)(*((_QWORD *)a2 + 20) + 32LL) )
    {
      v11 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(**((_QWORD **)a2 + 23) + 24LL);
      if ( v11 == ExecutionModel::ResourceSet::Apply )
        v12 = ExecutionModel::ResourceSet::Apply(*((ExecutionModel::ResourceSet **)a2 + 23));
      else
        v12 = v11(*((ExecutionModel::ResourceSet **)a2 + 23));
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 23) + 32LL))(*((_QWORD *)a2 + 23), a3);
    }
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = *((_DWORD *)a2 + 7);
      if ( (v14 & 8) != 0 )
      {
LABEL_17:
        v13 = 0;
        (*(void (__fastcall **)(struct ExecutionModel::ResourceSetImpl *))(*(_QWORD *)a2 + 8LL))(a2);
        v15 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v16 = v15;
        if ( v15 )
        {
          v15[2] = a2;
          (*(void (__fastcall **)(struct ExecutionModel::ResourceSetImpl *))(*(_QWORD *)a2 + 8LL))(a2);
          v17 = (_QWORD *)*((_QWORD *)v5 + 15);
          v16[1] = v17;
          *v16 = (char *)v5 + 112;
          *v17 = v16;
          *((_QWORD *)v5 + 15) = v16;
          ++*((_QWORD *)v5 + 16);
          v18 = 0;
        }
        else
        {
          v18 = 1;
        }
        v19 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetImpl *__hidden))(*(_QWORD *)a2 + 16LL);
        if ( v19 == ExecutionModel::ResourceSetImpl::Release )
          ExecutionModel::ResourceSetImpl::Release(a2);
        else
          v19(a2);
        if ( !v18 )
        {
          (*(void (__fastcall **)(struct ExecutionModel::ResourceSetImpl *))(*(_QWORD *)a2 + 8LL))(a2);
          v20 = (struct ExecutionModel::ResourceSetImpl **)*((_QWORD *)v5 + 17);
          while ( v20 != (struct ExecutionModel::ResourceSetImpl **)((char *)v5 + 136) )
          {
            if ( v20[2] == a2 )
            {
              v30 = v20;
              v20 = (struct ExecutionModel::ResourceSetImpl **)*v20;
              utl::list<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::erase(
                (char *)v5 + 136,
                &v35,
                v30);
            }
            else
            {
              v20 = (struct ExecutionModel::ResourceSetImpl **)*v20;
            }
          }
          v21 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetImpl *__hidden))(*(_QWORD *)a2 + 16LL);
          if ( v21 == ExecutionModel::ResourceSetImpl::Release )
            ExecutionModel::ResourceSetImpl::Release(a2);
          else
            v21(a2);
          (*(void (__fastcall **)(struct ExecutionModel::ResourceSetImpl *))(*(_QWORD *)a2 + 8LL))(a2);
          v22 = (struct ExecutionModel::ResourceSetImpl **)*((_QWORD *)v5 + 11);
          while ( v22 != (struct ExecutionModel::ResourceSetImpl **)((char *)v5 + 88) )
          {
            if ( v22[2] == a2 )
            {
              v23 = v22;
              v22 = (struct ExecutionModel::ResourceSetImpl **)*v22;
              v24 = (struct ExecutionModel::ResourceSetImpl **)v23[1];
              v25 = *v23;
              *v24 = *v23;
              *((_QWORD *)v25 + 1) = v24;
              v26 = v23[2];
              if ( v26 )
              {
                v27 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetImpl *__hidden))(*(_QWORD *)v26 + 16LL);
                if ( v27 == ExecutionModel::ResourceSetImpl::Release )
                  ExecutionModel::ResourceSetImpl::Release(v23[2]);
                else
                  v27(v23[2]);
              }
              operator delete(v23);
              --*((_QWORD *)v5 + 13);
            }
            else
            {
              v22 = (struct ExecutionModel::ResourceSetImpl **)*v22;
            }
          }
          v5 = this;
          v28 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetImpl *__hidden))(*(_QWORD *)a2 + 16LL);
          if ( v28 == ExecutionModel::ResourceSetImpl::Release )
            ExecutionModel::ResourceSetImpl::Release(a2);
          else
            v28(a2);
          CanSponsorPPLE = v34;
        }
        if ( CanSponsorPPLE )
        {
          if ( !ExecutionModel::HostResourceInfo::CanSponsorPPLE(v5)
            && !ExecutionModel::ApplicationPackageInfo::HasSponsorHost(*((ExecutionModel::ApplicationPackageInfo **)v5
                                                                       + 3)) )
          {
            ExecutionModel::ApplicationPackageInfo::TriggerPackageLostSponsorNotifications(v32);
          }
        }
        return v13;
      }
      if ( (v14 & 1) != 0 )
      {
        *((_DWORD *)a2 + 7) = v14 | 8;
        goto LABEL_17;
      }
      return (unsigned int)-2147467259;
    }
    return v13;
  }
  return 2147747077LL;
}
