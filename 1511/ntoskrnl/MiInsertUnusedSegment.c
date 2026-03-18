/*
 * XREFs of MiInsertUnusedSegment @ 0x1400A8590
 * Callers:
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiCleanSection @ 0x140107088 (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1401D0A74 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401D0FFC (MiFlushControlArea.c)
 *     MiProcessDeleteOnClose @ 0x1401D1414 (MiProcessDeleteOnClose.c)
 *     MiSetDeleteOnClose @ 0x1401D18A4 (MiSetDeleteOnClose.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1400A65D0 (ExpAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaCharges @ 0x1400A8680 (MiReleaseControlAreaCharges.c)
 *     MiConvertStaticSubsections @ 0x1400A9044 (MiConvertStaticSubsections.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KiSetTimerEx @ 0x1400E78B8 (KiSetTimerEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertUnusedSegment(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // r8
  int v6; // eax
  volatile signed __int32 *v7; // rcx
  int v8; // eax
  _QWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  v4 = MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
  v6 = *(_DWORD *)(a1 + 56);
  if ( (v6 & 0x100) != 0 )
    return 0LL;
  if ( (v6 & 0x20) == 0 && *(_QWORD *)(a1 + 64) && (v6 & 0x400) == 0 )
    v2 = MiConvertStaticSubsections(a1);
  v7 = (volatile signed __int32 *)(v4 + 1536);
  LOBYTE(v3) = -1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7, v3);
  else
    ExpAcquireSpinLockExclusive(v7, v3, v5);
  if ( !v2 )
    v2 = MiReleaseControlAreaCharges(a1, 1LL);
  v8 = *(_DWORD *)(a1 + 56) | 0x8000000;
  *(_DWORD *)(a1 + 56) = v8;
  if ( (v8 & 0x40000) != 0 )
  {
    v12 = (_QWORD *)(a1 + 8);
    v13 = *(_QWORD **)(v4 + 1328);
    *v12 = v4 + 1320;
    v12[1] = v13;
    if ( *v13 != v4 + 1320 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v4 + 1328) = v12;
    ++*(_DWORD *)(v4 + 1404);
    if ( !*(_BYTE *)(v4 + 1400) )
    {
      *(_BYTE *)(v4 + 1400) = 1;
      KiSetTimerEx(v4 + 1336, Mi10Milliseconds.LowPart, 0, 0, 0LL);
    }
  }
  else
  {
    v9 = *(_QWORD **)(v4 + 1416);
    v10 = a1 + 8;
    *(_QWORD *)(a1 + 8) = v4 + 1408;
    *(_QWORD *)(a1 + 16) = v9;
    if ( *v9 != v4 + 1408 )
      __fastfail(3u);
    *v9 = v10;
    *(_QWORD *)(v4 + 1416) = v10;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4 + 1536, retaddr);
  else
    *(_DWORD *)(v4 + 1536) = 0;
  return v2;
}
