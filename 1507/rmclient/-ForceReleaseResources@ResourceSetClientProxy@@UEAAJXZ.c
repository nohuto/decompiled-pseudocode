/*
 * XREFs of ?ForceReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x180012EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ @ 0x180013AF0 (-ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJK@Z @ 0x180013CCC (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJK@Z.c)
 */

__int64 __fastcall ResourceSetClientProxy::ForceReleaseResources(ResourceSetClientProxy *this)
{
  int v3; // [rsp+20h] [rbp-28h]
  int Pointer; // [rsp+30h] [rbp-18h]

  Pointer = 0;
  if ( *((_DWORD *)this + 6) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 20728LL));
    v3 = *((_DWORD *)this + 6);
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_180016730,
                              8u,
                              0LL,
                              *((_QWORD *)this + 2),
                              v3).Pointer;
    if ( Pointer < 0 && *((_DWORD *)this + 8) )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 20728LL));
    }
    else
    {
      ResourceManagerClientProxy::RemoveProxyResourceSet(
        *((ResourceManagerClientProxy **)this + 6),
        *((_DWORD *)this + 6));
      *((_DWORD *)this + 6) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 20728LL));
      ResourceSetClientProxy::ReleaseCallback(this);
    }
  }
  return (unsigned int)Pointer;
}
