/*
 * XREFs of KiInsertTimerTable @ 0x140083990
 * Callers:
 *     KiResumeThread @ 0x140028CF8 (KiResumeThread.c)
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeSetTimerEx @ 0x140091400 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     KiSetTimerEx @ 0x1400E78B8 (KiSetTimerEx.c)
 *     KiAdjustTimerDueTimes @ 0x140120638 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiRemoveEntryTimer @ 0x1400EF780 (KiRemoveEntryTimer.c)
 */

bool __fastcall KiInsertTimerTable(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, char *a5)
{
  char v5; // bl
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rsi
  _QWORD *v13; // rbp
  _QWORD *v14; // r14
  unsigned __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  char *v18; // r14
  unsigned int v19; // r9d
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  volatile signed __int32 *v22; // rcx
  char v23; // r11
  unsigned __int16 v25; // ax
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  char v28; // cl
  unsigned __int64 v29; // rax
  int v30; // edx
  signed __int32 v31[8]; // [rsp+0h] [rbp-68h] BYREF
  int v32; // [rsp+20h] [rbp-48h]
  int v33; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v34; // [rsp+88h] [rbp+20h]

  v34 = a4;
  v5 = 0;
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 4) = 0;
  v8 = *(_QWORD *)(a2 + 24);
  v9 = 0LL;
  if ( !KiSerializeTimerExpiration )
  {
    if ( a3 && (v25 = *(_WORD *)(a3 + 2), v25 >= 0x280u) )
    {
      v9 = (unsigned int)v25 - 640;
    }
    else
    {
      v9 = *(unsigned int *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 2) != 0 )
      {
        a3 = *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 80LL) & *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 136LL);
        if ( a3 )
        {
          v28 = *(_BYTE *)(a1 + 1617);
          a3 = __ROR8__(a3, v28);
          _BitScanForward64(&v29, a3);
          v30 = *(unsigned __int8 *)(a1 + 1616) << 6;
          v32 = ((_BYTE)v29 + v28) & 0x3F;
          v9 = (unsigned int)KiProcessorNumberToIndexMappingTable[v32 + v30];
        }
      }
    }
  }
  v10 = a4;
  *(_DWORD *)(a2 + 56) = v9;
  v33 = 0;
  v11 = KiProcessorBlock[(unsigned int)v9] + 13824;
  v12 = v11 + 32 * (a4 + 16LL);
  v13 = (_QWORD *)(v12 + 8);
  v14 = (_QWORD *)(v12 + 8);
  while ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
  {
    do
      KeYieldProcessorEx(&v33, v9, a3);
    while ( *(_QWORD *)v12 );
  }
  if ( (_QWORD *)*v13 == v13 )
  {
    v5 = 6;
  }
  else
  {
    v15 = *(_QWORD *)(*v13 - 8LL);
    if ( v8 > v15 )
    {
      if ( v8 - v15 <= (unsigned __int64)KeMaximumIncrement >> 2 )
      {
        v26 = *(_QWORD **)(v12 + 16);
        v14 = (_QWORD *)*v13;
        if ( (_QWORD *)*v13 != v26 )
        {
          do
          {
            v27 = (_QWORD *)*v14;
            if ( v8 <= *(_QWORD *)(*v14 - 8LL) )
              break;
            v14 = (_QWORD *)*v14;
          }
          while ( v27 != v26 );
        }
      }
      else
      {
        v14 = *(_QWORD **)(v12 + 16);
        do
        {
          if ( v8 >= *(v14 - 1) )
            break;
          v14 = (_QWORD *)v14[1];
        }
        while ( v14 != v13 );
      }
    }
    else
    {
      v5 = 2 * (v8 < v15);
    }
  }
  v16 = (_QWORD *)*v14;
  v17 = a2 + 32;
  *(_QWORD *)(a2 + 32) = *v14;
  *(_QWORD *)(a2 + 40) = v14;
  if ( (_QWORD *)v16[1] != v14 )
    __fastfail(3u);
  v16[1] = v17;
  *v14 = v17;
  v18 = a5;
  if ( (v5 & 2) == 0 )
    goto LABEL_17;
  *(_QWORD *)(v12 + 24) = v8;
  _InterlockedOr(v31, 0);
  v19 = v34;
  if ( (v5 & 4) != 0 )
  {
    v20 = qword_140383178[2 * *(unsigned __int8 *)(v11 - 12208)];
    if ( KiSerializeTimerExpiration )
    {
      v21 = v34 & 0x3F;
      v22 = (volatile signed __int32 *)(v20 + 8 * (v10 >> 6));
    }
    else
    {
      v21 = *(unsigned __int8 *)(v11 - 12207);
      v22 = (volatile signed __int32 *)((v10 << 6) + v20);
    }
    _interlockedbittestandset64(v22, v21);
  }
  if ( v8 > MEMORY[0xFFFFF78000000008] )
    goto LABEL_17;
  if ( !v18 )
  {
    v5 |= 1u;
    KiRemoveEntryTimer(v11, a2, v19);
LABEL_17:
    v23 = 0;
    goto LABEL_18;
  }
  v23 = 1;
LABEL_18:
  _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
  if ( v18 )
    *v18 = v23;
  return (v5 & 1) == 0;
}
