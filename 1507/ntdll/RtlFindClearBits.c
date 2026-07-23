/*
 * XREFs of RtlFindClearBits @ 0x180001010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v6; // r11d
  unsigned int v7; // eax
  unsigned int *Buffer; // r8
  unsigned int v9; // edx
  int v10; // r15d
  unsigned int v11; // r10d
  ULONG v12; // ecx
  unsigned int *v13; // r14
  ULONG v14; // ebp
  unsigned __int64 *v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  int v18; // ecx
  unsigned __int64 v19; // rax
  ULONG v20; // edx
  bool v21; // cc
  int v24; // edx
  unsigned __int64 *v25; // rbx
  __int64 v26; // rcx
  ULONG v27; // r10d
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r10d
  __int64 v32; // rcx
  bool v33; // zf
  __int64 v34; // rax
  int v35; // ecx
  char v36; // r8
  unsigned __int64 *v37; // rcx
  unsigned int v38; // r8d
  __int64 v39; // rcx
  ULONG v40; // eax
  unsigned int *v41; // [rsp+38h] [rbp+8h]
  unsigned int v42; // [rsp+40h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  Buffer = BitMapHeader->Buffer;
  v41 = Buffer;
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
  v42 = v9;
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
    v9 = v42;
    v40 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v40 = SizeOfBitMap;
    v7 = v40 - 1;
    v6 = 0;
  }
  v14 = v11 - NumberToFind + 1;
  v15 = (unsigned __int64 *)&v13[2 * ((unsigned __int64)v12 >> 6)];
  v16 = ((1LL << (v12 & 0x3F)) - 1) | *v15;
  v17 = (unsigned __int64)&v13[2 * ((unsigned __int64)v14 >> 6)];
  if ( NumberToFind > 0x7F )
  {
    if ( (v14 & 0x3F) != 0 )
      v17 += 8LL;
    if ( v16 )
    {
      if ( *++v15 )
        goto LABEL_69;
      v33 = !_BitScanReverse64((unsigned __int64 *)&v34, v16);
      goto LABEL_58;
    }
    v35 = 0;
    while ( 1 )
    {
      v20 = ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6) - v35;
      if ( v20 > v14 )
        goto LABEL_18;
      v36 = NumberToFind - v35;
      v37 = &v15[(unsigned __int64)(NumberToFind - v35) >> 6];
      while ( ++v15 != v37 )
      {
        if ( *v15 )
          goto LABEL_69;
      }
      v38 = v36 & 0x3F;
      if ( !v38 )
        goto LABEL_14;
      v33 = !_BitScanForward64((unsigned __int64 *)&v39, *v15);
      if ( v33 )
        LODWORD(v39) = 64;
      if ( (unsigned int)v39 >= v38 )
        goto LABEL_14;
      do
      {
LABEL_69:
        if ( (unsigned __int64)v15 > v17 )
          goto LABEL_18;
        ++v15;
      }
      while ( *v15 );
      v33 = !_BitScanReverse64((unsigned __int64 *)&v34, *(v15 - 1));
LABEL_58:
      if ( v33 )
        v35 = 64;
      else
        v35 = 63 - v34;
    }
  }
  v18 = 64;
  if ( NumberToFind >= 0x40 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v16 < 0 )
        {
          if ( (unsigned __int64)++v15 > v17 )
            goto LABEL_18;
          v16 = *v15;
        }
        v33 = !_BitScanReverse64((unsigned __int64 *)&v30, v16);
        if ( !v33 )
          v18 = 63 - v30;
        v20 = (((unsigned int)(((char *)v15 - (char *)v13) >> 3) + 1) << 6) - v18;
        if ( v20 > v14 )
          goto LABEL_18;
        v31 = NumberToFind - v18;
        if ( NumberToFind == v18 )
          goto LABEL_14;
        ++v15;
        v18 = 64;
        v16 = *v15;
        if ( v31 >= 0x40 )
          break;
LABEL_49:
        v33 = !_BitScanForward64((unsigned __int64 *)&v32, v16);
        if ( v33 )
          LODWORD(v32) = 64;
        if ( (unsigned int)v32 >= v31 )
          goto LABEL_14;
        v18 = 64;
      }
      if ( !v16 )
      {
        v31 -= 64;
        if ( !v31 )
          goto LABEL_14;
        v16 = *++v15;
        goto LABEL_49;
      }
    }
  }
  if ( NumberToFind > 1 )
  {
    v24 = 0;
    v25 = (unsigned __int64 *)&v13[2 * ((unsigned __int64)v11 >> 6)];
    while ( v16 != -1 )
    {
LABEL_27:
      v33 = !_BitScanForward64((unsigned __int64 *)&v26, v16);
      if ( v33 )
        LODWORD(v26) = 64;
      if ( (int)v26 + v24 >= NumberToFind )
      {
        LODWORD(v28) = -v24;
LABEL_38:
        v20 = ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6) + v28;
        v21 = v20 <= v14;
        goto LABEL_13;
      }
      v27 = NumberToFind;
      v28 = ~v16;
      while ( 1 )
      {
        v28 &= v28 >> (v27 >> 1);
        if ( !v28 )
          break;
        v27 -= v27 >> 1;
        if ( v27 <= 1 )
        {
          _BitScanForward64(&v28, v28);
          goto LABEL_38;
        }
      }
      if ( v15 == v25 )
        goto LABEL_18;
      v33 = !_BitScanReverse64((unsigned __int64 *)&v29, v16);
      if ( v33 )
        v24 = 64;
      else
        v24 = 63 - v29;
      v16 = *++v15;
    }
    while ( 1 )
    {
      if ( (unsigned __int64)++v15 > v17 )
        goto LABEL_18;
      v16 = *v15;
      if ( *v15 != -1LL )
      {
        v24 = 0;
        goto LABEL_27;
      }
    }
  }
  while ( v16 == -1 )
  {
    if ( (unsigned __int64)++v15 > v17 )
      goto LABEL_18;
    v16 = *v15;
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
    Buffer = v41;
    goto LABEL_20;
  }
  v20 -= v10;
  return v20;
}
