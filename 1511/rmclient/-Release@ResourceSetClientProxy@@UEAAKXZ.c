/*
 * XREFs of ?Release@ResourceSetClientProxy@@UEAAKXZ @ 0x180014780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJK@Z @ 0x180014A1C (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJK@Z.c)
 */

__int64 __fastcall ResourceSetClientProxy::Release(ResourceSetClientProxy *this)
{
  signed __int32 v2; // ebp
  char v3; // bl
  unsigned __int32 v4; // esi

  while ( 1 )
  {
    v2 = *((_DWORD *)this + 8);
    v3 = 0;
    v4 = v2 - 1;
    if ( v2 == 1 && *((_DWORD *)this + 6) != v4 )
    {
      v3 = 1;
      EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 21184LL));
    }
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)this + 8, v4, v2) )
      break;
    if ( v3 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 21184LL));
  }
  if ( v2 == 1 )
  {
    if ( v3 )
    {
      ResourceManagerClientProxy::RemoveProxyResourceSet(
        *((ResourceManagerClientProxy **)this + 6),
        *((_DWORD *)this + 6));
      LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 6) + 21184LL));
    }
    (*(void (__fastcall **)(ResourceSetClientProxy *, __int64))(*(_QWORD *)this + 168LL))(this, 1LL);
  }
  return v4;
}
