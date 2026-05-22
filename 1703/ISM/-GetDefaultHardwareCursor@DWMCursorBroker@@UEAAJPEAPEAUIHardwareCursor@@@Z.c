/*
 * XREFs of ?GetDefaultHardwareCursor@DWMCursorBroker@@UEAAJPEAPEAUIHardwareCursor@@@Z @ 0x18001EC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::GetDefaultHardwareCursor(DWMCursorBroker *this, struct IHardwareCursor **a2)
{
  struct IHardwareCursor *v2; // rax

  v2 = (struct IHardwareCursor *)*((_QWORD *)this + 162);
  if ( !v2 )
    return 2147500037LL;
  *a2 = v2;
  return 0LL;
}
