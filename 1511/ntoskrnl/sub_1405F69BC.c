/*
 * XREFs of sub_1405F69BC @ 0x1405F69BC
 * Callers:
 *     HvlInitializeProcessor @ 0x14052F954 (HvlInitializeProcessor.c)
 * Callees:
 *     HvlpGetNode @ 0x140166E04 (HvlpGetNode.c)
 *     sub_1401AF240 @ 0x1401AF240 (sub_1401AF240.c)
 *     sub_1405F68C8 @ 0x1405F68C8 (sub_1405F68C8.c)
 */

__int64 __fastcall sub_1405F69BC(__int64 a1, int a2)
{
  int *v3; // rbx
  _DWORD *Node; // rsi
  __int64 result; // rax
  char v6; // cl
  int v7; // eax
  bool v8; // zf

  v3 = sub_1401AF240(a2);
  Node = HvlpGetNode(*((_WORD *)v3 + 6));
  if ( (HvlpRootFlags & 0x40) == 0 || (result = sub_1405F68C8((__int64)v3, *(_DWORD *)(a1 + 36)), (int)result >= 0) )
  {
    v6 = byte_1402D3328;
    *(_QWORD *)(a1 + 24592) = *((_QWORD *)v3 + 4);
    ++Node[1];
    v7 = *(_DWORD *)(a1 + 36);
    v8 = v7 == v3[1];
    v3[6] = v7;
    if ( !v8 )
      v6 = 0;
    result = 0LL;
    byte_1402D3328 = v6;
  }
  return result;
}
