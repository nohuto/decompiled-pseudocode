/*
 * XREFs of RtlFindClearBitsAndSet @ 0x180041400
 * Callers:
 *     LdrpAcquireTlsIndex @ 0x180041140 (LdrpAcquireTlsIndex.c)
 *     RtlFlsAlloc @ 0x180041220 (RtlFlsAlloc.c)
 * Callees:
 *     RtlSetBits @ 0x180041A70 (RtlSetBits.c)
 */

ULONG __cdecl RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v6; // ebx
  unsigned int v7; // eax
  int v8; // edx
  int v9; // r15d
  unsigned int v10; // r10d
  ULONG v11; // ecx
  unsigned int *v12; // r14
  ULONG v13; // ebp
  unsigned __int64 *v14; // r9
  __int64 v15; // r8
  unsigned int *v16; // rsi
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  bool v20; // cc
  ULONG v21; // ebx
  ULONG v23; // eax
  int v24; // edx
  unsigned __int64 *v25; // rdi
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
  int v40; // [rsp+68h] [rbp+10h]
  ULONG v41; // [rsp+70h] [rbp+18h]

  v41 = HintIndex;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    if ( ((__int64)BitMapHeader->Buffer & 4) != 0 )
    {
      v8 = 1;
      v9 = 32;
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    v40 = v8;
    while ( 1 )
    {
      v10 = v9 + v7;
      v11 = v9 + v6;
      v12 = &BitMapHeader->Buffer[-v8];
      if ( v7 - v6 + 1 >= NumberToFind )
        break;
      v19 = -1;
LABEL_23:
      if ( !v6 )
        goto LABEL_16;
      v8 = v40;
      v23 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v23 = SizeOfBitMap;
      v7 = v23 - 1;
      v6 = 0;
    }
    v13 = v10 - NumberToFind + 1;
    v14 = (unsigned __int64 *)&v12[2 * ((unsigned __int64)v11 >> 6)];
    v15 = ((1LL << (v11 & 0x3F)) - 1) | *v14;
    v16 = &v12[2 * ((unsigned __int64)v13 >> 6)];
    if ( NumberToFind > 0x7F )
    {
      if ( (v13 & 0x3F) != 0 )
        v16 += 2;
      if ( v15 )
      {
        if ( *++v14 )
          goto LABEL_80;
        v33 = !_BitScanReverse64((unsigned __int64 *)&v34, v15);
        goto LABEL_63;
      }
      v35 = 0;
      while ( 1 )
      {
        v19 = ((unsigned int)(((char *)v14 - (char *)v12) >> 3) << 6) - v35;
        if ( v19 > v13 )
          goto LABEL_21;
        v36 = NumberToFind - v35;
        v37 = &v14[(unsigned __int64)(NumberToFind - v35) >> 6];
        while ( ++v14 != v37 )
        {
          if ( *v14 )
            goto LABEL_80;
        }
        v38 = v36 & 0x3F;
        if ( !v38 )
          goto LABEL_14;
        v33 = !_BitScanForward64((unsigned __int64 *)&v39, *v14);
        if ( v33 )
          LODWORD(v39) = 64;
        if ( (unsigned int)v39 >= v38 )
          goto LABEL_14;
        do
        {
LABEL_80:
          if ( v14 > (unsigned __int64 *)v16 )
            goto LABEL_21;
          ++v14;
        }
        while ( *v14 );
        v33 = !_BitScanReverse64((unsigned __int64 *)&v34, *(v14 - 1));
LABEL_63:
        if ( v33 )
          v35 = 64;
        else
          v35 = 63 - v34;
      }
    }
    v17 = 64;
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v24 = 0;
        v25 = (unsigned __int64 *)&v12[2 * ((unsigned __int64)v10 >> 6)];
        while ( v15 != -1 )
        {
LABEL_32:
          v33 = !_BitScanForward64((unsigned __int64 *)&v26, v15);
          if ( v33 )
            LODWORD(v26) = 64;
          if ( (int)v26 + v24 >= NumberToFind )
          {
            LODWORD(v28) = -v24;
LABEL_43:
            v19 = ((unsigned int)(((char *)v14 - (char *)v12) >> 3) << 6) + v28;
            v20 = v19 <= v13;
            goto LABEL_13;
          }
          v27 = NumberToFind;
          v28 = ~v15;
          while ( 1 )
          {
            v28 &= v28 >> (v27 >> 1);
            if ( !v28 )
              break;
            v27 -= v27 >> 1;
            if ( v27 <= 1 )
            {
              _BitScanForward64(&v28, v28);
              goto LABEL_43;
            }
          }
          if ( v14 == v25 )
            goto LABEL_21;
          v33 = !_BitScanReverse64((unsigned __int64 *)&v29, v15);
          if ( v33 )
            v24 = 64;
          else
            v24 = 63 - v29;
          v15 = *++v14;
        }
        while ( ++v14 <= (unsigned __int64 *)v16 )
        {
          v15 = *v14;
          if ( *v14 != -1LL )
          {
            v24 = 0;
            goto LABEL_32;
          }
        }
      }
      else
      {
        while ( v15 == -1 )
        {
          if ( ++v14 > (unsigned __int64 *)v16 )
            goto LABEL_21;
          v15 = *v14;
        }
        _BitScanForward64(&v18, ~v15);
        v19 = v18 + ((unsigned int)(((char *)v14 - (char *)v12) >> 3) << 6);
        v20 = v19 <= v13;
LABEL_13:
        if ( v20 )
        {
LABEL_14:
          if ( v19 != -1 )
          {
            v19 -= v9;
LABEL_16:
            v21 = v19;
            goto LABEL_17;
          }
          goto LABEL_22;
        }
      }
LABEL_21:
      v19 = -1;
LABEL_22:
      HintIndex = v41;
      goto LABEL_23;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v15 < 0 )
        {
          if ( ++v14 > (unsigned __int64 *)v16 )
            goto LABEL_21;
          v15 = *v14;
        }
        v33 = !_BitScanReverse64((unsigned __int64 *)&v30, v15);
        if ( !v33 )
          v17 = 63 - v30;
        v19 = (((unsigned int)(((char *)v14 - (char *)v12) >> 3) + 1) << 6) - v17;
        if ( v19 > v13 )
          goto LABEL_21;
        v31 = NumberToFind - v17;
        if ( NumberToFind == v17 )
          goto LABEL_14;
        ++v14;
        v17 = 64;
        v15 = *v14;
        if ( v31 >= 0x40 )
          break;
LABEL_53:
        v33 = !_BitScanForward64((unsigned __int64 *)&v32, v15);
        if ( v33 )
          LODWORD(v32) = 64;
        if ( (unsigned int)v32 >= v31 )
          goto LABEL_14;
        v17 = 64;
      }
      if ( !v15 )
      {
        v31 -= 64;
        if ( !v31 )
          goto LABEL_14;
        v15 = *++v14;
        goto LABEL_53;
      }
    }
  }
  v21 = v6 & 0xFFFFFFF8;
LABEL_17:
  if ( v21 != -1 )
    RtlSetBits(BitMapHeader, v21, NumberToFind);
  return v21;
}
