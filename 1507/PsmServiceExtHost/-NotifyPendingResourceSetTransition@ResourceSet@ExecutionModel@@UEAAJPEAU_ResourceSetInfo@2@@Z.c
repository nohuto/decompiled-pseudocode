/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x1800407D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009600 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x180023A90 (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::NotifyPendingResourceSetTransition(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::_ResourceSetInfo *a2)
{
  __int64 v5; // rbx
  int v6; // ebx
  __int64 v7; // rax
  ExecutionModel::ModernActivationResourceInfo *v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r14
  unsigned __int64 v12; // rsi
  int v13; // r15d
  unsigned int v14; // r12d
  unsigned __int64 v17; // [rsp+90h] [rbp+18h] BYREF

  v17 = 0LL;
  if ( ExecutionModel::ResourceSet::IsLegacy((ExecutionModel::ResourceSet *)((char *)this - 1368)) )
    return 2147500033LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v5 = *((_QWORD *)this + 57);
  if ( !v5 )
    v5 = *((_QWORD *)this + 11);
  if ( *((_QWORD *)a2 + 6) <= *((_QWORD *)this + 11) )
  {
    v7 = *((_QWORD *)this + 4);
    if ( v7 && (v8 = *(ExecutionModel::ModernActivationResourceInfo **)(v7 + 600)) != 0LL )
    {
      ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(v8, 0LL, 0LL, &v17, 0LL, 0LL);
      if ( *((_QWORD *)this + 11) <= v17 )
      {
        v9 = v17 - *((_QWORD *)this + 11);
        v10 = *((_QWORD *)this - 168);
        v11 = *((_QWORD *)this - 153);
        v12 = v9 + *((_QWORD *)a2 + 6);
        v13 = *((_DWORD *)this - 308);
        v14 = *((_DWORD *)this - 309);
        v17 = *((_QWORD *)this - 167);
        v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *, _QWORD, int, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v10 + 376LL))(
               v10,
               v17,
               (char *)this - 1304,
               v14,
               v13,
               v11,
               v9 + v5,
               v12);
        if ( v6 >= 0 )
          *((_QWORD *)this + 57) = *((_QWORD *)a2 + 6);
      }
      else
      {
        v6 = -2147418113;
      }
    }
    else
    {
      v6 = -2147220216;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (unsigned int)v6;
}
