/*
 * XREFs of RtlpFlushHeapsCallback @ 0x180051230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFlushHeapsCallback(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return RtlpHpCompact(a1);
  else
    return RtlpFlushHeap(a1);
}
