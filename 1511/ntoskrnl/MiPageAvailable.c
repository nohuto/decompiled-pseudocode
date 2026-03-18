/*
 * XREFs of MiPageAvailable @ 0x14012FC84
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiGetFreeOrZeroPage @ 0x140054B20 (MiGetFreeOrZeroPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageAvailable(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // r9
  unsigned int v3; // r8d
  int Queue; // r10d

  v2 = *(_QWORD *)(a1 + 5888);
  v3 = 1;
  if ( v2 )
    --v2;
  if ( v2 < 0x9F && (a2 & 0x800) == 0 )
  {
    Queue = (int)KeGetCurrentThread()[1].Queue;
    if ( (Queue & 6) != 6
      && (v2 < 0x20 && (int *)a1 == MiSystemPartition
       || (a2 & 4) == 0 && ((Queue & 2) == 0 || v2 < 0x21) && ((int *)a1 == MiSystemPartition || !v2)) )
    {
      return 0;
    }
  }
  return v3;
}
