/*
 * XREFs of MiInsertWsle @ 0x1400DFF30
 * Callers:
 *     MiRotateHeadWsle @ 0x140016970 (MiRotateHeadWsle.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MiSwapWslEntries @ 0x1400499F0 (MiSwapWslEntries.c)
 *     MiConvertToLinkedWsles @ 0x1400A016C (MiConvertToLinkedWsles.c)
 *     MiUnlockVa @ 0x1400B88A0 (MiUnlockVa.c)
 *     MiSetWsleAge @ 0x1400BBB24 (MiSetWsleAge.c)
 *     MiClearPteAccessed @ 0x1400DFD90 (MiClearPteAccessed.c)
 *     MiMoveValidWsle @ 0x1400FCC4C (MiMoveValidWsle.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14012A1C0 (MiCaptureAndResetWorkingSetAccessBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertWsle(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // rbx
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // r10
  __int64 v14; // r10
  unsigned __int64 v15; // r10
  __int64 v16; // r10
  unsigned __int64 v17; // r11

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    result = (__int64)&BugCheckParameter2;
  else
    result = *(_QWORD *)(a1 + 16) + 416LL;
  if ( *(_DWORD *)(result + 32) == 16 )
  {
    v6 = ((__int64)a2 - *(_QWORD *)(result + 80)) >> 4;
    if ( v6 >= *(_QWORD *)(result + 8) )
    {
      v7 = *a2;
      v8 = 2 * ((unsigned int)(*a2 >> 9) & 7);
      if ( (v7 & 0x800000000000LL) != 0 )
        v9 = v7 | 0xFFFF000000000000uLL;
      else
        v9 = v7 & 0xFFFFFFFFFFFFLL;
      if ( v9 < 0xFFFFF68000000000uLL
        || ((v7 & 0x800000000000LL) == 0 ? (v17 = v7 & 0xFFFFFFFFFFFFLL) : (v17 = v7 | 0xFFFF000000000000uLL),
            v17 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v8 = (unsigned int)(v8 + 1);
      }
      v10 = *(_QWORD *)(a1 + 16);
      v11 = (unsigned int)v8;
      v12 = (unsigned __int64 *)(v10 + 16 * (v8 + 10));
      if ( a3 == 1 )
      {
        v15 = *v12;
        *((_DWORD *)a2 + 2) = *v12;
        *((_DWORD *)a2 + 3) = -1;
        *a2 = v7 & 0xFFF0FFFFFFFFFFFFuLL | ((v15 & 0xF00000000LL | 0xF000000000LL) << 16);
        if ( v15 == 0xFFFFFFFFFLL )
        {
          v12[1] = v6;
        }
        else
        {
          v16 = *(_QWORD *)(result + 80) + 16 * v15;
          result = (*(_QWORD *)v16 ^ (v6 << 20)) & 0xF0000000000000LL;
          *(_DWORD *)(v16 + 12) = v6;
          *(_QWORD *)v16 ^= result;
        }
        *v12 = v6;
      }
      else
      {
        v13 = v12[1];
        *((_DWORD *)a2 + 2) = -1;
        *((_DWORD *)a2 + 3) = v13;
        *a2 = v7 ^ (v7 ^ (v13 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
        if ( v13 == 0xFFFFFFFFFLL )
        {
          *v12 = v6;
        }
        else
        {
          v14 = *(_QWORD *)(result + 80) + 16 * v13;
          result = (*(_QWORD *)v14 ^ (v6 << 16)) & 0xF000000000000LL;
          *(_DWORD *)(v14 + 8) = v6;
          *(_QWORD *)v14 ^= result;
        }
        v12[1] = v6;
      }
      ++*(_QWORD *)(v10 + 8 * v11 + 32);
    }
  }
  return result;
}
