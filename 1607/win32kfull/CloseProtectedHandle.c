/*
 * XREFs of CloseProtectedHandle @ 0x1C00DCB44
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x1C0098C50 (xxxSetCsrssThreadDesktop.c)
 *     NtUserOpenInputDesktop @ 0x1C00D8F90 (NtUserOpenInputDesktop.c)
 *     _OpenDesktop @ 0x1C00D9150 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00D93C0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     _CloseDesktop @ 0x1C00DCA48 (_CloseDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00DD140 (xxxRestoreCsrssThreadDesktop.c)
 *     _OpenThreadDesktop @ 0x1C01DF4E8 (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01DF6EC (xxxResolveDesktopForWOW.c)
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
