/*
 * XREFs of ExWnfExitProcess @ 0x14045FD9C
 * Callers:
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     ExpWnfDeleteScopeById @ 0x14045FF9C (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x1404AD754 (ExpWnfDeleteProcessContext.c)
 */

void __fastcall ExWnfExitProcess(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = *(void **)(v5 + 1720);
  if ( v4 )
    ExpWnfDeleteProcessContext(v4);
  if ( a2 )
    ExpWnfDeleteScopeById(3LL, &v5);
  KeLeaveCriticalRegion();
}
