/*
 * XREFs of ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C007F3E4
 * Callers:
 *     TimersProc @ 0x1C007CAC0 (TimersProc.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

void __fastcall TimerStatistics(const struct tagTIMER *a1)
{
  int v2; // r8d
  unsigned int *v3; // rcx
  unsigned int v4; // edx
  unsigned __int64 v5; // rbx
  int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rdx
  _DWORD *v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rax

  if ( (gdwExtraInstrumentations & 2) != 0 )
  {
    v2 = dword_1C0334860;
    v3 = (unsigned int *)&unk_1C02F00F8;
    v4 = *((_DWORD *)a1 + 10);
    v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v6 = v5 - *((_DWORD *)a1 + 32);
    if ( !dword_1C0334860 )
      v2 = v5;
    v7 = 0LL;
    dword_1C0334860 = v2;
    do
    {
      if ( v4 <= *v3 )
        break;
      v7 = (unsigned int)(v7 + 1);
      ++v3;
    }
    while ( (unsigned int)v7 < 7 );
    v8 = v7 + 8LL * gTimerCoalCurrentState;
    ++gaTimerDeliveryDistribution[2 * v8];
    gaTimerDeliveryDistribution[2 * v8 + 1] += v6 - *((_DWORD *)a1 + 10);
    if ( (unsigned int)gaTimerDeliveryDistribution[2 * v8] >= 0x7FFFFFFF
      || gaTimerDeliveryDistribution[2 * v8 + 1] >= 0x3FFFFFFF
      || (unsigned int)(v5 - v2) >= 0xEA60 )
    {
      v9 = &unk_1C0332348;
      v10 = 0LL;
      v11 = 4LL;
      do
      {
        v12 = v10 + 4LL * (gSessionId != gServiceSessionId);
        ++v10;
        *v9 = *((_DWORD *)&gTimerCoalescingSpec + v12);
        v9 += 16;
        --v11;
      }
      while ( v11 );
      EtwTraceTimerDelayStatistics(gSessionId, 8LL, 4LL, &unk_1C02F00F8, 32, 8, gaTimerDeliveryDistribution);
      dword_1C0334860 = v5;
      memset(gaTimerDeliveryDistribution, 0, 0x100uLL);
    }
  }
}
