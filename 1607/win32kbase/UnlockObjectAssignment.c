/*
 * XREFs of UnlockObjectAssignment @ 0x1C00155E0
 * Callers:
 *     DestroyProcessInfo @ 0x1C0012B48 (DestroyProcessInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 *     UserDeleteW32Thread @ 0x1C0015F20 (UserDeleteW32Thread.c)
 *     HMFreeObject @ 0x1C0038B10 (HMFreeObject.c)
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
