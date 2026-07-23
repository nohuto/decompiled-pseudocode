/*
 * XREFs of IopAcquireFastLock_0 @ 0x1400FA700
 * Callers:
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 */

char __fastcall IopAcquireFastLock_0(volatile __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (unsigned int)_InterlockedExchange(a1 + 29, 1);
  if ( (_DWORD)v5 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, a3, a4);
    return 0;
  }
  else
  {
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    return 1;
  }
}
