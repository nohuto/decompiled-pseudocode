/*
 * XREFs of RtlpHpCompact @ 0x1800088BC
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x180008620 (RtlpFlushHeapsCallback.c)
 *     RtlCompactHeap @ 0x180078DE0 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHpLfhOwnerCompact @ 0x180008944 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhCacheEmpty @ 0x1800089FC (RtlpHpLfhCacheEmpty.c)
 */

__int64 __fastcall RtlpHpCompact(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rbp
  _QWORD *v5; // rdi

  v1 = *(_DWORD *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 20) & 0x13000003;
  if ( v1 && v1 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v2 = *(_DWORD *)(a1 + 20) & 0x13000002 | 1;
  v3 = a1 + 288;
  v4 = 129LL;
  v5 = (_QWORD *)(a1 + 480);
  do
  {
    if ( (*v5 & 1) == 0 )
      RtlpHpLfhOwnerCompact(v3, *v5, v2);
    ++v5;
    --v4;
  }
  while ( v4 );
  RtlpHpLfhCacheEmpty(v3 + 80, v3, v2);
  return 0LL;
}
