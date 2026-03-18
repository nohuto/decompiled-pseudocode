/*
 * XREFs of sub_14067088C @ 0x14067088C
 * Callers:
 *     HvlInitializeProcessor @ 0x14059A970 (HvlInitializeProcessor.c)
 * Callees:
 *     HvlpGetNode @ 0x140195BBC (HvlpGetNode.c)
 *     sub_1401E65AC @ 0x1401E65AC (sub_1401E65AC.c)
 *     sub_14067068C @ 0x14067068C (sub_14067068C.c)
 */

__int64 __fastcall sub_14067088C(__int64 a1, int a2)
{
  int *v3; // rbx
  _DWORD *Node; // rsi
  __int64 result; // rax
  char v6; // cl
  int v7; // eax
  bool v8; // zf

  v3 = sub_1401E65AC(a2);
  Node = HvlpGetNode(*((_WORD *)v3 + 6));
  if ( (HvlpRootFlags & 0x40) == 0 || (result = sub_14067068C((__int64)v3, *(_DWORD *)(a1 + 36)), (int)result >= 0) )
  {
    v6 = byte_140322468;
    *(_QWORD *)(a1 + 24592) = *((_QWORD *)v3 + 4);
    ++Node[1];
    v7 = *(_DWORD *)(a1 + 36);
    v8 = v7 == v3[1];
    v3[6] = v7;
    if ( !v8 )
      v6 = 0;
    result = 0LL;
    byte_140322468 = v6;
  }
  return result;
}
