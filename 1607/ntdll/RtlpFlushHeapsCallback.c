/*
 * XREFs of RtlpFlushHeapsCallback @ 0x18004E5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFlushHeapsCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return RtlpHpCompact(a1, a2, a3, a4);
  else
    return RtlpFlushHeap(a1);
}
