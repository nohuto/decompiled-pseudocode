/*
 * XREFs of AddHmodDependency @ 0x1C004AB4C
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C0049CE8 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C004D474 (_SetWinEventHook.c)
 *     _RegisterDManipHook @ 0x1C0152690 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C0153660 (_RegisterUserApiHook.c)
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
