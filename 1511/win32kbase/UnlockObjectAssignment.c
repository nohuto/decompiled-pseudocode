/*
 * XREFs of UnlockObjectAssignment @ 0x1C0042150
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 *     HMFreeObject @ 0x1C0041860 (HMFreeObject.c)
 *     UserDeleteW32Thread @ 0x1C0044720 (UserDeleteW32Thread.c)
 *     DestroyProcessInfo @ 0x1C00448B4 (DestroyProcessInfo.c)
 * Callees:
 *     <none>
 */

void *__fastcall UnlockObjectAssignment(void **a1)
{
  void *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (void *)ObfDereferenceObject(result);
  }
  return result;
}
