/*
 * XREFs of ?ReassignResources@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAV12@@Z @ 0x18000332C
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000C690 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 * Callees:
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@MEAAXXZ @ 0x180003D00 (-LogPendingEnd@ResourceSet@ExecutionModel@@MEAAXXZ.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000B450 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::ReassignResources(
        ExecutionModel::BaseResourceSet *this,
        struct _RM_POLICY_REQUEST_BUFFER *a2,
        struct _RM_SYSTEM_MEMORY_METRICS *a3,
        struct ExecutionModel::BaseResourceSet *a4)
{
  int *v7; // rdx
  int v8; // ebp
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  void (__fastcall *v13)(ExecutionModel::ResourceSet *__hidden); // rdi
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v8 = ExecutionModel::BaseResourceSet::RecursiveVisit(
         this,
         *((_DWORD *)a4 + 2),
         1,
         (__int64)&v16,
         (__int64)&v15,
         0LL,
         (__int64)a4);
  if ( v8 >= 0 )
  {
    v9 = *((_DWORD *)a2 + 308);
    if ( v9 )
    {
      v7 = (int *)((char *)a2 + 1160);
      v10 = v9;
      do
      {
        v11 = 3 * (*v7 + 8LL);
        *(_OWORD *)((char *)a4 + 8 * v11) = *(_OWORD *)v7;
        *((_QWORD *)a4 + v11 + 2) = *((_QWORD *)v7 + 2);
        if ( *v7 == 1 )
        {
          *((_QWORD *)a3 + 1) -= *((_QWORD *)v7 + 1);
          *((_QWORD *)a3 + 2) += *((_QWORD *)v7 + 1);
        }
        v7 += 6;
        --v10;
      }
      while ( v10 );
    }
    v12 = *((_DWORD *)a4 + 338) == 1;
    *((_DWORD *)a4 + 338) = 2;
    if ( v12 )
    {
      v13 = *(void (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)a4 + 104LL);
      if ( v13 == ExecutionModel::ResourceSet::LogPendingEnd )
        ExecutionModel::ResourceSet::LogPendingEnd(a4);
      else
        ((void (__fastcall *)(struct ExecutionModel::BaseResourceSet *, int *))v13)(a4, v7);
    }
  }
  return (unsigned int)v8;
}
