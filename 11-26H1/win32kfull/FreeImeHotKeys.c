/*
 * XREFs of FreeImeHotKeys @ 0x14025A7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeImeHotKeys(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  while ( 1 )
  {
    result = W32GetUserSessionState(a1, a2);
    if ( !*(_QWORD *)(result + 12936) )
      break;
    v2 = *(__int64 **)(W32GetUserSessionState(v10, v9) + 12936);
    v3 = *v2;
    UserSessionState = W32GetUserSessionState(v2, v4);
    Win32FreePool(*(void **)(UserSessionState + 12936));
    *(_QWORD *)(W32GetUserSessionState(v7, v6) + 12936) = v3;
  }
  return result;
}
