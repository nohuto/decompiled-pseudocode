/*
 * XREFs of IsDpiValidPlateau @ 0x140302674
 * Callers:
 *     IsValidKernelDpiAwarenessContext @ 0x1401BC5C0 (IsValidKernelDpiAwarenessContext.c)
 *     NtUserForceWindowToDpiForTest @ 0x1402B2180 (NtUserForceWindowToDpiForTest.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDpiValidPlateau(__int64 a1, __int64 a2)
{
  if ( (unsigned int)a1 >= 0x60 && (a2 = (unsigned int)a1 / 0x18, (_DWORD)a1 == 24 * (_DWORD)a2) )
    return (unsigned int)(a1 - 72) < 0x1B0;
  else
    return (_DWORD)a1 == *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 6998LL);
}
