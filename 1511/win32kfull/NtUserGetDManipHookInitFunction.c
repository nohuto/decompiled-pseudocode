/*
 * XREFs of NtUserGetDManipHookInitFunction @ 0x1C01075F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall NtUserGetDManipHookInitFunction(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v4; // rcx
  const unsigned __int16 *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx

  EnterSharedCrit(0LL, 1LL);
  ProbeForWrite(a1, 0x208uLL, 2u);
  ProbeForWrite(a2, 0x208uLL, 2u);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 12) & 0x80u) != 0 )
  {
    RtlStringCchCopyW(a1, 0x104uLL, &gszModuleDManipHookWOW);
    v5 = &gszFunctionDManipHookWOW;
  }
  else
  {
    RtlStringCchCopyW(a1, 0x104uLL, &gszModuleDManipHook);
    v5 = &gszFunctionDManipHook;
  }
  RtlStringCchCopyW(a2, 0x104uLL, v5);
  UserSessionSwitchLeaveCrit(v7, v6);
  return 1LL;
}
