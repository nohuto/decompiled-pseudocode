/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x18005898C
 * Callers:
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$8 @ 0x1800738C9 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$8.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$9 @ 0x180073929 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$9.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800589CC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ResultFromCaughtException(wil *this, void *a2, unsigned int a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (result = g_pfnResultFromCaughtExceptionInternal(0LL, 0LL, &v6), (int)result >= 0) )
  {
    wil::details::in1diag3::_FailFast_Hr(retaddr, a2, a3, (const char *)0x8007023ELL, v4);
    JUMPOUT(0x1800589C9LL);
  }
  return result;
}
