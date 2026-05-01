/*
 * XREFs of ??_EResourceSetProxy@ExecutionModel@@MEAAPEAXI@Z @ 0x180004DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX_KW4_ReleaseResourcesType@@@ZPEAX_KW41@@Shared@DevPlat@@YAJP6AJPEAX_KW4_ReleaseResourcesType@@@Z012@Z @ 0x180004580 (--$RpcCall@P6AJPEAX_KW4_ReleaseResourcesType@@@ZPEAX_KW41@@Shared@DevPlat@@YAJP6AJPEAX_KW4_Relea.c)
 *     ?RemoveProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_K@Z @ 0x180005550 (-RemoveProxyResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@QEAAJ_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180005F60 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800088D8 (--3@YAXPEAX@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

ExecutionModel::ResourceSetProxy *__fastcall ExecutionModel::ResourceSetProxy::`vector deleting destructor'(
        ExecutionModel::ResourceSetProxy *this,
        char a2)
{
  bool v2; // zf
  __int64 v5; // rsi
  int v7; // esi
  char v8; // bl
  __int64 v9; // rcx

  v2 = *((_QWORD *)this + 3) == 0LL;
  *(_QWORD *)this = &ExecutionModel::ResourceSetProxy::`vftable';
  if ( !v2 )
  {
    v7 = 0;
    if ( !*((_DWORD *)this + 2) )
      v7 = 2;
    v8 = 0;
    if ( *((_QWORD *)this + 3) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 144LL));
      if ( (int)DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _ReleaseResourcesType),void *,unsigned __int64,enum _ReleaseResourcesType>(
                  v9,
                  *((_QWORD *)this + 2),
                  *((_QWORD *)this + 3),
                  v7).Simple >= 0
        || !*((_DWORD *)this + 2) )
      {
        ExecutionModel::ResourcePolicyEngineProxy::RemoveProxyResourceSet(
          *((ExecutionModel::ResourcePolicyEngineProxy **)this + 6),
          *((_QWORD *)this + 3));
        *((_QWORD *)this + 3) = 0LL;
        v8 = 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 144LL));
      if ( v8 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
        if ( *((_QWORD *)this + 5) )
          ATL::AtlComPtrAssign((struct IUnknown **)this + 5, 0LL);
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
      }
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 5));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
