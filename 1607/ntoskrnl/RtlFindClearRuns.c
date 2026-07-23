/*
 * XREFs of RtlFindClearRuns @ 0x140089460
 * Callers:
 *     RtlFindLongestRunClear @ 0x1402126A4 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  unsigned int SizeOfBitMap; // ebp
  PRTL_BITMAP_RUN v5; // r14
  unsigned int v6; // edx
  BOOLEAN v7; // si
  ULONG v8; // r15d
  BOOL v9; // eax
  unsigned int *Buffer; // r8
  ULONG v11; // r12d
  bool v12; // zf
  unsigned int v13; // ebx
  unsigned int v14; // eax
  ULONG v15; // r10d
  int v16; // r13d
  unsigned int v17; // edi
  int v18; // r11d
  unsigned __int8 v19; // r9
  signed int v20; // edx
  __int64 v21; // rcx
  _RTL_BITMAP_RUN *m; // r8
  __int64 v23; // rcx
  __int64 v25; // rbp
  ULONG v26; // r10d
  unsigned __int8 v27; // r9
  signed int v28; // r15d
  __int64 v29; // r14
  _RTL_BITMAP_RUN *i; // rdx
  int v31; // ecx
  int v32; // r15d
  __int64 v33; // r12
  char j; // bp
  ULONG v35; // r14d
  signed int v36; // r14d
  __int64 v37; // rsi
  _RTL_BITMAP_RUN *k; // rdx
  int v39; // ecx
  __int64 v40; // rdx
  ULONG v41; // ecx
  ULONG v42; // ecx
  unsigned int v43; // [rsp+0h] [rbp-58h]
  unsigned int v44; // [rsp+4h] [rbp-54h]
  ULONG v45; // [rsp+60h] [rbp+8h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = RunArray;
  v44 = BitMapHeader->SizeOfBitMap;
  v6 = BitMapHeader->SizeOfBitMap & 7;
  v7 = LocateLongestRuns;
  v43 = v6;
  v8 = SizeOfRunArray;
  v9 = (BitMapHeader->SizeOfBitMap & 7) != 0;
  Buffer = BitMapHeader->Buffer;
  v11 = 0;
  v12 = v9 + (BitMapHeader->SizeOfBitMap >> 3) == 0;
  v13 = v9 + (BitMapHeader->SizeOfBitMap >> 3);
  v45 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( v12 )
    return v11;
  v17 = v13 - 1;
  v18 = 0;
  do
  {
    v19 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( v14 == v17 && v6 )
    {
      v19 |= byte_14026F6C8[SizeOfBitMap & 7];
      v17 = v13 - 1;
    }
    if ( !v19 )
    {
      v15 += 8;
      goto LABEL_6;
    }
    v25 = RtlpBitsClearLow[v19];
    v26 = v25 + v15;
    if ( v26 )
    {
      if ( v11 < v8 )
      {
        v45 = ++v11;
LABEL_22:
        v28 = v11 - 2;
        if ( LocateLongestRuns )
        {
          v29 = v28;
          for ( i = &RunArray[v28 + 1]; v29 >= 0 && i[-1].NumberOfBits < v26; --i )
          {
            --v28;
            --v29;
            *i = i[-1];
          }
          v5 = RunArray;
        }
        v31 = v28 + 1;
        v8 = SizeOfRunArray;
        v5[v31].NumberOfBits = v26;
        v5[v31].StartingIndex = v16;
        if ( !LocateLongestRuns && v11 >= SizeOfRunArray )
          return v11;
        goto LABEL_16;
      }
      if ( v5[v11 - 1].NumberOfBits < v26 )
        goto LABEL_22;
    }
LABEL_16:
    v15 = RtlpBitsClearHigh[v19];
    v7 = LocateLongestRuns;
    v16 = v18 - v15 + 8;
    v27 = byte_14026F6B8[v25] | byte_14026F6C8[8 - v15] | v19;
    if ( v27 != 0xFF )
    {
      while ( v11 < v8 || v5[v11 - 1].NumberOfBits < RtlpBitsClearAnywhere[v27] )
      {
        v32 = 0;
        v33 = RtlpBitsClearAnywhere[v27];
        for ( j = byte_14026F6B8[v33]; ((unsigned __int8)j & v27) != 0; ++v32 )
          j *= 2;
        v35 = v45;
        if ( v45 < SizeOfRunArray )
          v35 = ++v45;
        v36 = v35 - 2;
        if ( v7 )
        {
          v37 = v36;
          for ( k = &RunArray[v36 + 1]; v37 >= 0 && k[-1].NumberOfBits < (unsigned __int8)v33; --k )
          {
            --v36;
            --v37;
            *k = k[-1];
          }
          v7 = LocateLongestRuns;
        }
        v39 = v36 + 1;
        v5 = RunArray;
        v40 = v39;
        v41 = (unsigned __int8)v33;
        v11 = v45;
        RunArray[v40].NumberOfBits = v41;
        v42 = v18 + v32;
        v8 = SizeOfRunArray;
        RunArray[v40].StartingIndex = v42;
        if ( !v7 && v45 >= SizeOfRunArray )
          return v11;
        v27 |= j;
        if ( v27 == 0xFF )
          break;
      }
    }
    v6 = v43;
    LOBYTE(SizeOfBitMap) = v44;
LABEL_6:
    ++v14;
    v18 += 8;
  }
  while ( v14 < v13 );
  if ( v15 )
  {
    if ( v11 < v8 )
    {
      ++v11;
      goto LABEL_10;
    }
    if ( v5[v11 - 1].NumberOfBits < v15 )
    {
LABEL_10:
      v20 = v11 - 2;
      if ( v7 )
      {
        v21 = v20;
        for ( m = &v5[v20 + 1]; v21 >= 0 && m[-1].NumberOfBits < v15; --m )
        {
          --v20;
          --v21;
          *m = m[-1];
        }
      }
      v23 = v20 + 1;
      v5[v23].NumberOfBits = v15;
      v5[v23].StartingIndex = v16;
    }
  }
  return v11;
}
