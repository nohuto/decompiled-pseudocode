/*
 * XREFs of SmpFpWaitForResource @ 0x140258E30
 * Callers:
 *     SmFpAllocate @ 0x14013FA1C (SmFpAllocate.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     SmpFpAllocateResource @ 0x140258C48 (SmpFpAllocateResource.c)
 */

__int64 __fastcall SmpFpWaitForResource(__int64 a1, int a2, struct _KTHREAD *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v6; // esi
  struct _KTHREAD *i; // rax
  __int64 result; // rax

  CurrentThread = a3;
  if ( a3 )
  {
    v6 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 1;
  }
  for ( i = *(struct _KTHREAD **)(a1 + 96);
        CurrentThread != i
     && (*(_QWORD *)(a1 + 96)
      || _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), (signed __int64)CurrentThread, 0LL));
        i = *(struct _KTHREAD **)(a1 + 96) )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
  }
  result = SmpFpAllocateResource(a1, a2);
  if ( v6 )
    _InterlockedExchange64((volatile __int64 *)(a1 + 96), result);
  return result;
}
