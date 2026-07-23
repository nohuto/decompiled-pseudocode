/*
 * XREFs of RtlFindSetBits @ 0x14000AB40
 * Callers:
 *     HvpFindFreeCell @ 0x140400E10 (HvpFindFreeCell.c)
 *     MiFindDriverNonPagedSections @ 0x14047D9A0 (MiFindDriverNonPagedSections.c)
 *     HvpRemoveFreeCellHint @ 0x1404F7A60 (HvpRemoveFreeCellHint.c)
 *     MiDeleteLeakedSessionPool @ 0x1405323F8 (MiDeleteLeakedSessionPool.c)
 *     SmcStorePlacementGet @ 0x14069AA90 (SmcStorePlacementGet.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v6; // r11d
  unsigned int v7; // eax
  unsigned int *Buffer; // r8
  unsigned int v9; // edx
  int v10; // r15d
  unsigned int v11; // ebx
  ULONG v12; // ecx
  unsigned int *v13; // r14
  ULONG v14; // ebp
  unsigned int *v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rsi
  int v18; // r8d
  unsigned __int64 v19; // rax
  ULONG v20; // edx
  bool v21; // cc
  ULONG v24; // eax
  int v25; // ecx
  unsigned int *v26; // rbx
  bool v27; // zf
  __int64 v28; // rax
  ULONG v29; // r8d
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ecx
  char v34; // r8
  unsigned int *v35; // rcx
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned int v40; // ecx
  __int64 v41; // rax
  unsigned int *v42; // [rsp+38h] [rbp+8h]
  unsigned int v43; // [rsp+40h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  Buffer = BitMapHeader->Buffer;
  v42 = Buffer;
  if ( !NumberToFind )
    return v6 & 0xFFFFFFF8;
  if ( ((unsigned __int8)Buffer & 4) != 0 )
  {
    v9 = 1;
    v10 = 32;
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  v43 = v9;
  while ( 1 )
  {
    v11 = v10 + v7;
    v12 = v10 + v6;
    v13 = &Buffer[-v9];
    if ( v7 - v6 + 1 >= NumberToFind )
      break;
    v20 = -1;
LABEL_20:
    if ( !v6 )
      return v20;
    v9 = v43;
    v24 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v24 = SizeOfBitMap;
    v7 = v24 - 1;
    v6 = 0;
  }
  v14 = v11 - NumberToFind + 1;
  v15 = &v13[2 * ((unsigned __int64)v12 >> 6)];
  v16 = ((1LL << (v12 & 0x3F)) - 1) | ~*(_QWORD *)v15;
  v17 = (unsigned __int64)&v13[2 * ((unsigned __int64)v14 >> 6)];
  if ( NumberToFind > 0x7F )
  {
    if ( (v14 & 0x3F) != 0 )
      v17 += 8LL;
    if ( !v16 )
    {
      v33 = 0;
      goto LABEL_48;
    }
    v15 += 2;
    if ( *(_QWORD *)v15 != -1LL )
      goto LABEL_57;
    v27 = !_BitScanReverse64((unsigned __int64 *)&v32, v16);
    if ( !v27 )
    {
      v33 = 63 - v32;
      goto LABEL_48;
    }
LABEL_80:
    v33 = 64;
LABEL_48:
    while ( 1 )
    {
      v20 = ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6) - v33;
      if ( v20 > v14 )
        goto LABEL_18;
      v34 = NumberToFind - v33;
      v35 = &v15[2 * ((unsigned __int64)(NumberToFind - v33) >> 6)];
      while ( 1 )
      {
        v15 += 2;
        if ( v15 == v35 )
          break;
        if ( *(_QWORD *)v15 != -1LL )
          goto LABEL_57;
      }
      v36 = v34 & 0x3F;
      if ( !v36 )
        goto LABEL_14;
      v27 = !_BitScanForward64((unsigned __int64 *)&v37, ~*(_QWORD *)v15);
      if ( v27 )
        LODWORD(v37) = 64;
      if ( (unsigned int)v37 >= v36 )
        goto LABEL_14;
      do
      {
LABEL_57:
        if ( (unsigned __int64)v15 > v17 )
          goto LABEL_18;
        v15 += 2;
      }
      while ( *(_QWORD *)v15 != -1LL );
      v27 = !_BitScanReverse64((unsigned __int64 *)&v38, ~*((_QWORD *)v15 - 1));
      if ( v27 )
        goto LABEL_80;
      v33 = 63 - v38;
    }
  }
  v18 = 64;
  if ( NumberToFind >= 0x40 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( (v16 & 0x8000000000000000uLL) != 0 )
        {
          v15 += 2;
          if ( (unsigned __int64)v15 > v17 )
            goto LABEL_18;
          v16 = ~*(_QWORD *)v15;
        }
        v27 = !_BitScanReverse64((unsigned __int64 *)&v39, v16);
        if ( !v27 )
          v18 = 63 - v39;
        v20 = (((unsigned int)(((char *)v15 - (char *)v13) >> 3) + 1) << 6) - v18;
        if ( v20 > v14 )
          goto LABEL_18;
        v40 = NumberToFind - v18;
        if ( NumberToFind == v18 )
          goto LABEL_14;
        v15 += 2;
        v18 = 64;
        v16 = ~*(_QWORD *)v15;
        if ( v40 >= 0x40 )
          break;
LABEL_69:
        v27 = !_BitScanForward64((unsigned __int64 *)&v41, v16);
        if ( v27 )
          LODWORD(v41) = 64;
        if ( (unsigned int)v41 >= v40 )
          goto LABEL_14;
      }
      if ( *(_QWORD *)v15 == -1LL )
      {
        v40 -= 64;
        if ( !v40 )
          goto LABEL_14;
        v15 += 2;
        v16 = ~*(_QWORD *)v15;
        goto LABEL_69;
      }
    }
  }
  if ( NumberToFind > 1 )
  {
    v25 = 0;
    v26 = &v13[2 * ((unsigned __int64)v11 >> 6)];
    while ( v16 != -1LL )
    {
LABEL_26:
      v27 = !_BitScanForward64((unsigned __int64 *)&v28, v16);
      if ( v27 )
        LODWORD(v28) = 64;
      if ( v25 + (int)v28 >= NumberToFind )
      {
        LODWORD(v30) = -v25;
LABEL_33:
        v20 = ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6) + v30;
        v21 = v20 <= v14;
        goto LABEL_13;
      }
      v29 = NumberToFind;
      v30 = ~v16;
      while ( 1 )
      {
        v30 &= v30 >> (v29 >> 1);
        if ( !v30 )
          break;
        v29 -= v29 >> 1;
        if ( v29 <= 1 )
        {
          _BitScanForward64(&v30, v30);
          goto LABEL_33;
        }
      }
      if ( v15 == v26 )
        goto LABEL_18;
      v27 = !_BitScanReverse64((unsigned __int64 *)&v31, v16);
      if ( v27 )
        v25 = 64;
      else
        v25 = 63 - v31;
      v15 += 2;
      v16 = ~*(_QWORD *)v15;
    }
    while ( 1 )
    {
      v15 += 2;
      if ( (unsigned __int64)v15 > v17 )
        goto LABEL_18;
      v16 = ~*(_QWORD *)v15;
      if ( *(_QWORD *)v15 )
      {
        v25 = 0;
        goto LABEL_26;
      }
    }
  }
  while ( v16 == -1LL )
  {
    v15 += 2;
    if ( (unsigned __int64)v15 > v17 )
      goto LABEL_18;
    v16 = ~*(_QWORD *)v15;
  }
  _BitScanForward64(&v19, ~v16);
  v20 = v19 + ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6);
  v21 = v20 <= v14;
LABEL_13:
  if ( !v21 )
  {
LABEL_18:
    v20 = -1;
    goto LABEL_19;
  }
LABEL_14:
  if ( v20 == -1 )
  {
LABEL_19:
    Buffer = v42;
    goto LABEL_20;
  }
  v20 -= v10;
  return v20;
}
