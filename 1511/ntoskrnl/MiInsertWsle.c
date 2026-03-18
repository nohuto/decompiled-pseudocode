/*
 * XREFs of MiInsertWsle @ 0x1400B7450
 * Callers:
 *     MiUnlockVa @ 0x140021744 (MiUnlockVa.c)
 *     MiSwapWslEntries @ 0x140057020 (MiSwapWslEntries.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiConvertToLinkedWsles @ 0x1400B5930 (MiConvertToLinkedWsles.c)
 *     MiRotateHeadWsle @ 0x1400B6674 (MiRotateHeadWsle.c)
 *     MiClearPteAccessed @ 0x1400B72A0 (MiClearPteAccessed.c)
 *     MiMoveValidWsle @ 0x1400B8B14 (MiMoveValidWsle.c)
 *     MiSetWsleAge @ 0x1400BACAC (MiSetWsleAge.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14011AB80 (MiCaptureAndResetWorkingSetAccessBits.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInsertWsle(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r10
  unsigned __int64 *v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // r10

  if ( *(_DWORD *)(a1 + 64) == 16 )
  {
    v3 = ((__int64)a2 - *(_QWORD *)(a1 + 496)) >> 4;
    if ( v3 >= *(_QWORD *)(a1 + 8) )
    {
      v4 = *a2;
      v5 = 2 * ((unsigned int)(*a2 >> 9) & 7);
      if ( (*a2 & 0x800000000000LL) != 0 )
        v6 = v4 | 0xFFFF000000000000uLL;
      else
        v6 = v4 & 0xFFFFFFFFFFFFLL;
      if ( v6 < 0xFFFFF68000000000uLL
        || ((*a2 & 0x800000000000LL) == 0 ? (v15 = v4 & 0xFFFFFFFFFFFFLL) : (v15 = v4 | 0xFFFF000000000000uLL),
            v15 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v5 = (unsigned int)(v5 + 1);
      }
      v7 = (unsigned __int64 *)(a1 + 16 * (v5 + 15));
      v8 = (unsigned int)v5;
      if ( a3 == 1 )
      {
        v12 = *v7;
        *((_DWORD *)a2 + 2) = *v7;
        *((_DWORD *)a2 + 3) = -1;
        *a2 = v4 & 0xFFF0FFFFFFFFFFFFuLL | ((v12 & 0xF00000000LL | 0xF000000000LL) << 16);
        if ( v12 == 0xFFFFFFFFFLL )
        {
          v7[1] = v3;
        }
        else
        {
          v13 = *(_QWORD *)(a1 + 496) + 16 * v12;
          v14 = (*(_QWORD *)v13 ^ (v3 << 20)) & 0xF0000000000000LL;
          *(_DWORD *)(v13 + 12) = v3;
          *(_QWORD *)v13 ^= v14;
        }
        *v7 = v3;
        ++*(_QWORD *)(a1 + 8 * v8 + 112);
      }
      else
      {
        v9 = v7[1];
        *((_DWORD *)a2 + 2) = -1;
        *((_DWORD *)a2 + 3) = v9;
        *a2 = v4 ^ (v4 ^ (v9 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
        if ( v9 == 0xFFFFFFFFFLL )
        {
          *v7 = v3;
        }
        else
        {
          v10 = *(_QWORD *)(a1 + 496) + 16 * v9;
          v11 = (*(_QWORD *)v10 ^ (v3 << 16)) & 0xF000000000000LL;
          *(_DWORD *)(v10 + 8) = v3;
          *(_QWORD *)v10 ^= v11;
        }
        v7[1] = v3;
        ++*(_QWORD *)(a1 + 8 * v8 + 112);
      }
    }
  }
}
