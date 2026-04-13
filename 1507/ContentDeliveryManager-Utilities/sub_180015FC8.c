/*
 * XREFs of sub_180015FC8 @ 0x180015FC8
 * Callers:
 *     sub_18000DAA8 @ 0x18000DAA8 (sub_18000DAA8.c)
 * Callees:
 *     sub_180019D04 @ 0x180019D04 (sub_180019D04.c)
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x1800210C8 (-cancel_current_task@Concurrency@@YAXXZ.c)
 *     sub_180021148 @ 0x180021148 (sub_180021148.c)
 */

void __fastcall sub_180015FC8(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // [rsp+78h] [rbp+10h]

  v4 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFLL || (v4 = sub_180021148(32 * a2), (v9 = v4) == 0) )
      Concurrency::cancel_current_task();
  }
  try
  {
    sub_180019D04(*a1, a1[1], v4);
  }
  catch ( ... )
  {
    sub_1800160D4(v5, v9);
    throw;
  }
  v6 = a1[1];
  v7 = *a1;
  v8 = v6 - *a1;
  if ( *a1 )
  {
    while ( v7 != v6 )
    {
      if ( *(_QWORD *)(v7 + 24) >= 8uLL )
        operator delete(*(void **)v7);
      *(_QWORD *)(v7 + 24) = 7LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_WORD *)v7 = 0;
      v7 += 32LL;
    }
    operator delete((void *)*a1);
  }
  a1[2] = v4 + 32 * a2;
  a1[1] = v4 + (v8 & 0xFFFFFFFFFFFFFFE0uLL);
  *a1 = v4;
}
