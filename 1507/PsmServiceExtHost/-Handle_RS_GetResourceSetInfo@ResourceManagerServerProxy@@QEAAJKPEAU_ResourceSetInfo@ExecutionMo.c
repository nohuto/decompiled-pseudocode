/*
 * XREFs of ?Handle_RS_GetResourceSetInfo@ResourceManagerServerProxy@@QEAAJKPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180032CD4
 * Callers:
 *     RmtSrv_RS_GetResourceSetInfo @ 0x180031660 (RmtSrv_RS_GetResourceSetInfo.c)
 * Callees:
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000509C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18003E16C (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_GetResourceSetInfo(
        ResourceManagerServerProxy *this,
        int a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  ResourceManagerServerProxy *v4; // rdi
  int v6; // edx
  int v7; // edi
  __int64 *v8; // r14
  __int64 v9; // rsi
  void **v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm1
  char v15[8]; // [rsp+30h] [rbp-38h] BYREF
  char v16[48]; // [rsp+38h] [rbp-30h] BYREF
  void *Block; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+78h] [rbp+10h] BYREF
  ResourceManagerServerProxy *v19; // [rsp+88h] [rbp+20h] BYREF

  v18 = a2;
  Block = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v4 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v19 = 0LL;
  v4 = (ResourceManagerServerProxy *)((char *)v4 + 72);
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (_DWORD)v4,
    v6,
    (unsigned int)&v18,
    (unsigned int)&v19,
    (__int64)v16,
    (__int64)v15);
  if ( v19 == v4 )
  {
    v7 = -2147023728;
  }
  else
  {
    v8 = *(__int64 **)(*((_QWORD *)v19 + 4) + 8LL);
    v9 = *v8;
    v10 = tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
    v7 = (*(__int64 (__fastcall **)(__int64 *, void **))(v9 + 56))(v8, v10);
    if ( v7 >= 0 )
    {
      v11 = Block;
      v12 = 2LL;
      do
      {
        *(_OWORD *)a3 = *v11;
        *((_OWORD *)a3 + 1) = v11[1];
        *((_OWORD *)a3 + 2) = v11[2];
        *((_OWORD *)a3 + 3) = v11[3];
        *((_OWORD *)a3 + 4) = v11[4];
        *((_OWORD *)a3 + 5) = v11[5];
        *((_OWORD *)a3 + 6) = v11[6];
        a3 = (struct ExecutionModel::_ResourceSetInfo *)((char *)a3 + 128);
        v13 = v11[7];
        v11 += 8;
        *((_OWORD *)a3 - 1) = v13;
        --v12;
      }
      while ( v12 );
      *(_OWORD *)a3 = *v11;
      *((_OWORD *)a3 + 1) = v11[1];
      *((_OWORD *)a3 + 2) = v11[2];
      *((_OWORD *)a3 + 3) = v11[3];
      *((_OWORD *)a3 + 4) = v11[4];
      *((_OWORD *)a3 + 5) = v11[5];
    }
  }
  LeaveCriticalSection(v3);
  if ( Block )
    operator delete(Block);
  return (unsigned int)v7;
}
