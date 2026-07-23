/*
 * XREFs of DbgkpLkmdSnapThreadApc @ 0x14061B6EC
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     DbgkpLkmdSnapPendingIrps @ 0x14061B5C0 (DbgkpLkmdSnapPendingIrps.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14061B760 (DbgkpLkmdSnapThreadInContext.c)
 */

void __fastcall DbgkpLkmdSnapThreadApc(__int64 a1, __int64 a2, __int64 a3, void **a4, volatile signed __int32 **a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v6; // rcx
  volatile signed __int32 *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  v6 = *a4;
  v7 = *a5;
  if ( _InterlockedCompareExchange(*a5, 2, 0) )
  {
    ExFreePoolWithTag(v6, 0x704E534Bu);
  }
  else
  {
    if ( (int)DbgkpLkmdSnapThreadInContext(*((_QWORD *)v7 + 1), CurrentThread, *((_QWORD *)v7 + 3)) >= 0 )
      DbgkpLkmdSnapPendingIrps(*((_QWORD *)v7 + 1), (__int64)CurrentThread, *((_DWORD **)v7 + 3));
    KeSetEvent((PRKEVENT)(v7 + 8), 0, 0);
  }
}
