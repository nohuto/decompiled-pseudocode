/*
 * XREFs of ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceInfo@2@KW4Enum@PendType@2@PEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x180014E84
 * Callers:
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@SAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_BUFFER@@W4Enum@Priority@2@W45PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAVBaseResourceSet@2@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N8@Z @ 0x180012C6C (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@SAJPEAU_RM_POLICY@@PEAU_RM_POLICY_REQUEST_B.c)
 * Callees:
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180011290 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x1800150D4 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::EvaluatePoolResourceRequest(
        ExecutionModel::BaseResourceSet *this,
        _DWORD *a2,
        unsigned int a3,
        int a4,
        char *a5,
        __int64 a6,
        int *a7)
{
  __int64 v7; // rbp
  __int64 v8; // r10
  _DWORD *v11; // r11
  int v12; // edi
  char v13; // bl
  __int64 v14; // r14
  int v15; // esi
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  if ( !a3 )
    goto LABEL_12;
  v11 = a2;
  v12 = 2;
  v13 = 1;
  do
  {
    if ( *v11 == 2 )
      v7 = (__int64)&a2[6 * v8];
    v8 = (unsigned int)(v8 + 1);
    v11 += 6;
  }
  while ( (unsigned int)v8 < a3 );
  if ( v7 )
  {
    v14 = a6;
    v15 = ExecutionModel::BaseResourceSet::CheckPoolResources(this, 1u, v7, 0, 1, &v18, &v17, a6);
    if ( v15 < 0 )
    {
      v13 = v18;
      v12 = 0;
    }
    else if ( (_BYTE)v17 )
    {
      v13 = v18;
      if ( !(_BYTE)v18 )
        v12 = 0;
    }
    else if ( a4 == 1 && *(_QWORD *)(v7 + 8) <= *(_QWORD *)(*((_QWORD *)this + 3) + 128LL) )
    {
      utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v14);
    }
    else
    {
      v13 = 0;
      v15 = -2147220992;
      v12 = 0;
    }
  }
  else
  {
LABEL_12:
    v13 = 0;
    v12 = 0;
    v15 = 0;
  }
  *a5 = v13;
  *a7 = v12;
  return (unsigned int)v15;
}
