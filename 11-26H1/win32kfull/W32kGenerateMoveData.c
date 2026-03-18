/*
 * XREFs of W32kGenerateMoveData @ 0x140348FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kGenerateMoveData(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int IsRemoteAndNotDisconnectConnection; // eax
  unsigned int v6; // ecx

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  IsRemoteAndNotDisconnectConnection = UserIsRemoteAndNotDisconnectConnection(v4, v3);
  v6 = 0;
  if ( IsRemoteAndNotDisconnectConnection || *(_DWORD *)(v2 + 84) )
    return 1;
  return v6;
}
