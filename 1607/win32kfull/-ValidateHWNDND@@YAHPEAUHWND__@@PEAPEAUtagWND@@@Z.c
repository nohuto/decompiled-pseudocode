/*
 * XREFs of ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00A5B80
 * Callers:
 *     NtUserSetCoreWindow @ 0x1C00963F0 (NtUserSetCoreWindow.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00A5A00 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetShellWindowEx @ 0x1C00ED2E0 (NtUserSetShellWindowEx.c)
 *     NtUserFlashWindowEx @ 0x1C0212440 (NtUserFlashWindowEx.c)
 *     NtUserSetCoreWindowPartner @ 0x1C0219810 (NtUserSetCoreWindowPartner.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateHWNDND(HWND a1, struct tagWND **a2)
{
  __int64 v3; // rax

  v3 = ValidateHwnd(a1);
  *a2 = (struct tagWND *)v3;
  return v3 && (((*(_WORD *)(v3 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0;
}
