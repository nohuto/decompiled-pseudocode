/*
 * XREFs of PopRequestShutdownWait @ 0x14056BC80
 * Callers:
 *     PoRequestShutdownEvent @ 0x14056BC44 (PoRequestShutdownEvent.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopRequestShutdownWait(PVOID Object)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x4C536F50u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[1] = Object;
  ObfReferenceObject(Object);
  ExAcquireFastMutex(&PopShutdownListMutex);
  if ( PopShutdownListAvailable )
  {
    *v4 = PopShutdownThreadList;
    PopShutdownThreadList = v4;
  }
  else
  {
    ObfDereferenceObject(Object);
    ExFreePoolWithTag(v4, 0);
    v3 = -1073741823;
  }
  KeReleaseGuardedMutex(&PopShutdownListMutex);
  return v3;
}
