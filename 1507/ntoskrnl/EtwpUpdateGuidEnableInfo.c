/*
 * XREFs of EtwpUpdateGuidEnableInfo @ 0x1404D5F80
 * Callers:
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x1404CE3DC (EtwpReferenceGuidEntry.c)
 *     EtwpUpdateFilterData @ 0x1404D6208 (EtwpUpdateFilterData.c)
 */

__int64 __fastcall EtwpUpdateGuidEnableInfo(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v8; // r15d
  __int64 v9; // r12
  __int64 v10; // rcx
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // r10
  ULONG_PTR v14; // rdx
  int v15; // r11d
  __int64 v16; // r8
  int v17; // r9d
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // al
  __int64 v23; // rax
  __int64 v24; // r10
  ULONG_PTR v25; // rdx
  int v26; // r11d
  __int64 v27; // r8
  int v28; // r9d
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int8 v34; // cl
  unsigned __int8 v35; // al
  _OWORD v36[2]; // [rsp+30h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a2 + 72) == 1 )
  {
    *(_BYTE *)(BugCheckParameter2 + 75) ^= (*(_BYTE *)(BugCheckParameter2 + 75) ^ *(_BYTE *)(a2 + 112)) & 1;
    *(_BYTE *)(BugCheckParameter2 + 75) = *(_BYTE *)(BugCheckParameter2 + 75) & 1 | (2 * *(_BYTE *)(a2 + 107));
    *(_WORD *)(BugCheckParameter2 + 72) = *(_WORD *)(a2 + 104);
    *(_BYTE *)(BugCheckParameter2 + 74) = *(_BYTE *)(a2 + 106);
    *(_QWORD *)(BugCheckParameter2 + 64) = a3;
  }
  v8 = 0;
  v9 = 8LL;
  do
  {
    v10 = 32LL * v8;
    if ( *(_DWORD *)(v10 + BugCheckParameter2 + 112)
      && *(_WORD *)(v10 + BugCheckParameter2 + 118) == *(_WORD *)(a2 + 78) )
    {
      v23 = 32LL * v8;
      *(_OWORD *)(v23 + BugCheckParameter2 + 112) = *(_OWORD *)(a2 + 72);
      *(_OWORD *)(v23 + BugCheckParameter2 + 128) = *(_OWORD *)(a2 + 88);
      memset(v36, 0, sizeof(v36));
      v24 = *(_QWORD *)&v36[1];
      v25 = BugCheckParameter2 + 116;
      v26 = DWORD2(v36[0]);
      v27 = -1LL;
      LOBYTE(v28) = BYTE4(v36[0]);
      *((_QWORD *)&v36[1] + 1) = -1LL;
      do
      {
        if ( *(_DWORD *)(v25 - 4) )
        {
          v34 = *(_BYTE *)v25;
          v35 = v28;
          LODWORD(v36[0]) = 1;
          if ( (unsigned __int8)v28 <= v34 )
            v35 = v34;
          v27 &= *(_QWORD *)(v25 + 20);
          v24 |= *(_QWORD *)(v25 + 12);
          LOBYTE(v28) = v35;
          v26 |= *(_DWORD *)(v25 + 4);
          *((_QWORD *)&v36[1] + 1) = v27;
        }
        v25 += 32LL;
        --v9;
      }
      while ( v9 );
      BYTE4(v36[0]) = v28;
      DWORD2(v36[0]) = v26;
      v29 = v36[0];
      *(_QWORD *)&v36[1] = v24;
      v30 = v36[1];
      *a5 = 1 << v8;
      *(_OWORD *)(BugCheckParameter2 + 80) = v29;
      *(_OWORD *)(BugCheckParameter2 + 96) = v30;
      LOBYTE(v28) = *(_DWORD *)(a2 + 72) == 0;
      EtwpUpdateFilterData(BugCheckParameter2, v8, a2, v28, a4);
      if ( !*(_DWORD *)(a2 + 72) )
        EtwpUnreferenceGuidEntry((__int64 *)BugCheckParameter2, v31, v32, v33);
      return 0LL;
    }
    ++v8;
  }
  while ( v8 < 8 );
  if ( *(_DWORD *)(a2 + 72) )
  {
    v11 = 0;
    while ( *(_DWORD *)(32LL * v11 + BugCheckParameter2 + 112) )
    {
      if ( ++v11 >= 8 )
        return 3221225626LL;
    }
    v12 = 32LL * v11;
    *(_OWORD *)(v12 + BugCheckParameter2 + 112) = *(_OWORD *)(a2 + 72);
    *(_OWORD *)(v12 + BugCheckParameter2 + 128) = *(_OWORD *)(a2 + 88);
    memset(v36, 0, sizeof(v36));
    v13 = *(_QWORD *)&v36[1];
    v14 = BugCheckParameter2 + 116;
    v15 = DWORD2(v36[0]);
    v16 = -1LL;
    LOBYTE(v17) = BYTE4(v36[0]);
    *((_QWORD *)&v36[1] + 1) = -1LL;
    do
    {
      if ( *(_DWORD *)(v14 - 4) )
      {
        v21 = *(_BYTE *)v14;
        v22 = v17;
        LODWORD(v36[0]) = 1;
        if ( (unsigned __int8)v17 <= v21 )
          v22 = v21;
        v16 &= *(_QWORD *)(v14 + 20);
        v13 |= *(_QWORD *)(v14 + 12);
        LOBYTE(v17) = v22;
        v15 |= *(_DWORD *)(v14 + 4);
        *((_QWORD *)&v36[1] + 1) = v16;
      }
      v14 += 32LL;
      --v9;
    }
    while ( v9 );
    BYTE4(v36[0]) = v17;
    DWORD2(v36[0]) = v15;
    v18 = v36[0];
    *(_QWORD *)&v36[1] = v13;
    v19 = v36[1];
    *a5 = 1 << v11;
    *(_OWORD *)(BugCheckParameter2 + 80) = v18;
    *(_OWORD *)(BugCheckParameter2 + 96) = v19;
    LOBYTE(v17) = *(_DWORD *)(a2 + 72) == 0;
    EtwpUpdateFilterData(BugCheckParameter2, v11, a2, v17, a4);
    EtwpReferenceGuidEntry(BugCheckParameter2);
    return 0LL;
  }
  return 3221226021LL;
}
