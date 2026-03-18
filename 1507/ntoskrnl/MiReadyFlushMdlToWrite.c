/*
 * XREFs of MiReadyFlushMdlToWrite @ 0x14011A498
 * Callers:
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiFlushFileOnlyMdl @ 0x14023092C (MiFlushFileOnlyMdl.c)
 * Callees:
 *     MiEndingOffsetWithLock @ 0x140055090 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 */

unsigned __int64 __fastcall MiReadyFlushMdlToWrite(__int64 a1, __int64 *a2, char a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp

  v6 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 48) - 0x57FFFFFFFF8LL);
  *(_DWORD *)(a1 + 44) = 0;
  v7 = MiStartingOffset(a2, v6 | 0x8000000000000000uLL, 0xFFFFFFFF);
  MiEndingOffsetWithLock(a2);
  *(_WORD *)(a1 + 10) |= 2u;
  if ( (a3 & 8) != 0 )
    *(_WORD *)(a1 + 10) |= 0x4000u;
  *(_WORD *)(a1 + 8) = ((8 * (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12) + 48;
  return v7;
}
