/*
 * XREFs of UnlockObjectAssignment @ 0x1C0050160
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 *     HMFreeObject @ 0x1C004F9B0 (HMFreeObject.c)
 *     UserDeleteW32Thread @ 0x1C0050C30 (UserDeleteW32Thread.c)
 *     DestroyProcessInfo @ 0x1C0050D24 (DestroyProcessInfo.c)
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
