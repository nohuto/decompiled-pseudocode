/*
 * XREFs of MiFlushComplete @ 0x1401EAB6C
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x1401EAD3C (MiIssueAsynchronousFlush.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     MiUnlockMdlWritePages @ 0x14004D030 (MiUnlockMdlWritePages.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiDecrementModifiedWriteCount @ 0x14008E7E4 (MiDecrementModifiedWriteCount.c)
 *     MiRetardMdl @ 0x1401E2CDC (MiRetardMdl.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401EAC74 (MiFreeOverlappedFlushEntry.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFlushComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rbp
  __int64 *v6; // rax
  LONG result; // eax
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  if ( (*(_WORD *)(v2 + 10) & 0x200) != 0 )
    MiRetardMdl(v2);
  v5 = v2
     + 48
     + 8LL
     * (unsigned int)((((*(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 44)) & 0xFFF)
                     + (unsigned __int64)*(unsigned int *)(v2 + 40)
                     + 4095) >> 12);
  if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
  MiUnlockMdlWritePages((_QWORD *)(v2 + 48), v5, (int *)a2);
  if ( *(int *)a2 < 0 )
    *(_QWORD *)(a2 + 8) = 0LL;
  v6 = MiDecrementModifiedWriteCount(*(_QWORD *)(a1 + 32), 0);
  if ( v6 )
    MiReleaseControlAreaWaiters(v6);
  if ( v2 != a1 + 80 )
  {
    ExFreePoolWithTag((PVOID)v2, 0);
    *(_QWORD *)(a1 + 72) = a1 + 80;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 )
  {
    if ( *(int *)a2 < 0 )
      *(_DWORD *)(v8 + 20) = *(_DWORD *)a2;
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 16), 0xFFFFFFFF);
    if ( result == 1 )
      return MiFreeOverlappedFlushEntry((PVOID)v8);
  }
  return result;
}
