/*
 * XREFs of ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x18001E820
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?CreateHardwareCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAUIInputDisplay@@@Z @ 0x18001E888 (-CreateHardwareCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAUIInputDisplay@@@Z.c)
 *     ?CreateCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAPEAUICursor@@@Z @ 0x18001E934 (-CreateCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAPEAUICursor@@@Z.c)
 */

__int64 __fastcall DWMCursorBroker::CreateCursor(
        DWMCursorBroker *this,
        struct DeviceInfo *a2,
        struct IInputDisplay *a3,
        __int64 a4,
        struct ICursor **a5)
{
  int Cursor; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx

  if ( !*((_QWORD *)this + 163) )
    DWMCursorBroker::CreateHardwareCursor(this, *((unsigned int *)a2 + 1), a3);
  Cursor = DWMCursorBroker::CreateCursor(this, *((unsigned int *)a2 + 1), a5);
  v9 = Cursor;
  if ( Cursor < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 402, Cursor);
  return v9;
}
