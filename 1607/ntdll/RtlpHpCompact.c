/*
 * XREFs of RtlpHpCompact @ 0x18004E444
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x18004E5C0 (RtlpFlushHeapsCallback.c)
 *     RtlCompactHeap @ 0x180090A00 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHpLfhOwnerCompact @ 0x18004D2A8 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhCacheEmpty @ 0x18004E3C0 (RtlpHpLfhCacheEmpty.c)
 */

__int64 __fastcall RtlpHpCompact(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  __int64 *v8; // rdi

  v4 = *(_DWORD *)(a1 + 40);
  v5 = *(_DWORD *)(a1 + 20) & 0x13000003;
  if ( v4 && v4 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v5 = *(_DWORD *)(a1 + 20) & 0x13000002 | 1;
  v6 = (_QWORD *)(a1 + 288);
  v7 = 129LL;
  v8 = (__int64 *)(a1 + 480);
  do
  {
    if ( (*v8 & 1) == 0 )
      RtlpHpLfhOwnerCompact((__int64)v6, *v8, v5, a4);
    ++v8;
    --v7;
  }
  while ( v7 );
  RtlpHpLfhCacheEmpty((__int64)(v6 + 10), v6, v5, a4);
  return 0LL;
}
