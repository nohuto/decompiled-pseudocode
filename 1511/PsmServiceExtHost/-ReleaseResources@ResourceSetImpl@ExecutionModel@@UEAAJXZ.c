/*
 * XREFs of ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180013C80
 * Callers:
 *     ?PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x1800137F0 (-PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ?Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ReleaseResourcesType@@@Z @ 0x180015190 (-Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Re.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x18000776C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x18000E760 (-ReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?Release@HostResourceInfo@ExecutionModel@@UEAAKXZ @ 0x180012CE0 (-Release@HostResourceInfo@ExecutionModel@@UEAAKXZ.c)
 *     ?CanSponsorPPLE@HostResourceInfo@ExecutionModel@@QEBA_NXZ @ 0x180013230 (-CanSponsorPPLE@HostResourceInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x1800138A0 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ?IsReleased@ResourceSetImpl@ExecutionModel@@UEBA_NXZ @ 0x180013B60 (-IsReleased@ResourceSetImpl@ExecutionModel@@UEBA_NXZ.c)
 *     ?Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ @ 0x180015C60 (-Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x18001A404 (-DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 *     ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x18001A894 (-RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z.c)
 *     ?HasSponsorHost@ApplicationPackageInfo@ExecutionModel@@QEBA_NXZ @ 0x18001BA88 (-HasSponsorHost@ApplicationPackageInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?TriggerPackageLostSponsorNotifications@ApplicationPackageInfo@ExecutionModel@@QEBAXXZ @ 0x18001BABC (-TriggerPackageLostSponsorNotifications@ApplicationPackageInfo@ExecutionModel@@QEBAXXZ.c)
 *     ?Copy@ActivationIdHelper@ExecutionModel@@QEAA_NAEBU_AppModelActivationId@@@Z @ 0x18001F880 (-Copy@ActivationIdHelper@ExecutionModel@@QEAA_NAEBU_AppModelActivationId@@@Z.c)
 *     ?erase@?$list@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V?$allocator@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@@utl@@@2@@Z @ 0x18001FB3C (-erase@-$list@V-$CComImplPtr@UIResourceSet@ExecutionModel@@VResourceSetImpl@2@@@V-$allocator@V-$.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::ReleaseResources(ExecutionModel::ResourceSetImpl *this)
{
  struct ExecutionModel::HostResourceInfo *v1; // r15
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  ExecutionModel::HostResourceInfo *v4; // rsi
  int v5; // r13d
  __int64 v6; // rdi
  __int64 v7; // rdx
  bool v8; // al
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 (__fastcall *v11)(ExecutionModel::ResourceSetImpl *); // rbx
  char IsReleased; // al
  char CanSponsorPPLE; // al
  ExecutionModel::ResourceSet *v14; // rbx
  __int64 (__fastcall *v15)(ExecutionModel::ResourceSet *); // rdi
  int v16; // eax
  int v17; // r12d
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(ExecutionModel::ResourceSetImpl *, unsigned int); // rbx
  int v20; // eax
  unsigned int v21; // edx
  __int64 *v22; // rbx
  __int64 *v23; // rbx
  __int64 *v24; // rdi
  __int64 *v25; // rcx
  __int64 v26; // rax
  ExecutionModel::ResourceSetImpl *v27; // rcx
  __int64 *v28; // rbx
  __int64 (__fastcall *v29)(ExecutionModel::ResourceSetImpl *, unsigned int); // rbx
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(ExecutionModel::HostResourceInfo *); // rdi
  __int64 (__fastcall *v32)(ExecutionModel::HostResourceInfo *); // rbx
  __int64 (__fastcall *v33)(ExecutionModel::ResourceSetImpl *); // rbx
  char v34; // al
  __int64 v35; // rbx
  unsigned int (__fastcall *v36)(ExecutionModel::ResourceSetServerProxy *__hidden); // r12
  ExecutionModel::HostResources *v37; // rbx
  __int64 v38; // r11
  unsigned int v39; // edx
  unsigned __int64 *v40; // r8
  __int64 v41; // r10
  int v42; // eax
  char v43; // cl
  _QWORD *v44; // rax
  unsigned __int64 v45; // rcx
  __int64 (__fastcall *v46)(ExecutionModel::ResourceSetImpl *, unsigned int); // rbx
  ExecutionModel::ApplicationPackageInfo *v48; // r11
  __int64 (__fastcall *v49)(ExecutionModel::ResourceSetImpl *); // rbx
  __int64 *v51; // r8
  __int64 *v52; // r8
  __int64 (__fastcall *v53)(ExecutionModel::ResourceSetImpl *, unsigned int); // [rsp+28h] [rbp-80h] BYREF
  struct _RTL_CRITICAL_SECTION *v54; // [rsp+30h] [rbp-78h] BYREF
  int v55; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int16 *v56; // [rsp+40h] [rbp-68h]
  __int64 v57; // [rsp+48h] [rbp-60h]
  void *Block; // [rsp+50h] [rbp-58h]
  unsigned __int64 v59; // [rsp+B0h] [rbp+8h] BYREF
  struct ExecutionModel::HostResourceInfo *v60; // [rsp+B8h] [rbp+10h] BYREF
  int v61; // [rsp+C0h] [rbp+18h]
  ExecutionModel::HostResources *v62; // [rsp+C8h] [rbp+20h]

  v1 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 24) + 40LL);
  v62 = 0LL;
  Block = 0LL;
  v4 = 0LL;
  v56 = 0LL;
  v5 = 5;
  LOBYTE(v59) = 0;
  v6 = -1LL;
  v55 = 5;
  v57 = -1LL;
  v54 = v2;
  EnterCriticalSection(v2);
  (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 8LL))(this);
  if ( !*((_QWORD *)this + 20) )
  {
    v49 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 72LL);
    if ( !(v49 == ExecutionModel::ResourceSetImpl::IsReleased
         ? ExecutionModel::ResourceSetImpl::IsReleased(this)
         : (unsigned __int8)v49(this)) )
    {
      v17 = -2147467259;
      goto LABEL_67;
    }
  }
  v7 = *((_QWORD *)this + 20);
  if ( v7 )
  {
    v62 = *(ExecutionModel::HostResources **)(*(_QWORD *)(v7 + 16) + 80LL);
    v8 = ExecutionModel::ActivationIdHelper::Copy(
           (ExecutionModel::ActivationIdHelper *)&v55,
           (const struct _AppModelActivationId *)(v7 + 32));
    v9 = *(_QWORD *)this;
    v10 = *((_QWORD *)this + 20);
    LOBYTE(v59) = v8;
    v60 = 0LL;
    v11 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(v9 + 72);
    if ( v11 == ExecutionModel::ResourceSetImpl::IsReleased )
      IsReleased = ExecutionModel::ResourceSetImpl::IsReleased(this);
    else
      IsReleased = v11(this);
    if ( IsReleased || (*((_DWORD *)this + 7) & 0x20000) != 0 )
    {
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v60);
      v17 = 0;
LABEL_41:
      v4 = (ExecutionModel::HostResourceInfo *)Block;
      if ( v17 < 0 )
        goto LABEL_67;
      v6 = v57;
      v5 = v55;
      goto LABEL_43;
    }
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v4 = (ExecutionModel::HostResourceInfo *)v10;
    }
    CanSponsorPPLE = ExecutionModel::HostResourceInfo::CanSponsorPPLE((ExecutionModel::HostResourceInfo *)v10);
    v14 = (ExecutionModel::ResourceSet *)*((_QWORD *)this + 23);
    LOBYTE(v60) = CanSponsorPPLE;
    v61 = 0;
    if ( v14 )
    {
      v15 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v14 + 120LL);
      if ( v15 == ExecutionModel::ResourceSet::ReleaseResources )
        v16 = ExecutionModel::ResourceSet::ReleaseResources(v14);
      else
        v16 = v15(v14);
      v61 = v16;
      v17 = v16;
      if ( v16 < 0 )
      {
LABEL_38:
        if ( v4 )
        {
          v32 = *(__int64 (__fastcall **)(ExecutionModel::HostResourceInfo *))(*(_QWORD *)v4 + 16LL);
          if ( v32 == ExecutionModel::HostResourceInfo::Release )
            ExecutionModel::HostResourceInfo::Release(v4);
          else
            v32(v4);
        }
        goto LABEL_41;
      }
      v18 = *((_QWORD *)this + 23);
      if ( v18 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 16LL))(*((_QWORD *)this + 23));
        *((_QWORD *)this + 23) = 0LL;
      }
      v19 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *, unsigned int))(*(_QWORD *)this + 16LL);
      if ( v19 == ExecutionModel::ResourceSetImpl::Release )
        ExecutionModel::ResourceSetImpl::Release(this, v7);
      else
        ((void (__fastcall *)(ExecutionModel::ResourceSetImpl *))v19)(this);
    }
    v20 = *((_DWORD *)this + 7);
    if ( (v20 & 0x10) == 0 )
      *((_DWORD *)this + 7) = v20 & 0xFFFFFFE3 | 0x10;
    (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 8LL))(this);
    v22 = *(__int64 **)(v10 + 88);
    while ( v22 != (__int64 *)(v10 + 88) )
    {
      if ( (ExecutionModel::ResourceSetImpl *)v22[2] == this )
      {
        v51 = v22;
        v22 = (__int64 *)*v22;
        utl::list<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::erase(
          v10 + 88,
          &v53,
          v51);
      }
      else
      {
        v22 = (__int64 *)*v22;
      }
    }
    v23 = *(__int64 **)(v10 + 112);
    while ( v23 != (__int64 *)(v10 + 112) )
    {
      if ( (ExecutionModel::ResourceSetImpl *)v23[2] == this )
      {
        v24 = v23;
        v23 = (__int64 *)*v23;
        v25 = (__int64 *)v24[1];
        v26 = *v24;
        *v25 = *v24;
        *(_QWORD *)(v26 + 8) = v25;
        v27 = (ExecutionModel::ResourceSetImpl *)v24[2];
        if ( v27 )
        {
          v53 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *, unsigned int))(*(_QWORD *)v27 + 16LL);
          if ( v53 == ExecutionModel::ResourceSetImpl::Release )
            ExecutionModel::ResourceSetImpl::Release(v27, v21);
          else
            ((void (__fastcall *)(ExecutionModel::ResourceSetImpl *))v53)(v27);
        }
        operator delete(v24);
        --*(_QWORD *)(v10 + 128);
      }
      else
      {
        v23 = (__int64 *)*v23;
      }
    }
    v2 = v54;
    v28 = *(__int64 **)(v10 + 136);
    while ( v28 != (__int64 *)(v10 + 136) )
    {
      if ( (ExecutionModel::ResourceSetImpl *)v28[2] == this )
      {
        v52 = v28;
        v28 = (__int64 *)*v28;
        utl::list<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>,utl::allocator<CComImplPtr<ExecutionModel::IResourceSet,ExecutionModel::ResourceSetImpl>>>::erase(
          v10 + 136,
          &v54,
          v52);
      }
      else
      {
        v28 = (__int64 *)*v28;
      }
    }
    v29 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *, unsigned int))(*(_QWORD *)this + 16LL);
    if ( v29 == ExecutionModel::ResourceSetImpl::Release )
      ExecutionModel::ResourceSetImpl::Release(this, v21);
    else
      ((void (__fastcall *)(ExecutionModel::ResourceSetImpl *))v29)(this);
    v30 = *((_QWORD *)this + 20);
    if ( v30 )
    {
      v31 = *(__int64 (__fastcall **)(ExecutionModel::HostResourceInfo *))(*(_QWORD *)v30 + 16LL);
      if ( v31 == ExecutionModel::HostResourceInfo::Release )
        ExecutionModel::HostResourceInfo::Release(*((ExecutionModel::HostResourceInfo **)this + 20));
      else
        v31(*((ExecutionModel::HostResourceInfo **)this + 20));
      *((_QWORD *)this + 20) = 0LL;
    }
    if ( (_BYTE)v60
      && !ExecutionModel::HostResourceInfo::CanSponsorPPLE((ExecutionModel::HostResourceInfo *)v10)
      && !ExecutionModel::ApplicationPackageInfo::HasSponsorHost(*(ExecutionModel::ApplicationPackageInfo **)(v10 + 24)) )
    {
      ExecutionModel::ApplicationPackageInfo::TriggerPackageLostSponsorNotifications(v48);
    }
    v17 = v61;
    goto LABEL_38;
  }
LABEL_43:
  if ( *((_QWORD *)this + 20)
    || ((v33 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 72LL),
         v33 != ExecutionModel::ResourceSetImpl::IsReleased)
      ? (v34 = v33(this))
      : (v34 = ExecutionModel::ResourceSetImpl::IsReleased(this)),
        v34) )
  {
    v35 = *((_QWORD *)this + 21);
    if ( v35 )
    {
      v36 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSetServerProxy *__hidden))(*(_QWORD *)v35 + 16LL);
      if ( v36 == ExecutionModel::ResourceSetServerProxy::Release )
        ExecutionModel::ResourceSetServerProxy::Release(*((ExecutionModel::ResourceSetServerProxy **)this + 21));
      else
        v36(*((ExecutionModel::ResourceSetServerProxy **)this + 21));
      *((_QWORD *)this + 21) = 0LL;
    }
    *((_WORD *)this + 14) = 0;
    *((_DWORD *)this + 7) |= 0x11u;
    v37 = v62;
    v17 = 0;
    if ( v62 && (_BYTE)v59 )
    {
      v60 = 0LL;
      v59 = v6;
      if ( v6 != -1 )
      {
        v38 = *((_QWORD *)v62 + 4);
        if ( !v38 )
          goto LABEL_81;
        v39 = 0;
        v40 = &v59;
        v41 = 4LL;
        do
        {
          v42 = *(unsigned __int16 *)v40;
          v40 = (unsigned __int64 *)((char *)v40 + 2);
          v39 = (1025 * (v39 + v42)) ^ ((1025 * (v39 + v42)) >> 6);
          --v41;
        }
        while ( v41 );
        v59 = v39;
        v43 = *((_BYTE *)v62 + 48);
        LODWORD(v59) = 32769 * (((unsigned int)(9 * v59) >> 11) ^ (9 * v59));
        v7 = 2 * (v59 & ((8LL << v43) - 1));
        v44 = *(_QWORD **)(v38 + 16 * (v59 & ((8LL << v43) - 1)));
        if ( v44 && (v7 = **(_QWORD **)(v38 + 16 * (v59 & ((8LL << v43) - 1)) + 8), v44 != (_QWORD *)v7) )
        {
          while ( 1 )
          {
            v45 = v44[2];
            if ( v45 >= v59 )
            {
              if ( v45 > v59 )
                goto LABEL_81;
              if ( v6 == v44[3] )
                break;
            }
            v44 = (_QWORD *)*v44;
            if ( v44 == (_QWORD *)v7 )
              goto LABEL_81;
          }
        }
        else
        {
LABEL_81:
          v44 = (_QWORD *)((char *)v62 + 16);
        }
        if ( v44 != (_QWORD *)((char *)v62 + 16) )
          v1 = (struct ExecutionModel::HostResourceInfo *)v44[4];
      }
      v60 = v1;
      if ( v1
        && *((struct ExecutionModel::HostResourceInfo **)v1 + 11) == (struct ExecutionModel::HostResourceInfo *)((char *)v1 + 88)
        && *((struct ExecutionModel::HostResourceInfo **)v1 + 14) == (struct ExecutionModel::HostResourceInfo *)((char *)v1 + 112)
        && *((struct ExecutionModel::HostResourceInfo **)v1 + 17) == (struct ExecutionModel::HostResourceInfo *)((char *)v1 + 136) )
      {
        if ( v5 )
          ExecutionModel::HostResources::DecrementPackageHostCount(
            v62,
            *(_DWORD *)(*((_QWORD *)v1 + 3) + 48LL),
            *(void **)(*((_QWORD *)v1 + 3) + 56LL),
            v56);
        ExecutionModel::HostResources::RemoveAndDeleteHostResourceInfo(v37, &v60);
      }
    }
  }
  else
  {
    v17 = -2147467259;
  }
LABEL_67:
  v46 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSetImpl *, unsigned int))(*(_QWORD *)this + 16LL);
  if ( v46 == ExecutionModel::ResourceSetImpl::Release )
    ExecutionModel::ResourceSetImpl::Release(this, v7);
  else
    ((void (__fastcall *)(ExecutionModel::ResourceSetImpl *))v46)(this);
  LeaveCriticalSection(v2);
  if ( v4 )
    operator delete(v4);
  return (unsigned int)v17;
}
