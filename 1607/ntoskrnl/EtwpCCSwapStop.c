/*
 * XREFs of EtwpCCSwapStop @ 0x1404D2660
 * Callers:
 *     EtwpFlushTrace @ 0x140495818 (EtwpFlushTrace.c)
 *     EtwpUpdateGroupMasks @ 0x1404962BC (EtwpUpdateGroupMasks.c)
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 */

_UNKNOWN **__fastcall EtwpCCSwapStop(unsigned int a1, char a2)
{
  _UNKNOWN **result; // rax
  ULONG v3; // esi
  ULONG v4; // ebx
  __int64 i; // rdi
  _BYTE *v7; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = KeNumberProcessors_0;
  v4 = 0;
  for ( i = a1; v4 < v3; ++v4 )
  {
    result = (_UNKNOWN **)KeGetPrcb(v4);
    v7 = result[3067];
    if ( *(_QWORD *)&v7[8 * i + 2848] )
      v7[i + 2840] = 1;
  }
  if ( a2 )
    --CCSwapNumLoggersPerClockType[i];
  return result;
}
