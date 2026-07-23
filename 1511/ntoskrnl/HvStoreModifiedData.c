/*
 * XREFs of HvStoreModifiedData @ 0x1403ECE74
 * Callers:
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 * Callees:
 *     RtlMergeBitMaps @ 0x1400E1998 (RtlMergeBitMaps.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401AA964 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     HvResetUnreconciledData @ 0x1403CD990 (HvResetUnreconciledData.c)
 *     HvResetDirtyData @ 0x1403D0520 (HvResetDirtyData.c)
 *     HvpGenerateLogEntry @ 0x1403ED278 (HvpGenerateLogEntry.c)
 *     HvpFindNextDirtyBlock @ 0x1403ED550 (HvpFindNextDirtyBlock.c)
 *     HvpCountSetRangesInVector @ 0x1403ED8EC (HvpCountSetRangesInVector.c)
 *     HvpTruncateBins @ 0x140487FD4 (HvpTruncateBins.c)
 */

__int64 __fastcall HvStoreModifiedData(ULONG_PTR BugCheckParameter2, char a2, char a3)
{
  void *v3; // r13
  unsigned int *v4; // rsi
  PVOID v5; // r15
  _OWORD *v6; // r12
  PVOID *v7; // r14
  bool v8; // zf
  unsigned int v10; // eax
  unsigned int v11; // r15d
  PVOID PoolWithTag; // rax
  int LogEntry; // eax
  int v14; // r12d
  unsigned int v15; // eax
  int v16; // eax
  char v17; // cl
  unsigned int v18; // ebx
  _OWORD *v20; // rax
  __int64 v21; // rdx
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  unsigned int *v25; // rax
  PVOID *v26; // rax
  __int64 v27; // r12
  __int64 v28; // rcx
  int v29; // edx
  int v30; // eax
  int v31; // eax
  int NextDirtyBlockAndCreateTemporary; // eax
  PVOID *v33; // rsi
  __int64 v34; // r15
  unsigned int v35; // [rsp+40h] [rbp-40h]
  _DWORD v36[3]; // [rsp+44h] [rbp-3Ch] BYREF
  int v37; // [rsp+50h] [rbp-30h]
  int v38; // [rsp+54h] [rbp-2Ch]
  unsigned int i; // [rsp+58h] [rbp-28h] BYREF
  unsigned int SizeOfBitMap; // [rsp+5Ch] [rbp-24h]
  _RTL_BITMAP BitMapHeader; // [rsp+60h] [rbp-20h] BYREF
  void *v42; // [rsp+70h] [rbp-10h] BYREF
  void *v43; // [rsp+78h] [rbp-8h]
  PVOID P; // [rsp+C0h] [rbp+40h] BYREF
  char v45; // [rsp+C8h] [rbp+48h]
  char v46; // [rsp+D0h] [rbp+50h]
  SIZE_T NumberOfBytes; // [rsp+D8h] [rbp+58h]

  v46 = a3;
  v45 = a2;
  v3 = 0LL;
  v37 = 0;
  v4 = 0LL;
  v35 = 0;
  v5 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  *(_QWORD *)&v36[1] = 0LL;
  v8 = (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8000) == 0;
  v42 = 0LL;
  v43 = 0LL;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  if ( !v8 )
    return 1;
  *(_DWORD *)(BugCheckParameter2 + 2892) = (unsigned __int8)HvpTruncateBins(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) != 0 )
    return 1;
  v10 = *(_DWORD *)(BugCheckParameter2 + 92);
  LODWORD(NumberOfBytes) = v10;
  if ( *(_DWORD *)(BugCheckParameter2 + 88) )
  {
    v11 = v10;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x30354D43u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 2;
    memmove(PoolWithTag, *(const void **)(BugCheckParameter2 + 80), v11);
    v38 = *(_DWORD *)(BugCheckParameter2 + 72);
    LODWORD(v42) = v38;
    v43 = v3;
    LogEntry = HvpGenerateLogEntry(BugCheckParameter2);
    v5 = P;
    if ( LogEntry < 0 )
    {
LABEL_50:
      v18 = 2;
      goto LABEL_17;
    }
  }
  else
  {
    v38 = (int)v42;
  }
  if ( !v45 && !v46 )
    goto LABEL_8;
  v20 = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x30354D43u);
  *(_QWORD *)&v36[1] = v20;
  v6 = v20;
  if ( !v20 )
    goto LABEL_50;
  memset(v20, 0, 0x1000uLL);
  v21 = 4LL;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = *(_DWORD *)(BugCheckParameter2 + 1400);
  v22 = *(_OWORD **)(BugCheckParameter2 + 64);
  v23 = v6;
  do
  {
    *v23 = *v22;
    v23[1] = v22[1];
    v23[2] = v22[2];
    v23[3] = v22[3];
    v23[4] = v22[4];
    v23[5] = v22[5];
    v23[6] = v22[6];
    v23 += 8;
    v24 = v22[7];
    v22 += 8;
    *(v23 - 1) = v24;
    --v21;
  }
  while ( v21 );
  if ( !v46 )
  {
LABEL_8:
    v14 = NumberOfBytes;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_9:
    v15 = *(_DWORD *)(BugCheckParameter2 + 1400);
    if ( *(_DWORD *)(BugCheckParameter2 + 2964) < v15 || *(_DWORD *)(BugCheckParameter2 + 2892) )
      *(_DWORD *)(BugCheckParameter2 + 2964) = v15;
    if ( *(_DWORD *)(BugCheckParameter2 + 88) )
    {
      *(_DWORD *)(BugCheckParameter2 + 2856) = v38;
      v16 = v37;
      *(_QWORD *)(BugCheckParameter2 + 2864) = v3;
      v3 = 0LL;
      *(_QWORD *)(BugCheckParameter2 + 2880) = v5;
      v5 = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 2872) = v14;
      *(_DWORD *)(BugCheckParameter2 + 2888) = v16;
      HvResetDirtyData(BugCheckParameter2);
    }
    v17 = v46;
    if ( v45 || v46 )
    {
      v6 = 0LL;
      *(_QWORD *)(BugCheckParameter2 + 2944) = *(_QWORD *)&v36[1];
      if ( *(_BYTE *)(BugCheckParameter2 + 175) )
        *(_BYTE *)(BugCheckParameter2 + 2896) = 1;
      if ( v17 )
      {
        *(_DWORD *)(BugCheckParameter2 + 2904) = SizeOfBitMap;
        v31 = NumberOfBytes;
        *(_QWORD *)(BugCheckParameter2 + 2912) = v4;
        v4 = 0LL;
        *(_DWORD *)(BugCheckParameter2 + 2920) = v31;
        *(_QWORD *)(BugCheckParameter2 + 2928) = v7;
        v7 = 0LL;
        *(_DWORD *)(BugCheckParameter2 + 2936) = v35;
        HvResetUnreconciledData(BugCheckParameter2);
      }
    }
    else
    {
      v6 = *(_OWORD **)&v36[1];
    }
    v18 = 0;
    goto LABEL_17;
  }
  v25 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x30354D43u);
  v4 = v25;
  if ( !v25 )
    goto LABEL_50;
  memmove(v25, *(const void **)(BugCheckParameter2 + 104), (unsigned int)NumberOfBytes);
  SizeOfBitMap = *(_DWORD *)(BugCheckParameter2 + 96);
  BitMapHeader.SizeOfBitMap = SizeOfBitMap;
  BitMapHeader.Buffer = v4;
  if ( *(_DWORD *)(BugCheckParameter2 + 88) )
    RtlMergeBitMaps((__int64)&BitMapHeader, (__int64)&v42);
  v35 = HvpCountSetRangesInVector(&BitMapHeader);
  v26 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 24LL * v35, 0x32354D43u);
  v7 = v26;
  if ( v26 )
  {
    memset(v26, 0, 24LL * v35);
    v27 = 0LL;
    for ( i = 0; (unsigned int)v27 < v35; LODWORD(v7[v28 + 2]) = v30 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
      {
        NextDirtyBlockAndCreateTemporary = HvpFindNextDirtyBlockAndCreateTemporary(
                                             BugCheckParameter2,
                                             &BitMapHeader.SizeOfBitMap,
                                             &i,
                                             v36,
                                             &P);
        if ( NextDirtyBlockAndCreateTemporary == -2147483622 )
          break;
        if ( NextDirtyBlockAndCreateTemporary < 0 )
          goto LABEL_51;
        v28 = 3 * v27;
        v7[3 * v27 + 1] = 0LL;
      }
      else
      {
        if ( !(unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)v36, (__int64)&P, 1) )
          break;
        if ( !v42 )
          goto LABEL_51;
        v28 = 3 * v27;
        v7[3 * v27 + 1] = v42;
      }
      v29 = (int)P;
      v27 = (unsigned int)(v27 + 1);
      v30 = v36[0];
      LODWORD(v7[v28]) = (_DWORD)P;
      LODWORD(P) = v30 + v29;
    }
    v14 = NumberOfBytes;
    memmove(v4, *(const void **)(BugCheckParameter2 + 104), (unsigned int)NumberOfBytes);
    goto LABEL_9;
  }
LABEL_51:
  v6 = *(_OWORD **)&v36[1];
  v18 = 2;
LABEL_17:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v7 )
  {
    if ( v35 )
    {
      v33 = v7 + 1;
      v34 = v35;
      do
      {
        if ( *v33 )
          ExFreePoolWithTag(*v33, 0);
        v33 += 3;
        --v34;
      }
      while ( v34 );
    }
    ExFreePoolWithTag(v7, 0);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v18;
}
