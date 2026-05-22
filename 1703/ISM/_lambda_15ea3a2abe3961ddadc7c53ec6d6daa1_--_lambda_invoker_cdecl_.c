/*
 * XREFs of _lambda_15ea3a2abe3961ddadc7c53ec6d6daa1_::_lambda_invoker_cdecl_ @ 0x180032170
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18003425C (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x180035CCC (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_15ea3a2abe3961ddadc7c53ec6d6daa1_::_lambda_invoker_cdecl_(ControllerProcessor *this)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  _DWORD *v4; // r15
  _DWORD *v5; // r14
  POINT v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  POINT pt; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-30h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = (_DWORD *)((char *)this + 320);
  v5 = (_DWORD *)((char *)this + 316);
  (*(void (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 33) + 24LL))(
    *((_QWORD *)this + 33),
    (char *)this + 316,
    (char *)this + 320);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 34) + 24LL))(*((_QWORD *)this + 34), v11);
  CursorAttraction::ApplyCursorAttraction(
    (ControllerProcessor *)((char *)this + 1308),
    &pt,
    (const struct tagRECT *)((char *)this + 316));
  v6 = pt;
  if ( (*((_BYTE *)this + 312) & 8) == 0 || PtInRect((const RECT *)this + 22, pt) )
  {
    if ( *v5 != v6.x || *v4 != pt.y )
    {
      v7 = ControllerProcessor::SetPointerPosition(this, v6, 0);
      v3 = v7;
      if ( v7 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v8, &MinInput_Warning_CheckResult, 12, 2392, v7);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
    return v3;
  }
  return v2;
}
