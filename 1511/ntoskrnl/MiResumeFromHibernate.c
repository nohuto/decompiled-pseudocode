/*
 * XREFs of MiResumeFromHibernate @ 0x1401180A0
 * Callers:
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 * Callees:
 *     MiPurgeLargeZeroNodePages @ 0x14011470C (MiPurgeLargeZeroNodePages.c)
 */

__int64 __fastcall MiResumeFromHibernate(int a1)
{
  unsigned int v1; // ebx
  unsigned int *Buffer; // r11
  unsigned int v4; // r9d
  unsigned int v5; // ecx
  __int64 v6; // rax
  int v7; // r10d
  unsigned int *v8; // r11
  unsigned int v9; // esi
  __int64 result; // rax
  char *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int SizeOfBitMap; // ecx

  v1 = 0;
  while ( 2 )
  {
    Buffer = qword_1402FEC08->Buffer;
    v4 = v1 < qword_1402FEC08->SizeOfBitMap ? v1 : 0;
    v5 = qword_1402FEC08->SizeOfBitMap - 1;
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      v6 = 1LL;
      v7 = 32;
    }
    else
    {
      v6 = 0LL;
      v7 = 0;
    }
    v8 = &Buffer[-v6];
    while ( 1 )
    {
      v9 = v7 + v5;
      result = v5 - v4 + 1;
      if ( v5 - v4 != -1 )
      {
        v11 = (char *)&v8[2 * ((unsigned __int64)(v7 + v4) >> 6)];
        for ( result = ((1LL << ((v7 + v4) & 0x3F)) - 1) | ~*(_QWORD *)v11; result == -1; result = ~*(_QWORD *)v11 )
        {
          v11 += 8;
          if ( v11 > (char *)&v8[2 * ((unsigned __int64)v9 >> 6)] )
            goto LABEL_19;
        }
        _BitScanForward64((unsigned __int64 *)&result, ~result);
        v12 = (unsigned int)result + ((unsigned int)((v11 - (char *)v8) >> 3) << 6);
        if ( (unsigned int)v12 <= v9 )
          break;
      }
LABEL_19:
      v12 = 0xFFFFFFFFLL;
LABEL_22:
      if ( !v4 )
        goto LABEL_13;
      SizeOfBitMap = v1 + 1;
      if ( v1 + 1 > qword_1402FEC08->SizeOfBitMap )
        SizeOfBitMap = qword_1402FEC08->SizeOfBitMap;
      v5 = SizeOfBitMap - 1;
      v4 = 0;
    }
    if ( (_DWORD)v12 == -1 )
      goto LABEL_22;
    v12 = (unsigned int)(v12 - v7);
LABEL_13:
    if ( (unsigned int)v12 >= v1 && (_DWORD)v12 != -1 )
    {
      v1 = v12 + 1;
      v13 = *(_QWORD *)(qword_1402FEC28 + 8 * v12);
      if ( (*(_DWORD *)(v13 + 4) & 4) != 0 )
      {
        if ( a1 )
          *(_DWORD *)(v13 + 4360) = a1;
        *(_BYTE *)(v13 + 4364) = 1;
        MiPurgeLargeZeroNodePages(v13);
      }
      continue;
    }
    return result;
  }
}
