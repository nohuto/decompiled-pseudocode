/*
 * XREFs of sub_180027660 @ 0x180027660
 * Callers:
 *     <none>
 * Callees:
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x1800210C8 (-cancel_current_task@Concurrency@@YAXXZ.c)
 *     sub_180021148 @ 0x180021148 (sub_180021148.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_180027660(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  void *v4; // rax
  unsigned __int64 v5; // rcx

  v3 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 104) = v3;
  v4 = 0LL;
  v5 = v3 + 1;
  if ( v5 )
  {
    if ( v5 > 0x7FFFFFFFFFFFFFFFLL || (v4 = sub_180021148(2 * v5)) == 0LL )
      Concurrency::cancel_current_task();
  }
  *(_QWORD *)(a2 + 120) = v4;
  return &loc_180017DF9;
}
