/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180014BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::HitTest(DWMInputRouter *this, struct tagDITCALLBACKSTRUCT *a2)
{
  return (***((unsigned __int8 (__fastcall ****)(_QWORD, struct tagDITCALLBACKSTRUCT *))this + 23))(
           *((_QWORD *)this + 23),
           a2) == 0
       ? 0x80004005
       : 0;
}
