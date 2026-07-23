/*
 * XREFs of IopConnectInterrupt @ 0x14057CE68
 * Callers:
 *     IopConnectLineBasedInterrupt @ 0x14057C66C (IopConnectLineBasedInterrupt.c)
 *     IoConnectInterruptEx @ 0x14057C8D8 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x14057CB44 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x1405BC298 (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x140013C28 (KeQueryActiveGroupCount.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeFreeInterrupt @ 0x14014AF7C (KeFreeInterrupt.c)
 *     KeInitializeInterruptEx @ 0x140155354 (KeInitializeInterruptEx.c)
 *     KeAllocateInterrupt @ 0x140155490 (KeAllocateInterrupt.c)
 *     KeConnectInterrupt @ 0x140155538 (KeConnectInterrupt.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1401718C0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopDestroyActiveConnectBlock @ 0x14057D290 (IopDestroyActiveConnectBlock.c)
 *     IopReleaseActiveConnectLock @ 0x14057D3B0 (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x14057D3C4 (IopAcquireActiveConnectLock.c)
 *     IopInitializeActiveConnectBlock @ 0x14057D3D8 (IopInitializeActiveConnectBlock.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14067DB34 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x14067DC64 (IopDestroyPassiveInterruptBlock.c)
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
  __int64 epi16; // rdi
  bool v11; // r12
  __int64 v12; // r14
  unsigned __int64 v13; // rsi
  char *PoolWithTag; // rax
  char *v15; // rdi
  __int64 v16; // rcx
  __m128i v17; // xmm0
  char v18; // dl
  unsigned __int8 v19; // r15
  int v20; // ebx
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  __int64 v23; // rdx
  __int128 v24; // xmm1
  int v26; // ebx
  PSLIST_ENTRY Interrupt; // rax
  _DWORD *v28; // r12
  _SLIST_ENTRY **v29; // r14
  __int64 v30; // [rsp+70h] [rbp-98h]
  char v31; // [rsp+89h] [rbp-7Fh]
  int v32; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v33; // [rsp+90h] [rbp-78h]
  __m128i v34; // [rsp+98h] [rbp-70h] BYREF
  char *v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  _BYTE v37[144]; // [rsp+B8h] [rbp-50h] BYREF
  char v42; // [rsp+198h] [rbp+90h]
  char v43; // [rsp+1A0h] [rbp+98h]

  *a1 = 0LL;
  v42 = 0;
  v35 = 0LL;
  IopInitializeActiveConnectBlock(a10, v37);
  v33 = *(_DWORD *)(a10 + 12);
  v32 = *(_DWORD *)(a10 + 24);
  v34 = *(__m128i *)(a10 + 32);
  epi16 = (unsigned __int16)_mm_extract_epi16(v34, 4);
  v34.m128i_i64[0] &= qword_1403D15E8[epi16];
  v31 = *(_BYTE *)(a10 + 16);
  if ( !*(_DWORD *)(a10 + 8) && !off_140321940() && (unsigned int)(*(_DWORD *)(a10 + 20) - 3) <= 1 )
  {
    v42 = 1;
    v32 = 0;
  }
  v11 = a7 == 0;
  if ( (unsigned int)v34.m128i_i16[4] < KeQueryActiveGroupCount()
    && (v12 = v34.m128i_i64[0]) != 0
    && (v34.m128i_i64[0] & qword_1403D15E8[epi16]) == v34.m128i_i64[0]
    && !(v34.m128i_i16[7] | (unsigned __int16)(v34.m128i_i16[6] | v34.m128i_i16[5]))
    && (v13 = (0x101010101010101LL
             * ((((v34.m128i_i64[0] - (((unsigned __int64)v34.m128i_i64[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v34.m128i_i64[0] - (((unsigned __int64)v34.m128i_i64[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
               + ((((v34.m128i_i64[0] - (((unsigned __int64)v34.m128i_i64[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v34.m128i_i64[0] - (((unsigned __int64)v34.m128i_i64[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
        (_BYTE)v13) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * (char)v13 + 456), 0x6E696F49u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)(8 * (char)v13 + 456));
      KeInitializeDpc((PRKDPC)(v15 + 392), 0LL, 0LL);
      *((_OWORD *)v15 + 1) = *(_OWORD *)a10;
      v16 = (__int64)v15;
      *((_OWORD *)v15 + 2) = *(_OWORD *)(a10 + 16);
      *((_OWORD *)v15 + 3) = *(_OWORD *)(a10 + 32);
      *((_OWORD *)v15 + 4) = *(_OWORD *)(a10 + 48);
      *((_OWORD *)v15 + 5) = *(_OWORD *)(a10 + 64);
      v17 = v34;
      *((_QWORD *)v15 + 12) = *(_QWORD *)(a10 + 80);
      *((_DWORD *)v15 + 10) = v32;
      *((__m128i *)v15 + 3) = v17;
      if ( a6 )
        v16 = a6;
      v15[360] = v11;
      v36 = v16;
      if ( !a7 )
        v35 = v15 + 368;
      *((_QWORD *)v15 + 1) = v12;
      v18 = 0;
      v43 = 0;
      v19 = 0;
      if ( (char)v13 > 0 )
      {
        while ( 1 )
        {
          if ( _bittest64(&v12, v19) )
          {
            if ( v34.m128i_i16[4] || v19 )
            {
              if ( (unsigned int)v34.m128i_i16[4] >= (unsigned __int16)KiMaximumGroups || v19 >= 0x40u )
              {
                v26 = -1;
              }
              else
              {
                v26 = KiProcessorNumberToIndexMappingTable[64 * v34.m128i_u16[4] + v19];
                if ( !v26 )
                  v26 = -1;
              }
            }
            else
            {
              v26 = 0;
            }
            Interrupt = KeAllocateInterrupt((_SLIST_HEADER *)KiProcessorBlock[v26]);
            v28 = Interrupt;
            if ( !Interrupt )
            {
              v20 = -1073741670;
              goto LABEL_38;
            }
            memset(Interrupt, 0, 0x100uLL);
            KeInitializeInterruptEx(
              v28,
              a2,
              a3,
              a4,
              a5,
              v36,
              (__int64)v35,
              v33,
              v31,
              a7,
              v32,
              a8,
              v26,
              v30,
              v42,
              (__int64)(v15 + 16));
            *(_QWORD *)&v15[8 * v43 + 456] = v28;
            v18 = ++v43;
          }
          ++v19;
          if ( v18 >= (char)v13 )
          {
            v11 = a7 == 0;
            break;
          }
        }
      }
      if ( v11 )
      {
        v20 = IopAllocatePassiveInterruptBlock(v15 + 16, &v34, 0LL);
        if ( v20 < 0 )
          goto LABEL_38;
      }
      IopAcquireActiveConnectLock(v37);
      v20 = KeConnectInterrupt((__int64 *)v15 + 57, v13, (__int64)(v15 + 16));
      IopReleaseActiveConnectLock(v37);
      if ( v20 < 0 )
      {
        if ( v11 )
          IopDestroyPassiveInterruptBlock(v33);
      }
      else
      {
        v21 = (_OWORD *)*((_QWORD *)v15 + 57);
        v22 = v15 + 104;
        v23 = 2LL;
        do
        {
          *v22 = *v21;
          v22[1] = v21[1];
          v22[2] = v21[2];
          v22[3] = v21[3];
          v22[4] = v21[4];
          v22[5] = v21[5];
          v22[6] = v21[6];
          v22 += 8;
          v24 = v21[7];
          v21 += 8;
          *(v22 - 1) = v24;
          --v23;
        }
        while ( v23 );
        v20 = 0;
        *a1 = v15;
      }
      if ( v20 < 0 )
      {
LABEL_38:
        if ( (char)v13 > 0 )
        {
          v29 = (_SLIST_ENTRY **)(v15 + 456);
          do
          {
            if ( *v29 )
              KeFreeInterrupt(*v29);
            ++v29;
            --v13;
          }
          while ( v13 );
        }
        ExFreePoolWithTag(v15, 0x6E696F49u);
      }
    }
    else
    {
      v20 = -1073741670;
    }
  }
  else
  {
    v20 = -1073741811;
  }
  IopDestroyActiveConnectBlock(v37);
  return (unsigned int)v20;
}
