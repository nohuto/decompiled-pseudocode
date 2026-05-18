/*
 * XREFs of DwmpResetPortConnection @ 0x18000473C
 * Callers:
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800025B8 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DwmpResetPortConnection(CApiPortClient *a1)
{
  CApiPortClient::ResetConnection(a1);
}
