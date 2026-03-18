/*
 * XREFs of CloseProtectedHandle @ 0x1C007D3C0
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x1C007C660 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C007D1D0 (xxxRestoreCsrssThreadDesktop.c)
 *     _CloseDesktop @ 0x1C007D2C4 (_CloseDesktop.c)
 *     NtUserOpenInputDesktop @ 0x1C00DAC70 (NtUserOpenInputDesktop.c)
 *     _OpenDesktop @ 0x1C00DAFEC (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00DB260 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     _OpenThreadDesktop @ 0x1C01E8628 (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01E882C (xxxResolveDesktopForWOW.c)
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
