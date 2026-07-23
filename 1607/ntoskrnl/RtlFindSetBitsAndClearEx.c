/*
 * XREFs of RtlFindSetBitsAndClearEx @ 0x14013FF30
 * Callers:
 *     MiGetUltraMapping @ 0x14013FD54 (MiGetUltraMapping.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1400137E8 (RtlClearBitsEx.c)
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
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v20; // rdx
  unsigned __int64 *v21; // rdi
  bool v22; // zf
  __int64 v23; // rax
  unsigned int v24; // r10d
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // eax
  ULONG64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // ecx
  unsigned __int64 *v33; // r9
  unsigned int v34; // r9d
  __int64 v35; // rcx
  __int64 v36; // rax
  ULONG64 v37; // r9
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
      v17 = -1LL;
LABEL_75:
      if ( !v8 )
        goto LABEL_12;
      v37 = NumberToFind + HintIndex;
      v8 = 0LL;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v37 = SizeOfBitMap;
      v9 = v37 - 1;
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
        v32 = 0;
        goto LABEL_59;
      }
      if ( *++v13 == -1LL )
      {
        v22 = !_BitScanReverse64((unsigned __int64 *)&v36, v14);
        if ( v22 )
          v32 = 64;
        else
          v32 = 63 - v36;
        goto LABEL_59;
      }
LABEL_54:
      while ( v13 <= v15 )
      {
        if ( *++v13 == -1LL )
        {
          v22 = !_BitScanReverse64((unsigned __int64 *)&v31, ~*(v13 - 1));
          if ( v22 )
            v32 = 64;
          else
            v32 = 63 - v31;
LABEL_59:
          v17 = ((v13 - v11) << 6) - v32;
          if ( v17 > v12 )
            goto LABEL_33;
          v33 = &v13[(NumberToFind - v32) >> 6];
          while ( ++v13 != v33 )
          {
            if ( *v13 != -1LL )
              goto LABEL_54;
          }
          v34 = ((_BYTE)NumberToFind - (_BYTE)v32) & 0x3F;
          if ( (((_BYTE)NumberToFind - (_BYTE)v32) & 0x3F) == 0 )
            goto LABEL_11;
          v22 = !_BitScanForward64((unsigned __int64 *)&v35, ~*v13);
          if ( v22 )
            LODWORD(v35) = 64;
          if ( (unsigned int)v35 >= v34 )
            goto LABEL_11;
        }
      }
      goto LABEL_33;
    }
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v20 = 0LL;
        v21 = &Buffer[v10 >> 6];
        while ( v14 != -1LL )
        {
LABEL_18:
          v22 = !_BitScanForward64((unsigned __int64 *)&v23, v14);
          if ( v22 )
            LODWORD(v23) = 64;
          if ( (unsigned int)(v20 + v23) >= NumberToFind )
          {
            v25 = -v20;
LABEL_29:
            v17 = ((v13 - Buffer) << 6) + v25;
            goto LABEL_10;
          }
          v24 = NumberToFind;
          v25 = ~v14;
          while ( 1 )
          {
            v25 &= v25 >> (v24 >> 1);
            if ( !v25 )
              break;
            v24 -= v24 >> 1;
            if ( v24 <= 1 )
            {
              _BitScanForward64(&v25, v25);
              goto LABEL_29;
            }
          }
          if ( v13 == v21 )
            goto LABEL_33;
          v22 = !_BitScanReverse64((unsigned __int64 *)&v26, v14);
          if ( v22 )
            v20 = 64LL;
          else
            v20 = (unsigned int)(63 - v26);
          v14 = ~*++v13;
        }
        while ( ++v13 <= v15 )
        {
          v14 = ~*v13;
          if ( *v13 )
          {
            v20 = 0LL;
            goto LABEL_18;
          }
        }
      }
      else
      {
        while ( v14 == -1LL )
        {
          if ( ++v13 > v15 )
            goto LABEL_33;
          v14 = ~*v13;
        }
        _BitScanForward64(&v16, ~v14);
        v17 = v16 + ((v13 - Buffer) << 6);
LABEL_10:
        if ( v17 <= v12 )
        {
LABEL_11:
          if ( v17 != -1LL )
          {
LABEL_12:
            v4 = BitMapHeader;
            v18 = v17;
            goto LABEL_13;
          }
          goto LABEL_34;
        }
      }
LABEL_33:
      v17 = -1LL;
LABEL_34:
      Buffer = v39;
      goto LABEL_75;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( (v14 & 0x8000000000000000uLL) != 0 )
        {
          if ( ++v13 > v15 )
            goto LABEL_33;
          v14 = ~*v13;
        }
        v22 = !_BitScanReverse64((unsigned __int64 *)&v27, v14);
        if ( v22 )
          v28 = 64;
        else
          v28 = 63 - v27;
        v17 = ((v13 - v11 + 1) << 6) - v28;
        if ( v17 > v12 )
          goto LABEL_33;
        v29 = NumberToFind - v28;
        if ( NumberToFind == v28 )
          goto LABEL_11;
        v14 = ~*++v13;
        if ( v29 >= 0x40 )
          break;
LABEL_46:
        v22 = !_BitScanForward64(&v30, v14);
        if ( v22 )
          v30 = 64LL;
        if ( v30 >= v29 )
          goto LABEL_11;
      }
      if ( *v13 == -1LL )
      {
        v29 -= 64LL;
        if ( !v29 )
          goto LABEL_11;
        v14 = ~*++v13;
        goto LABEL_46;
      }
    }
  }
  v18 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v18 != -1LL )
    RtlClearBitsEx((__int64)v4, v18, NumberToFind);
  return v18;
}
