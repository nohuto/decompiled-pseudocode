/*
 * XREFs of ?ReleaseResources@ResourceSetProxy@ExecutionModel@@UEAAJXZ @ 0x180004860
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX_KW4_ReleaseResourcesType@@@ZPEAX_KW41@@Shared@DevPlat@@YAJP6AJPEAX_KW4_ReleaseResourcesType@@@Z012@Z @ 0x180004580 (--$RpcCall@P6AJPEAX_KW4_ReleaseResourcesType@@@ZPEAX_KW41@@Shared@DevPlat@@YAJP6AJPEAX_KW4_Relea.c)
 *     ?RemoveProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_K@Z @ 0x180005550 (-RemoveProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_K@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetProxy::ReleaseResources(ExecutionModel::ResourceSetProxy *this)
{
  int v2; // esi
  char v3; // bl
  __int64 v4; // rcx
  int Pointer; // ebp
  __int64 v6; // r14

  v2 = 0;
  if ( !*((_DWORD *)this + 2) )
    v2 = 2;
  v3 = 0;
  if ( !*((_QWORD *)this + 3) )
    return 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 144LL));
  Pointer = (unsigned int)DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _ReleaseResourcesType),void *,unsigned __int64,enum _ReleaseResourcesType>(
                            v4,
                            *((_QWORD *)this + 2),
                            *((_QWORD *)this + 3),
                            v2).Pointer;
  if ( Pointer >= 0 || !*((_DWORD *)this + 2) )
  {
    ExecutionModel::ResourcePolicyEngineProxy::RemoveProxyResourceSet(
      *((ExecutionModel::ResourcePolicyEngineProxy **)this + 6),
      *((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
    v3 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 144LL));
  if ( v3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v6 = *((_QWORD *)this + 5);
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  }
  return (unsigned int)Pointer;
}
