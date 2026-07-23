/*
 * XREFs of RtlFindClearRuns @ 0x1800DAE90
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800DB150 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  unsigned int SizeOfBitMap; // edi
  unsigned int v5; // ebx
  BOOL v7; // eax
  ULONG v8; // edx
  bool v10; // zf
  unsigned int v11; // r15d
  unsigned int *Buffer; // rax
  __int64 v14; // r10
  ULONG v15; // r14d
  unsigned int v16; // r13d
  int v17; // r9d
  unsigned int v18; // ecx
  unsigned __int8 v19; // r8
  __int64 v20; // rsi
  ULONG v21; // r10d
  signed int v22; // ebx
  __int64 v23; // r9
  _RTL_BITMAP_RUN *i; // rcx
  unsigned __int8 v25; // r8
  __int64 v26; // r14
  unsigned __int8 v27; // di
  int v28; // esi
  signed int v29; // ebx
  __int64 v30; // r9
  _RTL_BITMAP_RUN *j; // rcx
  signed int v32; // r8d
  __int64 v33; // r9
  _RTL_BITMAP_RUN *k; // rcx
  int v36; // [rsp+0h] [rbp-48h]
  ULONG v37; // [rsp+4h] [rbp-44h]
  unsigned int v38; // [rsp+8h] [rbp-40h]
  unsigned int v39; // [rsp+50h] [rbp+8h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v39 = BitMapHeader->SizeOfBitMap;
  v5 = BitMapHeader->SizeOfBitMap & 7;
  v38 = v5;
  v7 = v5 != 0;
  v8 = 0;
  v10 = v7 + (BitMapHeader->SizeOfBitMap >> 3) == 0;
  v11 = v7 + (BitMapHeader->SizeOfBitMap >> 3);
  Buffer = BitMapHeader->Buffer;
  LODWORD(v14) = 0;
  v15 = 0;
  v16 = 0;
  if ( v10 )
    return v8;
  v17 = 0;
  v18 = v11 - 1;
  v36 = 0;
  while ( 1 )
  {
    v19 = *(_BYTE *)Buffer;
    if ( v16 == v18 && v5 )
      v19 |= byte_18010E420[SizeOfBitMap & 7];
    if ( !v19 )
    {
      LODWORD(v14) = v14 + 8;
      goto LABEL_39;
    }
    v20 = RtlpBitsClearLow[v19];
    v21 = v20 + v14;
    if ( v21 )
    {
      if ( v8 < SizeOfRunArray )
      {
        ++v8;
LABEL_12:
        v22 = v8 - 2;
        if ( LocateLongestRuns )
        {
          v23 = v22;
          for ( i = &RunArray[v22 + 1]; v23 >= 0 && i[-1].NumberOfBits < v21; --i )
          {
            --v22;
            --v23;
            *i = i[-1];
          }
          v17 = v36;
        }
        RunArray[v22 + 1].NumberOfBits = v21;
        RunArray[v22 + 1].StartingIndex = v15;
        if ( !LocateLongestRuns && v8 >= SizeOfRunArray )
          return v8;
        goto LABEL_20;
      }
      if ( RunArray[v8 - 1].NumberOfBits < v21 )
        goto LABEL_12;
    }
LABEL_20:
    v14 = RtlpBitsClearHigh[v19];
    v15 = v17 - v14 + 8;
    v37 = v15;
    v25 = byte_180111120[v20] | *((_BYTE *)&unk_18010E428 - v14) | v19;
    if ( v25 != 0xFF )
    {
      do
      {
        if ( v8 >= SizeOfRunArray && RunArray[v8 - 1].NumberOfBits >= RtlpBitsClearAnywhere[v25] )
          break;
        v26 = RtlpBitsClearAnywhere[v25];
        v27 = byte_180111120[v26];
        v28 = 0;
        while ( (v27 & v25) != 0 )
        {
          v27 *= 2;
          ++v28;
        }
        if ( v8 < SizeOfRunArray )
          ++v8;
        v29 = v8 - 2;
        if ( LocateLongestRuns )
        {
          v30 = v29;
          for ( j = &RunArray[v29 + 1]; v30 >= 0 && j[-1].NumberOfBits < (unsigned __int8)v26; --j )
          {
            --v29;
            --v30;
            *j = j[-1];
          }
          v17 = v36;
        }
        RunArray[v29 + 1].NumberOfBits = (unsigned __int8)v26;
        RunArray[v29 + 1].StartingIndex = v17 + v28;
        if ( !LocateLongestRuns && v8 >= SizeOfRunArray )
          return v8;
        v25 |= v27;
      }
      while ( v25 != 0xFF );
      v15 = v37;
    }
    LOBYTE(SizeOfBitMap) = v39;
    v18 = v11 - 1;
LABEL_39:
    v17 += 8;
    ++v16;
    v36 = v17;
    if ( v16 >= v11 )
      break;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    v5 = v38;
  }
  if ( (_DWORD)v14 )
  {
    if ( v8 < SizeOfRunArray )
    {
      ++v8;
      goto LABEL_47;
    }
    if ( RunArray[v8 - 1].NumberOfBits < (unsigned int)v14 )
    {
LABEL_47:
      v32 = v8 - 2;
      if ( LocateLongestRuns )
      {
        v33 = v32;
        for ( k = &RunArray[v32 + 1]; v33 >= 0 && k[-1].NumberOfBits < (unsigned int)v14; --k )
        {
          --v32;
          --v33;
          *k = k[-1];
        }
      }
      RunArray[v32 + 1].NumberOfBits = v14;
      RunArray[v32 + 1].StartingIndex = v15;
    }
  }
  return v8;
}
