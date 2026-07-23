/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x1400D1710
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x1400D0340 (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KiInsertNonMaxOverQuotaScb @ 0x140098DB8 (KiInsertNonMaxOverQuotaScb.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1400D19F0 (KiMoveScbThreadsToNewReadylist.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 */

unsigned __int64 __fastcall KiTransitionSchedulingGroupGeneration(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // r15d
  __int64 v7; // rbp
  _QWORD *v8; // r12
  unsigned __int64 result; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  char *v13; // rdi
  unsigned __int64 v14; // rcx
  ULONG_PTR v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // ecx
  volatile signed __int32 *v20; // rdx
  unsigned int v21; // ecx
  char v22; // cl
  char EffectivePriorityThread; // al
  __int64 v24; // rax
  char v25; // cl
  char v26; // [rsp+70h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 23384);
  v6 = 1;
  if ( a2 > v5 )
    v6 = (a2 - 1 + (unsigned int)KiGenerationTicks - v5) / (unsigned int)KiGenerationTicks + 1;
  *(_QWORD *)(a1 + 23384) = KiGenerationEndTick;
  *(_QWORD *)(a1 + 22768) = 0LL;
  *(_QWORD *)(a1 + 22776) = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  v26 = 0;
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD **)(v7 + 104);
  if ( v8 )
    v8 = (_QWORD *)((char *)v8 + *(unsigned int *)(a1 + 1624));
  result = a1 + 24272;
  v10 = *(_QWORD **)(a1 + 24272);
  if ( v10 == (_QWORD *)(a1 + 24272) )
  {
LABEL_41:
    if ( *(_BYTE *)(a1 + 23321) )
    {
      v24 = *(unsigned int *)(a1 + 36);
      *(_BYTE *)(a1 + 23321) = 0;
      v25 = KiProcessorIndexToNumberMappingTable[v24];
      result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v24] >> 6;
      _InterlockedAnd64(&qword_1402F6C18[result], ~(1LL << (v25 & 0x3F)));
    }
    return result;
  }
  LOBYTE(result) = v6;
  do
  {
    v11 = v10 - 9;
    if ( v6 >= 0x40 )
      v12 = 0LL;
    else
      v12 = v11[6] << result;
    if ( (v11[14] & 4) != 0 )
      v12 |= 1uLL;
    v11[6] = v12;
    v13 = (char *)v11 - *(unsigned int *)(a1 + 1624);
    v14 = v11[5] - *v11;
    v11[5] = *v11;
    _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 6, v14);
    if ( *((__int64 *)v13 + 4) > 0
      && (__int64)(v14 + _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 4, v14)) <= 0 )
    {
      v15 = _InterlockedExchange64((volatile __int64 *)v13 + 9, 0LL);
      if ( v15 )
        KiInsertQueueDpc(v15, 0);
    }
    if ( !a3 )
    {
      if ( *(_BYTE *)(a1 + 33) )
      {
        if ( (v11[14] & 0x10) == 0 )
        {
          v16 = *((_QWORD *)v13 + 5);
          v17 = v16 + _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 6, v16);
          v18 = *((_QWORD *)v13 + 5);
          if ( v17 > v18 )
            _InterlockedExchange64((volatile __int64 *)v13 + 6, v18);
        }
      }
    }
    if ( v11[1] != v11[2] )
    {
      v19 = KiGroupSchedulingNumerator;
      *v11 >>= 10;
      v11[4] = *v11 * v19 + ((v11[4] * (unsigned __int64)(1024 - v19)) >> 10);
    }
    v20 = (volatile signed __int32 *)v11[15];
    *v11 = 0LL;
    v11[5] = 0LL;
    if ( v20 )
      _InterlockedExchangeAdd(v20, ((*((unsigned __int8 *)v11 + 112) >> 3) & 1) - *((_DWORD *)v11 + 29));
    v21 = *((unsigned __int8 *)v11 + 112);
    v11[3] = 0LL;
    *((_BYTE *)v11 + 112) = v21 & 0xFC;
    *((_DWORD *)v11 + 29) = (v21 >> 3) & 1;
    v11[11] = 0LL;
    v11[12] = 0LL;
    v11[13] = 0LL;
    v11[49] = 0LL;
    v11[50] = 0LL;
    if ( !*((_DWORD *)v11 + 29) )
    {
      *((_BYTE *)v11 + 112) &= ~4u;
      if ( v11 == v8 )
      {
        if ( (*(_BYTE *)(v7 + 2) & 4) != 0 )
          EffectivePriorityThread = KiQueryEffectivePriorityThread(v7, a1);
        else
          EffectivePriorityThread = *(_BYTE *)(v7 + 195);
        **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
      }
LABEL_37:
      KiMoveScbThreadsToNewReadylist(v10 - 9, 0LL, a1, 0LL);
      goto LABEL_38;
    }
    if ( a3 )
      goto LABEL_37;
    if ( *((_WORD *)v11 + 57) )
    {
      KiInsertNonMaxOverQuotaScb((__int64)(v10 - 9), a1, 0LL);
      v22 = 1;
      v26 = 1;
      goto LABEL_39;
    }
LABEL_38:
    v22 = v26;
LABEL_39:
    v10 = (_QWORD *)*v10;
    result = v6;
  }
  while ( v10 != (_QWORD *)(a1 + 24272) );
  if ( !v22 )
    goto LABEL_41;
  return result;
}
