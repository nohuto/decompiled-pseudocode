/*
 * XREFs of VrpBecomeDiffHiveEntryTransitionOwner @ 0x140616F50
 * Callers:
 *     VrpLoadDifferencingHive @ 0x140617474 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x140617878 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 */

char __fastcall VrpBecomeDiffHiveEntryTransitionOwner(__int64 a1)
{
  _QWORD *v1; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax

  v1 = (_QWORD *)(a1 + 40);
  if ( *v1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *v1 = KeGetCurrentThread();
  v4 = KeAbPreAcquire((ULONG_PTR)v1, 0LL, 0);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  return 1;
}
