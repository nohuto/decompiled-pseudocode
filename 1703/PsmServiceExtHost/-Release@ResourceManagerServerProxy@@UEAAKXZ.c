/*
 * XREFs of ?Release@ResourceManagerServerProxy@@UEAAKXZ @ 0x18002A110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Release(ResourceManagerServerProxy *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(ResourceManagerServerProxy *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  return v1;
}
