/*
 * XREFs of AddHmodDependency @ 0x1C00A742C
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C00A4854 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C00A9348 (_SetWinEventHook.c)
 *     _RegisterUserApiHook @ 0x1C0111014 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C0111294 (_RegisterDManipHook.c)
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
