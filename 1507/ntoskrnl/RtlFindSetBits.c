/*
 * XREFs of RtlFindSetBits @ 0x140062390
 * Callers:
 *     HvpFindFreeCell @ 0x14049EF7C (HvpFindFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14049F5E0 (HvpRemoveFreeCellHint.c)
 *     MiDeleteLeakedSessionPool @ 0x140567DC0 (MiDeleteLeakedSessionPool.c)
 *     MiFindDriverNonPagedSections @ 0x14057531C (MiFindDriverNonPagedSections.c)
 *     SmcStorePlacementGet @ 0x1406DBC88 (SmcStorePlacementGet.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
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
  unsigned __int64 v18; // rax
  ULONG v19; // edx
  bool v20; // cc
  ULONG v23; // eax
  int v24; // edx
  unsigned int *v25; // rbx
  bool v26; // zf
  __int64 v27; // rcx
  ULONG v28; // r8d
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // ecx
  unsigned int v33; // r8d
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // ecx
  char v37; // r8
  unsigned int *v38; // rcx
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // rdx
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
    v19 = -1;
LABEL_20:
    if ( !v6 )
      return v19;
    v9 = v43;
    v23 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v23 = SizeOfBitMap;
    v7 = v23 - 1;
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
    if ( v16 )
    {
      v15 += 2;
      if ( *(_QWORD *)v15 != -1LL )
        goto LABEL_69;
      v26 = !_BitScanReverse64((unsigned __int64 *)&v35, v16);
      if ( v26 )
        v36 = 64;
      else
        v36 = 63 - v35;
    }
    else
    {
      v36 = 0;
    }
    while ( 1 )
    {
      v19 = ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6) - v36;
      if ( v19 > v14 )
        goto LABEL_18;
      v37 = NumberToFind - v36;
      v38 = &v15[2 * ((unsigned __int64)(NumberToFind - v36) >> 6)];
      while ( 1 )
      {
        v15 += 2;
        if ( v15 == v38 )
          break;
        if ( *(_QWORD *)v15 != -1LL )
          goto LABEL_69;
      }
      v39 = v37 & 0x3F;
      if ( !v39 )
        goto LABEL_14;
      v26 = !_BitScanForward64((unsigned __int64 *)&v40, ~*(_QWORD *)v15);
      if ( v26 )
        LODWORD(v40) = 64;
      if ( (unsigned int)v40 >= v39 )
        goto LABEL_14;
      do
      {
LABEL_69:
        if ( (unsigned __int64)v15 > v17 )
          goto LABEL_18;
        v15 += 2;
      }
      while ( *(_QWORD *)v15 != -1LL );
      v26 = !_BitScanReverse64((unsigned __int64 *)&v41, ~*((_QWORD *)v15 - 1));
      if ( v26 )
        v36 = 64;
      else
        v36 = 63 - v41;
    }
  }
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
        v26 = !_BitScanReverse64((unsigned __int64 *)&v31, v16);
        if ( v26 )
          v32 = 64;
        else
          v32 = 63 - v31;
        v19 = (((unsigned int)(((char *)v15 - (char *)v13) >> 3) + 1) << 6) - v32;
        if ( v19 > v14 )
          goto LABEL_18;
        v33 = NumberToFind - v32;
        if ( NumberToFind == v32 )
          goto LABEL_14;
        v15 += 2;
        v16 = ~*(_QWORD *)v15;
        if ( v33 >= 0x40 )
          break;
LABEL_50:
        v26 = !_BitScanForward64((unsigned __int64 *)&v34, v16);
        if ( v26 )
          LODWORD(v34) = 64;
        if ( (unsigned int)v34 >= v33 )
          goto LABEL_14;
      }
      if ( *(_QWORD *)v15 == -1LL )
      {
        v33 -= 64;
        if ( !v33 )
          goto LABEL_14;
        v15 += 2;
        v16 = ~*(_QWORD *)v15;
        goto LABEL_50;
      }
    }
  }
  if ( NumberToFind > 1 )
  {
    v24 = 0;
    v25 = &v13[2 * ((unsigned __int64)v11 >> 6)];
    while ( v16 != -1LL )
    {
LABEL_26:
      v26 = !_BitScanForward64((unsigned __int64 *)&v27, v16);
      if ( v26 )
        LODWORD(v27) = 64;
      if ( (int)v27 + v24 >= NumberToFind )
      {
        LODWORD(v29) = -v24;
LABEL_33:
        v19 = ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6) + v29;
        v20 = v19 <= v14;
        goto LABEL_13;
      }
      v28 = NumberToFind;
      v29 = ~v16;
      while ( 1 )
      {
        v29 &= v29 >> (v28 >> 1);
        if ( !v29 )
          break;
        v28 -= v28 >> 1;
        if ( v28 <= 1 )
        {
          _BitScanForward64(&v29, v29);
          goto LABEL_33;
        }
      }
      if ( v15 == v25 )
        goto LABEL_18;
      v26 = !_BitScanReverse64((unsigned __int64 *)&v30, v16);
      if ( v26 )
        v24 = 64;
      else
        v24 = 63 - v30;
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
        v24 = 0;
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
  _BitScanForward64(&v18, ~v16);
  v19 = v18 + ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6);
  v20 = v19 <= v14;
LABEL_13:
  if ( !v20 )
  {
LABEL_18:
    v19 = -1;
    goto LABEL_19;
  }
LABEL_14:
  if ( v19 == -1 )
  {
LABEL_19:
    Buffer = v42;
    goto LABEL_20;
  }
  v19 -= v10;
  return v19;
}
