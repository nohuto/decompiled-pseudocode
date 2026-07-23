/*
 * XREFs of MiReadyFlushMdlToWrite @ 0x1400211EC
 * Callers:
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 * Callees:
 *     MiEndingOffsetWithLock @ 0x1400230E0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 */

__int64 __fastcall MiReadyFlushMdlToWrite(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbp

  v6 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 48) - 0x57FFFFFFFF8LL);
  *(_DWORD *)(a1 + 44) = 0;
  v7 = MiStartingOffset(a2, v6 | 0x8000000000000000uLL, 0xFFFFFFFFLL);
  MiEndingOffsetWithLock(a2);
  *(_WORD *)(a1 + 10) |= 2u;
  if ( (a3 & 8) != 0 )
    *(_WORD *)(a1 + 10) |= 0x4000u;
  *(_WORD *)(a1 + 8) = ((8 * (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12) + 48;
  return v7;
}
