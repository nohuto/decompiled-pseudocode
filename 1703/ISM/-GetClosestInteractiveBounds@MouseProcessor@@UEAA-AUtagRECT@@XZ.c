/*
 * XREFs of ?GetClosestInteractiveBounds@MouseProcessor@@UEAA?AUtagRECT@@XZ @ 0x180059CD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

struct tagRECT *__fastcall MouseProcessor::GetClosestInteractiveBounds(
        MouseProcessor *this,
        struct tagRECT *__return_ptr retstr)
{
  __int64 v3; // rcx
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&retstr->left = 0LL;
  *(_QWORD *)&retstr->right = 0LL;
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
    *retstr = *(struct tagRECT *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 24LL))(v3, v5);
  return retstr;
}
