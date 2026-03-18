/*
 * XREFs of EtwpThreadEnumCallback @ 0x14041CAF0
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14041C13C (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpTraceThreadRundown @ 0x14000BE64 (EtwpTraceThreadRundown.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14025FEE8 (EtwpTraceThreadRundownWithStack.c)
 */

__int64 __fastcall EtwpThreadEnumCallback(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf

  if ( (*(_DWORD *)(a2 + 1724) & 1) == 0 || !*(_BYTE *)(a2 + 4) )
  {
    v3 = *(_BYTE *)(a3 + 58) == 0;
    *(_DWORD *)(a3 + 32) = 6297859;
    if ( v3 )
      EtwpTraceThreadRundown(a2, a3);
    else
      EtwpTraceThreadRundownWithStack((struct _KTHREAD *)a2, a3);
  }
  return 0LL;
}
