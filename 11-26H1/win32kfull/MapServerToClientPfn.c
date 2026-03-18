/*
 * XREFs of MapServerToClientPfn @ 0x140150F40
 * Callers:
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     _GetClassInfoEx @ 0x14014F1DC (_GetClassInfoEx.c)
 *     xxxSetClassData @ 0x140151060 (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapServerToClientPfn(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rsi
  int i; // ebx
  __int64 UserSessionState; // rax
  __int64 v6; // rax

  v2 = a2;
  v3 = a1;
  for ( i = 666; ; ++i )
  {
    if ( i > 672 )
      return 0LL;
    if ( i != 666 )
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      a1 = (i & 0xFFFF2FFF) - 666;
      if ( v3 == *(_QWORD *)(*(_QWORD *)(UserSessionState + 19904) + 8 * a1 + 272) )
        break;
    }
  }
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904);
  if ( v2 )
    return *(_QWORD *)(v6 + 8LL * i - 4936);
  else
    return *(_QWORD *)(v6 + 8LL * i - 4744);
}
