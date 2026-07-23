/*
 * XREFs of MiEnableNewPfns @ 0x1401E19A0
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockAndInsertPageInFreeList @ 0x140145314 (MiLockAndInsertPageInFreeList.c)
 *     MiInsertLargePageInNodeList @ 0x1401FB978 (MiInsertLargePageInNodeList.c)
 */

void __fastcall MiEnableNewPfns(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r15
  __int64 v6; // rcx
  unsigned __int64 v7; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // rsi
  unsigned __int8 v10; // al
  unsigned __int8 v11; // [rsp+50h] [rbp+8h]

  v3 = a1;
  v4 = 48 * a1 - 0x58000000000LL;
  v5 = a2 - a1;
  while ( v3 < a2 )
  {
    v6 = (KeFeatureBits & 0x2000000000LL) == 0;
    do
    {
      v7 = MiLargePageSizes[v6];
      if ( ((v7 - 1) & v3) == 0 && a2 - v3 >= v7 )
        break;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 <= 1 );
    if ( (unsigned int)v6 > 1 )
    {
      MiLockAndInsertPageInFreeList(v4);
      ++v3;
      v4 += 48LL;
    }
    else
    {
      v8 = MiLargePageContainingFrames[v6] & 0xFFFFFFFFFLL;
      v9 = v4 + 48 * v7 - 48;
      do
      {
        v10 = MiLockPageInline(v9);
        v11 = v10;
        *(_QWORD *)(v9 + 40) = v8 | *(_QWORD *)(v9 + 40) & 0xFFFFFFF000000000uLL;
        *(_BYTE *)(v9 + 34) = *(_BYTE *)(v9 + 34) & 0xF8 | 1;
        if ( v9 == v4 )
        {
          MiInsertLargePageInNodeList(v3, v7, 1LL);
          v10 = v11;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v10);
        v9 -= 48LL;
      }
      while ( v9 >= v4 );
      v3 += v7;
      v4 += 48 * v7;
    }
  }
  MiReturnResidentAvailable(v5);
}
