/*
 * XREFs of ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18000ECC0
 * Callers:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18000E940 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x18000FB1C (-EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV-$list@.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E4B0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18000F060 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180021724 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002172C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckPoolResources(
        ExecutionModel::BaseResourceSet *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _BYTE *a6,
        _BYTE *a7,
        _QWORD *a8)
{
  __int64 v10; // r14
  unsigned int *v13; // rax
  unsigned int *v14; // rbx
  __int64 v15; // rdi
  ExecutionModel::_ResourceInfo *v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rbp
  int v19; // edi

  v10 = a2;
  v13 = (unsigned int *)operator new[](saturated_mul(a2, 0x18uLL));
  v14 = v13;
  if ( v13 )
  {
    v15 = a2;
    v16 = (ExecutionModel::_ResourceInfo *)v13;
    if ( a2 )
    {
      do
      {
        ExecutionModel::_ResourceInfo::_ResourceInfo(v16);
        v16 = (ExecutionModel::_ResourceInfo *)((char *)v16 + 24);
        --v15;
      }
      while ( v15 );
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    if ( a2 )
    {
      v17 = v14;
      v18 = a3 - (_QWORD)v14;
      do
      {
        *(_OWORD *)v17 = *(_OWORD *)((char *)v17 + v18);
        *((_QWORD *)v17 + 2) = *(_QWORD *)((char *)v17 + v18 + 16);
        v17 += 6;
        --v10;
      }
      while ( v10 );
    }
    v19 = ExecutionModel::BaseResourceSet::RecursiveVisit(this, 0, a2, v14, a4, a5, a6, a7, a8, 0LL);
    if ( v19 >= 0 )
      v19 = 0;
    operator delete(v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v19;
}
