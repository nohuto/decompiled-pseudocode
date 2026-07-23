/*
 * XREFs of MiLockAllMemoryLists @ 0x140112770
 * Callers:
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

__int64 MiLockAllMemoryLists()
{
  __int64 v0; // rbp
  unsigned int v1; // r15d
  unsigned int *Buffer; // r11
  unsigned int v3; // r9d
  unsigned int v4; // ecx
  __int64 v5; // rax
  int v6; // r10d
  unsigned int *v7; // r11
  unsigned int v8; // edi
  __int64 result; // rax
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  struct _KLOCK_QUEUE_HANDLE *v13; // rsi
  int v14; // eax
  __int64 *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // r13
  KSPIN_LOCK *v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rbx
  KSPIN_LOCK *v22; // rbp
  __int64 v23; // r14
  unsigned int v24; // r14d
  KSPIN_LOCK *v25; // rbp
  unsigned int SizeOfBitMap; // ecx

  v0 = 0LL;
  v1 = 0;
  while ( 2 )
  {
    Buffer = qword_140327018->Buffer;
    v3 = v1 < qword_140327018->SizeOfBitMap ? v1 : 0;
    v4 = qword_140327018->SizeOfBitMap - 1;
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      v5 = 1LL;
      v6 = 32;
    }
    else
    {
      v5 = 0LL;
      v6 = 0;
    }
    v7 = &Buffer[-v5];
    while ( 1 )
    {
      v8 = v6 + v4;
      result = v4 - v3 + 1;
      if ( v4 - v3 != -1 )
      {
        v10 = (char *)&v7[2 * ((unsigned __int64)(v6 + v3) >> 6)];
        for ( result = ((1LL << ((v6 + v3) & 0x3F)) - 1) | ~*(_QWORD *)v10; result == -1; result = ~*(_QWORD *)v10 )
        {
          v10 += 8;
          if ( v10 > (char *)&v7[2 * ((unsigned __int64)v8 >> 6)] )
            goto LABEL_29;
        }
        _BitScanForward64((unsigned __int64 *)&result, ~result);
        v11 = (unsigned int)result + ((unsigned int)((v10 - (char *)v7) >> 3) << 6);
        if ( (unsigned int)v11 <= v8 )
          break;
      }
LABEL_29:
      v11 = 0xFFFFFFFFLL;
LABEL_32:
      if ( !v3 )
        goto LABEL_13;
      SizeOfBitMap = v1 + 1;
      v3 = 0;
      if ( v1 + 1 > qword_140327018->SizeOfBitMap )
        SizeOfBitMap = qword_140327018->SizeOfBitMap;
      v4 = SizeOfBitMap - 1;
    }
    if ( (_DWORD)v11 == -1 )
      goto LABEL_32;
    v11 = (unsigned int)(v11 - v6);
LABEL_13:
    if ( (unsigned int)v11 >= v1 && (_DWORD)v11 != -1 )
    {
      v1 = v11 + 1;
      v12 = *(_QWORD *)(qword_140327038 + 8 * v11);
      if ( (*(_DWORD *)(v12 + 4) & 4) != 0 )
      {
        v13 = *(struct _KLOCK_QUEUE_HANDLE **)(v12 + 4496);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 3680), v13);
        v14 = dword_140326A3C;
        v15 = (__int64 *)(v12 + 1728);
        LODWORD(v16) = 1;
        v17 = 2LL;
        while ( 1 )
        {
          v18 = *v15;
          if ( v14 )
          {
            do
            {
              KeAcquireInStackQueuedSpinLockAtDpcLevel(
                (PKSPIN_LOCK)(v18 + 8 * (v0 + 4 * v0 + 4)),
                &v13[(unsigned int)v16]);
              v14 = dword_140326A3C;
              LODWORD(v16) = v16 + 1;
              v0 = (unsigned int)(v0 + 1);
            }
            while ( (unsigned int)v0 < dword_140326A3C );
          }
          ++v15;
          if ( !--v17 )
            break;
          v0 = 0LL;
        }
        v19 = (KSPIN_LOCK *)(v12 + 2016);
        v20 = 8LL;
        do
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel(v19, &v13[(unsigned int)v16]);
          v19 += 5;
          v16 = (unsigned int)(v16 + 1);
          --v20;
        }
        while ( v20 );
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 7264), &v13[v16]);
        v21 = (unsigned int)(v16 + 1);
        v22 = (KSPIN_LOCK *)(v12 + 3040);
        v23 = 16LL;
        do
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel(v22, &v13[v21]);
          v22 += 5;
          v21 = (unsigned int)(v21 + 1);
          --v23;
        }
        while ( v23 );
        v24 = 0;
        if ( KeNumberNodes )
        {
          v25 = (KSPIN_LOCK *)(*(_QWORD *)(v12 + 48) + 2176LL);
          do
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel(v25, &v13[v21]);
            v21 = (unsigned int)(v21 + 1);
            v25 += 273;
            ++v24;
          }
          while ( v24 < (unsigned __int16)KeNumberNodes );
        }
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 7328), &v13[v21]);
        v0 = 0LL;
      }
      continue;
    }
    return result;
  }
}
