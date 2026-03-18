/*
 * XREFs of ExSetResourceOwnerPointerEx @ 0x1400CF5B8
 * Callers:
 *     ExSetResourceOwnerPointer @ 0x1400CF4E0 (ExSetResourceOwnerPointer.c)
 *     VerifierExSetResourceOwnerPointerEx @ 0x1406C0428 (VerifierExSetResourceOwnerPointerEx.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExpFindCurrentThread @ 0x1400CF780 (ExpFindCurrentThread.c)
 *     KeFastAcquireInStackQueuedSpinLockAndRaise @ 0x1400CF858 (KeFastAcquireInStackQueuedSpinLockAndRaise.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1402105E0 (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

void __stdcall ExSetResourceOwnerPointerEx(PERESOURCE Resource, PVOID OwnerPointer, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rbp
  bool v6; // r12
  char v7; // r13
  unsigned int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  volatile signed __int64 *v13[4]; // [rsp+30h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  v7 = Flags;
  v8 = 65792;
  KeFastAcquireInStackQueuedSpinLockAndRaise(&Resource->SpinLock, v13);
  if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
  {
    if ( (v7 & 1) != 0 )
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
    if ( v6 )
      v8 = 65824;
  }
  else
  {
    v9 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)OwnerPointer, (unsigned int)v13, 0, 0);
    v10 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)v13, 0, 0);
    v11 = v10;
    if ( !v10 )
      KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, (ULONG_PTR)CurrentThread, (ULONG_PTR)Resource->OwnerTable, 3uLL);
    if ( v9 )
    {
      if ( (v7 & 1) != 0 )
      {
        if ( (struct _KTHREAD *)((unsigned __int64)OwnerPointer & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            (ULONG_PTR)Resource,
            (ULONG_PTR)Resource->OwnerTable,
            (ULONG_PTR)CurrentThread,
            (ULONG_PTR)OwnerPointer);
        if ( (*(_DWORD *)(v10 + 8) & 1) != 0 )
        {
          v12 = *(_DWORD *)(v9 + 8);
          if ( (v12 & 1) != 0 )
            PsBoostThreadIoEx(*(_QWORD *)v11, 1, 0, 0LL);
          else
            *(_DWORD *)(v9 + 8) = v12 | 1;
          *(_DWORD *)(v11 + 8) &= ~1u;
        }
        if ( (*(_DWORD *)(v9 + 8) & 2) == 0 )
        {
          ObfReferenceObjectWithTag(*(PVOID *)v11, 0x746C6644u);
          *(_DWORD *)(v9 + 8) |= 2u;
        }
      }
      else if ( (*(_DWORD *)(v10 + 8) & 1) != 0 )
      {
        PsBoostThreadIoEx(*(_QWORD *)v10, 1, 0, 0LL);
        *(_DWORD *)(v11 + 8) &= ~1u;
      }
      *(_DWORD *)(v9 + 8) += *(_DWORD *)(v11 + 8) & 0xFFFFFFFC;
      *(_DWORD *)(v11 + 8) &= 3u;
      *(_QWORD *)v11 = 0LL;
      --Resource->ActiveEntries;
      __incgsdword(0x639Cu);
    }
    else
    {
      if ( (v7 & 1) != 0 )
      {
        if ( (struct _KTHREAD *)((unsigned __int64)OwnerPointer & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            (ULONG_PTR)Resource,
            (ULONG_PTR)Resource->OwnerTable,
            (ULONG_PTR)CurrentThread,
            (ULONG_PTR)OwnerPointer);
        ObfReferenceObjectWithTag((PVOID)((unsigned __int64)OwnerPointer & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
        *(_DWORD *)(v11 + 8) |= 2u;
      }
      else if ( (*(_DWORD *)(v10 + 8) & 1) != 0 )
      {
        PsBoostThreadIoEx(*(_QWORD *)v10, 1, 0, 0LL);
        *(_DWORD *)(v11 + 8) &= ~1u;
      }
      *(_QWORD *)v11 = OwnerPointer;
      __incgsdword(0x6398u);
    }
    if ( v6 )
      v8 = 65856;
  }
  KxReleaseQueuedSpinLock(v13);
  _enable();
  if ( v6 )
    PerfLogExecutiveResourceSetOwnerPointer(v8, Resource);
}
