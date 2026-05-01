/*
 * XREFs of ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180011290
 * Callers:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180010B48 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 *     ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceInfo@2@KW4Enum@PendType@2@PEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x180014E84 (-EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceI.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010970 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180011660 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800208F0 (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckPoolResources(
        ExecutionModel::BaseResourceSet *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 a8)
{
  __int64 v9; // r15
  __int64 v10; // rbp
  unsigned int *v13; // rax
  unsigned int *v14; // rdi
  __int64 v15; // rbx
  ExecutionModel::_ResourceInfo *v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // r14
  __int128 v19; // xmm0
  int v20; // ebx

  v9 = a2;
  v10 = a2;
  v13 = (unsigned int *)operator new[](saturated_mul(a2, 0x18uLL));
  v14 = v13;
  if ( !v13 )
    return 2147942414LL;
  v15 = (unsigned int)v9;
  v16 = (ExecutionModel::_ResourceInfo *)v13;
  if ( v9 )
  {
    do
    {
      ExecutionModel::_ResourceInfo::_ResourceInfo(v16);
      v16 = (ExecutionModel::_ResourceInfo *)((char *)v16 + 24);
      --v15;
    }
    while ( v15 );
  }
  if ( (_DWORD)v9 )
  {
    v17 = v14;
    v18 = a3 - (_QWORD)v14;
    do
    {
      v19 = *(_OWORD *)((char *)v17 + v18);
      v17 += 6;
      *(_OWORD *)(v17 - 6) = v19;
      *((_QWORD *)v17 - 1) = *(_QWORD *)((char *)v17 + v18 - 8);
      --v10;
    }
    while ( v10 );
  }
  v20 = ExecutionModel::BaseResourceSet::RecursiveVisit(this, 0, v9, v14, a4, a5, a6, a7, a8, 0LL);
  if ( v20 >= 0 )
    v20 = 0;
  operator delete(v14);
  return (unsigned int)v20;
}
