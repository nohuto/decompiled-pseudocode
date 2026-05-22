/*
 * XREFs of ?s_PostInputMessage@Win32kInterop@@SAHUtagINPUTDEST@@IKHHPEAUtagPOSTINPUTINFO@@@Z @ 0x18000C310
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

void __fastcall __noreturn Win32kInterop::s_PostInputMessage(__int64 a1)
{
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 1018, 255);
  if ( IsDebuggerPresent() )
    __debugbreak();
  __fastfail(7u);
}
