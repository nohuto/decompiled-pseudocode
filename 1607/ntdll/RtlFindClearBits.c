/*
 * XREFs of RtlFindClearBits @ 0x1800E3B60
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
  unsigned int v10; // edx
  int v11; // r15d
  unsigned int v12; // r10d
  ULONG v13; // ecx
  unsigned int *v14; // r14
  ULONG v15; // ecx
  ULONG v16; // ebp
  unsigned __int64 *v17; // r9
  __int64 v18; // r8
  unsigned __int64 v19; // rsi
  int v20; // edx
  bool v21; // zf
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  char v24; // dl
  unsigned __int64 *v25; // r8
  unsigned int v26; // edx
  __int64 v27; // rax
  ULONG v28; // eax
  int v29; // ecx
  unsigned __int64 *v30; // rbx
  __int64 v31; // rax
  ULONG v32; // r10d
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // r8d
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rax
  bool v40; // cc
  unsigned __int64 v41; // rax
  unsigned int *v43; // [rsp+38h] [rbp+8h]
  unsigned int v44; // [rsp+40h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  Buffer = BitMapHeader->Buffer;
  v43 = Buffer;
  if ( !NumberToFind )
    return v6 & 0xFFFFFFF8;
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
  v44 = v10;
  while ( 1 )
  {
    v12 = v11 + v7;
    v13 = v11 + v6;
    v14 = &Buffer[-v10];
    if ( v7 - v6 + 1 < NumberToFind )
    {
      v15 = -1;
      goto LABEL_32;
    }
    v16 = v12 - NumberToFind + 1;
    v17 = (unsigned __int64 *)&v14[2 * ((unsigned __int64)v13 >> 6)];
    v18 = ((1LL << (v13 & 0x3F)) - 1) | *v17;
    v19 = (unsigned __int64)&v14[2 * ((unsigned __int64)v16 >> 6)];
    if ( NumberToFind > 0x7F )
    {
      if ( (v16 & 0x3F) != 0 )
        v19 += 8LL;
      if ( v18 )
      {
        if ( *++v17 )
          goto LABEL_17;
        v21 = !_BitScanReverse64((unsigned __int64 *)&v22, v18);
        if ( v21 )
          v20 = 64;
        else
LABEL_21:
          v20 = 63 - v22;
      }
      else
      {
        v20 = 0;
      }
LABEL_22:
      v15 = ((unsigned int)(((char *)v17 - (char *)v14) >> 3) << 6) - v20;
      if ( v15 <= v16 )
      {
        v23 = NumberToFind - v20;
        v24 = NumberToFind - v20;
        v25 = &v17[v23 >> 6];
        while ( ++v17 != v25 )
        {
          if ( *v17 )
            goto LABEL_17;
        }
        v26 = v24 & 0x3F;
        if ( !v26 )
          goto LABEL_30;
        v21 = !_BitScanForward64((unsigned __int64 *)&v27, *v17);
        if ( v21 )
          LODWORD(v27) = 64;
        if ( (unsigned int)v27 >= v26 )
          goto LABEL_30;
LABEL_17:
        while ( (unsigned __int64)v17 <= v19 )
        {
          if ( !*++v17 )
          {
            v21 = !_BitScanReverse64((unsigned __int64 *)&v22, *(v17 - 1));
            if ( !v21 )
              goto LABEL_21;
            v20 = 64;
            goto LABEL_22;
          }
        }
      }
LABEL_72:
      v15 = -1;
      goto LABEL_31;
    }
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            if ( (unsigned __int64)++v17 > v19 )
              goto LABEL_72;
            v18 = *v17;
          }
          v21 = !_BitScanReverse64((unsigned __int64 *)&v35, v18);
          if ( v21 )
            v36 = 64;
          else
            v36 = 63 - v35;
          v15 = (((unsigned int)(((char *)v17 - (char *)v14) >> 3) + 1) << 6) - v36;
          if ( v15 > v16 )
            goto LABEL_72;
          v37 = NumberToFind - v36;
          if ( NumberToFind == v36 )
            goto LABEL_30;
          v18 = *++v17;
          if ( v37 >= 0x40 )
            break;
LABEL_63:
          v21 = !_BitScanForward64((unsigned __int64 *)&v38, v18);
          if ( v21 )
            LODWORD(v38) = 64;
          if ( (unsigned int)v38 >= v37 )
            goto LABEL_30;
        }
        if ( !v18 )
        {
          v37 -= 64;
          if ( !v37 )
            goto LABEL_30;
          v18 = *++v17;
          goto LABEL_63;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v29 = 0;
      v30 = (unsigned __int64 *)&v14[2 * ((unsigned __int64)v12 >> 6)];
      while ( v18 != -1 )
      {
LABEL_43:
        v21 = !_BitScanForward64((unsigned __int64 *)&v31, v18);
        if ( v21 )
          LODWORD(v31) = 64;
        if ( v29 + (int)v31 >= NumberToFind )
        {
          LODWORD(v34) = -v29;
LABEL_74:
          v15 = ((unsigned int)(((char *)v17 - (char *)v14) >> 3) << 6) + v34;
          v40 = v15 <= v16;
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
            _BitScanForward64((unsigned __int64 *)&v34, v33);
            goto LABEL_74;
          }
        }
        if ( v17 == v30 )
          goto LABEL_72;
        v21 = !_BitScanReverse64((unsigned __int64 *)&v39, v18);
        if ( v21 )
          v29 = 64;
        else
          v29 = 63 - v39;
        v18 = *++v17;
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v17 > v19 )
          goto LABEL_72;
        v18 = *v17;
        if ( *v17 != -1LL )
        {
          v29 = 0;
          goto LABEL_43;
        }
      }
    }
    while ( v18 == -1 )
    {
      if ( (unsigned __int64)++v17 > v19 )
        goto LABEL_72;
      v18 = *v17;
    }
    _BitScanForward64(&v41, ~v18);
    v15 = v41 + ((unsigned int)(((char *)v17 - (char *)v14) >> 3) << 6);
    v40 = v15 <= v16;
LABEL_75:
    if ( !v40 )
      goto LABEL_72;
LABEL_30:
    if ( v15 != -1 )
      break;
LABEL_31:
    Buffer = v43;
    v10 = v44;
LABEL_32:
    if ( !v6 )
      return v15;
    v28 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v28 = SizeOfBitMap;
    v7 = v28 - 1;
    v6 = 0;
  }
  v15 -= v11;
  return v15;
}
