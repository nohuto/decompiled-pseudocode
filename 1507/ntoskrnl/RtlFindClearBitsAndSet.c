/*
 * XREFs of RtlFindClearBitsAndSet @ 0x14002D488
 * Callers:
 *     MiObtainSessionVa @ 0x140129230 (MiObtainSessionVa.c)
 *     BgpFwReserveAllocate @ 0x140152800 (BgpFwReserveAllocate.c)
 *     SepGetLowBoxNumberEntry @ 0x140411948 (SepGetLowBoxNumberEntry.c)
 *     SepAddLuidToIndexEntry @ 0x14046AD50 (SepAddLuidToIndexEntry.c)
 *     MiObtainRelocationBits @ 0x14046BA68 (MiObtainRelocationBits.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 *     PsRegisterMonitorServerSilo @ 0x1405936B8 (PsRegisterMonitorServerSilo.c)
 *     MiAllocatePartitionId @ 0x1406A3690 (MiAllocatePartitionId.c)
 *     ViAllocateFromContiguousMemory @ 0x14073D1B0 (ViAllocateFromContiguousMemory.c)
 * Callees:
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 */

ULONG __stdcall RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  unsigned int *Buffer; // r9
  ULONG v7; // ebx
  unsigned int v8; // eax
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
  unsigned int v20; // edx
  bool v21; // cc
  ULONG v22; // ebx
  int v24; // edx
  unsigned __int64 *v25; // rdi
  bool v26; // zf
  __int64 v27; // rcx
  ULONG v28; // r10d
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  ULONG v31; // eax
  __int64 v32; // rax
  unsigned int v33; // r10d
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // ecx
  char v37; // r8
  unsigned __int64 *v38; // rcx
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned int *v42; // [rsp+60h] [rbp+8h]
  unsigned int v43; // [rsp+68h] [rbp+10h]
  ULONG v44; // [rsp+70h] [rbp+18h]

  v44 = HintIndex;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v42 = Buffer;
  v7 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( NumberToFind )
  {
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
      v11 = v10 + v8;
      v12 = v10 + v7;
      v13 = &Buffer[-v9];
      if ( v8 - v7 + 1 >= NumberToFind )
        break;
      v20 = -1;
LABEL_39:
      if ( !v7 )
        goto LABEL_16;
      v9 = v43;
      v31 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v31 = SizeOfBitMap;
      v8 = v31 - 1;
      v7 = 0;
    }
    v14 = v11 - NumberToFind + 1;
    v15 = (unsigned __int64 *)&v13[2 * ((unsigned __int64)v12 >> 6)];
    v16 = ((1LL << (v12 & 0x3F)) - 1) | *v15;
    v17 = (unsigned __int64)&v13[2 * ((unsigned __int64)v14 >> 6)];
    if ( NumberToFind > 0x7F )
    {
      if ( (v14 & 0x3F) != 0 )
        v17 += 8LL;
      if ( !v16 )
      {
        v36 = 0;
        goto LABEL_62;
      }
      if ( *++v15 )
        goto LABEL_71;
      v26 = !_BitScanReverse64((unsigned __int64 *)&v35, v16);
      if ( !v26 )
      {
        v36 = 63 - v35;
        goto LABEL_62;
      }
LABEL_82:
      v36 = 64;
LABEL_62:
      while ( 1 )
      {
        v20 = ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6) - v36;
        if ( v20 > v14 )
          goto LABEL_37;
        v37 = NumberToFind - v36;
        v38 = &v15[(unsigned __int64)(NumberToFind - v36) >> 6];
        while ( ++v15 != v38 )
        {
          if ( *v15 )
            goto LABEL_71;
        }
        v39 = v37 & 0x3F;
        if ( !v39 )
          goto LABEL_14;
        v26 = !_BitScanForward64((unsigned __int64 *)&v40, *v15);
        if ( v26 )
          LODWORD(v40) = 64;
        if ( (unsigned int)v40 >= v39 )
          goto LABEL_14;
        do
        {
LABEL_71:
          if ( (unsigned __int64)v15 > v17 )
            goto LABEL_37;
          ++v15;
        }
        while ( *v15 );
        v26 = !_BitScanReverse64((unsigned __int64 *)&v41, *(v15 - 1));
        if ( v26 )
          goto LABEL_82;
        v36 = 63 - v41;
      }
    }
    v18 = 64;
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v24 = 0;
        v25 = (unsigned __int64 *)&v13[2 * ((unsigned __int64)v11 >> 6)];
        while ( v16 != -1 )
        {
LABEL_22:
          v26 = !_BitScanForward64((unsigned __int64 *)&v27, v16);
          if ( v26 )
            LODWORD(v27) = 64;
          if ( (int)v27 + v24 >= NumberToFind )
          {
            LODWORD(v29) = -v24;
LABEL_29:
            v20 = ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6) + v29;
            v21 = v20 <= v14;
            goto LABEL_13;
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
              goto LABEL_29;
            }
          }
          if ( v15 == v25 )
            goto LABEL_37;
          v26 = !_BitScanReverse64((unsigned __int64 *)&v30, v16);
          if ( v26 )
            v24 = 64;
          else
            v24 = 63 - v30;
          v16 = *++v15;
        }
        while ( (unsigned __int64)++v15 <= v17 )
        {
          v16 = *v15;
          if ( *v15 != -1LL )
          {
            v24 = 0;
            goto LABEL_22;
          }
        }
      }
      else
      {
        while ( v16 == -1 )
        {
          if ( (unsigned __int64)++v15 > v17 )
            goto LABEL_37;
          v16 = *v15;
        }
        _BitScanForward64(&v19, ~v16);
        v20 = v19 + ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6);
        v21 = v20 <= v14;
LABEL_13:
        if ( v21 )
        {
LABEL_14:
          if ( v20 != -1 )
          {
            v20 -= v10;
LABEL_16:
            v22 = v20;
            goto LABEL_17;
          }
          goto LABEL_38;
        }
      }
LABEL_37:
      v20 = -1;
LABEL_38:
      Buffer = v42;
      HintIndex = v44;
      goto LABEL_39;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v16 < 0 )
        {
          if ( (unsigned __int64)++v15 > v17 )
            goto LABEL_37;
          v16 = *v15;
        }
        v26 = !_BitScanReverse64((unsigned __int64 *)&v32, v16);
        if ( !v26 )
          v18 = 63 - v32;
        v20 = (((unsigned int)(((char *)v15 - (char *)v13) >> 3) + 1) << 6) - v18;
        if ( v20 > v14 )
          goto LABEL_37;
        v33 = NumberToFind - v18;
        if ( NumberToFind == v18 )
          goto LABEL_14;
        ++v15;
        v18 = 64;
        v16 = *v15;
        if ( v33 >= 0x40 )
          break;
LABEL_52:
        v26 = !_BitScanForward64((unsigned __int64 *)&v34, v16);
        if ( v26 )
          LODWORD(v34) = 64;
        if ( (unsigned int)v34 >= v33 )
          goto LABEL_14;
        v18 = 64;
      }
      if ( !v16 )
      {
        v33 -= 64;
        if ( !v33 )
          goto LABEL_14;
        v16 = *++v15;
        goto LABEL_52;
      }
    }
  }
  v22 = v7 & 0xFFFFFFF8;
LABEL_17:
  if ( v22 != -1 )
    RtlSetBits(BitMapHeader, v22, NumberToFind);
  return v22;
}
