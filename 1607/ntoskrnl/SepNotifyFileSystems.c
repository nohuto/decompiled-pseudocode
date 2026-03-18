/*
 * XREFs of SepNotifyFileSystems @ 0x14054A550
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 */

void __fastcall SepNotifyFileSystems(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall **i)(__int64); // rdi
  PVOID j; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  for ( i = (void (__fastcall **)(__int64))SeFileSystemNotifyRoutinesHead; i; i = (void (__fastcall **)(__int64))*i )
    i[1]((__int64)(a1 + 4));
  for ( j = SeFileSystemNotifyRoutinesExHead; j; j = *(PVOID *)j )
    (*((void (__fastcall **)(_QWORD *, _QWORD, _QWORD))j + 1))(a1 + 4, a1[5], *((_QWORD *)j + 2));
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
  v8 = (void *)a1[5];
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x53466553u);
  ExFreePoolWithTag(a1, 0);
}
