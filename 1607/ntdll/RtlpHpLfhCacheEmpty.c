/*
 * XREFs of RtlpHpLfhCacheEmpty @ 0x18004E3B0
 * Callers:
 *     RtlpHpCompact @ 0x18004E434 (RtlpHpCompact.c)
 *     RtlpHpLfhContextCleanup @ 0x1800526DC (RtlpHpLfhContextCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpInterlockedFlushSList @ 0x1800A9DB0 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpLfhCacheEmpty(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // r14
  __int64 v7; // rsi
  __int64 result; // rax
  _QWORD *v9; // rdi

  v4 = a3;
  v5 = (unsigned __int64)a2;
  v7 = 7LL;
  do
  {
    result = RtlpInterlockedFlushSList(a1, a2, a3, a4);
    v9 = (_QWORD *)result;
    while ( 1 )
    {
      a2 = v9;
      if ( !v9 )
        break;
      v9 = (_QWORD *)*v9;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD *, _QWORD))(v5 ^ RtlpHeapKey ^ *(_QWORD *)(v5 + 16)))(
                 *(_QWORD *)v5,
                 a2,
                 v4);
    }
    a1 += 16LL;
    --v7;
  }
  while ( v7 );
  return result;
}
