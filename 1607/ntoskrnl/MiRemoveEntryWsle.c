/*
 * XREFs of MiRemoveEntryWsle @ 0x1400E0420
 * Callers:
 *     MiRotateHeadWsle @ 0x140016970 (MiRotateHeadWsle.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MiSwapWslEntries @ 0x1400499F0 (MiSwapWslEntries.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiSetWsleAge @ 0x1400BBB24 (MiSetWsleAge.c)
 *     MiClearPteAccessed @ 0x1400DFD90 (MiClearPteAccessed.c)
 *     MiReleaseWsle @ 0x1400E02D0 (MiReleaseWsle.c)
 *     MiMoveValidWsle @ 0x1400FCC4C (MiMoveValidWsle.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14012A1C0 (MiCaptureAndResetWorkingSetAccessBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRemoveEntryWsle(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // r11
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r8
  unsigned __int64 v14; // rbx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    result = (__int64)&BugCheckParameter2;
  else
    result = *(_QWORD *)(a1 + 16) + 416LL;
  if ( *(_DWORD *)(result + 32) == 16 )
  {
    v4 = *(_QWORD *)(result + 80);
    if ( (unsigned __int64)(((__int64)a2 - v4) >> 4) >= *(_QWORD *)(result + 8) )
    {
      v5 = *a2;
      v6 = *((unsigned int *)a2 + 2) | ((unsigned __int64)*a2 >> 16) & 0xF00000000LL;
      v7 = *((unsigned int *)a2 + 3) | ((unsigned __int64)*a2 >> 20) & 0xF00000000LL;
      result = 2 * ((unsigned int)((unsigned __int64)*a2 >> 9) & 7);
      if ( (*a2 & 0x800000000000LL) != 0 )
        v8 = v5 | 0xFFFF000000000000uLL;
      else
        v8 = v5 & 0xFFFFFFFFFFFFLL;
      if ( v8 < 0xFFFFF68000000000uLL
        || ((v5 & 0x800000000000LL) == 0 ? (v14 = v5 & 0xFFFFFFFFFFFFLL) : (v14 = v5 | 0xFFFF000000000000uLL),
            v14 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        result = (unsigned int)(result + 1);
      }
      v9 = *(_QWORD *)(a1 + 16);
      v10 = v4 + 16 * v6;
      v11 = v4 + 16 * v7;
      v12 = (unsigned int)result;
      v13 = 2 * (result + 10);
      if ( v7 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(v9 + 16 * (result + 10)) = v6;
      }
      else
      {
        *(_DWORD *)(v11 + 8) = v6;
        result = (*(_QWORD *)v11 ^ (v6 << 16)) & 0xF000000000000LL;
        *(_QWORD *)v11 ^= result;
      }
      if ( v6 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(v9 + 8 * v13 + 8) = v7;
      }
      else
      {
        *(_DWORD *)(v10 + 12) = v7;
        result = (*(_QWORD *)v10 ^ (v7 << 20)) & 0xF0000000000000LL;
        *(_QWORD *)v10 ^= result;
      }
      --*(_QWORD *)(v9 + 8 * v12 + 32);
    }
  }
  return result;
}
