/*
 * XREFs of ExSetResourceOwnerPointerEx @ 0x1400966A0
 * Callers:
 *     ExSetResourceOwnerPointer @ 0x140132EAC (ExSetResourceOwnerPointer.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     ExpFindCurrentThread @ 0x1400968C0 (ExpFindCurrentThread.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x140228218 (PerfLogExecutiveResourceSetOwnerPointer.c)
 *     EXP_LOCK_RESOURCE @ 0x14022D6D0 (EXP_LOCK_RESOURCE.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D744 (EXP_UNLOCK_RESOURCE.c)
 */

void __stdcall ExSetResourceOwnerPointerEx(PERESOURCE Resource, PVOID OwnerPointer, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rsi
  char v5; // r13
  bool v6; // r12
  unsigned int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  _BYTE v15[32]; // [rsp+30h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = Flags;
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  v8 = 65792;
  EXP_LOCK_RESOURCE(Resource, v15);
  if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
  {
    if ( ExpResourceEnforceOwnerTransfer && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread != CurrentThread )
      KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, (ULONG_PTR)CurrentThread, (ULONG_PTR)Resource->OwnerTable, 5uLL);
    if ( (v5 & 1) != 0 )
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
    else
    {
      if ( (Resource->OwnerEntry.TableSize & 1) != 0 )
      {
        PsBoostThreadIoEx(Resource->OwnerEntry.OwnerThread, 1, 0, 0LL);
        Resource->OwnerEntry.TableSize &= ~1u;
      }
      if ( (Resource->OwnerEntry.TableSize & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(Resource->OwnerEntry.OwnerThread + 1788));
        Resource->OwnerEntry.TableSize &= ~4u;
      }
    }
    Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)OwnerPointer;
    __incgsdword(0x6414u);
    if ( v6 )
      v8 = 65824;
  }
  else
  {
    v10 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)OwnerPointer, (unsigned int)v15, 0, 0);
    v11 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)v15, 0, 0);
    v12 = v11;
    if ( !v11 )
      KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, (ULONG_PTR)CurrentThread, (ULONG_PTR)Resource->OwnerTable, 4uLL);
    if ( v10 )
    {
      if ( (v5 & 1) != 0 )
      {
        if ( (struct _KTHREAD *)((unsigned __int64)OwnerPointer & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            (ULONG_PTR)Resource,
            (ULONG_PTR)Resource->OwnerTable,
            (ULONG_PTR)CurrentThread,
            (ULONG_PTR)OwnerPointer);
        if ( (*(_DWORD *)(v11 + 8) & 1) != 0 )
        {
          v13 = *(_DWORD *)(v10 + 8);
          if ( (v13 & 1) != 0 )
            PsBoostThreadIoEx(*(_QWORD *)v12, 1, 0, 0LL);
          else
            *(_DWORD *)(v10 + 8) = v13 | 1;
          *(_DWORD *)(v12 + 8) &= ~1u;
        }
        if ( (*(_DWORD *)(v12 + 8) & 4) != 0 )
        {
          v14 = *(_DWORD *)(v10 + 8);
          if ( (v14 & 4) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v12 + 1788LL));
          else
            *(_DWORD *)(v10 + 8) = v14 | 4;
          *(_DWORD *)(v12 + 8) &= ~4u;
        }
        if ( (*(_DWORD *)(v10 + 8) & 2) == 0 )
        {
          ObfReferenceObjectWithTag(*(PVOID *)v12, 0x746C6644u);
          *(_DWORD *)(v10 + 8) |= 2u;
        }
      }
      else
      {
        if ( (*(_DWORD *)(v11 + 8) & 1) != 0 )
        {
          PsBoostThreadIoEx(*(_QWORD *)v11, 1, 0, 0LL);
          *(_DWORD *)(v12 + 8) &= ~1u;
        }
        if ( (*(_DWORD *)(v12 + 8) & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v12 + 1788LL));
          *(_DWORD *)(v12 + 8) &= ~4u;
        }
      }
      v9 = *(_DWORD *)(v12 + 8) & 0xFFFFFFF8;
      *(_DWORD *)(v10 + 8) += v9;
      *(_DWORD *)(v12 + 8) &= 7u;
      *(_QWORD *)v12 = 0LL;
      --Resource->ActiveEntries;
      __incgsdword(0x641Cu);
    }
    else
    {
      if ( (v5 & 1) != 0 )
      {
        if ( (struct _KTHREAD *)((unsigned __int64)OwnerPointer & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            (ULONG_PTR)Resource,
            (ULONG_PTR)Resource->OwnerTable,
            (ULONG_PTR)CurrentThread,
            (ULONG_PTR)OwnerPointer);
        ObfReferenceObjectWithTag((PVOID)((unsigned __int64)OwnerPointer & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
        *(_DWORD *)(v12 + 8) |= 2u;
      }
      else
      {
        if ( (*(_DWORD *)(v11 + 8) & 1) != 0 )
        {
          PsBoostThreadIoEx(*(_QWORD *)v11, 1, 0, 0LL);
          *(_DWORD *)(v12 + 8) &= ~1u;
        }
        if ( (*(_DWORD *)(v12 + 8) & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v12 + 1788LL));
          *(_DWORD *)(v12 + 8) &= ~4u;
        }
      }
      *(_QWORD *)v12 = OwnerPointer;
      __incgsdword(0x6418u);
    }
    if ( v6 )
      v8 = 65856;
  }
  EXP_UNLOCK_RESOURCE(v9, v15);
  if ( v6 )
    PerfLogExecutiveResourceSetOwnerPointer(v8, Resource);
}
