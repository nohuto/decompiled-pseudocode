/*
 * XREFs of MiReserveWorkingSetSwapSpace @ 0x14040A338
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400DC414 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14022CC40 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x14040A3B8 (MiReserveWorkingSetSwapSpaceRuns.c)
 *     MiFreeReservationRuns @ 0x1404FB058 (MiFreeReservationRuns.c)
 */

__int64 __fastcall MiReserveWorkingSetSwapSpace(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // edi
  unsigned int *i; // r8
  unsigned int v10; // r9d
  int v11; // r9d
  __int64 result; // rax

  v6 = a4;
  for ( i = *(unsigned int **)(a1 + 8LL * a4 + 5344); ; i = *(unsigned int **)(a1 + 8LL * a5 + 5344) )
  {
    if ( v6 == a5 || a5 == 16 )
    {
      v11 = 1;
    }
    else
    {
      v10 = *i;
      v11 = (i[41] & 0x20) != 0 ? v10 >> 1 : v10 - (v10 >> 6);
    }
    result = MiReserveWorkingSetSwapSpaceRuns(a1, a6, v6, v11, (__int64)a2);
    if ( !result )
      break;
    MiFreeReservationRuns(a1, a2);
    memset(a2, 0, 0x50uLL);
    if ( v6 == a5 || a5 >= 0x10 )
      return 3221226021LL;
    v6 = a5;
  }
  return result;
}
