/*
 * XREFs of ExTryToAcquireResourceExclusiveLite @ 0x140263C1C
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x140103D00 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140200C08 (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14025F5A8 (PerfLogExecutiveResourceAcquire.c)
 */

BOOLEAN __stdcall ExTryToAcquireResourceExclusiveLite(PERESOURCE Resource)
{
  BOOLEAN v1; // r14
  bool v2; // di
  int v4; // r15d
  struct _KTHREAD *CurrentThread; // r13
  KSPIN_LOCK *p_SpinLock; // rcx
  ULONG v7; // esi
  ULONG ContentionCount; // r12d
  char v9; // al
  _QWORD *v10; // rdx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  volatile signed __int64 *v12; // rax
  volatile signed __int64 *v14; // [rsp+20h] [rbp-20h] BYREF
  KSPIN_LOCK *v15; // [rsp+28h] [rbp-18h]
  __int64 retaddr; // [rsp+68h] [rbp+28h]
  unsigned __int8 v17; // [rsp+70h] [rbp+30h] BYREF

  v1 = 0;
  v2 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x63A0u);
  v4 = 65537;
  CurrentThread = KeGetCurrentThread();
  p_SpinLock = &Resource->SpinLock;
  v15 = p_SpinLock;
  v7 = 0;
  ContentionCount = 0;
  v17 = 2;
  v14 = 0LL;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v9 = KiFastAcquireQueuedSpinLockInstrumented((__int64)&v14, (volatile __int64 *)p_SpinLock, &v17);
  }
  else
  {
    v9 = 0;
    v10 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&v14);
    if ( v10 )
    {
      KxWaitForLockOwnerShipWithIrql((__int64)&v14, v10, &v17);
      v9 = 1;
    }
  }
  if ( v9 )
  {
    _disable();
    __writecr8(v17);
  }
  if ( !Resource->ActiveEntries )
  {
    TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    Resource->Flag |= 0x80u;
    Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
    Resource->OwnerEntry.TableSize = *(_BYTE *)&TableSize & 3 | 4;
    Resource->ActiveEntries = 1;
    v1 = 1;
    Resource->ActiveCount = 1;
    __incgsdword(0x63A4u);
    __incgsdword(0x6324u);
    if ( !v2 )
      goto LABEL_15;
    v4 = 65569;
    v7 = 1;
    goto LABEL_14;
  }
  if ( (Resource->ReservedLowFlags & 0x80) != 0 && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
  {
    v1 = 1;
    Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 3 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFFC)
                                                                         + 4);
    __incgsdword(0x63A4u);
    __incgsdword(0x6324u);
    if ( v2 )
    {
      v4 = 65585;
      v7 = Resource->OwnerEntry.TableSize >> 2;
LABEL_14:
      ContentionCount = Resource->ContentionCount;
    }
  }
LABEL_15:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v14, retaddr);
    goto LABEL_21;
  }
  _m_prefetchw(&v14);
  v12 = v14;
  if ( !v14 )
  {
    if ( (volatile signed __int64 **)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)v15,
                                       0LL,
                                       (signed __int64)&v14) == &v14 )
      goto LABEL_21;
    v12 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v14);
  }
  v14 = 0LL;
  _InterlockedXor64(v12 + 1, 1uLL);
LABEL_21:
  _enable();
  if ( v2 )
    PerfLogExecutiveResourceAcquire(v4, (__int64)Resource, v7, ContentionCount);
  return v1;
}
