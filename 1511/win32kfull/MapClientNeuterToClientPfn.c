/*
 * XREFs of MapClientNeuterToClientPfn @ 0x1C011E4C4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     xxxSetClassData @ 0x1C0103C44 (xxxSetClassData.c)
 *     _GetClassInfoEx @ 0x1C011B160 (_GetClassInfoEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapClientNeuterToClientPfn(__int64 a1, __int64 a2, int a3)
{
  unsigned __int16 v3; // cx

  if ( !a2 )
    a2 = *(_QWORD *)(a1 + 88);
  v3 = *(_WORD *)(a1 + 12);
  if ( (unsigned __int16)(v3 - 673) > 9u )
    return a2;
  if ( !a3 )
  {
    if ( *(_QWORD *)(gpsi + 8LL * v3 - 4936) == a2 )
      return *(_QWORD *)(gpsi + 8LL * v3 - 4752);
    return a2;
  }
  if ( *(_QWORD *)(gpsi + 8LL * v3 - 4752) != a2 )
    return a2;
  return *(_QWORD *)(gpsi + 8LL * v3 - 4936);
}
