/*
 * XREFs of RaidpAdapterRedirectDpcRoutine @ 0x1C001A000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00276B0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     Template_pzqqxxtt @ 0x1C002AAA0 (Template_pzqqxxtt.c)
 */

void __fastcall RaidpAdapterRedirectDpcRoutine(
        struct _KDPC *Dpc,
        union _SLIST_HEADER *DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  union _SLIST_HEADER *v4; // rbx
  unsigned int v5; // edi
  _DWORD *v7; // rsi
  PSLIST_ENTRY i; // r14
  PSLIST_ENTRY v9; // rbx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v13; // rax
  LARGE_INTEGER v14; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v16; // rtt
  __int64 v17; // r8
  unsigned __int64 v18; // rtt
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-38h] BYREF
  __int64 v20; // [rsp+68h] [rbp-30h]
  unsigned __int64 v21; // [rsp+70h] [rbp-28h]
  LARGE_INTEGER v22; // [rsp+B0h] [rbp+18h]

  v22.QuadPart = 0LL;
  v4 = DeferredContext + 4;
  v5 = 0;
  v20 = MEMORY[0xFFFFF78000000320];
  if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x4000000) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v22 = PerformanceCounter;
  }
  v7 = (_DWORD *)SystemArgument1[8];
  for ( i = ExpInterlockedFlushSList(v4); i; ++v5 )
  {
    v9 = i - 2;
    i = i->Next;
    if ( (BYTE1(v9[1].Next) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(*((_QWORD *)&v9[13].Next + 1), *((unsigned int *)&v9[46].Next + 3));
      BYTE1(v9[1].Next) &= ~1u;
    }
    ((void (__fastcall *)(PSLIST_ENTRY))v9[41].Next)(v9);
  }
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v20) > v7[1198] )
  {
    v7[1198] = MEMORY[0xFFFFF78000000320] - v20;
    v7[1199] = v5;
  }
  if ( v5 > v7[1197] )
    v7[1197] = v5;
  if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x4000000) != 0 && v5 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( UseQPCTime )
      v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v13.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v13.QuadPart <= 0 || v13.QuadPart >= v22.QuadPart )
      v10 = v13.QuadPart - v22.QuadPart;
    else
      v10 = v13.QuadPart - v22.QuadPart - 1;
    v21 = v10;
    if ( UseQPCTime )
    {
      LowPart = PerformanceFrequency.LowPart;
      LODWORD(v11) = 0;
      if ( PerformanceFrequency.QuadPart && v10 )
      {
        v16 = 1000 * (v10 % PerformanceFrequency.QuadPart);
        v17 = 10000 * (v16 / PerformanceFrequency.QuadPart + 1000 * (v10 / PerformanceFrequency.QuadPart));
        v18 = 10000 * (v16 % PerformanceFrequency.QuadPart);
        v14.QuadPart = v18 % PerformanceFrequency.QuadPart;
        v11 = v18 / PerformanceFrequency.QuadPart + v17;
      }
    }
    else
    {
      LODWORD(v11) = v10;
    }
    if ( (Microsoft_Windows_StorPortEnableBits & 0x4000000) != 0 )
      Template_pzqqxxtt(
        LowPart,
        v14.LowPart,
        v11,
        (unsigned int)RaidpAdapterRedirectDpcRoutine,
        (__int64)L"RaidpAdapterRedirectDpcRoutine",
        v7[14],
        v5,
        v10,
        v11,
        0,
        0);
  }
}
