/*
 * XREFs of RtlFindSetBitsAndClear @ 0x1800DB190
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x1800404D0 (RtlClearBits.c)
 */

ULONG __cdecl RtlFindSetBitsAndClear(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v6; // ebx
  unsigned int v7; // eax
  ULONG v8; // ebx
  int v9; // edx
  int v10; // r15d
  unsigned int v11; // r11d
  ULONG v12; // ecx
  unsigned int *v13; // r14
  unsigned int v14; // edx
  ULONG v15; // ebp
  char *v16; // r9
  unsigned __int64 v17; // r10
  unsigned int *v18; // rsi
  int v19; // ecx
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // r8
  char *v24; // rcx
  unsigned int v25; // r8d
  __int64 v26; // rcx
  ULONG v27; // eax
  int v28; // edx
  unsigned int *v29; // r11
  __int64 v30; // rcx
  ULONG v31; // r8d
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // ecx
  unsigned int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // rax
  bool v38; // cc
  unsigned __int64 v39; // rax
  int v41; // [rsp+68h] [rbp+10h]
  ULONG v42; // [rsp+70h] [rbp+18h]

  v42 = HintIndex;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v8 = v6 & 0xFFFFFFF8;
    goto LABEL_83;
  }
  if ( ((__int64)BitMapHeader->Buffer & 4) != 0 )
  {
    v9 = 1;
    v10 = 32;
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  v41 = v9;
  while ( 1 )
  {
    v11 = v10 + v7;
    v12 = v10 + v6;
    v13 = &BitMapHeader->Buffer[-v9];
    if ( v7 - v6 + 1 < NumberToFind )
    {
      v14 = -1;
      goto LABEL_33;
    }
    v15 = v11 - NumberToFind + 1;
    v16 = (char *)&v13[2 * ((unsigned __int64)v12 >> 6)];
    v17 = ((1LL << (v12 & 0x3F)) - 1) | ~*(_QWORD *)v16;
    v18 = &v13[2 * ((unsigned __int64)v15 >> 6)];
    if ( NumberToFind > 0x7F )
    {
      if ( (v15 & 0x3F) != 0 )
        v18 += 2;
      if ( v17 )
      {
        v16 += 8;
        if ( *(_QWORD *)v16 != -1LL )
          goto LABEL_18;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v21, v17);
        if ( v20 )
          v19 = 64;
        else
          v19 = 63 - v21;
      }
      else
      {
        v19 = 0;
      }
LABEL_23:
      v14 = ((unsigned int)((v16 - (char *)v13) >> 3) << 6) - v19;
      if ( v14 <= v15 )
      {
        v23 = NumberToFind - v19;
        v24 = &v16[8 * ((unsigned __int64)(NumberToFind - v19) >> 6)];
        while ( 1 )
        {
          v16 += 8;
          if ( v16 == v24 )
            break;
          if ( *(_QWORD *)v16 != -1LL )
            goto LABEL_18;
        }
        v25 = v23 & 0x3F;
        if ( !v25 )
          goto LABEL_31;
        v20 = !_BitScanForward64((unsigned __int64 *)&v26, ~*(_QWORD *)v16);
        if ( v20 )
          LODWORD(v26) = 64;
        if ( (unsigned int)v26 >= v25 )
          goto LABEL_31;
LABEL_18:
        while ( v16 <= (char *)v18 )
        {
          v16 += 8;
          if ( *(_QWORD *)v16 == -1LL )
          {
            v20 = !_BitScanReverse64((unsigned __int64 *)&v22, ~*((_QWORD *)v16 - 1));
            if ( v20 )
              v19 = 64;
            else
              v19 = 63 - v22;
            goto LABEL_23;
          }
        }
      }
LABEL_76:
      v14 = -1;
      goto LABEL_32;
    }
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( (v17 & 0x8000000000000000uLL) != 0 )
          {
            v16 += 8;
            if ( v16 > (char *)v18 )
              goto LABEL_76;
            v17 = ~*(_QWORD *)v16;
          }
          v20 = !_BitScanReverse64((unsigned __int64 *)&v33, v17);
          if ( v20 )
            v34 = 64;
          else
            v34 = 63 - v33;
          v14 = (((unsigned int)((v16 - (char *)v13) >> 3) + 1) << 6) - v34;
          if ( v14 > v15 )
            goto LABEL_76;
          v35 = NumberToFind - v34;
          if ( NumberToFind == v34 )
            goto LABEL_31;
          v16 += 8;
          v17 = ~*(_QWORD *)v16;
          if ( v35 >= 0x40 )
            break;
LABEL_64:
          v20 = !_BitScanForward64((unsigned __int64 *)&v36, v17);
          if ( v20 )
            LODWORD(v36) = 64;
          if ( (unsigned int)v36 >= v35 )
            goto LABEL_31;
        }
        if ( *(_QWORD *)v16 == -1LL )
        {
          v35 -= 64;
          if ( !v35 )
            goto LABEL_31;
          v16 += 8;
          v17 = ~*(_QWORD *)v16;
          goto LABEL_64;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v28 = 0;
      v29 = &v13[2 * ((unsigned __int64)v11 >> 6)];
      while ( v17 != -1LL )
      {
LABEL_44:
        v20 = !_BitScanForward64((unsigned __int64 *)&v30, v17);
        if ( v20 )
          LODWORD(v30) = 64;
        if ( (int)v30 + v28 >= NumberToFind )
        {
          LODWORD(v32) = -v28;
LABEL_74:
          v14 = ((unsigned int)((v16 - (char *)v13) >> 3) << 6) + v32;
          v38 = v14 <= v15;
          goto LABEL_75;
        }
        v31 = NumberToFind;
        v32 = ~v17;
        while ( 1 )
        {
          v32 &= v32 >> (v31 >> 1);
          if ( !v32 )
            break;
          v31 -= v31 >> 1;
          if ( v31 <= 1 )
          {
            _BitScanForward64(&v32, v32);
            goto LABEL_74;
          }
        }
        if ( v16 == (char *)v29 )
          goto LABEL_76;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v37, v17);
        if ( v20 )
          v28 = 64;
        else
          v28 = 63 - v37;
        v16 += 8;
        v17 = ~*(_QWORD *)v16;
      }
      while ( 1 )
      {
        v16 += 8;
        if ( v16 > (char *)v18 )
          goto LABEL_76;
        v17 = ~*(_QWORD *)v16;
        if ( *(_QWORD *)v16 )
        {
          v28 = 0;
          goto LABEL_44;
        }
      }
    }
    while ( v17 == -1LL )
    {
      v16 += 8;
      if ( v16 > (char *)v18 )
        goto LABEL_76;
      v17 = ~*(_QWORD *)v16;
    }
    _BitScanForward64(&v39, ~v17);
    v14 = v39 + ((unsigned int)((v16 - (char *)v13) >> 3) << 6);
    v38 = v14 <= v15;
LABEL_75:
    if ( !v38 )
      goto LABEL_76;
LABEL_31:
    if ( v14 != -1 )
      break;
LABEL_32:
    HintIndex = v42;
LABEL_33:
    if ( !v6 )
      goto LABEL_82;
    v9 = v41;
    v27 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v27 = SizeOfBitMap;
    v7 = v27 - 1;
    v6 = 0;
  }
  v14 -= v10;
LABEL_82:
  v8 = v14;
LABEL_83:
  if ( v8 != -1 )
    RtlClearBits(BitMapHeader, v8, NumberToFind);
  return v8;
}
