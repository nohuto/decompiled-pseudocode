/*
 * XREFs of RtlFindSetBits @ 0x18008DD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
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
  int v24; // ecx
  unsigned int *v25; // rbx
  bool v26; // zf
  __int64 v27; // rax
  ULONG v28; // r8d
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // ecx
  char v36; // r8
  unsigned int *v37; // rcx
  unsigned int v38; // r8d
  __int64 v39; // rcx
  ULONG v40; // eax
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
    v20 = -1;
LABEL_71:
    if ( !v6 )
      return v20;
    v9 = v43;
    v40 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v40 = SizeOfBitMap;
    v7 = v40 - 1;
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
      v35 = 0;
      goto LABEL_55;
    }
    v15 += 2;
    if ( *(_QWORD *)v15 != -1LL )
      goto LABEL_77;
    v26 = !_BitScanReverse64((unsigned __int64 *)&v34, v16);
    if ( !v26 )
    {
      v35 = 63 - v34;
      goto LABEL_55;
    }
LABEL_76:
    v35 = 64;
LABEL_55:
    while ( 1 )
    {
      v20 = ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6) - v35;
      if ( v20 > v14 )
        goto LABEL_33;
      v36 = NumberToFind - v35;
      v37 = &v15[2 * ((unsigned __int64)(NumberToFind - v35) >> 6)];
      while ( 1 )
      {
        v15 += 2;
        if ( v15 == v37 )
          break;
        if ( *(_QWORD *)v15 != -1LL )
          goto LABEL_77;
      }
      v38 = v36 & 0x3F;
      if ( !v38 )
        goto LABEL_12;
      v26 = !_BitScanForward64((unsigned __int64 *)&v39, ~*(_QWORD *)v15);
      if ( v26 )
        LODWORD(v39) = 64;
      if ( (unsigned int)v39 >= v38 )
        goto LABEL_12;
      do
      {
LABEL_77:
        if ( (unsigned __int64)v15 > v17 )
          goto LABEL_33;
        v15 += 2;
      }
      while ( *(_QWORD *)v15 != -1LL );
      v26 = !_BitScanReverse64((unsigned __int64 *)&v41, ~*((_QWORD *)v15 - 1));
      if ( v26 )
        goto LABEL_76;
      v35 = 63 - v41;
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
            goto LABEL_33;
          v16 = ~*(_QWORD *)v15;
        }
        v26 = !_BitScanReverse64((unsigned __int64 *)&v31, v16);
        if ( !v26 )
          v18 = 63 - v31;
        v20 = (((unsigned int)(((char *)v15 - (char *)v13) >> 3) + 1) << 6) - v18;
        if ( v20 > v14 )
          goto LABEL_33;
        v32 = NumberToFind - v18;
        if ( NumberToFind == v18 )
          goto LABEL_12;
        v15 += 2;
        v18 = 64;
        v16 = ~*(_QWORD *)v15;
        if ( v32 >= 0x40 )
          break;
LABEL_45:
        v26 = !_BitScanForward64((unsigned __int64 *)&v33, v16);
        if ( v26 )
          LODWORD(v33) = 64;
        if ( (unsigned int)v33 >= v32 )
          goto LABEL_12;
      }
      if ( *(_QWORD *)v15 == -1LL )
      {
        v32 -= 64;
        if ( !v32 )
          goto LABEL_12;
        v15 += 2;
        v16 = ~*(_QWORD *)v15;
        goto LABEL_45;
      }
    }
  }
  if ( NumberToFind > 1 )
  {
    v24 = 0;
    v25 = &v13[2 * ((unsigned __int64)v11 >> 6)];
    while ( v16 != -1LL )
    {
LABEL_21:
      v26 = !_BitScanForward64((unsigned __int64 *)&v27, v16);
      if ( v26 )
        LODWORD(v27) = 64;
      if ( v24 + (int)v27 >= NumberToFind )
      {
        LODWORD(v29) = -v24;
LABEL_32:
        v20 = ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6) + v29;
        v21 = v20 <= v14;
        goto LABEL_11;
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
          goto LABEL_32;
        }
      }
      if ( v15 == v25 )
        goto LABEL_33;
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
        goto LABEL_33;
      v16 = ~*(_QWORD *)v15;
      if ( *(_QWORD *)v15 )
      {
        v24 = 0;
        goto LABEL_21;
      }
    }
  }
  while ( v16 == -1LL )
  {
    v15 += 2;
    if ( (unsigned __int64)v15 > v17 )
      goto LABEL_33;
    v16 = ~*(_QWORD *)v15;
  }
  _BitScanForward64(&v19, ~v16);
  v20 = v19 + ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6);
  v21 = v20 <= v14;
LABEL_11:
  if ( !v21 )
  {
LABEL_33:
    v20 = -1;
    goto LABEL_34;
  }
LABEL_12:
  if ( v20 == -1 )
  {
LABEL_34:
    Buffer = v42;
    goto LABEL_71;
  }
  v20 -= v10;
  return v20;
}
