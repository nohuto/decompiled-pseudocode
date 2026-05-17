/*
 * XREFs of RtlpHpLfhCacheEmpty @ 0x180050A4C
 * Callers:
 *     RtlpHpLfhContextCleanup @ 0x1800507B8 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpCompact @ 0x1800508FC (RtlpHpCompact.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpInterlockedFlushSList @ 0x1800A8970 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpLfhCacheEmpty(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rbp
  __int64 result; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // r15

  v6 = 7LL;
  do
  {
    result = RtlpInterlockedFlushSList(a1);
    v8 = (_QWORD *)result;
    while ( 1 )
    {
      v9 = v8;
      if ( !v8 )
        break;
      v8 = (_QWORD *)*v8;
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD *, _QWORD))(a2 ^ RtlpHeapKey ^ *(_QWORD *)(a2 + 16)))(
                 *(_QWORD *)a2,
                 v9,
                 a3);
    }
    a1 += 16LL;
    --v6;
  }
  while ( v6 );
  return result;
}
