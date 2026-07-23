/*
 * XREFs of RtlFindClearRuns @ 0x1400F8780
 * Callers:
 *     RtlFindLongestRunClear @ 0x140247464 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  unsigned int SizeOfBitMap; // r15d
  PRTL_BITMAP_RUN v5; // r14
  unsigned int v6; // edx
  BOOLEAN v7; // bp
  BOOL v8; // eax
  unsigned int *Buffer; // r9
  ULONG v10; // r12d
  bool v11; // zf
  unsigned int v12; // edi
  unsigned int v13; // eax
  __int64 v14; // r11
  ULONG v15; // r13d
  int v16; // ebx
  unsigned __int8 v17; // r10
  __int64 v18; // rbp
  ULONG v19; // r11d
  char v20; // cl
  unsigned __int8 v21; // r10
  signed int v22; // ecx
  __int64 v23; // rdx
  _RTL_BITMAP_RUN *m; // r8
  signed int v26; // r15d
  __int64 v27; // r14
  _RTL_BITMAP_RUN *i; // rdx
  int v29; // r12d
  __int64 v30; // r14
  unsigned __int8 j; // r15
  ULONG v32; // ebp
  signed int v33; // ebp
  __int64 v34; // r8
  _RTL_BITMAP_RUN *k; // rdx
  __int64 v36; // rcx
  _RTL_BITMAP_RUN *v37; // rdx
  unsigned int v38; // [rsp+0h] [rbp-58h]
  unsigned int v39; // [rsp+4h] [rbp-54h]
  ULONG v40; // [rsp+60h] [rbp+8h]
  ULONG v42; // [rsp+70h] [rbp+18h]

  v42 = SizeOfRunArray;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = RunArray;
  v39 = BitMapHeader->SizeOfBitMap;
  v6 = BitMapHeader->SizeOfBitMap & 7;
  v7 = LocateLongestRuns;
  v38 = v6;
  v8 = (BitMapHeader->SizeOfBitMap & 7) != 0;
  Buffer = BitMapHeader->Buffer;
  v10 = 0;
  v11 = v8 + (BitMapHeader->SizeOfBitMap >> 3) == 0;
  v12 = v8 + (BitMapHeader->SizeOfBitMap >> 3);
  v13 = 0;
  v40 = 0;
  LODWORD(v14) = 0;
  v15 = 0;
  if ( v11 )
    return v10;
  v16 = 0;
  while ( 1 )
  {
    v17 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( v13 == v12 - 1 && v6 )
      v17 |= byte_140295400[SizeOfBitMap & 7];
    if ( !v17 )
    {
      LODWORD(v14) = v14 + 8;
      goto LABEL_6;
    }
    v18 = RtlpBitsClearLow[v17];
    v19 = v18 + v14;
    if ( v19 )
    {
      if ( v10 < v42 )
      {
        v40 = ++v10;
LABEL_25:
        v26 = v10 - 2;
        if ( LocateLongestRuns )
        {
          v27 = v26;
          for ( i = &RunArray[v26 + 1]; v27 >= 0 && i[-1].NumberOfBits < v19; --i )
          {
            --v26;
            --v27;
            *i = i[-1];
          }
          v5 = RunArray;
        }
        v5[v26 + 1].NumberOfBits = v19;
        v5[v26 + 1].StartingIndex = v15;
        if ( !LocateLongestRuns && v10 >= v42 )
          return v10;
        goto LABEL_9;
      }
      if ( v5[v10 - 1].NumberOfBits < v19 )
        goto LABEL_25;
    }
LABEL_9:
    v14 = RtlpBitsClearHigh[v17];
    SizeOfRunArray = v42;
    v15 = v16 - v14 + 8;
    v20 = byte_140297800[v18];
    v7 = LocateLongestRuns;
    v21 = *((_BYTE *)&unk_140295408 - v14) | v20 | v17;
    if ( v21 != 0xFF )
    {
      while ( v10 < SizeOfRunArray || v5[v10 - 1].NumberOfBits < RtlpBitsClearAnywhere[v21] )
      {
        v29 = 0;
        v30 = RtlpBitsClearAnywhere[v21];
        for ( j = byte_140297800[v30]; (j & v21) != 0; ++v29 )
          j *= 2;
        v32 = v40;
        if ( v40 < SizeOfRunArray )
          v32 = ++v40;
        v33 = v32 - 2;
        if ( LocateLongestRuns )
        {
          v34 = v33;
          for ( k = &RunArray[v33 + 1]; v34 >= 0 && k[-1].NumberOfBits < (unsigned __int8)v30; --k )
          {
            --v33;
            --v34;
            *k = k[-1];
          }
          SizeOfRunArray = v42;
        }
        v36 = v33;
        v7 = LocateLongestRuns;
        v37 = &RunArray[v36];
        v37[1].NumberOfBits = (unsigned __int8)v30;
        LODWORD(v36) = v16 + v29;
        v10 = v40;
        v37[1].StartingIndex = v36;
        if ( !LocateLongestRuns && v40 >= SizeOfRunArray )
          return v10;
        v5 = RunArray;
        v21 |= j;
        if ( v21 == 0xFF )
        {
          v6 = v38;
          goto LABEL_6;
        }
      }
    }
    v6 = v38;
LABEL_6:
    ++v13;
    v16 += 8;
    if ( v13 >= v12 )
      break;
    LOBYTE(SizeOfBitMap) = v39;
  }
  if ( (_DWORD)v14 )
  {
    if ( v10 < SizeOfRunArray )
    {
      ++v10;
      goto LABEL_16;
    }
    if ( v5[v10 - 1].NumberOfBits < (unsigned int)v14 )
    {
LABEL_16:
      v22 = v10 - 2;
      if ( v7 )
      {
        v23 = v22;
        for ( m = &v5[v22 + 1]; v23 >= 0 && m[-1].NumberOfBits < (unsigned int)v14; --m )
        {
          --v22;
          --v23;
          *m = m[-1];
        }
      }
      v5[v22 + 1].NumberOfBits = v14;
      v5[v22 + 1].StartingIndex = v15;
    }
  }
  return v10;
}
