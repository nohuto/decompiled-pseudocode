/*
 * XREFs of MapClientNeuterToClientPfn @ 0x1C00A1F54
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     _GetClassInfoEx @ 0x1C009F0A0 (_GetClassInfoEx.c)
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 *     xxxSetClassData @ 0x1C0125654 (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapClientNeuterToClientPfn(__int64 a1, __int64 a2, int a3)
{
  unsigned __int16 v3; // cx
  __int64 v5; // rax

  if ( !a2 )
    a2 = *(_QWORD *)(a1 + 88);
  v3 = *(_WORD *)(a1 + 12);
  if ( (unsigned __int16)(v3 - 673) > 9u )
    return a2;
  v5 = v3 - 666;
  if ( !a3 )
  {
    if ( *(_QWORD *)(gpsi + 8 * v5 + 392) == a2 )
      return *(_QWORD *)(gpsi + 8 * v5 + 576);
    return a2;
  }
  if ( *(_QWORD *)(gpsi + 8 * v5 + 576) != a2 )
    return a2;
  return *(_QWORD *)(gpsi + 8 * v5 + 392);
}
