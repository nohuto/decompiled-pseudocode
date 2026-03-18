/*
 * XREFs of ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0085A44
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C0084040 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetCoreWindow @ 0x1C00FF600 (NtUserSetCoreWindow.c)
 *     NtUserSetShellWindowEx @ 0x1C01497F0 (NtUserSetShellWindowEx.c)
 *     NtUserFlashWindowEx @ 0x1C0219910 (NtUserFlashWindowEx.c)
 *     NtUserSetCoreWindowPartner @ 0x1C021FD90 (NtUserSetCoreWindowPartner.c)
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
