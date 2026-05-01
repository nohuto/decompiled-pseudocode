/*
 * XREFs of ?Release@ResourceSetProxy@ExecutionModel@@UEAAKXZ @ 0x180004DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX_KW4_ReleaseResourcesType@@@ZPEAX_KW41@@Shared@DevPlat@@YAJP6AJPEAX_KW4_ReleaseResourcesType@@@Z012@Z @ 0x180004380 (--$RpcCall@P6AJPEAX_KW4_ReleaseResourcesType@@@ZPEAX_KW41@@Shared@DevPlat@@YAJP6AJPEAX_KW4_Relea.c)
 *     ?RemoveProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_K@Z @ 0x1800043D0 (-RemoveProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005DB0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetProxy::Release(ExecutionModel::ResourceSetProxy *this)
{
  unsigned __int32 v2; // esi
  void *(__fastcall *v4)(ExecutionModel::ResourceSetProxy *__hidden, unsigned int); // rbx
  bool v5; // zf
  int v6; // ebp
  char v7; // bl
  __int64 v8; // rcx
  __int64 v9; // r14

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v2 || !this )
    return v2;
  v4 = *(void *(__fastcall **)(ExecutionModel::ResourceSetProxy *__hidden, unsigned int))(*(_QWORD *)this + 168LL);
  if ( v4 == ExecutionModel::ResourceSetProxy::`vector deleting destructor' )
  {
    v5 = *((_QWORD *)this + 3) == 0LL;
    *(_QWORD *)this = &ExecutionModel::ResourceSetProxy::`vftable';
    if ( !v5 )
    {
      v6 = 0;
      if ( !*((_DWORD *)this + 2) )
        v6 = 2;
      v7 = 0;
      if ( *((_QWORD *)this + 3) )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 144LL));
        if ( (int)DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _ReleaseResourcesType),void *,unsigned __int64,enum _ReleaseResourcesType>(
                    v8,
                    *((_QWORD *)this + 2),
                    *((_QWORD *)this + 3),
                    v6).Simple >= 0
          || !*((_DWORD *)this + 2) )
        {
          ExecutionModel::ResourcePolicyEngineProxy::RemoveProxyResourceSet(
            *((ExecutionModel::ResourcePolicyEngineProxy **)this + 6),
            *((_QWORD *)this + 3));
          *((_QWORD *)this + 3) = 0LL;
          v7 = 1;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 144LL));
        if ( v7 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
          if ( *((_QWORD *)this + 5) )
            ATL::AtlComPtrAssign((struct IUnknown **)this + 5, 0LL);
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
        }
      }
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v9 = *((_QWORD *)this + 5);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 5));
    operator delete(this);
    return 0LL;
  }
  else
  {
    v4(this, 1u);
    return 0LL;
  }
}
