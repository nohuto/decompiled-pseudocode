/*
 * XREFs of EditionNotifyShellLanguageHook @ 0x140239940
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

_QWORD *__fastcall EditionNotifyShellLanguageHook(__int64 a1, __int64 a2, int a3)
{
  _QWORD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( !a3
    || (result = (_QWORD *)W32GetUserSessionState(a1, a2), result[1782] != a2)
    && (result = (_QWORD *)W32GetUserSessionState(v7, v6), a1 != result[2337]) )
  {
    result = *(_QWORD **)(a1 + 496);
    if ( ((*(_WORD *)(a1 + 712) | *(_WORD *)(*result + 16LL)) & 0x800) != 0 )
    {
      *(_QWORD *)(W32GetUserSessionState(*result, (unsigned int)(*(_DWORD *)(a1 + 712) | *(_DWORD *)(*result + 16LL)))
                + 14256) = a2;
      return (_QWORD *)xxxCallHook(8LL, 0LL, a2, 10);
    }
  }
  return result;
}
