/*
 * XREFs of ParseRelease @ 0x1C0014940
 * Callers:
 *     ParseCall @ 0x1C0013900 (ParseCall.c)
 *     ReleaseASLMutex @ 0x1C0022260 (ReleaseASLMutex.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C0003250 (InsertReadyQueue.c)
 *     PerformMutexDriverCallbacks @ 0x1C000601C (PerformMutexDriverCallbacks.c)
 *     ListRemoveEntry @ 0x1C0011778 (ListRemoveEntry.c)
 *     HeapInsertFreeList @ 0x1C0012D00 (HeapInsertFreeList.c)
 *     HeapFree @ 0x1C00144F8 (HeapFree.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     ReleaseGL @ 0x1C00450AC (ReleaseGL.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseRelease(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v5; // edx
  unsigned int v6; // r15d
  KIRQL v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  KIRQL v11; // al
  KIRQL v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdx
  KIRQL v15; // al
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  __int64 v22; // r9

  v3 = *(_QWORD *)(a2 + 32);
  v5 = *(_DWORD *)(a2 + 16);
  v6 = a3;
  if ( (v5 & 0xF) != 0 )
  {
    if ( (v5 & 0xF) == 1 )
      goto LABEL_10;
    if ( (v5 & 0xF) == 2 )
      goto LABEL_14;
    if ( (v5 & 0xF) != 3 )
    {
      if ( (v5 & 0xF) != 4 )
        return a3;
      goto LABEL_22;
    }
LABEL_21:
    if ( (++*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
    {
      v6 = ReleaseGL(a1);
      if ( v6 )
      {
        LogError(3222536195LL);
        PrintDebugMessage(172, v6, 0, 0, 0LL);
        v6 = -1072431101;
      }
    }
LABEL_22:
    if ( (*(_DWORD *)(a2 + 16) & 0x40000) == 0 )
    {
      v18 = *(_QWORD *)(a1 + 416);
      *(_QWORD *)(a1 + 416) = *(_QWORD *)(v18 + 8);
      HeapFree(v18);
    }
    return v6;
  }
  v6 = 0;
  *(_DWORD *)(a2 + 16) = v5 + 1;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 176));
  if ( !*(_DWORD *)(v3 + 4) )
  {
    v6 = -1072431082;
    LogError(3222536214LL);
    v19 = 137;
LABEL_38:
    v20 = 0;
    v21 = 0;
    goto LABEL_39;
  }
  v9 = *(_QWORD *)(v3 + 8);
  if ( !v9 || *(_QWORD *)(v9 + 8) != a1 )
  {
    v6 = -1072431081;
    LogError(3222536215LL);
    v19 = 138;
    goto LABEL_38;
  }
  if ( *(_DWORD *)v3 > *(_DWORD *)(a1 + 112) )
  {
    v6 = -1072431083;
    LogError(3222536213LL);
    v20 = *(_DWORD *)(a1 + 112);
    v19 = 136;
    v21 = *(_DWORD *)v3;
LABEL_39:
    PrintDebugMessage(v19, v21, v20, 0, 0LL);
    *(_DWORD *)(a2 + 16) += 2;
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 112) = *(_DWORD *)v3;
  if ( *(_DWORD *)(v3 + 4) == 1 )
    *(_DWORD *)(a2 + 16) |= 0x80000u;
LABEL_8:
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 176), v8);
  v5 = *(_DWORD *)(a2 + 16);
  if ( (*(_BYTE *)(a2 + 16) & 0xF) == 3 )
    goto LABEL_21;
  if ( (v5 & 0x80000) == 0 )
  {
    *(_DWORD *)(a2 + 16) = v5 + 1;
    goto LABEL_14;
  }
LABEL_10:
  if ( (v5 & 0x20000) != 0 )
    v10 = a1;
  else
    v10 = 0LL;
  if ( *(_DWORD *)(v3 + 24) != 3
    || (result = PerformMutexDriverCallbacks(3, v3, v10, 0LL, 0), v6 = result, (_DWORD)result != 32772) )
  {
    ++*(_DWORD *)(a2 + 16);
LABEL_14:
    ++*(_DWORD *)(a2 + 16);
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 176));
    --*(_DWORD *)(v3 + 4);
    v12 = v11;
    if ( (*(_DWORD *)(a2 + 16) & 0x80000) != 0 )
    {
      v13 = *(_QWORD *)(v3 + 8);
      v14 = v13 + 24;
      if ( *(_QWORD *)(v13 + 32) == v13 + 24 )
      {
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      else
      {
        v17 = *(_QWORD *)(a1 + 48);
        if ( v14 == v17 )
          *(_QWORD *)(a1 + 48) = *(_QWORD *)(v17 + 8);
        **(_QWORD **)(v13 + 32) = *(_QWORD *)(v13 + 24);
        *(_QWORD *)(*(_QWORD *)v14 + 8LL) = *(_QWORD *)(v13 + 32);
      }
      *(_DWORD *)(v13 - 16) = 0;
      byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v13 - 8), v13 - 16);
      KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
      *(_QWORD *)(v3 + 8) = 0LL;
      v15 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
      byte_1C005A0D8 = v15;
      if ( *(_QWORD *)(v3 + 16) )
      {
        ListRemoveEntry(*(_QWORD ***)(v3 + 16), v3 + 16);
        *(_QWORD *)(v22 - 32 + 56) = 0LL;
        InsertReadyQueue((PSLIST_ENTRY)(v22 - 32), 1);
        v15 = byte_1C005A0D8;
      }
      KeReleaseSpinLock(&SpinLock, v15);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 176), v12);
    goto LABEL_21;
  }
  return result;
}
