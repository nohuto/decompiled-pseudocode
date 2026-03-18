/*
 * XREFs of NtUserGetDManipHookInitFunction @ 0x1C00FBDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDManipHookInitFunction(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v4; // rcx
  unsigned __int16 *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx

  EnterSharedCrit(1LL);
  ProbeForWrite(a1, 0x208uLL, 2u);
  ProbeForWrite(a2, 0x208uLL, 2u);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 12) & 0x80u) != 0 )
  {
    RtlStringCchCopyW((char *)a1, 260LL, (char *)gszModuleDManipHookWOW);
    v5 = &gszFunctionDManipHookWOW;
  }
  else
  {
    RtlStringCchCopyW((char *)a1, 260LL, (char *)gszModuleDManipHook);
    v5 = &gszFunctionDManipHook;
  }
  RtlStringCchCopyW((char *)a2, 260LL, (char *)v5);
  UserSessionSwitchLeaveCrit(v7, v6);
  return 1LL;
}
