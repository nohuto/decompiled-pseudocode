/*
 * XREFs of EtwpThreadEnumCallback @ 0x140459730
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140499444 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpTraceThreadRundown @ 0x1400732C4 (EtwpTraceThreadRundown.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140228EC4 (EtwpTraceThreadRundownWithStack.c)
 */

__int64 __fastcall EtwpThreadEnumCallback(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf

  if ( (*(_DWORD *)(a2 + 1728) & 1) == 0 || !*(_BYTE *)(a2 + 4) )
  {
    v3 = *(_BYTE *)(a3 + 98) == 0;
    *(_DWORD *)(a3 + 32) = 6297859;
    if ( v3 )
      EtwpTraceThreadRundown(a2, a3);
    else
      EtwpTraceThreadRundownWithStack((struct _KTHREAD *)a2, a3);
  }
  return 0LL;
}
