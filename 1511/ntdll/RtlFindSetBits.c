/*
 * XREFs of RtlFindSetBits @ 0x1800896E0
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
  unsigned __int64 v18; // rax
  ULONG v19; // edx
  bool v20; // cc
  int v23; // edx
  unsigned int *v24; // rbx
  bool v25; // zf
  __int64 v26; // rcx
  ULONG v27; // r8d
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // r8d
  __int64 v33; // rcx
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
    v19 = -1;
LABEL_72:
    if ( !v6 )
      return v19;
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
    if ( v16 )
    {
      v15 += 2;
      if ( *(_QWORD *)v15 != -1LL )
        goto LABEL_78;
      v25 = !_BitScanReverse64((unsigned __int64 *)&v34, v16);
      if ( v25 )
        v35 = 64;
      else
        v35 = 63 - v34;
    }
    else
    {
      v35 = 0;
    }
    while ( 1 )
    {
      v19 = ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6) - v35;
      if ( v19 > v14 )
        goto LABEL_32;
      v36 = NumberToFind - v35;
      v37 = &v15[2 * ((unsigned __int64)(NumberToFind - v35) >> 6)];
      while ( 1 )
      {
        v15 += 2;
        if ( v15 == v37 )
          break;
        if ( *(_QWORD *)v15 != -1LL )
          goto LABEL_78;
      }
      v38 = v36 & 0x3F;
      if ( !v38 )
        goto LABEL_14;
      v25 = !_BitScanForward64((unsigned __int64 *)&v39, ~*(_QWORD *)v15);
      if ( v25 )
        LODWORD(v39) = 64;
      if ( (unsigned int)v39 >= v38 )
        goto LABEL_14;
      do
      {
LABEL_78:
        if ( (unsigned __int64)v15 > v17 )
          goto LABEL_32;
        v15 += 2;
      }
      while ( *(_QWORD *)v15 != -1LL );
      v25 = !_BitScanReverse64((unsigned __int64 *)&v41, ~*((_QWORD *)v15 - 1));
      if ( v25 )
        v35 = 64;
      else
        v35 = 63 - v41;
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
            goto LABEL_32;
          v16 = ~*(_QWORD *)v15;
        }
        v25 = !_BitScanReverse64((unsigned __int64 *)&v30, v16);
        if ( v25 )
          v31 = 64;
        else
          v31 = 63 - v30;
        v19 = (((unsigned int)(((char *)v15 - (char *)v13) >> 3) + 1) << 6) - v31;
        if ( v19 > v14 )
          goto LABEL_32;
        v32 = NumberToFind - v31;
        if ( NumberToFind == v31 )
          goto LABEL_14;
        v15 += 2;
        v16 = ~*(_QWORD *)v15;
        if ( v32 >= 0x40 )
          break;
LABEL_48:
        v25 = !_BitScanForward64((unsigned __int64 *)&v33, v16);
        if ( v25 )
          LODWORD(v33) = 64;
        if ( (unsigned int)v33 >= v32 )
          goto LABEL_14;
      }
      if ( *(_QWORD *)v15 == -1LL )
      {
        v32 -= 64;
        if ( !v32 )
          goto LABEL_14;
        v15 += 2;
        v16 = ~*(_QWORD *)v15;
        goto LABEL_48;
      }
    }
  }
  if ( NumberToFind > 1 )
  {
    v23 = 0;
    v24 = &v13[2 * ((unsigned __int64)v11 >> 6)];
    while ( v16 != -1LL )
    {
LABEL_23:
      v25 = !_BitScanForward64((unsigned __int64 *)&v26, v16);
      if ( v25 )
        LODWORD(v26) = 64;
      if ( (int)v26 + v23 >= NumberToFind )
      {
        LODWORD(v28) = -v23;
LABEL_36:
        v19 = ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6) + v28;
        v20 = v19 <= v14;
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
          goto LABEL_36;
        }
      }
      if ( v15 == v24 )
        goto LABEL_32;
      v25 = !_BitScanReverse64((unsigned __int64 *)&v29, v16);
      if ( v25 )
        v23 = 64;
      else
        v23 = 63 - v29;
      v15 += 2;
      v16 = ~*(_QWORD *)v15;
    }
    while ( 1 )
    {
      v15 += 2;
      if ( (unsigned __int64)v15 > v17 )
        goto LABEL_32;
      v16 = ~*(_QWORD *)v15;
      if ( *(_QWORD *)v15 )
      {
        v23 = 0;
        goto LABEL_23;
      }
    }
  }
  while ( v16 == -1LL )
  {
    v15 += 2;
    if ( (unsigned __int64)v15 > v17 )
      goto LABEL_32;
    v16 = ~*(_QWORD *)v15;
  }
  _BitScanForward64(&v18, ~v16);
  v19 = v18 + ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6);
  v20 = v19 <= v14;
LABEL_13:
  if ( !v20 )
  {
LABEL_32:
    v19 = -1;
    goto LABEL_33;
  }
LABEL_14:
  if ( v19 == -1 )
  {
LABEL_33:
    Buffer = v42;
    goto LABEL_72;
  }
  v19 -= v10;
  return v19;
}
