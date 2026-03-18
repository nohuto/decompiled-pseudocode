/*
 * XREFs of AddHmodDependency @ 0x1C00848A8
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C00823B4 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C0087C88 (_SetWinEventHook.c)
 *     _RegisterUserApiHook @ 0x1C0101144 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C01013B4 (_RegisterDManipHook.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddHmodDependency(int a1)
{
  __int64 result; // rax

  if ( a1 < catomSysTableEntries )
  {
    result = a1;
    ++*((_DWORD *)&acatomSysDepends + a1);
  }
  return result;
}
