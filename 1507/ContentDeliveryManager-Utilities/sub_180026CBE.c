/*
 * XREFs of sub_180026CBE @ 0x180026CBE
 * Callers:
 *     <none>
 * Callees:
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x1800210C8 (-cancel_current_task@Concurrency@@YAXXZ.c)
 *     sub_180021148 @ 0x180021148 (sub_180021148.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_180026CBE(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  void *v4; // rax
  size_t v5; // rcx

  v3 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 104) = v3;
  v4 = 0LL;
  v5 = v3 + 1;
  if ( v5 )
  {
    v4 = sub_180021148(v5);
    if ( !v4 )
      Concurrency::cancel_current_task();
  }
  *(_QWORD *)(a2 + 120) = v4;
  return &loc_180004D86;
}
