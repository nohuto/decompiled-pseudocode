/*
 * XREFs of ?GetClosestInteractiveBounds@MPCMouseProcessor@@UEAA?AUtagRECT@@XZ @ 0x180041CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

struct tagRECT *__fastcall MPCMouseProcessor::GetClosestInteractiveBounds(
        MPCMouseProcessor *this,
        struct tagRECT *__return_ptr retstr)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 24LL))(*((_QWORD *)this + 28));
  return retstr;
}
