/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140112D38
 * Callers:
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  unsigned int v0; // ebx
  unsigned int *Buffer; // r11
  unsigned int v2; // r9d
  unsigned int v3; // ecx
  __int64 v4; // rax
  int v5; // r10d
  unsigned int *v6; // r11
  unsigned int v7; // esi
  __int64 result; // rax
  char *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned int v13; // edi
  int v14; // edx
  int i; // ecx
  unsigned int SizeOfBitMap; // ecx

  v0 = 0;
  while ( 2 )
  {
    Buffer = qword_140327018->Buffer;
    v2 = v0 < qword_140327018->SizeOfBitMap ? v0 : 0;
    v3 = qword_140327018->SizeOfBitMap - 1;
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      v4 = 1LL;
      v5 = 32;
    }
    else
    {
      v4 = 0LL;
      v5 = 0;
    }
    v6 = &Buffer[-v4];
    while ( 1 )
    {
      v7 = v5 + v3;
      result = v3 - v2 + 1;
      if ( v3 - v2 != -1 )
      {
        v9 = (char *)&v6[2 * ((unsigned __int64)(v5 + v2) >> 6)];
        for ( result = ((1LL << ((v5 + v2) & 0x3F)) - 1) | ~*(_QWORD *)v9; result == -1; result = ~*(_QWORD *)v9 )
        {
          v9 += 8;
          if ( v9 > (char *)&v6[2 * ((unsigned __int64)v7 >> 6)] )
            goto LABEL_19;
        }
        _BitScanForward64((unsigned __int64 *)&result, ~result);
        v10 = (unsigned int)result + ((unsigned int)((v9 - (char *)v6) >> 3) << 6);
        if ( (unsigned int)v10 <= v7 )
          break;
      }
LABEL_19:
      v10 = 0xFFFFFFFFLL;
LABEL_22:
      if ( !v2 )
        goto LABEL_13;
      SizeOfBitMap = v0 + 1;
      if ( v0 + 1 > qword_140327018->SizeOfBitMap )
        SizeOfBitMap = qword_140327018->SizeOfBitMap;
      v3 = SizeOfBitMap - 1;
      v2 = 0;
    }
    if ( (_DWORD)v10 == -1 )
      goto LABEL_22;
    v10 = (unsigned int)(v10 - v5);
LABEL_13:
    if ( (unsigned int)v10 >= v0 && (_DWORD)v10 != -1 )
    {
      v0 = v10 + 1;
      v11 = *(_QWORD *)(qword_140327038 + 8 * v10);
      if ( (*(_DWORD *)(v11 + 4) & 4) != 0 )
      {
        v12 = *(_QWORD *)(v11 + 4496);
        v13 = 0;
        v14 = dword_140326A3C;
        for ( i = (unsigned __int16)KeNumberNodes;
              v13 < (unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_140326A3C + 27;
              i = (unsigned __int16)KeNumberNodes )
        {
          KxReleaseQueuedSpinLock((volatile signed __int64 **)(v12 + 24LL * (i + 2 * v14 + 26 - v13)));
          v14 = dword_140326A3C;
          ++v13;
        }
      }
      continue;
    }
    return result;
  }
}
