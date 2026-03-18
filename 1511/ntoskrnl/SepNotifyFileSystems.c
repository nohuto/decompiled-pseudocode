/*
 * XREFs of SepNotifyFileSystems @ 0x1404C5448
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

void __fastcall SepNotifyFileSystems(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall **i)(__int64); // rdi
  void (__fastcall **j)(__int64, _QWORD); // rdi
  void *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  for ( i = (void (__fastcall **)(__int64))SeFileSystemNotifyRoutinesHead; i; i = (void (__fastcall **)(__int64))*i )
    i[1]((__int64)(a1 + 4));
  for ( j = (void (__fastcall **)(__int64, _QWORD))SeFileSystemNotifyRoutinesExHead;
        j;
        j = (void (__fastcall **)(__int64, _QWORD))*j )
  {
    j[1]((__int64)(a1 + 4), a1[5]);
  }
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v5 = (void *)a1[5];
  if ( v5 )
    ObfDereferenceObject(v5);
  ExFreePoolWithTag(a1, 0);
}
