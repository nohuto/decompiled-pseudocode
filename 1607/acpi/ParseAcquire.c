/*
 * XREFs of ParseAcquire @ 0x1C001B400
 * Callers:
 *     <none>
 * Callees:
 *     PerformMutexDriverCallbacks @ 0x1C0007554 (PerformMutexDriverCallbacks.c)
 *     AcquireGL @ 0x1C00142E0 (AcquireGL.c)
 *     HeapInsertFreeList @ 0x1C0019890 (HeapInsertFreeList.c)
 *     AcquireASLMutex @ 0x1C001B320 (AcquireASLMutex.c)
 *     IsCompatableDSDTRevision @ 0x1C002563C (IsCompatableDSDTRevision.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     ReleaseASLMutex @ 0x1C0029100 (ReleaseASLMutex.c)
 *     ReleaseGL @ 0x1C005C884 (ReleaseGL.c)
 */

__int64 __fastcall ParseAcquire(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  int v26; // r14d

  v6 = a3;
  v7 = *(unsigned int *)(a2 + 16);
  v8 = v7 & 0xF;
  if ( (_DWORD)v8 == 3 )
  {
    v9 = 3;
  }
  else
  {
    v9 = 5;
    if ( !(_DWORD)a3 )
      v9 = v7 & 0xF;
  }
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a2 + 56);
    v11 = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 16) = v7 + 1;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), 0, 0) == 2
      && (int)PerformMutexDriverCallbacks(4, v11, a1, v10, 0) >= 0 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), 3, 2);
    }
LABEL_6:
    if ( (++*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
    {
      v6 = AcquireGL(a1);
      if ( v6 )
        return v6;
    }
    goto LABEL_7;
  }
  v17 = v9 - 1;
  if ( !v17 )
    goto LABEL_6;
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 != 1 )
            return v6;
          goto LABEL_20;
        }
LABEL_18:
        if ( (*(_DWORD *)(a2 + 16) & 0x40000) != 0 )
        {
          *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
          if ( v6 )
          {
            v6 = 0;
            *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = (-(__int64)((unsigned __int8)IsCompatableDSDTRevision(
                                                                                      v8,
                                                                                      v7,
                                                                                      a3,
                                                                                      a4) != 0) & 0xFFFFFFFF00000000uLL)
                                                     + 0xFFFFFFFF;
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
          }
        }
        ++*(_DWORD *)(a2 + 16);
LABEL_20:
        v14 = *(_QWORD *)(a1 + 416);
        v15 = v14 - 16;
        *(_QWORD *)(a1 + 416) = *(_QWORD *)(v14 + 8);
        *(_DWORD *)(v14 - 16) = 0;
        byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        HeapInsertFreeList(*(_QWORD *)(v15 + 8), (unsigned int *)v15);
        KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
        return v6;
      }
LABEL_16:
      if ( v6 )
      {
        v23 = *(_DWORD *)(a2 + 16);
        if ( (v23 & 0x80000) != 0 )
        {
          v24 = *(_QWORD *)(a2 + 32);
          *(_DWORD *)(a2 + 16) = v23 & 0xFFF7FFFF;
          ReleaseASLMutex(a1, v24, 0LL);
        }
        v25 = *(_DWORD *)(a2 + 16);
        if ( (v25 & 0x20000) != 0 )
        {
          *(_DWORD *)(a2 + 16) = v25 & 0xFFFDFFFF;
          v26 = ReleaseGL(a1);
          if ( v26 )
          {
            LogError(3222536195LL);
            AcpiDiagTraceAmlError(a1, 3222536195LL);
            PrintDebugMessage(172, v26, 0, 0, 0LL);
            v6 = -1072431101;
          }
        }
        v8 = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 32LL);
        if ( (_DWORD)v8 == 3 )
        {
          if ( *(_WORD *)(a2 + 40) == 0xFFFF )
          {
            *(_DWORD *)(a2 + 16) = 1;
            return v6;
          }
          v6 = 32773;
        }
      }
      ++*(_DWORD *)(a2 + 16);
      goto LABEL_18;
    }
    goto LABEL_13;
  }
LABEL_7:
  v12 = *(_DWORD *)(a2 + 16);
  if ( (v12 & 0x10000) != 0 )
    *(_DWORD *)(a2 + 16) = v12 | 0x20000;
  v13 = AcquireASLMutex(a1, *(KSPIN_LOCK **)(a2 + 32), *(_WORD *)(a2 + 40));
  v6 = v13;
  if ( v13 == 32772 )
  {
    v22 = *(_DWORD *)(a2 + 16);
    if ( (v22 & 0x20000) != 0 )
    {
      *(_DWORD *)(a2 + 16) = v22 & 0xFFFDFFFF;
      v6 = ReleaseGL(a1);
      if ( v6 )
      {
        *(_DWORD *)(a2 + 16) += 3;
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(a1, 3222536195LL);
        PrintDebugMessage(119, v6, 0, 0, 0LL);
        return (unsigned int)-1072431101;
      }
      else
      {
        --*(_DWORD *)(a2 + 16);
      }
    }
    return v6;
  }
  if ( !v13 )
    *(_DWORD *)(a2 + 16) |= 0x80000u;
  ++*(_DWORD *)(a2 + 16);
LABEL_13:
  if ( v6 == 32773
    || (v7 = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 32LL), (_DWORD)v7 != 3)
    || (v6 = PerformMutexDriverCallbacks(2, *(_QWORD *)(a2 + 32), a1, *(_QWORD *)(a1 + 80), *(_WORD *)(a2 + 40)),
        v6 != 32772) )
  {
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_16;
  }
  return v6;
}
