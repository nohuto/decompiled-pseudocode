/*
 * XREFs of MapClientNeuterToClientPfn @ 0x1401506CC
 * Callers:
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     _GetClassInfoEx @ 0x14014F1DC (_GetClassInfoEx.c)
 *     xxxSetClassData @ 0x140151060 (xxxSetClassData.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapClientNeuterToClientPfn(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v3 = a1 + 8;
  v4 = a2;
  if ( !a2 )
    v4 = *(_QWORD *)(*(_QWORD *)v3 + 32LL);
  v5 = *(unsigned __int16 *)(*(_QWORD *)v3 + 4LL);
  if ( ((unsigned __int16)v5 < 0x2A1u || (unsigned __int16)v5 > 0x2AAu) && (_WORD)v5 != 666 )
    return v4;
  if ( !a3 )
  {
    v7 = *(_QWORD *)(W32GetUserSessionState(v5, a2) + 19904);
    v8 = *(unsigned __int16 *)(*(_QWORD *)v3 + 4LL);
    if ( *(_QWORD *)(v7 + 8 * v8 - 4936) == v4 )
      return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904)
                       + 8LL * *(unsigned __int16 *)(*(_QWORD *)v3 + 4LL)
                       - 4744);
    return v4;
  }
  v9 = *(_QWORD *)(W32GetUserSessionState(v5, a2) + 19904);
  v10 = *(unsigned __int16 *)(*(_QWORD *)v3 + 4LL);
  if ( *(_QWORD *)(v9 + 8 * v10 - 4744) != v4 )
    return v4;
  return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19904)
                   + 8LL * *(unsigned __int16 *)(*(_QWORD *)v3 + 4LL)
                   - 4936);
}
