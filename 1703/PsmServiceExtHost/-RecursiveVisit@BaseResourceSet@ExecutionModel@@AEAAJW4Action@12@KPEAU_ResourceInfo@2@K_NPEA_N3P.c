/*
 * XREFs of ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E4B0
 * Callers:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E4B0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18000E6A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000EA14 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18000ECC0 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18000FA08 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010460 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000E440 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E4B0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?HasLowerPrecedenceThan@BaseResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x18000F000 (-HasLowerPrecedenceThan@BaseResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     sub_180010C80 @ 0x180010C80 (sub_180010C80.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180011DB0 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ??$emplace@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@1@$$QEAV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x1800350C8 (--$emplace@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@-$list@V-$CComPtr@VBaseResourceSet.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::RecursiveVisit(
        ExecutionModel::BaseResourceSet *this,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        char a6,
        _BYTE *a7,
        _BYTE *a8,
        _QWORD *a9,
        __int64 a10)
{
  bool v10; // zf
  _BYTE *v12; // rbx
  int v13; // r8d
  unsigned int v15; // edx
  struct ExecutionModel::_ResourceInfo *v16; // rbx
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rax
  char *v20; // r11
  bool (__fastcall *v21)(ExecutionModel::BaseResourceSet *__hidden, struct ExecutionModel::_ResourceInfo *, unsigned int); // rax
  char HasLowerPrecedenceThan; // al
  __int64 v23; // rax
  char v24; // r9
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rcx
  unsigned int v27; // ecx
  _QWORD *v28; // rax
  _BYTE *v29; // rax
  __int64 result; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rbx
  __int64 (__fastcall *v35)(ExecutionModel::BaseResourceSet *); // rax
  bool v36; // bl
  void (*v37)(void); // rax
  char *i; // rax
  char **v39; // rbp
  unsigned int v40; // [rsp+50h] [rbp-28h]
  char *v41; // [rsp+58h] [rbp-20h] BYREF
  ExecutionModel::BaseResourceSet *v42; // [rsp+80h] [rbp+8h] BYREF
  int v43; // [rsp+88h] [rbp+10h]
  unsigned int *v44; // [rsp+98h] [rbp+20h]

  v44 = a4;
  v43 = a2;
  v10 = *((_DWORD *)this + 338) == 2;
  v12 = a8;
  v13 = a2;
  *a8 = 0;
  if ( !v10 )
    return 0LL;
  v15 = 0;
  LOBYTE(v42) = 0;
  v40 = 0;
  if ( !a3 )
    goto LABEL_25;
  v16 = (struct ExecutionModel::_ResourceInfo *)a4;
  do
  {
    v17 = *(unsigned int *)v16;
    if ( (unsigned int)v17 > 0x2F )
      goto LABEL_22;
    v18 = 24 * ((int)v17 + 8LL);
    v19 = *(_QWORD *)((char *)this + v18 + 8);
    v20 = (char *)this + v18;
    v41 = (char *)this + v18;
    if ( v19 )
    {
      if ( *((int *)v16 + 4) >= 101 )
        goto LABEL_22;
      if ( a6 )
      {
        v21 = *(bool (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden, struct ExecutionModel::_ResourceInfo *, unsigned int))(*(_QWORD *)this + 72LL);
        if ( v21 == ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan )
          HasLowerPrecedenceThan = ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan(this, v16, a5);
        else
          HasLowerPrecedenceThan = ((__int64 (__fastcall *)(ExecutionModel::BaseResourceSet *, struct ExecutionModel::_ResourceInfo *, _QWORD, bool (__fastcall *)(ExecutionModel::BaseResourceSet *__hidden, struct ExecutionModel::_ResourceInfo *, unsigned int)))v21)(
                                     this,
                                     v16,
                                     a5,
                                     ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan);
        v15 = v40;
        v13 = v43;
        if ( !HasLowerPrecedenceThan )
          goto LABEL_22;
        v20 = v41;
      }
      v23 = *((_QWORD *)this + 168);
      if ( _bittest64(&v23, v17) )
        v24 = 1;
      else
        v24 = 0;
      v25 = *((_QWORD *)v20 + 1);
      v26 = *((_QWORD *)v16 + 1);
      if ( v25 < v26 )
        v26 = *((_QWORD *)v20 + 1);
      if ( v24 )
        v26 = *((_QWORD *)v16 + 1);
      if ( v13 )
      {
        if ( v13 != 1 )
          __fastfail(0xC0000001);
        if ( !v24 )
          *((_QWORD *)v20 + 1) = v25 - v26;
        v31 = a10;
        v32 = 3 * (*(int *)v16 + 8LL);
        *(_OWORD *)(a10 + 8 * v32) = *(_OWORD *)v16;
        *(_QWORD *)(v31 + 8 * v32 + 16) = *((_QWORD *)v16 + 2);
      }
      else if ( *((_QWORD *)this + 23) )
      {
        LOBYTE(v42) = 1;
      }
      *((_QWORD *)v16 + 1) -= v26;
      v13 = v43;
    }
    else if ( !*((_QWORD *)v16 + 1) && v13 == 1 )
    {
      v33 = a10;
      *(_OWORD *)(v18 + a10) = *(_OWORD *)v16;
      *(_QWORD *)(v18 + v33 + 16) = *((_QWORD *)v16 + 2);
    }
LABEL_22:
    ++v15;
    v16 = (struct ExecutionModel::_ResourceInfo *)((char *)v16 + 24);
    v40 = v15;
  }
  while ( v15 < a3 );
  if ( (_BYTE)v42 )
  {
    v34 = a9;
    if ( a9 )
    {
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v42, this);
      sub_180010C80(v34, &v42);
      if ( v42 )
      {
        v35 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v42 + 16LL);
        if ( (char *)v35 == (char *)ExecutionModel::ResourceSet::Release )
        {
          ExecutionModel::ResourceSet::Release(v42);
        }
        else if ( v35 == ExecutionModel::BaseResourceSet::Release )
        {
          ExecutionModel::BaseResourceSet::Release(v42);
        }
        else
        {
          ((void (__fastcall *)(ExecutionModel::BaseResourceSet *, unsigned int (__fastcall *)(ExecutionModel::ResourceSet *__hidden)))v35)(
            v42,
            ExecutionModel::ResourceSet::Release);
        }
      }
      ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v42, this);
      utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::emplace<ATL::CComPtr<ExecutionModel::BaseResourceSet>>(
        v34,
        &v41,
        *v34,
        &v42);
      v36 = v41 != 0LL;
      if ( v42 )
      {
        v37 = *(void (**)(void))(*(_QWORD *)v42 + 16LL);
        if ( (char *)v37 == (char *)ExecutionModel::ResourceSet::Release )
        {
          ExecutionModel::ResourceSet::Release(v42);
        }
        else if ( (char *)v37 == (char *)ExecutionModel::BaseResourceSet::Release )
        {
          ExecutionModel::BaseResourceSet::Release(v42);
        }
        else
        {
          v37();
        }
      }
      if ( !v36 )
        return 2147500037LL;
    }
  }
  v12 = a8;
  a4 = v44;
LABEL_25:
  v27 = 0;
  if ( a3 )
  {
    v28 = a4 + 2;
    while ( !*v28 )
    {
      ++v27;
      v28 += 3;
      if ( v27 >= a3 )
        goto LABEL_29;
    }
    *a7 = 1;
    for ( i = (char *)this + 160; i != *((char **)this + 20); i = *v39 )
    {
      v39 = (char **)(i + 8);
      result = ExecutionModel::BaseResourceSet::RecursiveVisit(
                 *(ExecutionModel::BaseResourceSet **)(*((_QWORD *)i + 1) + 16LL),
                 a5,
                 a6,
                 (__int64)&a8,
                 (__int64)v12,
                 (__int64)a9,
                 a10);
      if ( (int)result < 0 )
        return result;
      if ( *v12 )
        break;
    }
  }
  else
  {
LABEL_29:
    v29 = a7;
    *v12 = 1;
    *v29 = 0;
  }
  return 0LL;
}
