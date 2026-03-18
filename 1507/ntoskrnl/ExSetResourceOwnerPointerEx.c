/*
 * XREFs of ExSetResourceOwnerPointerEx @ 0x1400D6534
 * Callers:
 *     ExSetResourceOwnerPointer @ 0x1400D391C (ExSetResourceOwnerPointer.c)
 *     VerifierExSetResourceOwnerPointerEx @ 0x140741C1C (VerifierExSetResourceOwnerPointerEx.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     ExpFindCurrentThread @ 0x1400D6794 (ExpFindCurrentThread.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x140103D00 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140200C08 (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x14025F950 (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

void __stdcall ExSetResourceOwnerPointerEx(PERESOURCE Resource, PVOID OwnerPointer, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // r14
  KSPIN_LOCK *p_SpinLock; // rcx
  char v6; // di
  bool v7; // r13
  unsigned int v9; // r12d
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  KSPIN_LOCK *v18; // [rsp+38h] [rbp-18h]
  void *retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int8 v20; // [rsp+90h] [rbp+40h] BYREF
  ULONG v21; // [rsp+A0h] [rbp+50h]

  v21 = Flags;
  CurrentThread = KeGetCurrentThread();
  p_SpinLock = &Resource->SpinLock;
  v6 = Flags;
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  v20 = 2;
  v18 = p_SpinLock;
  v17 = 0LL;
  v9 = 65792;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v10 = KiFastAcquireQueuedSpinLockInstrumented(&v17, p_SpinLock, &v20);
  }
  else
  {
    v10 = 0;
    v11 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&v17);
    if ( v11 )
    {
      KxWaitForLockOwnerShipWithIrql(&v17, v11, &v20);
      v10 = 1;
    }
  }
  if ( v10 )
  {
    _disable();
    __writecr8(v20);
  }
  if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      if ( (struct _KTHREAD *)((unsigned __int64)OwnerPointer & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          (ULONG_PTR)Resource,
          (ULONG_PTR)Resource->OwnerTable,
          (ULONG_PTR)CurrentThread,
          (ULONG_PTR)OwnerPointer);
      ObfReferenceObjectWithTag((PVOID)((unsigned __int64)OwnerPointer & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
      Resource->OwnerEntry.TableSize |= 2u;
    }
    else if ( (Resource->OwnerEntry.TableSize & 1) != 0 )
    {
      PsBoostThreadIoEx(Resource->OwnerEntry.OwnerThread, 1, 0, 0LL);
      Resource->OwnerEntry.TableSize &= ~1u;
    }
    Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)OwnerPointer;
    __incgsdword(0x6394u);
    if ( v7 )
      v9 = 65824;
  }
  else
  {
    v12 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)OwnerPointer, (unsigned int)&v17, 0, 0);
    v13 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)&v17, 0, 0);
    v14 = v13;
    if ( !v13 )
      KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, (ULONG_PTR)CurrentThread, (ULONG_PTR)Resource->OwnerTable, 3uLL);
    if ( v12 )
    {
      if ( (v21 & 1) != 0 )
      {
        if ( (struct _KTHREAD *)((unsigned __int64)OwnerPointer & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            (ULONG_PTR)Resource,
            (ULONG_PTR)Resource->OwnerTable,
            (ULONG_PTR)CurrentThread,
            (ULONG_PTR)OwnerPointer);
        if ( (*(_DWORD *)(v13 + 8) & 1) != 0 )
        {
          v16 = *(_DWORD *)(v12 + 8);
          if ( (v16 & 1) != 0 )
            PsBoostThreadIoEx(*(_QWORD *)v14, 1, 0, 0LL);
          else
            *(_DWORD *)(v12 + 8) = v16 | 1;
          *(_DWORD *)(v14 + 8) &= ~1u;
        }
        if ( (*(_DWORD *)(v12 + 8) & 2) == 0 )
        {
          ObfReferenceObjectWithTag(*(PVOID *)v14, 0x746C6644u);
          *(_DWORD *)(v12 + 8) |= 2u;
        }
      }
      else if ( (*(_DWORD *)(v13 + 8) & 1) != 0 )
      {
        PsBoostThreadIoEx(*(_QWORD *)v13, 1, 0, 0LL);
        *(_DWORD *)(v14 + 8) &= ~1u;
      }
      *(_DWORD *)(v12 + 8) += *(_DWORD *)(v14 + 8) & 0xFFFFFFFC;
      *(_DWORD *)(v14 + 8) &= 3u;
      *(_QWORD *)v14 = 0LL;
      --Resource->ActiveEntries;
      __incgsdword(0x639Cu);
    }
    else
    {
      if ( (v21 & 1) != 0 )
      {
        if ( (struct _KTHREAD *)((unsigned __int64)OwnerPointer & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            (ULONG_PTR)Resource,
            (ULONG_PTR)Resource->OwnerTable,
            (ULONG_PTR)CurrentThread,
            (ULONG_PTR)OwnerPointer);
        ObfReferenceObjectWithTag((PVOID)((unsigned __int64)OwnerPointer & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
        *(_DWORD *)(v14 + 8) |= 2u;
      }
      else if ( (*(_DWORD *)(v13 + 8) & 1) != 0 )
      {
        PsBoostThreadIoEx(*(_QWORD *)v13, 1, 0, 0LL);
        *(_DWORD *)(v14 + 8) &= ~1u;
      }
      *(_QWORD *)v14 = OwnerPointer;
      __incgsdword(0x6398u);
    }
    if ( v7 )
      v9 = 65856;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v17, retaddr);
  }
  else
  {
    _m_prefetchw(&v17);
    v15 = v17;
    if ( !v17 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v18, 0LL, (signed __int64)&v17) == &v17 )
        goto LABEL_18;
      v15 = KxWaitForLockChainValid(&v17);
    }
    v17 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v15 + 8), 1uLL);
  }
LABEL_18:
  _enable();
  if ( v7 )
    PerfLogExecutiveResourceSetOwnerPointer(v9, Resource);
}
