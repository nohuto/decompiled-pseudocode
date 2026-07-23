/*
 * XREFs of PoCopyDeepIdleMask @ 0x14007DA50
 * Callers:
 *     KiGetDeepIdleProcessors @ 0x1400823D8 (KiGetDeepIdleProcessors.c)
 *     PpmIdleSelectStates @ 0x14013BBF0 (PpmIdleSelectStates.c)
 *     PpmPostProcessMediaBuffering @ 0x140675CFC (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall PoCopyDeepIdleMask(_DWORD *a1)
{
  __int64 result; // rax
  __int64 *v3; // rdx
  __int64 v4; // r8
  unsigned __int16 v5; // cx
  __int64 v6; // r9

  a1[1] = 0;
  *a1 = 1310721;
  memset(a1 + 2, 0, 0xA0uLL);
  result = (unsigned __int16)KeNumberNodes;
  if ( KeNumberNodes )
  {
    v3 = KeNodeBlock;
    v4 = (unsigned __int16)KeNumberNodes;
    do
    {
      v5 = *(_WORD *)(*v3 + 144);
      v6 = *(_QWORD *)(*v3 + 64);
      if ( *(_WORD *)a1 <= v5 )
        *(_WORD *)a1 = v5 + 1;
      result = v5;
      ++v3;
      *(_QWORD *)&a1[2 * v5 + 2] |= v6;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
