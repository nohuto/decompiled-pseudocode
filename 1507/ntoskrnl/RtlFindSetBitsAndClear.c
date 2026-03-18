/*
 * XREFs of RtlFindSetBitsAndClear @ 0x140247704
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 */

ULONG __stdcall RtlFindSetBitsAndClear(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  unsigned int *Buffer; // r9
  ULONG v7; // ebx
  unsigned int v8; // eax
  ULONG v9; // ebx
  unsigned int v10; // edx
  int v11; // r15d
  unsigned int v12; // r11d
  ULONG v13; // ecx
  unsigned int *v14; // r14
  unsigned int v15; // edx
  ULONG v16; // ebp
  unsigned int *v17; // r9
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rsi
  int v20; // ecx
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // r8
  unsigned int *v25; // rcx
  unsigned int v26; // r8d
  __int64 v27; // rcx
  ULONG v28; // eax
  int v29; // edx
  unsigned int *v30; // r11
  __int64 v31; // rcx
  ULONG v32; // r8d
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // ecx
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rax
  bool v39; // cc
  unsigned __int64 v40; // rax
  unsigned int *v42; // [rsp+60h] [rbp+8h]
  unsigned int v43; // [rsp+68h] [rbp+10h]
  ULONG v44; // [rsp+70h] [rbp+18h]

  v44 = HintIndex;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v42 = Buffer;
  v7 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v9 = v7 & 0xFFFFFFF8;
    goto LABEL_83;
  }
  if ( ((unsigned __int8)Buffer & 4) != 0 )
  {
    v10 = 1;
    v11 = 32;
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  v43 = v10;
  while ( 1 )
  {
    v12 = v11 + v8;
    v13 = v11 + v7;
    v14 = &Buffer[-v10];
    if ( v8 - v7 + 1 < NumberToFind )
    {
      v15 = -1;
      goto LABEL_33;
    }
    v16 = v12 - NumberToFind + 1;
    v17 = &v14[2 * ((unsigned __int64)v13 >> 6)];
    v18 = ((1LL << (v13 & 0x3F)) - 1) | ~*(_QWORD *)v17;
    v19 = (unsigned __int64)&v14[2 * ((unsigned __int64)v16 >> 6)];
    if ( NumberToFind > 0x7F )
    {
      if ( (v16 & 0x3F) != 0 )
        v19 += 8LL;
      if ( v18 )
      {
        v17 += 2;
        if ( *(_QWORD *)v17 != -1LL )
          goto LABEL_18;
        v21 = !_BitScanReverse64((unsigned __int64 *)&v22, v18);
        if ( v21 )
          v20 = 64;
        else
          v20 = 63 - v22;
      }
      else
      {
        v20 = 0;
      }
LABEL_23:
      v15 = ((unsigned int)(((char *)v17 - (char *)v14) >> 3) << 6) - v20;
      if ( v15 <= v16 )
      {
        v24 = NumberToFind - v20;
        v25 = &v17[2 * ((unsigned __int64)(NumberToFind - v20) >> 6)];
        while ( 1 )
        {
          v17 += 2;
          if ( v17 == v25 )
            break;
          if ( *(_QWORD *)v17 != -1LL )
            goto LABEL_18;
        }
        v26 = v24 & 0x3F;
        if ( !v26 )
          goto LABEL_31;
        v21 = !_BitScanForward64((unsigned __int64 *)&v27, ~*(_QWORD *)v17);
        if ( v21 )
          LODWORD(v27) = 64;
        if ( (unsigned int)v27 >= v26 )
          goto LABEL_31;
LABEL_18:
        while ( (unsigned __int64)v17 <= v19 )
        {
          v17 += 2;
          if ( *(_QWORD *)v17 == -1LL )
          {
            v21 = !_BitScanReverse64((unsigned __int64 *)&v23, ~*((_QWORD *)v17 - 1));
            if ( v21 )
              v20 = 64;
            else
              v20 = 63 - v23;
            goto LABEL_23;
          }
        }
      }
LABEL_76:
      v15 = -1;
      goto LABEL_32;
    }
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( (v18 & 0x8000000000000000uLL) != 0 )
          {
            v17 += 2;
            if ( (unsigned __int64)v17 > v19 )
              goto LABEL_76;
            v18 = ~*(_QWORD *)v17;
          }
          v21 = !_BitScanReverse64((unsigned __int64 *)&v34, v18);
          if ( v21 )
            v35 = 64;
          else
            v35 = 63 - v34;
          v15 = (((unsigned int)(((char *)v17 - (char *)v14) >> 3) + 1) << 6) - v35;
          if ( v15 > v16 )
            goto LABEL_76;
          v36 = NumberToFind - v35;
          if ( NumberToFind == v35 )
            goto LABEL_31;
          v17 += 2;
          v18 = ~*(_QWORD *)v17;
          if ( v36 >= 0x40 )
            break;
LABEL_64:
          v21 = !_BitScanForward64((unsigned __int64 *)&v37, v18);
          if ( v21 )
            LODWORD(v37) = 64;
          if ( (unsigned int)v37 >= v36 )
            goto LABEL_31;
        }
        if ( *(_QWORD *)v17 == -1LL )
        {
          v36 -= 64;
          if ( !v36 )
            goto LABEL_31;
          v17 += 2;
          v18 = ~*(_QWORD *)v17;
          goto LABEL_64;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v29 = 0;
      v30 = &v14[2 * ((unsigned __int64)v12 >> 6)];
      while ( v18 != -1LL )
      {
LABEL_44:
        v21 = !_BitScanForward64((unsigned __int64 *)&v31, v18);
        if ( v21 )
          LODWORD(v31) = 64;
        if ( (int)v31 + v29 >= NumberToFind )
        {
          LODWORD(v33) = -v29;
LABEL_74:
          v15 = ((unsigned int)(((char *)v17 - (char *)v14) >> 3) << 6) + v33;
          v39 = v15 <= v16;
          goto LABEL_75;
        }
        v32 = NumberToFind;
        v33 = ~v18;
        while ( 1 )
        {
          v33 &= v33 >> (v32 >> 1);
          if ( !v33 )
            break;
          v32 -= v32 >> 1;
          if ( v32 <= 1 )
          {
            _BitScanForward64(&v33, v33);
            goto LABEL_74;
          }
        }
        if ( v17 == v30 )
          goto LABEL_76;
        v21 = !_BitScanReverse64((unsigned __int64 *)&v38, v18);
        if ( v21 )
          v29 = 64;
        else
          v29 = 63 - v38;
        v17 += 2;
        v18 = ~*(_QWORD *)v17;
      }
      while ( 1 )
      {
        v17 += 2;
        if ( (unsigned __int64)v17 > v19 )
          goto LABEL_76;
        v18 = ~*(_QWORD *)v17;
        if ( *(_QWORD *)v17 )
        {
          v29 = 0;
          goto LABEL_44;
        }
      }
    }
    while ( v18 == -1LL )
    {
      v17 += 2;
      if ( (unsigned __int64)v17 > v19 )
        goto LABEL_76;
      v18 = ~*(_QWORD *)v17;
    }
    _BitScanForward64(&v40, ~v18);
    v15 = v40 + ((unsigned int)(((char *)v17 - (char *)v14) >> 3) << 6);
    v39 = v15 <= v16;
LABEL_75:
    if ( !v39 )
      goto LABEL_76;
LABEL_31:
    if ( v15 != -1 )
      break;
LABEL_32:
    Buffer = v42;
    HintIndex = v44;
LABEL_33:
    if ( !v7 )
      goto LABEL_82;
    v10 = v43;
    v28 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v28 = SizeOfBitMap;
    v8 = v28 - 1;
    v7 = 0;
  }
  v15 -= v11;
LABEL_82:
  v9 = v15;
LABEL_83:
  if ( v9 != -1 )
    RtlClearBits(BitMapHeader, v9, NumberToFind);
  return v9;
}
