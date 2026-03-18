/*
 * XREFs of MiRemoveEntryWsle @ 0x1400AFC70
 * Callers:
 *     MiSetWsleAge @ 0x14008090C (MiSetWsleAge.c)
 *     MiRotateHeadWsle @ 0x140081B34 (MiRotateHeadWsle.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiSwapWslEntries @ 0x140097790 (MiSwapWslEntries.c)
 *     MiClearPteAccessed @ 0x1400ADE80 (MiClearPteAccessed.c)
 *     MiReleaseWsle @ 0x1400AE200 (MiReleaseWsle.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MiRemoveWorkingSetPages @ 0x1401089A0 (MiRemoveWorkingSetPages.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140152DC0 (MiCaptureAndResetWorkingSetAccessBits.c)
 * Callees:
 *     <none>
 */

void __fastcall MiRemoveEntryWsle(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r11
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int64 v11; // r9

  if ( *(_DWORD *)(a1 + 64) == 16 )
  {
    v2 = *(_QWORD *)(a1 + 496);
    if ( (unsigned __int64)(((__int64)a2 - v2) >> 4) >= *(_QWORD *)(a1 + 8) )
    {
      v3 = *a2;
      v4 = *((unsigned int *)a2 + 2) | ((unsigned __int64)*a2 >> 16) & 0xF00000000LL;
      v5 = *((unsigned int *)a2 + 3) | ((unsigned __int64)*a2 >> 20) & 0xF00000000LL;
      v6 = 2 * ((unsigned int)((unsigned __int64)*a2 >> 9) & 7);
      v7 = *a2 & 0x800000000000LL;
      if ( v7 )
        v8 = v3 | 0xFFFF000000000000uLL;
      else
        v8 = v3 & 0xFFFFFFFFFFFFLL;
      if ( v8 < 0xFFFFF68000000000uLL
        || (!v7 ? (v11 = v3 & 0xFFFFFFFFFFFFLL) : (v11 = v3 | 0xFFFF000000000000uLL), v11 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v6 = (unsigned int)(v6 + 1);
      }
      v9 = v2 + 16 * v4;
      v10 = v2 + 16 * v5;
      if ( v5 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(a1 + 16 * (v6 + 15)) = v4;
      }
      else
      {
        *(_DWORD *)(v10 + 8) = v4;
        *(_QWORD *)v10 ^= (*(_QWORD *)v10 ^ (v4 << 16)) & 0xF000000000000LL;
      }
      if ( v4 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(a1 + 16 * (v6 + 15) + 8) = v5;
      }
      else
      {
        *(_DWORD *)(v9 + 12) = v5;
        *(_QWORD *)v9 ^= (*(_QWORD *)v9 ^ (v5 << 20)) & 0xF0000000000000LL;
      }
      --*(_QWORD *)(a1 + 8LL * (unsigned int)v6 + 112);
    }
  }
}
