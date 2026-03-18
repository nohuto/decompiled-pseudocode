/*
 * XREFs of ZombieCursor @ 0x1402A8310
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1401F490C (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

__int64 __fastcall ZombieCursor(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rsi
  __int64 UserSessionState; // rax
  __int64 v6; // rax

  if ( (*(_DWORD *)(a1 + 80) & 0x100) != 0 )
    UnlinkCursor((struct tagCURSOR *)a1);
  if ( (*(_DWORD *)(a1 + 80) & 8) != 0 )
  {
    v3 = 0;
    if ( *(int *)(a1 + 88) > 0 )
    {
      v4 = 0LL;
      do
      {
        UserSessionState = W32GetUserSessionState(a1, a2);
        HMChangeOwnerProcessWorker(*(_QWORD *)(*(_QWORD *)(a1 + 96) + v4), *(_QWORD *)(UserSessionState + 18696));
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *(_DWORD *)(a1 + 88) );
    }
  }
  v6 = W32GetUserSessionState(a1, a2);
  return HMChangeOwnerProcessWorker(a1, *(_QWORD *)(v6 + 18696));
}
