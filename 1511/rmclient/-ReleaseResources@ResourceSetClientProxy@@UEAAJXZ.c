/*
 * XREFs of ?ReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x180014920
 * Callers:
 *     ??1ResourceSetClientProxy@@MEAA@XZ @ 0x1800124F8 (--1ResourceSetClientProxy@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ @ 0x180014840 (-ReleaseCallback@ResourceSetClientProxy@@IEAAXXZ.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJK@Z @ 0x180014A1C (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJK@Z.c)
 */

__int64 __fastcall ResourceSetClientProxy::ReleaseResources(ResourceSetClientProxy *this)
{
  int v3; // [rsp+20h] [rbp-28h]
  BOOL v4; // [rsp+28h] [rbp-20h]
  int Pointer; // [rsp+30h] [rbp-18h]

  Pointer = 0;
  if ( *((_DWORD *)this + 6) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 21184LL));
    v4 = *((_DWORD *)this + 8) == 0;
    v3 = *((_DWORD *)this + 6);
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_1800176B0,
                              7u,
                              0LL,
                              *((_QWORD *)this + 2),
                              v3,
                              v4).Pointer;
    if ( Pointer < 0 && *((_DWORD *)this + 8) )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 21184LL));
    }
    else
    {
      ResourceManagerClientProxy::RemoveProxyResourceSet(
        *((ResourceManagerClientProxy **)this + 6),
        *((_DWORD *)this + 6));
      *((_DWORD *)this + 6) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 21184LL));
      ResourceSetClientProxy::ReleaseCallback(this);
    }
  }
  return (unsigned int)Pointer;
}
