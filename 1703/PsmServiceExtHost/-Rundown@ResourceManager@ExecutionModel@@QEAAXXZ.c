/*
 * XREFs of ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18002BA9C
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x18002A6E4 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180019204 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceManager::Rundown(ExecutionModel::ResourceManager *this)
{
  __int64 v2; // rsi
  HANDLE *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx

  RtlEnterCriticalSection(&RmpGlobalLock);
  *((_DWORD *)this + 60) |= 2u;
  v2 = *((_QWORD *)this + 12) + 160LL;
  while ( *(_QWORD *)v2 != v2 )
  {
    v3 = *(HANDLE **)(*(_QWORD *)v2 + 16LL);
    (*((void (__fastcall **)(HANDLE *))*v3 + 1))(v3);
    ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v3);
    (*((void (__fastcall **)(HANDLE *))*v3 + 2))(v3);
  }
  v4 = *((_QWORD *)this + 13) + 160LL;
  while ( *(_QWORD *)v4 != v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)v4 + 16LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, 0LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  v6 = *((_QWORD *)this + 27);
  if ( v6 )
  {
    TpReleaseCleanupGroupMembers(v6, 1LL, 0LL);
    TpReleaseCleanupGroup(*((_QWORD *)this + 27));
    *((_QWORD *)this + 27) = 0LL;
  }
}
