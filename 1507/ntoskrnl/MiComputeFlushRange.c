/*
 * XREFs of MiComputeFlushRange @ 0x140085450
 * Callers:
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     MmTrimSection @ 0x1400F8B8C (MmTrimSection.c)
 * Callees:
 *     MiComputeDataFlushRange @ 0x140085714 (MiComputeDataFlushRange.c)
 *     MiLockSectionControlArea @ 0x140086F60 (MiLockSectionControlArea.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiComputeFlushRange(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  int v8; // edx
  _DWORD *v10; // rcx
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v7 = MiLockSectionControlArea(a1, 1LL, v11);
  v8 = 0;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 56) & 3) == 0 && *(_QWORD *)(v7 + 32) )
    {
      LOBYTE(v8) = v11[0];
      return MiComputeDataFlushRange(v7, v8, a2, a3, 0, a4);
    }
    v10 = (_DWORD *)(v7 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
    else
      *v10 = 0;
    __writecr8(v11[0]);
  }
  return 0LL;
}
