/*
 * XREFs of CleanupPlaySound @ 0x14025F2D0
 * Callers:
 *     <none>
 * Callees:
 *     PlaySoundDisconnect @ 0x1403E3A48 (PlaySoundDisconnect.c)
 */

__int64 __fastcall CleanupPlaySound(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rdi

  v2 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = UserSessionState;
  v5 = *(_QWORD **)(UserSessionState + 70536);
  if ( v5 )
  {
    if ( *v5 )
    {
      v2 = PlaySoundDisconnect(*(RPC_BINDING_HANDLE **)(UserSessionState + 70536));
      *v5 = 0LL;
    }
    Win32FreePool(*(void **)(v4 + 70536));
    *(_QWORD *)(v4 + 70536) = 0LL;
  }
  return v2;
}
