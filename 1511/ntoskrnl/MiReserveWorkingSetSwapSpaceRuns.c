/*
 * XREFs of MiReserveWorkingSetSwapSpaceRuns @ 0x14062AEB0
 * Callers:
 *     MiReserveWorkingSetSwapSpace @ 0x14062ADF8 (MiReserveWorkingSetSwapSpace.c)
 * Callees:
 *     MiFindFreePageFileSpace @ 0x1400F4EDC (MiFindFreePageFileSpace.c)
 */

unsigned __int64 __fastcall MiReserveWorkingSetSwapSpaceRuns(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5)
{
  unsigned __int64 v7; // rdi
  _DWORD *v9; // rbx
  __int64 v10; // rsi
  unsigned int FreePageFileSpace; // eax

  v7 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8LL * a3 + 5728) + 48LL) >= a2 )
  {
    v9 = (_DWORD *)a5;
    if ( a5 < a5 + 80 )
    {
      v10 = 80LL;
      do
      {
        if ( !v7 )
          break;
        *(_QWORD *)v9 ^= (*v9 ^ (2 * a3)) & 0x1E;
        v9[1] = a4;
        FreePageFileSpace = MiFindFreePageFileSpace(a1, v9, v7, 0x29u);
        v9[2] = FreePageFileSpace;
        if ( (unsigned __int64)FreePageFileSpace * (v10 >> 4) < v7 )
          break;
        v7 -= FreePageFileSpace;
        v9 += 4;
        v10 -= 16LL;
      }
      while ( (unsigned __int64)v9 < a5 + 80 );
    }
  }
  return v7;
}
