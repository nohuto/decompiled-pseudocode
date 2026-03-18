/*
 * XREFs of NtUserGetDManipHookInitFunction @ 0x1C01295F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDManipHookInitFunction(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterSharedCrit(0LL, 1LL);
  ProbeForWrite(a1, 0x208uLL, 2u);
  ProbeForWrite(a2, 0x208uLL, 2u);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5, v4) + 12) & 0x80u) != 0 )
  {
    RtlStringCchCopyW((char *)a1, 260LL, (char *)gszModuleDManipHookWOW);
    v6 = gszFunctionDManipHookWOW;
  }
  else
  {
    RtlStringCchCopyW((char *)a1, 260LL, (char *)gszModuleDManipHook);
    v6 = gszFunctionDManipHook;
  }
  RtlStringCchCopyW((char *)a2, 260LL, (char *)v6);
  UserSessionSwitchLeaveCrit(v8, v7);
  return 1LL;
}
