/*
 * XREFs of RtlFindClearRuns @ 0x1800E3EB0
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800E4190 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  unsigned int SizeOfBitMap; // ebx
  unsigned int v6; // edx
  ULONG v8; // r8d
  BOOL v9; // eax
  bool v11; // zf
  unsigned int v12; // r15d
  ULONG v13; // r9d
  unsigned int *Buffer; // rax
  unsigned int v15; // r13d
  int v16; // r14d
  unsigned int v17; // ecx
  unsigned __int8 v18; // r10
  __int64 v19; // rbp
  ULONG v20; // r9d
  signed int v21; // ebx
  __int64 v22; // rdx
  _RTL_BITMAP_RUN *i; // rcx
  __int64 v24; // rcx
  ULONG v25; // ebx
  unsigned __int8 v26; // r10
  __int64 v27; // r14
  unsigned __int8 v28; // di
  int v29; // ebp
  signed int v30; // ebx
  __int64 v31; // rdx
  _RTL_BITMAP_RUN *j; // rcx
  __int64 v33; // rcx
  ULONG v34; // eax
  signed int v35; // edx
  __int64 v36; // r10
  _RTL_BITMAP_RUN *k; // rcx
  __int64 v38; // rcx
  unsigned int v40; // [rsp+0h] [rbp-48h]
  int v41; // [rsp+4h] [rbp-44h]
  unsigned int v42; // [rsp+8h] [rbp-40h]
  unsigned int *v43; // [rsp+10h] [rbp-38h]
  ULONG v44; // [rsp+50h] [rbp+8h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v42 = BitMapHeader->SizeOfBitMap;
  v6 = BitMapHeader->SizeOfBitMap & 7;
  v8 = 0;
  v40 = v6;
  v9 = v6 != 0;
  v44 = 0;
  v11 = v9 + (BitMapHeader->SizeOfBitMap >> 3) == 0;
  v12 = v9 + (BitMapHeader->SizeOfBitMap >> 3);
  v13 = 0;
  Buffer = BitMapHeader->Buffer;
  v15 = 0;
  if ( v11 )
    return v8;
  v16 = 0;
  v17 = v12 - 1;
  v41 = 0;
  while ( 1 )
  {
    v18 = *(_BYTE *)Buffer;
    v43 = (unsigned int *)((char *)Buffer + 1);
    if ( v15 == v17 && v6 )
      v18 |= byte_180119330[(SizeOfBitMap & 7) + 16];
    if ( !v18 )
    {
      v25 = v44;
      v13 += 8;
      goto LABEL_37;
    }
    v19 = RtlpBitsClearLow[v18];
    v20 = v19 + v13;
    if ( v20 )
    {
      if ( v8 < SizeOfRunArray )
      {
        ++v8;
LABEL_12:
        v21 = v8 - 2;
        if ( LocateLongestRuns )
        {
          v22 = v21;
          for ( i = &RunArray[v21 + 1]; v22 >= 0 && i[-1].NumberOfBits < v20; --i )
          {
            --v21;
            --v22;
            *i = i[-1];
          }
        }
        v24 = v21 + 1;
        RunArray[v24].NumberOfBits = v20;
        RunArray[v24].StartingIndex = v44;
        if ( !LocateLongestRuns && v8 >= SizeOfRunArray )
          return v8;
        goto LABEL_19;
      }
      if ( RunArray[v8 - 1].NumberOfBits < v20 )
        goto LABEL_12;
    }
LABEL_19:
    v13 = RtlpBitsClearHigh[v18];
    v25 = v16 - v13 + 8;
    v44 = v25;
    v26 = byte_180119330[v19] | byte_180119330[8 - v13 + 16] | v18;
    if ( v26 != 0xFF )
    {
      do
      {
        if ( v8 >= SizeOfRunArray && RunArray[v8 - 1].NumberOfBits >= RtlpBitsClearAnywhere[v26] )
          break;
        v27 = RtlpBitsClearAnywhere[v26];
        v28 = byte_180119330[v27];
        v29 = 0;
        while ( (v28 & v26) != 0 )
        {
          v28 *= 2;
          ++v29;
        }
        if ( v8 < SizeOfRunArray )
          ++v8;
        v30 = v8 - 2;
        if ( LocateLongestRuns )
        {
          v31 = v30;
          for ( j = &RunArray[v30 + 1]; v31 >= 0 && j[-1].NumberOfBits < (unsigned __int8)v27; --j )
          {
            --v30;
            --v31;
            *j = j[-1];
          }
        }
        v33 = v30 + 1;
        v34 = (unsigned __int8)v27;
        v16 = v41;
        RunArray[v33].NumberOfBits = v34;
        RunArray[v33].StartingIndex = v41 + v29;
        if ( !LocateLongestRuns && v8 >= SizeOfRunArray )
          return v8;
        v26 |= v28;
      }
      while ( v26 != 0xFF );
      v25 = v44;
    }
    v6 = v40;
    v17 = v12 - 1;
LABEL_37:
    v16 += 8;
    ++v15;
    v41 = v16;
    if ( v15 >= v12 )
      break;
    Buffer = v43;
    LOBYTE(SizeOfBitMap) = v42;
  }
  if ( v13 )
  {
    if ( v8 < SizeOfRunArray )
    {
      ++v8;
      goto LABEL_45;
    }
    if ( RunArray[v8 - 1].NumberOfBits < v13 )
    {
LABEL_45:
      v35 = v8 - 2;
      if ( LocateLongestRuns )
      {
        v36 = v35;
        for ( k = &RunArray[v35 + 1]; v36 >= 0 && k[-1].NumberOfBits < v13; --k )
        {
          --v35;
          --v36;
          *k = k[-1];
        }
      }
      v38 = v35 + 1;
      RunArray[v38].NumberOfBits = v13;
      RunArray[v38].StartingIndex = v25;
    }
  }
  return v8;
}
