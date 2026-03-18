/*
 * XREFs of EditionCloseDesktopEntryPoint @ 0x14018B3D0
 * Callers:
 *     <none>
 * Callees:
 *     _CloseDesktop @ 0x14018B418 (_CloseDesktop.c)
 */

__int64 __fastcall EditionCloseDesktopEntryPoint(HANDLE Handle)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  LODWORD(Handle) = (int)CloseDesktop(Handle) >= 0;
  UserSessionSwitchLeaveCrit(v2);
  return (unsigned int)Handle;
}
