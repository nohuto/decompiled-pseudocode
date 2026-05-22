/*
 * XREFs of ?GetDefaultCursor@DWMCursorBroker@@UEAAJPEAPEAUICursor@@@Z @ 0x18001EBF0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?CreateCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAPEAUICursor@@@Z @ 0x18001E934 (-CreateCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAPEAUICursor@@@Z.c)
 */

__int64 __fastcall DWMCursorBroker::GetDefaultCursor(DWMCursorBroker *this, struct ICursor **a2, __int64 a3, int a4)
{
  int Cursor; // eax
  __int64 v5; // rcx

  Cursor = DWMCursorBroker::CreateCursor((__int64)this, 2, a2, a4);
  if ( Cursor < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 525, Cursor);
  return 0LL;
}
