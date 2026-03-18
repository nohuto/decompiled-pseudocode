/*
 * XREFs of MiDestroySection @ 0x140158E20
 * Callers:
 *     MiCleanSection @ 0x140158DAC (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x140210914 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x1402119C8 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiDrainControlAreaWrites @ 0x140085020 (MiDrainControlAreaWrites.c)
 *     MiClearFilePointer @ 0x1401201B4 (MiClearFilePointer.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDestroySection(__int64 a1, unsigned __int8 a2)
{
  _DWORD *v4; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 56) |= 9u;
  MiDrainControlAreaWrites(a1, a2);
  MiClearFilePointer(a1);
  v4 = (_DWORD *)(a1 + 72);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
  else
    *v4 = 0;
  __writecr8(a2);
  return MiSegmentDelete(a1);
}
