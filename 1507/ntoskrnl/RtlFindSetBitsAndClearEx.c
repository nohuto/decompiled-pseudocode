/*
 * XREFs of RtlFindSetBitsAndClearEx @ 0x1400FC974
 * Callers:
 *     MiReplaceUltraBit @ 0x1400FC6D4 (MiReplaceUltraBit.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14003ED80 (RtlClearBitsEx.c)
 */

ULONG64 __cdecl RtlFindSetBitsAndClearEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  ULONG64 SizeOfBitMap; // r15
  PRTL_BITMAP_EX v4; // r12
  unsigned __int64 *Buffer; // rcx
  ULONG64 v8; // rbx
  ULONG64 v9; // r9
  ULONG64 v10; // r10
  unsigned __int64 *v11; // r14
  ULONG64 v12; // rbp
  unsigned __int64 *v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 *v15; // rsi
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v21; // rdx
  unsigned __int64 *v22; // rdi
  bool v23; // zf
  __int64 v24; // rcx
  unsigned int v25; // r10d
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  ULONG64 v28; // r9
  __int64 v29; // rdx
  unsigned int v30; // ecx
  unsigned __int64 *v31; // r9
  __int64 v32; // rcx
  ULONG64 v33; // r10
  __int64 v34; // rcx
  unsigned int v35; // r9d
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 *v39; // [rsp+68h] [rbp+10h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = BitMapHeader;
  Buffer = BitMapHeader->Buffer;
  v39 = Buffer;
  v8 = HintIndex & -(__int64)(HintIndex < SizeOfBitMap);
  v9 = SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    while ( 1 )
    {
      v10 = v9;
      v11 = Buffer;
      if ( v9 - v8 + 1 >= NumberToFind )
        break;
      v18 = -1LL;
LABEL_35:
      if ( !v8 )
        goto LABEL_12;
      v28 = NumberToFind + HintIndex;
      v8 = 0LL;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v28 = SizeOfBitMap;
      v9 = v28 - 1;
    }
    v12 = v9 - NumberToFind + 1;
    v13 = &Buffer[v8 >> 6];
    v14 = ((1LL << (v8 & 0x3F)) - 1) | ~*v13;
    v15 = &Buffer[(v10 - NumberToFind + 1) >> 6];
    if ( NumberToFind > 0x7F )
    {
      if ( (v12 & 0x3F) != 0 )
        ++v15;
      if ( !v14 )
      {
        v30 = 0;
        goto LABEL_49;
      }
      if ( *++v13 == -1LL )
      {
        v23 = !_BitScanReverse64((unsigned __int64 *)&v37, v14);
        if ( v23 )
          goto LABEL_79;
        v30 = 63 - v37;
        goto LABEL_49;
      }
LABEL_45:
      while ( v13 <= v15 )
      {
        if ( *++v13 == -1LL )
        {
          v23 = !_BitScanReverse64((unsigned __int64 *)&v29, ~*(v13 - 1));
          if ( v23 )
LABEL_79:
            v30 = 64;
          else
            v30 = 63 - v29;
LABEL_49:
          v18 = ((v13 - v11) << 6) - v30;
          if ( v18 > v12 )
            goto LABEL_33;
          v31 = &v13[(NumberToFind - v30) >> 6];
          while ( ++v13 != v31 )
          {
            if ( *v13 != -1LL )
              goto LABEL_45;
          }
          v35 = (NumberToFind - v30) & 0x3F;
          if ( !v35 )
            goto LABEL_11;
          v23 = !_BitScanForward64((unsigned __int64 *)&v36, ~*v13);
          if ( v23 )
            LODWORD(v36) = 64;
          if ( (unsigned int)v36 >= v35 )
            goto LABEL_11;
        }
      }
      goto LABEL_33;
    }
    v16 = 64;
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind <= 1 )
      {
        while ( v14 == -1LL )
        {
          if ( ++v13 > v15 )
            goto LABEL_40;
          v14 = ~*v13;
        }
        _BitScanForward64(&v17, ~v14);
        v18 = v17 + ((v13 - Buffer) << 6);
LABEL_10:
        if ( v18 > v12 )
        {
LABEL_40:
          v18 = -1LL;
        }
        else
        {
LABEL_11:
          if ( v18 != -1LL )
          {
LABEL_12:
            v4 = BitMapHeader;
            v19 = v18;
            goto LABEL_13;
          }
        }
LABEL_34:
        Buffer = v39;
        goto LABEL_35;
      }
      v21 = 0LL;
      v22 = &Buffer[v10 >> 6];
      while ( v14 != -1LL )
      {
LABEL_18:
        v23 = !_BitScanForward64((unsigned __int64 *)&v24, v14);
        if ( v23 )
          LODWORD(v24) = 64;
        if ( (unsigned int)(v21 + v24) >= NumberToFind )
        {
          v26 = -v21;
LABEL_25:
          v18 = ((v13 - v11) << 6) + v26;
          goto LABEL_10;
        }
        v25 = NumberToFind;
        v26 = ~v14;
        while ( 1 )
        {
          v26 &= v26 >> (v25 >> 1);
          if ( !v26 )
            break;
          v25 -= v25 >> 1;
          if ( v25 <= 1 )
          {
            _BitScanForward64(&v26, v26);
            goto LABEL_25;
          }
        }
        if ( v13 == v22 )
          goto LABEL_33;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v27, v14);
        if ( v23 )
          v21 = 64LL;
        else
          v21 = (unsigned int)(63 - v27);
        v14 = ~*++v13;
      }
      while ( ++v13 <= v15 )
      {
        v14 = ~*v13;
        if ( *v13 )
        {
          v21 = 0LL;
          goto LABEL_18;
        }
      }
LABEL_33:
      v18 = -1LL;
      goto LABEL_34;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( (v14 & 0x8000000000000000uLL) != 0 )
        {
          if ( ++v13 > v15 )
            goto LABEL_40;
          v14 = ~*v13;
        }
        v23 = !_BitScanReverse64((unsigned __int64 *)&v32, v14);
        if ( !v23 )
          v16 = 63 - v32;
        v18 = ((v13 - v11 + 1) << 6) - v16;
        if ( v18 > v12 )
          goto LABEL_40;
        v33 = NumberToFind - v16;
        if ( NumberToFind == v16 )
          goto LABEL_11;
        ++v13;
        v16 = 64;
        v14 = ~*v13;
        if ( v33 >= 0x40 )
          break;
LABEL_62:
        v23 = !_BitScanForward64((unsigned __int64 *)&v34, v14);
        if ( v23 )
          LODWORD(v34) = 64;
        if ( (unsigned int)v34 >= v33 )
          goto LABEL_11;
        v16 = 64;
      }
      if ( *v13 == -1LL )
      {
        v33 -= 64LL;
        if ( !v33 )
          goto LABEL_11;
        v14 = ~*++v13;
        goto LABEL_62;
      }
    }
  }
  v19 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v19 != -1LL )
    RtlClearBitsEx((__int64)v4, v19, NumberToFind);
  return v19;
}
