/*
 * XREFs of RtlFindSetBitsEx @ 0x14014CF00
 * Callers:
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1403FF3CC (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403FFB28 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiCleanPhysicalProcessPages @ 0x1406A5EEC (MiCleanPhysicalProcessPages.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

ULONG64 __cdecl RtlFindSetBitsEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  unsigned __int64 SizeOfBitMap; // r15
  unsigned __int64 *Buffer; // r13
  ULONG64 v7; // r11
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  ULONG64 v10; // rbp
  unsigned __int64 *v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 *v13; // rsi
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  ULONG64 v16; // rdx
  __int64 v19; // rdx
  unsigned __int64 *v20; // rdi
  bool v21; // zf
  __int64 v22; // rcx
  unsigned int v23; // r10d
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  unsigned __int64 *v28; // r9
  __int64 v29; // rcx
  ULONG64 v30; // r10
  __int64 v31; // rcx
  unsigned int v32; // r9d
  __int64 v33; // rcx
  __int64 v34; // rax
  ULONG64 v35; // r9

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v7 = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap);
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v7 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( 1 )
  {
    v9 = v8;
    if ( v8 - v7 + 1 < NumberToFind )
      goto LABEL_31;
    v10 = v8 - NumberToFind + 1;
    v11 = &Buffer[v7 >> 6];
    v12 = ((1LL << (v7 & 0x3F)) - 1) | ~*v11;
    v13 = &Buffer[(v9 - NumberToFind + 1) >> 6];
    if ( NumberToFind > 0x7F )
      break;
    v14 = 64;
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( (v12 & 0x8000000000000000uLL) != 0 )
          {
            if ( ++v11 > v13 )
              goto LABEL_31;
            v12 = ~*v11;
          }
          v21 = !_BitScanReverse64((unsigned __int64 *)&v29, v12);
          if ( !v21 )
            v14 = 63 - v29;
          v16 = ((v11 - Buffer + 1) << 6) - v14;
          if ( v16 > v10 )
            goto LABEL_31;
          v30 = NumberToFind - v14;
          if ( NumberToFind == v14 )
            goto LABEL_11;
          ++v11;
          v14 = 64;
          v12 = ~*v11;
          if ( v30 >= 0x40 )
            break;
LABEL_56:
          v21 = !_BitScanForward64((unsigned __int64 *)&v31, v12);
          if ( v21 )
            LODWORD(v31) = 64;
          if ( (unsigned int)v31 >= v30 )
            goto LABEL_11;
          v14 = 64;
        }
        if ( *v11 == -1LL )
        {
          v30 -= 64LL;
          if ( !v30 )
            goto LABEL_11;
          v12 = ~*++v11;
          goto LABEL_56;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v19 = 0LL;
      v20 = &Buffer[v9 >> 6];
      while ( v12 != -1LL )
      {
LABEL_16:
        v21 = !_BitScanForward64((unsigned __int64 *)&v22, v12);
        if ( v21 )
          LODWORD(v22) = 64;
        if ( (unsigned int)(v19 + v22) >= NumberToFind )
        {
          v24 = -v19;
LABEL_23:
          v16 = ((v11 - Buffer) << 6) + v24;
          goto LABEL_10;
        }
        v23 = NumberToFind;
        v24 = ~v12;
        while ( 1 )
        {
          v24 &= v24 >> (v23 >> 1);
          if ( !v24 )
            break;
          v23 -= v23 >> 1;
          if ( v23 <= 1 )
          {
            _BitScanForward64(&v24, v24);
            goto LABEL_23;
          }
        }
        if ( v11 == v20 )
          goto LABEL_31;
        v21 = !_BitScanReverse64((unsigned __int64 *)&v25, v12);
        if ( v21 )
          v19 = 64LL;
        else
          v19 = (unsigned int)(63 - v25);
        v12 = ~*++v11;
      }
      while ( ++v11 <= v13 )
      {
        v12 = ~*v11;
        if ( *v11 )
        {
          v19 = 0LL;
          goto LABEL_16;
        }
      }
    }
    else
    {
      while ( v12 == -1LL )
      {
        if ( ++v11 > v13 )
          goto LABEL_31;
        v12 = ~*v11;
      }
      _BitScanForward64(&v15, ~v12);
      v16 = v15 + ((v11 - Buffer) << 6);
LABEL_10:
      if ( v16 <= v10 )
        goto LABEL_11;
    }
LABEL_31:
    v16 = -1LL;
LABEL_32:
    if ( !v7 )
      return v16;
    v35 = NumberToFind + HintIndex;
    v7 = 0LL;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v35 = SizeOfBitMap;
    v8 = v35 - 1;
  }
  if ( (v10 & 0x3F) != 0 )
    ++v13;
  if ( !v12 )
  {
    v27 = 0;
    goto LABEL_43;
  }
  if ( *++v11 == -1LL )
  {
    v21 = !_BitScanReverse64((unsigned __int64 *)&v34, v12);
    if ( !v21 )
    {
      v27 = 63 - v34;
      goto LABEL_43;
    }
    goto LABEL_72;
  }
  do
  {
    do
    {
LABEL_39:
      if ( v11 > v13 )
        goto LABEL_31;
      ++v11;
    }
    while ( *v11 != -1LL );
    v21 = !_BitScanReverse64((unsigned __int64 *)&v26, ~*(v11 - 1));
    if ( v21 )
LABEL_72:
      v27 = 64;
    else
      v27 = 63 - v26;
LABEL_43:
    v16 = ((v11 - Buffer) << 6) - v27;
    if ( v16 > v10 )
      goto LABEL_31;
    v28 = &v11[(NumberToFind - v27) >> 6];
    while ( ++v11 != v28 )
    {
      if ( *v11 != -1LL )
        goto LABEL_39;
    }
    v32 = ((_BYTE)NumberToFind - (_BYTE)v27) & 0x3F;
    if ( (((_BYTE)NumberToFind - (_BYTE)v27) & 0x3F) == 0 )
      break;
    v21 = !_BitScanForward64((unsigned __int64 *)&v33, ~*v11);
    if ( v21 )
      LODWORD(v33) = 64;
  }
  while ( (unsigned int)v33 < v32 );
LABEL_11:
  if ( v16 == -1LL )
    goto LABEL_32;
  return v16;
}
