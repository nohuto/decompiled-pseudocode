/*
 * XREFs of KiInsertTimerTable @ 0x1400A2120
 * Callers:
 *     KiResumeThread @ 0x14000E65C (KiResumeThread.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     KeSetTimerEx @ 0x140066890 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x1400669A0 (KeSetTimer.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiTimerWaitTest @ 0x1400A40F0 (KiTimerWaitTest.c)
 *     KiAdjustTimerDueTimes @ 0x140154CC0 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

bool __fastcall KiInsertTimerTable(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  char v5; // bl
  unsigned __int64 v6; // r12
  unsigned __int64 v9; // r15
  int v10; // edx
  unsigned __int64 v11; // r13
  unsigned int v12; // ebp
  __int64 v13; // rsi
  _QWORD *v14; // r14
  _QWORD *v15; // rbp
  _QWORD *v16; // rdx
  unsigned __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  unsigned int v21; // r8d
  volatile signed __int32 *v22; // rdx
  char v23; // r9
  unsigned __int16 v25; // ax
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // r12d
  volatile signed __int32 *v32; // rdx
  __int64 v33; // rax
  char v34; // cl
  signed __int32 v35[22]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v36; // [rsp+68h] [rbp+10h]

  v5 = 0;
  v6 = a4;
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 4) = 0;
  v9 = *(_QWORD *)(a2 + 24);
  v10 = 0;
  if ( !KiSerializeTimerExpiration )
  {
    if ( a3 && (v25 = *(_WORD *)(a3 + 2), v25 >= 0x280u) )
    {
      v10 = v25 - 640;
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 2) != 0 )
      {
        v33 = *(_QWORD *)(a1 + 1600);
        if ( (*(_QWORD *)(v33 + 80) & *(_QWORD *)(v33 + 136)) != 0LL )
        {
          v34 = *(_BYTE *)(a1 + 1617);
          _BitScanForward64((unsigned __int64 *)&v33, __ROR8__(*(_QWORD *)(v33 + 80) & *(_QWORD *)(v33 + 136), v34));
          v10 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 1616)
                                                   + (((unsigned __int8)v33 + v34) & 0x3F)];
        }
      }
    }
  }
  *(_DWORD *)(a2 + 56) = v10;
  v11 = a4;
  v12 = 0;
  v13 = KiProcessorBlock[v10] + 13824 + 32 * (a4 + 16LL);
  v36 = KiProcessorBlock[v10] + 13824;
  v14 = (_QWORD *)(v13 + 8);
  while ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
    while ( *(_QWORD *)v13 );
  }
  v15 = (_QWORD *)(v13 + 8);
  if ( (_QWORD *)*v15 == v15 )
  {
    v5 = 6;
  }
  else
  {
    v16 = (_QWORD *)*v14;
    v17 = *(_QWORD *)(*v14 - 8LL);
    if ( v9 > v17 )
    {
      if ( v9 - v17 <= (unsigned __int64)KeMaximumIncrement >> 2 )
      {
        v26 = *(_QWORD **)(v13 + 16);
        v14 = (_QWORD *)*v14;
        if ( v16 != v26 )
        {
          do
          {
            v27 = (_QWORD *)*v14;
            if ( v9 <= *(_QWORD *)(*v14 - 8LL) )
              break;
            v14 = (_QWORD *)*v14;
          }
          while ( v27 != v26 );
        }
      }
      else
      {
        v14 = *(_QWORD **)(v13 + 16);
        do
        {
          if ( v9 >= *(v14 - 1) )
            break;
          v14 = (_QWORD *)v14[1];
        }
        while ( v14 != v15 );
      }
    }
    else
    {
      v5 = 2 * (v9 < v17);
    }
  }
  v18 = (_QWORD *)*v14;
  v19 = (_QWORD *)(a2 + 32);
  *v19 = *v14;
  v19[1] = v14;
  if ( (_QWORD *)v18[1] != v14 )
    __fastfail(3u);
  v18[1] = v19;
  *v14 = v19;
  if ( (v5 & 2) == 0 )
    goto LABEL_17;
  *(_QWORD *)(v13 + 24) = v9;
  _InterlockedOr(v35, 0);
  if ( (v5 & 4) != 0 )
  {
    v20 = qword_1403D2238[2 * *(unsigned __int8 *)(v36 - 12208)];
    if ( KiSerializeTimerExpiration )
    {
      v21 = v6 & 0x3F;
      v22 = (volatile signed __int32 *)(v20 + 8 * (v6 >> 6));
    }
    else
    {
      v21 = *(unsigned __int8 *)(v36 - 12207);
      v22 = (volatile signed __int32 *)((v6 << 6) + v20);
    }
    _interlockedbittestandset64(v22, v21);
  }
  if ( v9 > MEMORY[0xFFFFF78000000008] )
    goto LABEL_17;
  if ( !a5 )
  {
    v28 = (_QWORD *)*v19;
    v5 |= 1u;
    v29 = (_QWORD *)v19[1];
    if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v29 != v19 )
      __fastfail(3u);
    *v29 = v28;
    v28[1] = v29;
    if ( v29 == v28 )
    {
      *(_DWORD *)(v13 + 28) = -1;
      v30 = qword_1403D2238[2 * *(unsigned __int8 *)(v36 - 12208)];
      if ( KiSerializeTimerExpiration )
      {
        v31 = v6 & 0x3F;
        v32 = (volatile signed __int32 *)(v30 + 8 * (v11 >> 6));
      }
      else
      {
        v31 = *(unsigned __int8 *)(v36 - 12207);
        v32 = (volatile signed __int32 *)((v11 << 6) + v30);
      }
      _interlockedbittestandreset64(v32, v31);
    }
LABEL_17:
    v23 = 0;
    goto LABEL_18;
  }
  v23 = 1;
LABEL_18:
  _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
  if ( a5 )
    *a5 = v23;
  return (v5 & 1) == 0;
}
