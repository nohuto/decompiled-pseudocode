/*
 * XREFs of MiInsertUnusedSegment @ 0x140026B6C
 * Callers:
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     MiCleanSection @ 0x140112210 (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1401DE304 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DE8C4 (MiFlushControlArea.c)
 *     MiProcessDeleteOnClose @ 0x1401DECE4 (MiProcessDeleteOnClose.c)
 *     MiSetDeleteOnClose @ 0x1401DF1A8 (MiSetDeleteOnClose.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseControlAreaCharges @ 0x140026ED0 (MiReleaseControlAreaCharges.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiConvertStaticSubsections @ 0x1400A0534 (MiConvertStaticSubsections.c)
 *     MiComputePagedPoolSegmentBytes @ 0x1401DE28C (MiComputePagedPoolSegmentBytes.c)
 */

__int64 __fastcall MiInsertUnusedSegment(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rsi
  __int64 v8; // rdi
  int v9; // ecx
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rbx

  v4 = *(_DWORD *)(a1 + 56);
  v5 = 0LL;
  if ( (v4 & 0x100) != 0 )
    return 0LL;
  if ( (v4 & 0x20) == 0 )
    v5 = MiConvertStaticSubsections();
  v8 = MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF, a2, a3, a4);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v8 + 1664));
  if ( !v5 )
    v5 = MiReleaseControlAreaCharges(a1, 1LL);
  v9 = *(_DWORD *)(a1 + 56) | 0x8000000;
  *(_DWORD *)(a1 + 56) = v9;
  if ( (v9 & 0x40000) != 0 )
  {
    v10 = *(_QWORD **)(v8 + 1448);
    v11 = (_QWORD *)(a1 + 8);
    if ( *v10 != v8 + 1440 )
      __fastfail(3u);
    *v11 = v8 + 1440;
    *(_QWORD *)(a1 + 16) = v10;
    *v10 = v11;
    *(_QWORD *)(v8 + 1448) = v11;
    ++*(_DWORD *)(v8 + 1524);
    if ( !*(_BYTE *)(v8 + 1520) && (*(_DWORD *)(v8 + 4) & 1) == 0 )
    {
      *(_BYTE *)(v8 + 1520) = 1;
      KiSetTimerEx(v8 + 1456, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
    }
  }
  else
  {
    v12 = *(_QWORD **)(v8 + 1552);
    v13 = (_QWORD *)(a1 + 8);
    if ( *v12 != v8 + 1544 )
      __fastfail(3u);
    *v13 = v8 + 1544;
    *(_QWORD *)(a1 + 16) = v12;
    *v12 = v13;
    *(_QWORD *)(v8 + 1552) = v13;
  }
  v14 = MiComputePagedPoolSegmentBytes(a1);
  *(_QWORD *)(v8 + 1536) += v14;
  v15 = v14;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 1664));
  _InterlockedExchangeAdd64(&qword_1403265A8, v15);
  return v5;
}
