/*
 * XREFs of CloseProtectedHandle @ 0x1C00CEC44
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x1C00CE740 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00CEA50 (xxxRestoreCsrssThreadDesktop.c)
 *     _CloseDesktop @ 0x1C00CEB48 (_CloseDesktop.c)
 *     _OpenDesktop @ 0x1C0120630 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C01207C0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 *     NtUserOpenInputDesktop @ 0x1C01222D0 (NtUserOpenInputDesktop.c)
 *     _OpenThreadDesktop @ 0x1C01E8C58 (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01E8E5C (xxxResolveDesktopForWOW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle, KPROCESSOR_MODE a2)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL, 0LL);
  return ObCloseHandle(Handle, a2);
}
