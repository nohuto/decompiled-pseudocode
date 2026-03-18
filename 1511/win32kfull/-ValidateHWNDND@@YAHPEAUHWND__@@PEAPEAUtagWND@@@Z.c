/*
 * XREFs of ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C007576C
 * Callers:
 *     NtUserFlashWindowEx @ 0x1C000BDA0 (NtUserFlashWindowEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00755B0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetShellWindowEx @ 0x1C00D4C40 (NtUserSetShellWindowEx.c)
 *     NtUserSetCoreWindow @ 0x1C010B2B0 (NtUserSetCoreWindow.c)
 *     NtUserSetCoreWindowPartner @ 0x1C021FBC0 (NtUserSetCoreWindowPartner.c)
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
