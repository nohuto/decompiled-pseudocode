/*
 * XREFs of ?GetPreviousTarget@HitTestRequest@@UEAAJPEAPEAUIInputTarget@@@Z @ 0x18001BC20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HitTestRequest::GetPreviousTarget(HitTestRequest *this, struct IInputTarget **a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct IInputTarget *)*((_QWORD *)this + 3);
  return 0LL;
}
