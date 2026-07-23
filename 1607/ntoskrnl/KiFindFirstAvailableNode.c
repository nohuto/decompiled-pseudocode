/*
 * XREFs of KiFindFirstAvailableNode @ 0x140139AF4
 * Callers:
 *     KiQueryProcessorNode @ 0x140139A1C (KiQueryProcessorNode.c)
 * Callees:
 *     KiIsNodeFull @ 0x140139B50 (KiIsNodeFull.c)
 */

__int64 __fastcall KiFindFirstAvailableNode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rcx
  _WORD *v6; // r11

  v3 = KeNumberNodes;
  v4 = 0LL;
  if ( !KeNumberNodes )
    return 3221226021LL;
  while ( 1 )
  {
    v5 = KeNodeBlock[(unsigned __int16)v4];
    if ( (*(_BYTE *)(v5 + 173) & 2) != 0 && !(unsigned __int8)KiIsNodeFull(v5, a2, a3, v4) )
      break;
    LOWORD(v4) = v4 + 1;
    if ( (unsigned __int16)v4 >= v3 )
      return 3221226021LL;
  }
  *v6 = v4;
  return 0LL;
}
