/*
 * XREFs of ?Release@ResourceManagerClientProxy@@UEAAKXZ @ 0x180004E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceManagerClientProxy::Release(ResourceManagerClientProxy *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(ResourceManagerClientProxy *, __int64))(*(_QWORD *)this + 120LL))(this, 1LL);
  return v1;
}
