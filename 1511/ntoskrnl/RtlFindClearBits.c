/*
 * XREFs of RtlFindClearBits @ 0x1400A0FD0
 * Callers:
 *     MiSelectRelocationStartHint @ 0x1403C6B04 (MiSelectRelocationStartHint.c)
 *     MiFindEmptyAddressRange @ 0x14047A1A0 (MiFindEmptyAddressRange.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  unsigned int *Buffer; // r15
  ULONG v5; // ebp
  unsigned int v8; // r9d
  __int64 v9; // rax
  int v10; // esi
  unsigned int v11; // r10d
  ULONG v12; // ecx
  unsigned int *v13; // r14
  ULONG v14; // r11d
  unsigned __int64 v15; // r9
  unsigned __int64 *v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  ULONG v19; // r10d
  int v21; // edx
  unsigned __int64 *v22; // rdi
  bool v23; // zf
  __int64 v24; // rcx
  ULONG v25; // r10d
  unsigned __int64 v26; // r11
  __int64 v27; // r10
  __int64 v28; // rcx
  ULONG v29; // r9d
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // edx
  char v33; // r8
  unsigned __int64 *v34; // rdx
  unsigned int v35; // r8d
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  int v40; // edx
  unsigned int v41; // r11d
  __int64 v42; // rdx
  ULONG v43; // [rsp+40h] [rbp+10h]
  unsigned int v44; // [rsp+48h] [rbp+18h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v5 = HintIndex;
  if ( HintIndex >= BitMapHeader->SizeOfBitMap )
    v5 = 0;
  v8 = SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v5 & 0xFFFFFFF8;
  if ( ((unsigned __int8)Buffer & 4) != 0 )
  {
    v9 = 1LL;
    v10 = 32;
  }
  else
  {
    v9 = 0LL;
    v10 = 0;
  }
  v44 = v9;
  while ( 2 )
  {
    v11 = v10 + v8;
    v12 = v10 + v5;
    v13 = &Buffer[-v9];
    if ( v8 - v5 + 1 < NumberToFind )
      goto LABEL_37;
    v14 = v11 - NumberToFind + 1;
    v43 = v14;
    v15 = (unsigned __int64)&v13[2 * ((unsigned __int64)v14 >> 6)];
    v16 = (unsigned __int64 *)&v13[2 * ((unsigned __int64)v12 >> 6)];
    v17 = ((1LL << (v12 & 0x3F)) - 1) | *v16;
    if ( NumberToFind > 0x7F )
    {
      if ( (v14 & 0x3F) != 0 )
        v15 += 8LL;
      if ( v17 )
      {
        v30 = v16[1];
        ++v16;
        if ( v30 )
          goto LABEL_57;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v31, v17);
        if ( v23 )
          v32 = 64;
        else
          v32 = 63 - v31;
      }
      else
      {
        v32 = 0;
      }
      while ( 1 )
      {
        v19 = ((unsigned int)(((char *)v16 - (char *)v13) >> 3) << 6) - v32;
        if ( v19 > v14 )
          goto LABEL_37;
        v33 = NumberToFind - v32;
        v34 = &v16[(unsigned __int64)(NumberToFind - v32) >> 6];
        if ( ++v16 == v34 )
        {
LABEL_53:
          v35 = v33 & 0x3F;
          if ( !v35 )
            goto LABEL_13;
          v23 = !_BitScanForward64((unsigned __int64 *)&v36, *v16);
          if ( v23 )
            LODWORD(v36) = 64;
          if ( (unsigned int)v36 >= v35 )
            goto LABEL_13;
        }
        else
        {
          while ( !*v16 )
          {
            if ( ++v16 == v34 )
              goto LABEL_53;
          }
        }
        do
        {
LABEL_57:
          if ( (unsigned __int64)v16 > v15 )
            goto LABEL_37;
          v37 = v16[1];
          ++v16;
        }
        while ( v37 );
        v23 = !_BitScanReverse64((unsigned __int64 *)&v38, *(v16 - 1));
        if ( v23 )
          v32 = 64;
        else
          v32 = 63 - v38;
      }
    }
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v21 = 0;
        v22 = (unsigned __int64 *)&v13[2 * ((unsigned __int64)v11 >> 6)];
        while ( 1 )
        {
          if ( v17 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v16 > v15 )
                goto LABEL_37;
              v17 = *v16;
              if ( *v16 != -1LL )
              {
                v21 = 0;
                break;
              }
            }
          }
          v23 = !_BitScanForward64((unsigned __int64 *)&v24, v17);
          if ( v23 )
            LODWORD(v24) = 64;
          if ( v21 + (int)v24 >= NumberToFind )
            break;
          v25 = NumberToFind;
          v26 = ~v17;
          while ( 1 )
          {
            v26 &= v26 >> (v25 >> 1);
            if ( !v26 )
              break;
            v25 -= v25 >> 1;
            if ( v25 <= 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v27, v26);
              goto LABEL_25;
            }
          }
          if ( v16 == v22 )
            goto LABEL_37;
          v23 = !_BitScanReverse64((unsigned __int64 *)&v28, v17);
          if ( v23 )
            v21 = 64;
          else
            v21 = 63 - v28;
          v17 = v16[1];
          ++v16;
        }
        LODWORD(v27) = -v21;
LABEL_25:
        v19 = ((unsigned int)(((char *)v16 - (char *)v13) >> 3) << 6) + v27;
        if ( v19 > v43 )
        {
          v19 = -1;
          goto LABEL_38;
        }
      }
      else
      {
        if ( v17 == -1 )
        {
          do
          {
            if ( (unsigned __int64)++v16 > v15 )
              goto LABEL_37;
            v17 = *v16;
          }
          while ( *v16 == -1LL );
        }
        _BitScanForward64(&v18, ~v17);
        v19 = v18 + ((unsigned int)(((char *)v16 - (char *)v13) >> 3) << 6);
        if ( v19 > v14 )
        {
          v19 = -1;
          goto LABEL_38;
        }
      }
LABEL_13:
      if ( v19 == -1 )
        goto LABEL_38;
      v19 -= v10;
      return v19;
    }
    while ( v17 >= 0 )
    {
LABEL_64:
      v23 = !_BitScanReverse64((unsigned __int64 *)&v39, v17);
      if ( v23 )
        v40 = 64;
      else
        v40 = 63 - v39;
      v19 = (((unsigned int)(((char *)v16 - (char *)v13) >> 3) + 1) << 6) - v40;
      if ( v19 > v14 )
        goto LABEL_37;
      v41 = NumberToFind - v40;
      if ( NumberToFind == v40 )
        goto LABEL_13;
      v17 = v16[1];
      ++v16;
      if ( v41 >= 0x40 )
      {
        if ( v17 )
          goto LABEL_62;
        v41 -= 64;
        if ( !v41 )
          goto LABEL_13;
        v17 = v16[1];
        ++v16;
      }
      v23 = !_BitScanForward64((unsigned __int64 *)&v42, v17);
      if ( v23 )
        LODWORD(v42) = 64;
      if ( (unsigned int)v42 >= v41 )
        goto LABEL_13;
LABEL_62:
      v14 = v43;
    }
    while ( (unsigned __int64)++v16 <= v15 )
    {
      v17 = *v16;
      if ( (*v16 & 0x8000000000000000uLL) == 0 )
        goto LABEL_64;
    }
LABEL_37:
    v19 = -1;
LABEL_38:
    if ( v5 )
    {
      v9 = v44;
      v29 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v29 = SizeOfBitMap;
      v8 = v29 - 1;
      v5 = 0;
      continue;
    }
    return v19;
  }
}
