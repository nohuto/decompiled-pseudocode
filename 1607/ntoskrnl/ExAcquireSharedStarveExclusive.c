/*
 * XREFs of ExAcquireSharedStarveExclusive @ 0x1400341E0
 * Callers:
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 *     CcPinMappedData @ 0x140446090 (CcPinMappedData.c)
 * Callees:
 *     ExpWaitForResource @ 0x14005C9B0 (ExpWaitForResource.c)
 *     ExpUnlockResource @ 0x140066870 (ExpUnlockResource.c)
 *     ExpBoostIoAfterAcquire @ 0x14006B1F0 (ExpBoostIoAfterAcquire.c)
 *     ExpFindEmptyEntry @ 0x140096648 (ExpFindEmptyEntry.c)
 *     ExpFindCurrentThread @ 0x1400968C0 (ExpFindCurrentThread.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140227E70 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x14022832C (PerfLogExecutiveResourceWait.c)
 *     EXP_LOCK_RESOURCE @ 0x14022D6D0 (EXP_LOCK_RESOURCE.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D744 (EXP_UNLOCK_RESOURCE.c)
 */

BOOLEAN __stdcall ExAcquireSharedStarveExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  bool v4; // di
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rcx
  ULONG v7; // eax
  __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // esi
  ULONG ActiveEntries; // eax
  __int64 EmptyEntry; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  _BYTE v18[24]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v19[5]; // [rsp+48h] [rbp-30h] BYREF

  v4 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x63E4u);
  CurrentThread = KeGetCurrentThread();
  EXP_LOCK_RESOURCE(Resource, v18);
  do
  {
    while ( 1 )
    {
      if ( !Resource->ActiveEntries )
      {
        v7 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
        Resource->ActiveEntries = 1;
        Resource->OwnerEntry.TableSize = v7 | 8;
        Resource->ActiveCount = 1;
        EXP_UNLOCK_RESOURCE(v6, v18);
        __incgsdword(0x63ECu);
        __incgsdword(0x63A4u);
        if ( v4 )
          goto LABEL_25;
        return 1;
      }
      if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
        break;
      v9 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)v18, 1, 0);
      v6 = v9;
      if ( v9 )
      {
        if ( *(struct _KTHREAD **)v9 != CurrentThread )
        {
          *(_QWORD *)v9 = CurrentThread;
          *(_DWORD *)(v9 + 8) = *(_DWORD *)(v9 + 8) & 7 | 8;
          ActiveEntries = Resource->ActiveEntries;
          if ( ActiveEntries )
          {
            Resource->ActiveEntries = ActiveEntries + 1;
          }
          else
          {
            Resource->ActiveEntries = 1;
            Resource->ActiveCount = 1;
          }
          EXP_UNLOCK_RESOURCE(v6, v18);
          goto LABEL_13;
        }
        v10 = *(_DWORD *)(v9 + 8) & 7 ^ ((*(_DWORD *)(v9 + 8) & 0xFFFFFFF8) + 8);
        *(_DWORD *)(v9 + 8) = v10;
        v11 = v10 >> 3;
        EXP_UNLOCK_RESOURCE(v9, v18);
        __incgsdword(0x63F0u);
        __incgsdword(0x63A4u);
        if ( v4 )
        {
          v16 = v11;
          v17 = 65617LL;
          goto LABEL_26;
        }
        return 1;
      }
    }
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      v15 = Resource->OwnerEntry.TableSize & 7 ^ ((Resource->OwnerEntry.TableSize & 0xFFFFFFF8) + 8);
      Resource->OwnerEntry.TableSize = v15;
      EXP_UNLOCK_RESOURCE(v15, v18);
      __incgsdword(0x63E8u);
      __incgsdword(0x63A4u);
      if ( v4 )
      {
        v17 = 65585LL;
        v16 = Resource->OwnerEntry.TableSize >> 3;
        goto LABEL_26;
      }
      return 1;
    }
    EmptyEntry = ExpFindEmptyEntry(Resource, v18);
    v6 = EmptyEntry;
  }
  while ( !EmptyEntry );
  if ( Wait )
  {
    *(_QWORD *)EmptyEntry = CurrentThread;
    *(_DWORD *)(EmptyEntry + 8) = *(_DWORD *)(EmptyEntry + 8) & 7 | 8;
    ++Resource->NumberOfSharedWaiters;
    memset(v19, 0, 0x20uLL);
    LOWORD(v19[1]) = 1;
    v19[3] = &v19[2];
    BYTE2(v19[1]) = 6;
    v19[2] = &v19[2];
    v19[0] = Resource->SharedWaiters;
    Resource->SharedWaiters = v19;
    HIDWORD(v19[1]) = 0;
    ExpUnlockResource(v14, v18);
    __incgsdword(0x63F4u);
    if ( v4 )
      PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
    ExpWaitForResource(Resource, &v19[1]);
LABEL_13:
    ExpBoostIoAfterAcquire(Resource, CurrentThread);
    __incgsdword(0x63ECu);
    __incgsdword(0x63A4u);
    if ( v4 )
    {
LABEL_25:
      v17 = 65601LL;
      v16 = 1LL;
LABEL_26:
      PerfLogExecutiveResourceAcquire(v17, Resource, v16, Resource->ContentionCount);
    }
    return 1;
  }
  EXP_UNLOCK_RESOURCE(EmptyEntry, v18);
  __incgsdword(0x63F8u);
  return 0;
}
