/*
 * XREFs of UpdatePointerDeviceCount @ 0x1402A9170
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x140222790 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatePointerDeviceCount(int a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rax

  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
  {
    if ( (_DWORD)v2 == 1 )
    {
      UserSessionState = W32GetUserSessionState(v2, a2);
      --*(_DWORD *)(UserSessionState + 16680);
    }
  }
  else
  {
    v4 = W32GetUserSessionState(v2, a2);
    ++*(_DWORD *)(v4 + 16680);
  }
  return *(unsigned int *)(W32GetUserSessionState(v2, a2) + 16680);
}
