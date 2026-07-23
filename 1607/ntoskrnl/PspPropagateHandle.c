/*
 * XREFs of PspPropagateHandle @ 0x14045B6BC
 * Callers:
 *     PspUpdateCreateInfo @ 0x14045B498 (PspUpdateCreateInfo.c)
 * Callees:
 *     ObDuplicateObject @ 0x1404EFB40 (ObDuplicateObject.c)
 */

__int64 __fastcall PspPropagateHandle(char a1, _QWORD *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // r9d

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( a1 )
  {
    return (unsigned int)ObDuplicateObject(
                           (int)CurrentThread->ApcState.Process,
                           *a2,
                           (int)CurrentThread->ApcState.Process,
                           (int)a3,
                           0,
                           0,
                           2,
                           0);
  }
  else
  {
    *a3 = *a2;
    *a2 = 0LL;
  }
  return v4;
}
