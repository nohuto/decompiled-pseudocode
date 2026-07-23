/*
 * XREFs of IopConnectInterrupt @ 0x140503334
 * Callers:
 *     IopConnectLineBasedInterrupt @ 0x140502B18 (IopConnectLineBasedInterrupt.c)
 *     IoConnectInterruptEx @ 0x140502D88 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x140503004 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x14054625C (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     KeGetProcessorIndexFromNumber @ 0x14009D720 (KeGetProcessorIndexFromNumber.c)
 *     KeFreeInterrupt @ 0x140115A8C (KeFreeInterrupt.c)
 *     KeInitializeInterruptEx @ 0x1401225A0 (KeInitializeInterruptEx.c)
 *     KeAllocateInterrupt @ 0x1401226DC (KeAllocateInterrupt.c)
 *     KeConnectInterrupt @ 0x140122784 (KeConnectInterrupt.c)
 *     KeVerifyGroupAffinity @ 0x1401230CC (KeVerifyGroupAffinity.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140143840 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopDestroyActiveConnectBlock @ 0x1405036E8 (IopDestroyActiveConnectBlock.c)
 *     IopReleaseActiveConnectLock @ 0x1405037D4 (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x1405037E8 (IopAcquireActiveConnectLock.c)
 *     IopInitializeActiveConnectBlock @ 0x1405037FC (IopInitializeActiveConnectBlock.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140602CC8 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x140602DF8 (IopDestroyPassiveInterruptBlock.c)
 */

__int64 __fastcall IopConnectInterrupt(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __m128i v11; // xmm0
  int v12; // r13d
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  char *PoolWithTag; // rax
  char *v16; // rdi
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __m128i v19; // xmm0
  unsigned __int16 v20; // ax
  char v21; // r13
  unsigned __int8 v22; // bl
  int v23; // ebx
  _OWORD *v24; // rax
  _OWORD *v25; // rcx
  __int64 v26; // rdx
  __int128 v27; // xmm1
  PSLIST_ENTRY Interrupt; // rax
  __int64 v30; // rax
  _SLIST_ENTRY **v31; // r14
  __int64 v32; // [rsp+70h] [rbp-98h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v34; // [rsp+8Ch] [rbp-7Ch]
  int v35; // [rsp+90h] [rbp-78h]
  ULONG ProcessorIndexFromNumber; // [rsp+94h] [rbp-74h]
  __m128i v37; // [rsp+98h] [rbp-70h] BYREF
  char *v38; // [rsp+A8h] [rbp-60h]
  _DWORD *v39; // [rsp+B0h] [rbp-58h]
  __int64 v40; // [rsp+B8h] [rbp-50h]
  _BYTE v41[144]; // [rsp+C8h] [rbp-40h] BYREF
  char v46; // [rsp+1A8h] [rbp+A0h]
  char v47; // [rsp+1B0h] [rbp+A8h]

  *a1 = 0LL;
  v46 = 0;
  v38 = 0LL;
  IopInitializeActiveConnectBlock(a10, v41);
  v11 = *(__m128i *)(a10 + 32);
  v12 = *(_DWORD *)(a10 + 24);
  v34 = *(_DWORD *)(a10 + 12);
  v37 = v11;
  v35 = v12;
  v13 = qword_1403825B8[(unsigned __int16)_mm_extract_epi16(v11, 4)] & v11.m128i_i64[0];
  v47 = *(_BYTE *)(a10 + 16);
  v37.m128i_i64[0] = v13;
  if ( !*(_DWORD *)(a10 + 8) && !off_1402D27F0() && (unsigned int)(*(_DWORD *)(a10 + 20) - 3) <= 1 )
  {
    v46 = 1;
    v12 = 0;
    v35 = 0;
  }
  if ( KeVerifyGroupAffinity((__int64)&v37, 0)
    && (v14 = (0x101010101010101LL
             * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
               + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
        (_BYTE)v14) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * (char)v14 + 464), 0x6E696F49u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)(8 * (char)v14 + 464));
      KeInitializeDpc((PRKDPC)(v16 + 400), 0LL, 0LL);
      v17 = (__int64)v16;
      *((_OWORD *)v16 + 1) = *(_OWORD *)a10;
      *((_OWORD *)v16 + 2) = *(_OWORD *)(a10 + 16);
      if ( a6 )
        v17 = a6;
      v18 = *(_OWORD *)(a10 + 32);
      v40 = v17;
      *((_OWORD *)v16 + 3) = v18;
      *((_OWORD *)v16 + 4) = *(_OWORD *)(a10 + 48);
      *((_OWORD *)v16 + 5) = *(_OWORD *)(a10 + 64);
      v19 = v37;
      *((_OWORD *)v16 + 6) = *(_OWORD *)(a10 + 80);
      *((_DWORD *)v16 + 10) = v12;
      *((__m128i *)v16 + 3) = v19;
      v16[368] = a7 == 0;
      if ( !a7 )
        v38 = v16 + 376;
      v20 = v37.m128i_u16[4];
      v21 = 0;
      v22 = 0;
      *((_QWORD *)v16 + 1) = v13;
      ProcNumber.Group = v20;
      for ( ProcNumber.Reserved = 0; v21 < (char)v14; ++v22 )
      {
        if ( _bittest64((const __int64 *)&v13, v22) )
        {
          ProcNumber.Number = v22;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          Interrupt = KeAllocateInterrupt((_SLIST_HEADER *)KiProcessorBlock[ProcessorIndexFromNumber]);
          v39 = Interrupt;
          if ( !Interrupt )
          {
            v23 = -1073741670;
            goto LABEL_27;
          }
          memset(Interrupt, 0, 0x100uLL);
          KeInitializeInterruptEx(
            v39,
            a2,
            a3,
            a4,
            a5,
            v40,
            (__int64)v38,
            v34,
            v47,
            a7,
            v35,
            a8,
            ProcessorIndexFromNumber,
            v32,
            v46,
            (__int64)(v16 + 16));
          v30 = v21++;
          *(_QWORD *)&v16[8 * v30 + 464] = v39;
        }
      }
      if ( !a7 )
      {
        v23 = IopAllocatePassiveInterruptBlock(v16 + 16, &v37);
        if ( v23 < 0 )
          goto LABEL_27;
      }
      IopAcquireActiveConnectLock(v41);
      v23 = KeConnectInterrupt((__int64 *)v16 + 58, v14, (__int64)(v16 + 16));
      IopReleaseActiveConnectLock(v41);
      if ( v23 < 0 )
      {
        if ( !a7 )
          IopDestroyPassiveInterruptBlock(v34);
      }
      else
      {
        v24 = (_OWORD *)*((_QWORD *)v16 + 58);
        v25 = v16 + 112;
        v26 = 2LL;
        do
        {
          *v25 = *v24;
          v25[1] = v24[1];
          v25[2] = v24[2];
          v25[3] = v24[3];
          v25[4] = v24[4];
          v25[5] = v24[5];
          v25[6] = v24[6];
          v25 += 8;
          v27 = v24[7];
          v24 += 8;
          *(v25 - 1) = v27;
          --v26;
        }
        while ( v26 );
        v23 = 0;
        *a1 = v16;
      }
      if ( v23 < 0 )
      {
LABEL_27:
        if ( (char)v14 > 0 )
        {
          v31 = (_SLIST_ENTRY **)(v16 + 464);
          do
          {
            if ( *v31 )
              KeFreeInterrupt(*v31);
            ++v31;
            --v14;
          }
          while ( v14 );
        }
        ExFreePoolWithTag(v16, 0x6E696F49u);
      }
    }
    else
    {
      v23 = -1073741670;
    }
  }
  else
  {
    v23 = -1073741811;
  }
  IopDestroyActiveConnectBlock(v41);
  return (unsigned int)v23;
}
