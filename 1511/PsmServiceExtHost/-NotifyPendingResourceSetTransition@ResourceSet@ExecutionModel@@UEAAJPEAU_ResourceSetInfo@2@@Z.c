/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x1800457A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009D60 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x18000DDEC (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::NotifyPendingResourceSetTransition(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::_ResourceSetInfo *a2)
{
  int v5; // ebx
  __int64 v6; // rax
  ExecutionModel::ModernActivationResourceInfo *v7; // rcx
  unsigned __int64 v8; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( ExecutionModel::ResourceSet::IsLegacy((ExecutionModel::ResourceSet *)((char *)this - 1368)) )
    return 2147500033LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( *((_QWORD *)a2 + 7) <= *((_QWORD *)this + 12) )
  {
    v6 = *((_QWORD *)this + 4);
    if ( v6 && *((_BYTE *)this - 1356) && (v7 = *(ExecutionModel::ModernActivationResourceInfo **)(v6 + 600)) != 0LL )
    {
      ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(v7, 0LL, 0LL, &v8, 0LL, 0LL);
      if ( *((_QWORD *)this + 12) <= v8 )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, _QWORD, _DWORD, _QWORD, unsigned __int64))(**((_QWORD **)this - 168) + 368LL))(
               *((_QWORD *)this - 168),
               *((_QWORD *)this - 167),
               (char *)this - 1304,
               *((unsigned int *)this - 309),
               *((_DWORD *)this - 308),
               *((_QWORD *)this - 153),
               *((_QWORD *)a2 + 7) + v8 + *(_QWORD *)(*((_QWORD *)this + 4) + 848LL) - *((_QWORD *)this + 12));
        if ( v5 >= 0 )
          *((_QWORD *)this + 58) = *((_QWORD *)a2 + 7);
      }
      else
      {
        v5 = -2147418113;
      }
    }
    else
    {
      v5 = -2147220216;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (unsigned int)v5;
}
