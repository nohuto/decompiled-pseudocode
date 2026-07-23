/*
 * XREFs of RtlFindClearBitsAndSet @ 0x14007CB88
 * Callers:
 *     MiObtainSessionVa @ 0x1400A22A4 (MiObtainSessionVa.c)
 *     BgpFwReserveAllocate @ 0x140129CB8 (BgpFwReserveAllocate.c)
 *     MiAssignSharedUserRanges @ 0x14013D710 (MiAssignSharedUserRanges.c)
 *     MiGetUltraHugeAlreadyActive @ 0x1401412D0 (MiGetUltraHugeAlreadyActive.c)
 *     SepAddLuidToIndexEntry @ 0x14046D1AC (SepAddLuidToIndexEntry.c)
 *     MiObtainRelocationBits @ 0x14046D704 (MiObtainRelocationBits.c)
 *     SepGetLowBoxNumberEntry @ 0x140475ACC (SepGetLowBoxNumberEntry.c)
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 *     PspStorageAllocSlot @ 0x1405524D8 (PspStorageAllocSlot.c)
 *     MiAllocatePartitionId @ 0x140659A1C (MiAllocatePartitionId.c)
 *     TtmiCreateTerminal @ 0x140677844 (TtmiCreateTerminal.c)
 *     ViAllocateFromContiguousMemory @ 0x140708768 (ViAllocateFromContiguousMemory.c)
 *     MiAssignSessionRanges @ 0x1407AAAD8 (MiAssignSessionRanges.c)
 *     MiAssignSystemVa @ 0x1407AAFAC (MiAssignSystemVa.c)
 * Callees:
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
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
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  bool v20; // cc
  ULONG v21; // ebx
  int v23; // ecx
  unsigned __int64 *v24; // rdi
  bool v25; // zf
  __int64 v26; // rax
  ULONG v27; // r10d
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  ULONG v30; // eax
  __int64 v31; // rax
  int v32; // ecx
  char v33; // r8
  unsigned __int64 *v34; // rcx
  unsigned int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // r8d
  unsigned int v39; // ecx
  __int64 v40; // rax
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
      v19 = -1;
LABEL_40:
      if ( !v7 )
        goto LABEL_16;
      v9 = v43;
      v30 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v30 = SizeOfBitMap;
      v8 = v30 - 1;
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
      if ( v16 )
      {
        if ( *++v15 )
          goto LABEL_59;
        v25 = !_BitScanReverse64((unsigned __int64 *)&v31, v16);
        if ( v25 )
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
        v19 = ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6) - v32;
        if ( v19 > v14 )
          goto LABEL_38;
        v33 = NumberToFind - v32;
        v34 = &v15[(unsigned __int64)(NumberToFind - v32) >> 6];
        while ( ++v15 != v34 )
        {
          if ( *v15 )
            goto LABEL_59;
        }
        v35 = v33 & 0x3F;
        if ( !v35 )
          goto LABEL_14;
        v25 = !_BitScanForward64((unsigned __int64 *)&v36, *v15);
        if ( v25 )
          LODWORD(v36) = 64;
        if ( (unsigned int)v36 >= v35 )
          goto LABEL_14;
        do
        {
LABEL_59:
          if ( (unsigned __int64)v15 > v17 )
            goto LABEL_38;
          ++v15;
        }
        while ( *v15 );
        v25 = !_BitScanReverse64((unsigned __int64 *)&v41, *(v15 - 1));
        if ( v25 )
          v32 = 64;
        else
          v32 = 63 - v41;
      }
    }
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v23 = 0;
        v24 = (unsigned __int64 *)&v13[2 * ((unsigned __int64)v11 >> 6)];
        while ( v16 != -1 )
        {
LABEL_22:
          v25 = !_BitScanForward64((unsigned __int64 *)&v26, v16);
          if ( v25 )
            LODWORD(v26) = 64;
          if ( v23 + (int)v26 >= NumberToFind )
          {
            LODWORD(v28) = -v23;
LABEL_29:
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
              goto LABEL_29;
            }
          }
          if ( v15 == v24 )
            goto LABEL_38;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v29, v16);
          if ( v25 )
            v23 = 64;
          else
            v23 = 63 - v29;
          v16 = *++v15;
        }
        while ( (unsigned __int64)++v15 <= v17 )
        {
          v16 = *v15;
          if ( *v15 != -1LL )
          {
            v23 = 0;
            goto LABEL_22;
          }
        }
      }
      else
      {
        while ( v16 == -1 )
        {
          if ( (unsigned __int64)++v15 > v17 )
            goto LABEL_38;
          v16 = *v15;
        }
        _BitScanForward64(&v18, ~v16);
        v19 = v18 + ((unsigned int)(((char *)v15 - (char *)v13) >> 3) << 6);
        v20 = v19 <= v14;
LABEL_13:
        if ( v20 )
        {
LABEL_14:
          if ( v19 != -1 )
          {
            v19 -= v10;
LABEL_16:
            v21 = v19;
            goto LABEL_17;
          }
          goto LABEL_39;
        }
      }
LABEL_38:
      v19 = -1;
LABEL_39:
      Buffer = v42;
      HintIndex = v44;
      goto LABEL_40;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v16 < 0 )
        {
          if ( (unsigned __int64)++v15 > v17 )
            goto LABEL_38;
          v16 = *v15;
        }
        v25 = !_BitScanReverse64((unsigned __int64 *)&v37, v16);
        if ( v25 )
          v38 = 64;
        else
          v38 = 63 - v37;
        v19 = (((unsigned int)(((char *)v15 - (char *)v13) >> 3) + 1) << 6) - v38;
        if ( v19 > v14 )
          goto LABEL_38;
        v39 = NumberToFind - v38;
        if ( NumberToFind == v38 )
          goto LABEL_14;
        v16 = *++v15;
        if ( v39 >= 0x40 )
          break;
LABEL_70:
        v25 = !_BitScanForward64((unsigned __int64 *)&v40, v16);
        if ( v25 )
          LODWORD(v40) = 64;
        if ( (unsigned int)v40 >= v39 )
          goto LABEL_14;
      }
      if ( !v16 )
      {
        v39 -= 64;
        if ( !v39 )
          goto LABEL_14;
        v16 = *++v15;
        goto LABEL_70;
      }
    }
  }
  v21 = v7 & 0xFFFFFFF8;
LABEL_17:
  if ( v21 != -1 )
    RtlSetBits(BitMapHeader, v21, NumberToFind);
  return v21;
}
