/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x180035BD0
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostPublishCommitLimit @ 0x1800035CC (RmpActivityHostPublishCommitLimit.c)
 *     RmpCommitValuesSubtract @ 0x180007034 (RmpCommitValuesSubtract.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::NotifyPendingResourceSetTransition(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::_ResourceSetInfo *a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  int v7; // ebx
  __int64 v8; // r9
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  if ( *((_DWORD *)this - 308) )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v5 = *((_QWORD *)this + 9);
    v6 = *((_QWORD *)a2 + 3);
    if ( v6 <= v5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 88LL))(this) )
      {
        RmpCommitValuesSubtract(v5, v6, &v10);
        v7 = RmpCommitValuesSubtract(*(_QWORD *)(*((_QWORD *)this + 4) + 936LL), v10, &v11);
        if ( v7 < 0 || (v7 = RmpActivityHostPublishCommitLimit(v8, v11, 0), v7 < 0) )
          v4 = v7 | 0x10000000;
        else
          v4 = 0;
      }
      else
      {
        v4 = -2147220216;
      }
    }
    else
    {
      v4 = -2147024809;
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    return (unsigned int)-2147467263;
  }
  return v4;
}
