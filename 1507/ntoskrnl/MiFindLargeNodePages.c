/*
 * XREFs of MiFindLargeNodePages @ 0x140214640
 * Callers:
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 * Callees:
 *     MiUnlinkNodeLargePage @ 0x1401023B8 (MiUnlinkNodeLargePage.c)
 *     MiSetPfnOwnedAndActive @ 0x1401225E4 (MiSetPfnOwnedAndActive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiFindLargeNodePages(__int64 a1, unsigned int a2, int a3, unsigned __int64 *a4)
{
  unsigned int v4; // edi
  unsigned __int16 *v7; // rsi
  unsigned __int16 *v8; // r15
  char v9; // cl
  __int64 DemandZeroPte; // rbx
  unsigned int v11; // edi
  int v12; // ebp
  unsigned int v13; // edx
  __int64 v14; // r10
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r15
  __int64 v17; // r11
  volatile signed __int32 *v18; // r8
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v22; // edi
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // r14
  unsigned int v26; // ebp
  int v27; // r12d
  unsigned __int8 CurrentIrql; // r13
  unsigned int v29; // esi

  v4 = a2;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
  {
    v4 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 23524);
    v7 = (unsigned __int16 *)((char *)qword_14034EB68 + 2 * v4 * (unsigned __int16)KeNumberNodes);
    v8 = &v7[(unsigned __int16)KeNumberNodes];
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
  }
  v9 = byte_14034EB89;
  DemandZeroPte = 0LL;
  v11 = v4 << byte_14034EB89;
  v12 = a3 & 1;
  while ( 1 )
  {
    v13 = v11 >> v9;
    if ( v12 )
    {
      if ( MiUnlinkNodeLargePage(a1, v13, 4u, 1) )
        goto LABEL_7;
    }
    else
    {
      v14 = MiUnlinkNodeLargePage(a1, v13, 4u, 0);
      if ( v14 )
        goto LABEL_8;
    }
    v20 = v11 >> byte_14034EB89;
    if ( !v12 )
      break;
    v14 = MiUnlinkNodeLargePage(a1, v20, 4u, 0);
    if ( v14 )
      goto LABEL_8;
LABEL_15:
    if ( !v7 )
      return 3221225495LL;
    if ( ++v7 == v8 )
      return 3221225495LL;
    v9 = byte_14034EB89;
    v11 = *v7 << byte_14034EB89;
  }
  if ( !MiUnlinkNodeLargePage(a1, v20, 4u, 1) )
    goto LABEL_15;
LABEL_7:
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
LABEL_8:
  LOBYTE(v15) = 1;
  v16 = (v14 + 0x58000000000LL) / 48;
  v17 = (v16 >> 9) & 0x1F;
  v18 = (volatile signed __int32 *)(qword_14034FBA8[0] + 4 * (v16 >> 14));
  if ( (unsigned __int64)(v17 + 1) <= 0x20 )
  {
    v19 = 1 << v17;
    goto LABEL_25;
  }
  if ( !v17 )
    goto LABEL_24;
  v22 = (v16 >> 9) & 0x1F;
  _InterlockedOr(v18++, ((1 << (32 - v22)) - 1) << v17);
  v15 = 1LL - (unsigned int)(32 - v22);
  if ( v15 >= 0x20 )
  {
    v23 = v15 >> 5;
    v15 += -32LL * (v15 >> 5);
    do
    {
      *v18++ = -1;
      --v23;
    }
    while ( v23 );
  }
  if ( v15 )
  {
LABEL_24:
    v19 = (1 << v15) - 1;
LABEL_25:
    _InterlockedOr(v18, v19);
  }
  v24 = v14 + 24;
  v25 = 512LL;
  v26 = ((a3 & 0x200000) != 0) + 1;
  v27 = a3 & 0x40000000;
  do
  {
    *(_QWORD *)(v24 - 8) = DemandZeroPte;
    if ( v27 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v24, 0x3FuLL) )
      {
        do
        {
          if ( (++v29 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v29);
        }
        while ( *(__int64 *)v24 < 0 );
      }
      *(_QWORD *)(v24 + 16) &= 0xFFFFFFF000000000uLL;
      *(_BYTE *)(v24 + 10) = *(_BYTE *)(v24 + 10) & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)v24, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
    else
    {
      *(_QWORD *)(v24 - 24) = 0LL;
      *(_QWORD *)(v24 + 16) &= ~0x200000000000000uLL;
      MiSetPfnOwnedAndActive(v24 - 24, -8LL, 1u, v26);
    }
    v24 += 48LL;
    --v25;
  }
  while ( v25 );
  *a4 = v16;
  return 0LL;
}
