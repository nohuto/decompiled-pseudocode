/*
 * XREFs of ??_EResourceSetProxy@ExecutionModel@@MEAAPEAXI@Z @ 0x1800054B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX_KW4_ReleaseResourcesType@@@ZPEAX_KW41@@Shared@DevPlat@@YAJP6AJPEAX_KW4_ReleaseResourcesType@@@Z012@Z @ 0x180004380 (--$RpcCall@P6AJPEAX_KW4_ReleaseResourcesType@@@ZPEAX_KW41@@Shared@DevPlat@@YAJP6AJPEAX_KW4_Relea.c)
 *     ?RemoveProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_K@Z @ 0x1800043D0 (-RemoveProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005DB0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

ExecutionModel::ResourceSetProxy *__fastcall ExecutionModel::ResourceSetProxy::`vector deleting destructor'(
        ExecutionModel::ResourceSetProxy *this,
        char a2)
{
  bool v2; // zf
  int v5; // esi
  char v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rsi

  v2 = *((_QWORD *)this + 3) == 0LL;
  *(_QWORD *)this = &ExecutionModel::ResourceSetProxy::`vftable';
  if ( !v2 )
  {
    v5 = 0;
    if ( !*((_DWORD *)this + 2) )
      v5 = 2;
    v6 = 0;
    if ( *((_QWORD *)this + 3) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 144LL));
      if ( (int)DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _ReleaseResourcesType),void *,unsigned __int64,enum _ReleaseResourcesType>(
                  v7,
                  *((_QWORD *)this + 2),
                  *((_QWORD *)this + 3),
                  v5).Simple >= 0
        || !*((_DWORD *)this + 2) )
      {
        ExecutionModel::ResourcePolicyEngineProxy::RemoveProxyResourceSet(
          *((ExecutionModel::ResourcePolicyEngineProxy **)this + 6),
          *((_QWORD *)this + 3));
        *((_QWORD *)this + 3) = 0LL;
        v6 = 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 144LL));
      if ( v6 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
        if ( *((_QWORD *)this + 5) )
          ATL::AtlComPtrAssign((struct IUnknown **)this + 5, 0LL);
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
      }
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 5));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
