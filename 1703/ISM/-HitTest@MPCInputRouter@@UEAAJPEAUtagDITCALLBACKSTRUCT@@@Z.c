/*
 * XREFs of ?HitTest@MPCInputRouter@@UEAAJPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180084410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputRouter::HitTest(MPCInputRouter *this, struct tagDITCALLBACKSTRUCT *a2)
{
  if ( *((_BYTE *)this + 1044) )
    return MPCInputRouter::HitTestInternal(this, a2);
  else
    return (***((unsigned __int8 (__fastcall ****)(_QWORD, struct tagDITCALLBACKSTRUCT *))this + 23))(
             *((_QWORD *)this + 23),
             a2) == 0
         ? 0x80004005
         : 0;
}
