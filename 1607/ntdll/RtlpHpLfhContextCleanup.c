/*
 * XREFs of RtlpHpLfhContextCleanup @ 0x1800526DC
 * Callers:
 *     RtlpHpSegHeapDestroy @ 0x180052518 (RtlpHpSegHeapDestroy.c)
 * Callees:
 *     RtlpHpLfhOwnerCleanup @ 0x18005277C (RtlpHpLfhOwnerCleanup.c)
 */

__int64 __fastcall RtlpHpLfhContextCleanup(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r15

  v5 = a1 + 24;
  v6 = 129LL;
  do
  {
    if ( (*v5 & 1) == 0 )
    {
      v8 = *v5;
      if ( *(_BYTE *)(*v5 + 2LL) )
      {
        v9 = 0LL;
        v10 = *(unsigned __int8 *)(*v5 + 2LL);
        do
        {
          RtlpHpLfhOwnerCleanup(a1, *(_QWORD *)(*(_QWORD *)(v8 + 104) + v9));
          v9 += 8LL;
          --v10;
        }
        while ( v10 );
      }
      RtlpHpLfhOwnerCleanup(a1, v8);
    }
    ++v5;
    --v6;
  }
  while ( v6 );
  return RtlpHpLfhCacheEmpty((__int64)(a1 + 10), a1, 1LL, a4);
}
