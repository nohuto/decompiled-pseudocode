/*
 * XREFs of ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010970
 * Callers:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010970 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?ReassignResources@BaseResourceSet@ExecutionModel@@AEAAXPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAV12@@Z @ 0x1800111C8 (-ReassignResources@BaseResourceSet@ExecutionModel@@AEAAXPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_S.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180011290 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 * Callees:
 *     ??0?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800037C0 (--0-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800108F0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010970 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?HasLowerPrecedenceThan@BaseResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x1800115B0 (-HasLowerPrecedenceThan@BaseResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??$remove_if@V_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXV_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@Z @ 0x180015100 (--$remove_if@V_lambda_4a96282eb34af91833354b43e8ed5ac2_@@@-$list@V-$CComPtr@VBaseResourceSet@Exe.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?push_front@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA_N$$QEAV?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@Z @ 0x1800371B4 (-push_front@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBa.c)
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
        __int64 a9,
        __int64 a10)
{
  bool v10; // zf
  unsigned int v11; // r10d
  _BYTE *v12; // r8
  unsigned int v14; // ebp
  struct ExecutionModel::_ResourceInfo *v15; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // rcx
  char *v18; // r11
  bool (__fastcall *v19)(ExecutionModel::BaseResourceSet *__hidden, struct ExecutionModel::_ResourceInfo *, unsigned int); // rax
  bool HasLowerPrecedenceThan; // al
  __int64 v21; // rax
  char v22; // r8
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // ecx
  _QWORD *v28; // rax
  _BYTE *v29; // rax
  __int64 result; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  void (*v33)(void); // rax
  bool v34; // bl
  void (*v35)(void); // rax
  char v36; // di
  __int64 v37; // rbp
  char *i; // rax
  char **v39; // rbx
  char *v40; // [rsp+50h] [rbp-38h]
  ExecutionModel::BaseResourceSet *v41; // [rsp+90h] [rbp+8h] BYREF
  int v42; // [rsp+98h] [rbp+10h]
  unsigned int v43; // [rsp+A0h] [rbp+18h]
  unsigned int *v44; // [rsp+A8h] [rbp+20h]

  v44 = a4;
  v43 = a3;
  v42 = a2;
  v10 = *((_DWORD *)this + 338) == 2;
  v11 = a3;
  v12 = a8;
  *a8 = 0;
  if ( !v10 )
    return 0LL;
  v14 = 0;
  LOBYTE(v41) = 0;
  if ( !v11 )
    goto LABEL_27;
  v15 = (struct ExecutionModel::_ResourceInfo *)a4;
  do
  {
    v16 = *(unsigned int *)v15;
    if ( (unsigned int)v16 > 0x2F )
      goto LABEL_24;
    v17 = 24 * ((int)v16 + 8LL);
    v18 = (char *)this + v17;
    v40 = (char *)this + v17;
    if ( *(_QWORD *)((char *)this + v17 + 8) )
    {
      if ( *((int *)v15 + 4) >= 101 )
        goto LABEL_24;
      if ( a6 )
      {
        v19 = *(bool (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden, struct ExecutionModel::_ResourceInfo *, unsigned int))(*(_QWORD *)this + 80LL);
        if ( v19 == ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan )
          HasLowerPrecedenceThan = ExecutionModel::BaseResourceSet::HasLowerPrecedenceThan(this, v15, a5);
        else
          HasLowerPrecedenceThan = v19(this, v15, a5);
        v11 = v43;
        a2 = v42;
        if ( !HasLowerPrecedenceThan )
          goto LABEL_24;
        v18 = v40;
      }
      v21 = *((_QWORD *)this + 168);
      if ( _bittest64(&v21, v16) )
        v22 = 1;
      else
        v22 = 0;
      v23 = *((_QWORD *)v18 + 1);
      v24 = *((_QWORD *)v15 + 1);
      if ( v23 < v24 )
        v24 = *((_QWORD *)v18 + 1);
      if ( v22 )
        v24 = *((_QWORD *)v15 + 1);
      if ( a2 )
      {
        if ( a2 != 1 )
          __fastfail(0xC0000001);
        if ( !v22 )
          *((_QWORD *)v18 + 1) = v23 - v24;
        v25 = a10;
        v26 = 3 * (*(int *)v15 + 8LL);
        *(_OWORD *)(a10 + 8 * v26) = *(_OWORD *)v15;
        *(_QWORD *)(v25 + 8 * v26 + 16) = *((_QWORD *)v15 + 2);
      }
      else if ( *((_QWORD *)this + 23) )
      {
        LOBYTE(v41) = 1;
      }
      *((_QWORD *)v15 + 1) -= v24;
      a2 = v42;
    }
    else if ( !*((_QWORD *)v15 + 1) && a2 == 1 )
    {
      v31 = a10;
      *(_OWORD *)(v17 + a10) = *(_OWORD *)v15;
      *(_QWORD *)(v17 + v31 + 16) = *((_QWORD *)v15 + 2);
    }
LABEL_24:
    ++v14;
    v15 = (struct ExecutionModel::_ResourceInfo *)((char *)v15 + 24);
  }
  while ( v14 < v11 );
  if ( (_BYTE)v41 )
  {
    v32 = a9;
    if ( a9 )
    {
      ATL::CComPtrBase<ExecutionModel::ResourceSet>::CComPtrBase<ExecutionModel::ResourceSet>(&v41, this);
      utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::remove_if<_lambda_4a96282eb34af91833354b43e8ed5ac2_>(
        v32,
        &v41);
      if ( v41 )
      {
        v33 = *(void (**)(void))(*(_QWORD *)v41 + 16LL);
        if ( (char *)v33 == (char *)ExecutionModel::BaseResourceSet::Release )
        {
          ExecutionModel::BaseResourceSet::Release(v41);
        }
        else if ( (char *)v33 == (char *)ExecutionModel::ResourceSet::Release )
        {
          ExecutionModel::ResourceSet::Release(v41);
        }
        else
        {
          v33();
        }
      }
      ATL::CComPtrBase<ExecutionModel::ResourceSet>::CComPtrBase<ExecutionModel::ResourceSet>(&v41, this);
      v34 = (unsigned __int8)utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::push_front(
                               v32,
                               &v41) == 0;
      if ( v41 )
      {
        v35 = *(void (**)(void))(*(_QWORD *)v41 + 16LL);
        if ( (char *)v35 == (char *)ExecutionModel::BaseResourceSet::Release )
        {
          ExecutionModel::BaseResourceSet::Release(v41);
        }
        else if ( (char *)v35 == (char *)ExecutionModel::ResourceSet::Release )
        {
          ExecutionModel::ResourceSet::Release(v41);
        }
        else
        {
          v35();
        }
      }
      if ( v34 )
        return 2147500037LL;
      v11 = v43;
    }
  }
  v12 = a8;
  a4 = v44;
LABEL_27:
  v27 = 0;
  if ( v11 )
  {
    v28 = a4 + 2;
    while ( !*v28 )
    {
      ++v27;
      v28 += 3;
      if ( v27 >= v11 )
        goto LABEL_31;
    }
    v36 = a6;
    v37 = a10;
    *a7 = 1;
    for ( i = (char *)this + 160; i != *((char **)this + 20); i = *v39 )
    {
      v39 = (char **)(i + 8);
      result = ExecutionModel::BaseResourceSet::RecursiveVisit(
                 *(ExecutionModel::BaseResourceSet **)(*((_QWORD *)i + 1) + 16LL),
                 a5,
                 v36,
                 (__int64)&v41,
                 (__int64)v12,
                 a9,
                 v37);
      if ( (int)result < 0 )
        return result;
      v12 = a8;
      if ( *a8 )
        break;
    }
  }
  else
  {
LABEL_31:
    v29 = a7;
    *v12 = 1;
    *v29 = 0;
  }
  return 0LL;
}
