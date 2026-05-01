/*
 * XREFs of ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003708
 * Callers:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@W44PendType@2@PEA_N5PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003574 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000B450 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1800200F0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckPoolResources(
        ExecutionModel::BaseResourceSet *this,
        unsigned int a2,
        __int64 a3,
        int a4,
        char a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 a8)
{
  __int64 v10; // rsi
  ExecutionModel::_ResourceInfo *v13; // rax
  ExecutionModel::_ResourceInfo *v14; // rdi
  ExecutionModel::_ResourceInfo *v15; // rax
  __int64 v16; // rbx
  int v17; // ebx
  unsigned int v19; // ecx
  ExecutionModel::_ResourceInfo *v20; // rax

  v10 = a2;
  v13 = (ExecutionModel::_ResourceInfo *)malloc(saturated_mul(a2, 0x18uLL));
  v14 = v13;
  if ( v13 )
    `vector constructor iterator'(v13, 0x18uLL, a2, (void *(*)(void *))ExecutionModel::_ResourceInfo::_ResourceInfo);
  else
    v14 = 0LL;
  if ( v14 )
  {
    if ( a2 )
    {
      v15 = v14;
      v16 = a3 - (_QWORD)v14;
      do
      {
        *(_OWORD *)v15 = *(_OWORD *)((char *)v15 + v16);
        *((_QWORD *)v15 + 2) = *(_QWORD *)((char *)v15 + v16 + 16);
        v15 = (ExecutionModel::_ResourceInfo *)((char *)v15 + 24);
        --v10;
      }
      while ( v10 );
    }
    v17 = ExecutionModel::BaseResourceSet::RecursiveVisit(this, a4, a5, (__int64)a6, (__int64)a7, a8, 0LL);
    if ( v17 >= 0 )
    {
      if ( !*a7 && *((_DWORD *)this + 4) == 1 )
      {
        v19 = 0;
        if ( a2 )
        {
          v20 = v14;
          while ( !*((_QWORD *)v20 + 1)
               || *(_DWORD *)v20 == 2
               && *((_QWORD *)v20 + 1) <= *(_QWORD *)(*((_QWORD *)this + 3) + 192LL)
                                        - *(_QWORD *)(*((_QWORD *)this + 3) + 200LL) )
          {
            ++v19;
            v20 = (ExecutionModel::_ResourceInfo *)((char *)v20 + 24);
            if ( v19 >= a2 )
              goto LABEL_21;
          }
        }
        else
        {
LABEL_21:
          *a6 = 1;
          *a7 = 1;
        }
      }
      v17 = 0;
    }
    operator delete(v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v17;
}
