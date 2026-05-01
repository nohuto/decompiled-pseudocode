/*
 * XREFs of ?Handle_RS_GetResourceSetInfo@ResourceManagerServerProxy@@QEAAJKPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180039EF4
 * Callers:
 *     RmtSrv_RS_GetResourceSetInfo @ 0x180038810 (RmtSrv_RS_GetResourceSetInfo.c)
 * Callees:
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x18000456C (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180038904 (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RS_GetResourceSetInfo(
        ResourceManagerServerProxy *this,
        int a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 *v4; // rdi
  __int64 v6; // rdx
  int v7; // edi
  __int64 *v8; // r14
  __int64 v9; // rsi
  void **v10; // rax
  _OWORD *v11; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16[6]; // [rsp+38h] [rbp-30h] BYREF
  void *Block; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 *v19; // [rsp+88h] [rbp+20h] BYREF

  v18 = a2;
  Block = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v4 = (__int64 *)this;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v19 = 0LL;
  v4 += 9;
  utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
    (__int64)v4,
    v6,
    (unsigned __int16 *)&v18,
    &v19,
    v16,
    &v15);
  if ( v19 == v4 )
  {
    v7 = -2147023728;
  }
  else
  {
    v8 = *(__int64 **)(v19[4] + 8);
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
      *((_QWORD *)a3 + 12) = *((_QWORD *)v11 + 12);
    }
  }
  LeaveCriticalSection(v3);
  if ( Block )
    operator delete(Block);
  return (unsigned int)v7;
}
