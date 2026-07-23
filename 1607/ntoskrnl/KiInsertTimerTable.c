/*
 * XREFs of KiInsertTimerTable @ 0x1400599B0
 * Callers:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x140055D50 (KeSetTimerEx.c)
 *     KiTimerWaitTest @ 0x140058810 (KiTimerWaitTest.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x1400C92C0 (KiResumeThread.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     KiAdjustTimerDueTimes @ 0x14012AB84 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiRemoveEntryTimer @ 0x140111298 (KiRemoveEntryTimer.c)
 */

bool __fastcall KiInsertTimerTable(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  char v5; // bl
  unsigned __int64 v6; // r12
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r15
  int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // rbp
  _QWORD *v15; // r14
  unsigned __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rbp
  char *v20; // r14
  char v21; // r9
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  unsigned __int16 v26; // ax
  __int64 v27; // r8
  char v28; // cl
  unsigned __int64 v29; // rax
  int v30; // edx
  signed __int32 v31[8]; // [rsp+0h] [rbp-68h] BYREF
  int v32; // [rsp+20h] [rbp-48h]
  __int64 v33; // [rsp+28h] [rbp-40h]
  int v35; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0;
  v6 = a4;
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 4) = 0;
  v9 = 0x140000000uLL;
  v10 = *(_QWORD *)(a2 + 24);
  v11 = 0;
  if ( !KiSerializeTimerExpiration )
  {
    if ( a3 && (v26 = *(_WORD *)(a3 + 2), v26 >= 0x280u) )
    {
      v11 = v26 - 640;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 2) != 0 )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 80LL) & *(_QWORD *)(*(_QWORD *)(a1 + 1600) + 136LL);
        if ( v27 )
        {
          v28 = *(_BYTE *)(a1 + 1617);
          _BitScanForward64(&v29, __ROR8__(v27, v28));
          v30 = *(unsigned __int8 *)(a1 + 1616) << 6;
          v32 = ((_BYTE)v29 + v28) & 0x3F;
          v11 = KiProcessorNumberToIndexMappingTable[v32 + v30];
        }
      }
    }
  }
  *(_DWORD *)(a2 + 56) = v11;
  v12 = 32 * (v6 + 16);
  v35 = 0;
  v13 = KiProcessorBlock[v11] + 13824;
  v14 = (_QWORD *)(v13 + v12 + 8);
  v33 = v13;
  v15 = v14;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + v13), 0LL) )
  {
    do
      KeYieldProcessorEx(&v35);
    while ( *(_QWORD *)(v12 + v13) );
  }
  if ( (_QWORD *)*v14 == v14 )
  {
    v5 = 6;
  }
  else
  {
    v16 = *(_QWORD *)(*v14 - 8LL);
    if ( v10 > v16 )
    {
      if ( v10 - v16 > (unsigned __int64)KeMaximumIncrement >> 2 )
      {
        v15 = (_QWORD *)v14[1];
        do
        {
          if ( v10 >= *(v15 - 1) )
            break;
          v15 = (_QWORD *)v15[1];
        }
        while ( v15 != v14 );
      }
      else
      {
        v24 = (_QWORD *)v14[1];
        v15 = (_QWORD *)*v14;
        if ( (_QWORD *)*v14 != v24 )
        {
          do
          {
            v25 = (_QWORD *)*v15;
            if ( v10 <= *(_QWORD *)(*v15 - 8LL) )
              break;
            v15 = (_QWORD *)*v15;
          }
          while ( v25 != v24 );
        }
      }
    }
    else
    {
      v5 = 2 * (v10 < v16);
    }
  }
  v17 = (_QWORD *)*v15;
  v18 = (_QWORD *)(a2 + 32);
  if ( *(_QWORD **)(*v15 + 8LL) != v15 )
    __fastfail(3u);
  v19 = v33;
  *(_QWORD *)(a2 + 40) = v15;
  *v18 = v17;
  v17[1] = v18;
  *v15 = v18;
  v20 = a5;
  if ( (v5 & 2) == 0 )
    goto LABEL_13;
  *(_QWORD *)(v12 + v19 + 24) = v10;
  _InterlockedOr(v31, 0);
  if ( (v5 & 4) != 0 )
  {
    v23 = qword_1403AB288[2 * *(unsigned __int8 *)(v19 - 12208)];
    if ( KiSerializeTimerExpiration )
      _interlockedbittestandset64((volatile signed __int32 *)(v23 + 8 * (v6 >> 6)), v6 & 0x3F);
    else
      _interlockedbittestandset64((volatile signed __int32 *)((v6 << 6) + v23), *(unsigned __int8 *)(v19 - 12207));
  }
  if ( v10 > MEMORY[0xFFFFF78000000008] )
    goto LABEL_13;
  if ( !v20 )
  {
    v5 |= 1u;
    KiRemoveEntryTimer(v19, a2, (unsigned int)v6, v9, v32);
LABEL_13:
    v21 = 0;
    goto LABEL_14;
  }
  v21 = 1;
LABEL_14:
  _InterlockedAnd64((volatile signed __int64 *)(v12 + v19), 0LL);
  if ( v20 )
    *v20 = v21;
  return (v5 & 1) == 0;
}
