/*
 * XREFs of ?GetDWMRouterTarget@MPCExclusiveInputTarget@@UEAAJPEAPEAUIInputTarget@@@Z @ 0x180085EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCExclusiveInputTarget::GetDWMRouterTarget(MPCExclusiveInputTarget *this, struct IInputTarget **a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct IInputTarget *)*((_QWORD *)this + 6);
  return 0LL;
}
