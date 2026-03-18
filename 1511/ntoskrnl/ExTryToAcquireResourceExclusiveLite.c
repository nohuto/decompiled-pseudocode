/*
 * XREFs of ExTryToAcquireResourceExclusiveLite @ 0x140213E54
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeFastAcquireInStackQueuedSpinLockAndRaise @ 0x1400CF858 (KeFastAcquireInStackQueuedSpinLockAndRaise.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140210238 (PerfLogExecutiveResourceAcquire.c)
 */

BOOLEAN __stdcall ExTryToAcquireResourceExclusiveLite(PERESOURCE Resource)
{
  bool v2; // si
  int v3; // ebp
  ULONG v4; // edi
  struct _KTHREAD *CurrentThread; // r12
  ULONG ContentionCount; // r14d
  BOOLEAN v7; // r15
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  volatile signed __int64 *v10[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  v3 = 65537;
  __incgsdword(0x63A0u);
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  ContentionCount = 0;
  KeFastAcquireInStackQueuedSpinLockAndRaise((volatile __int64 *)&Resource->SpinLock, v10);
  v7 = 0;
  if ( !Resource->ActiveEntries )
  {
    TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    v7 = 1;
    Resource->Flag |= 0x80u;
    Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
    Resource->OwnerEntry.TableSize = *(_BYTE *)&TableSize & 3 | 4;
    Resource->ActiveEntries = 1;
    Resource->ActiveCount = 1;
    __incgsdword(0x63A4u);
    __incgsdword(0x6324u);
    if ( !v2 )
      goto LABEL_9;
    v3 = 65569;
    v4 = 1;
    goto LABEL_8;
  }
  if ( (Resource->ReservedLowFlags & 0x80) != 0 && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
  {
    v7 = 1;
    Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 3 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFFC)
                                                                         + 4);
    __incgsdword(0x63A4u);
    __incgsdword(0x6324u);
    if ( v2 )
    {
      v3 = 65585;
      v4 = Resource->OwnerEntry.TableSize >> 2;
LABEL_8:
      ContentionCount = Resource->ContentionCount;
    }
  }
LABEL_9:
  KxReleaseQueuedSpinLock(v10);
  _enable();
  if ( v2 )
    PerfLogExecutiveResourceAcquire(v3, (__int64)Resource, v4, ContentionCount);
  return v7;
}
