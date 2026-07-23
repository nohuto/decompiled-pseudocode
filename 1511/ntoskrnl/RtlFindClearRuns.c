/*
 * XREFs of RtlFindClearRuns @ 0x1400C2990
 * Callers:
 *     RtlFindLongestRunClear @ 0x1401F853C (RtlFindLongestRunClear.c)
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
  ULONG v5; // r15d
  unsigned int v6; // r8d
  BOOLEAN v7; // r14
  PRTL_BITMAP_RUN v8; // r12
  BOOL v9; // eax
  unsigned int *Buffer; // r9
  ULONG v11; // edx
  __int64 v12; // r11
  bool v13; // zf
  unsigned int v14; // edi
  unsigned int v15; // eax
  ULONG v16; // r13d
  unsigned int v17; // esi
  int v18; // ebx
  unsigned __int8 v19; // r10
  signed int v20; // ecx
  __int64 v21; // rdx
  _RTL_BITMAP_RUN *m; // r8
  __int64 v24; // rbp
  ULONG v25; // r11d
  unsigned __int8 v26; // r10
  bool v27; // cf
  signed int v28; // r15d
  __int64 v29; // r14
  _RTL_BITMAP_RUN *i; // rdx
  __int64 v31; // rcx
  int v32; // r15d
  __int64 v33; // r12
  char j; // r14
  signed int v35; // ebp
  __int64 v36; // r8
  _RTL_BITMAP_RUN *k; // rdx
  _RTL_BITMAP_RUN *v38; // rdx
  ULONG v39; // ecx
  unsigned int v40; // [rsp+0h] [rbp-58h]
  unsigned int v41; // [rsp+4h] [rbp-54h]
  ULONG v42; // [rsp+60h] [rbp+8h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = SizeOfRunArray;
  v41 = BitMapHeader->SizeOfBitMap;
  v6 = BitMapHeader->SizeOfBitMap & 7;
  v7 = LocateLongestRuns;
  v40 = v6;
  v8 = RunArray;
  v9 = (BitMapHeader->SizeOfBitMap & 7) != 0;
  Buffer = BitMapHeader->Buffer;
  v11 = 0;
  LODWORD(v12) = 0;
  v13 = v9 + (BitMapHeader->SizeOfBitMap >> 3) == 0;
  v14 = v9 + (BitMapHeader->SizeOfBitMap >> 3);
  v15 = 0;
  v42 = 0;
  v16 = 0;
  if ( v13 )
    return v11;
  v17 = v14 - 1;
  v18 = 0;
  do
  {
    v19 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( v15 == v17 && v6 )
    {
      v19 |= byte_1402453A0[SizeOfBitMap & 7];
      v17 = v14 - 1;
    }
    if ( !v19 )
    {
      LODWORD(v12) = v12 + 8;
      goto LABEL_6;
    }
    v24 = RtlpBitsClearLow[v19];
    v25 = v24 + v12;
    if ( v25 )
    {
      if ( v11 < v5 )
      {
        v42 = ++v11;
      }
      else
      {
        if ( v8[v11 - 1].NumberOfBits >= v25 )
          goto LABEL_17;
        v11 = v42;
      }
      v28 = v11 - 2;
      if ( v7 )
      {
        v29 = v28;
        for ( i = &v8[v28 + 1]; v29 >= 0 && i[-1].NumberOfBits < v25; --i )
        {
          --v28;
          --v29;
          *i = i[-1];
        }
        v11 = v42;
        v7 = LocateLongestRuns;
      }
      v31 = v28;
      v5 = SizeOfRunArray;
      v8[v31 + 1].NumberOfBits = v25;
      v8[v31 + 1].StartingIndex = v16;
      if ( !v7 && v11 >= SizeOfRunArray )
        return v11;
    }
LABEL_17:
    v12 = RtlpBitsClearHigh[v19];
    v16 = v18 - v12 + 8;
    v11 = v42;
    v26 = *((_BYTE *)&unk_1402453A8 - v12) | byte_140247340[v24] | v19;
    if ( v26 != 0xFF )
    {
      do
      {
        if ( v11 >= v5 )
        {
          v27 = v8[v11 - 1].NumberOfBits < RtlpBitsClearAnywhere[v26];
          v11 = v42;
          if ( !v27 )
          {
            v7 = LocateLongestRuns;
            goto LABEL_18;
          }
        }
        v32 = 0;
        v33 = RtlpBitsClearAnywhere[v26];
        for ( j = byte_140247340[v33]; ((unsigned __int8)j & v26) != 0; ++v32 )
          j *= 2;
        if ( v11 < SizeOfRunArray )
          v42 = ++v11;
        v35 = v11 - 2;
        if ( LocateLongestRuns )
        {
          v36 = v35;
          for ( k = &RunArray[v35 + 1]; v36 >= 0 && k[-1].NumberOfBits < (unsigned __int8)v33; --k )
          {
            --v35;
            --v36;
            *k = k[-1];
          }
        }
        v38 = &RunArray[v35];
        v38[1].NumberOfBits = (unsigned __int8)v33;
        v39 = v18 + v32;
        v5 = SizeOfRunArray;
        v38[1].StartingIndex = v39;
        v11 = v42;
        if ( !LocateLongestRuns && v42 >= SizeOfRunArray )
          return v11;
        v8 = RunArray;
        v26 |= j;
      }
      while ( v26 != 0xFF );
      v7 = LocateLongestRuns;
    }
LABEL_18:
    v6 = v40;
    LOBYTE(SizeOfBitMap) = v41;
LABEL_6:
    ++v15;
    v18 += 8;
  }
  while ( v15 < v14 );
  if ( (_DWORD)v12 )
  {
    if ( v11 < v5 )
    {
      v42 = ++v11;
      goto LABEL_10;
    }
    if ( v8[v11 - 1].NumberOfBits < (unsigned int)v12 )
    {
LABEL_10:
      v20 = v11 - 2;
      if ( v7 )
      {
        v21 = v20;
        for ( m = &v8[v20 + 1]; v21 >= 0 && m[-1].NumberOfBits < (unsigned int)v12; --m )
        {
          --v20;
          --v21;
          *m = m[-1];
        }
        v11 = v42;
      }
      v8[v20 + 1].NumberOfBits = v12;
      v8[v20 + 1].StartingIndex = v16;
    }
  }
  return v11;
}
