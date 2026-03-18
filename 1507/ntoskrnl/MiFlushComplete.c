/*
 * XREFs of MiFlushComplete @ 0x14021E5B8
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x14021E7FC (MiIssueAsynchronousFlush.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiDecrementModifiedWriteCount @ 0x14008563C (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x1400B55B0 (MiUnlockMdlWritePages.c)
 *     MiRetardMdl @ 0x14021414C (MiRetardMdl.c)
 *     MiFreeOverlappedFlushEntry @ 0x14021E6C0 (MiFreeOverlappedFlushEntry.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiFlushComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rax
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
  v6 = (_QWORD *)MiDecrementModifiedWriteCount(*(_QWORD *)(a1 + 32), 0);
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
