/*
 * XREFs of CloseProtectedHandle @ 0x14018B5B0
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x140056850 (xxxSetCsrssThreadDesktop.c)
 *     _OpenDesktop @ 0x14018ACD8 (_OpenDesktop.c)
 *     _CloseDesktop @ 0x14018B418 (_CloseDesktop.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x1401A1E70 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenThreadDesktop @ 0x1401C69B4 (_OpenThreadDesktop.c)
 *     xxxResolveDesktop @ 0x1402A52F0 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1402A5F20 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle, KPROCESSOR_MODE a2)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL);
  return ObCloseHandle(Handle, a2);
}
