/*
 * XREFs of RaidpAdapterRedirectDpcRoutine @ 0x1C0015460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00242C4 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     Template_pzqqxxtt @ 0x1C0027420 (Template_pzqqxxtt.c)
 */

void __fastcall RaidpAdapterRedirectDpcRoutine(
        struct _KDPC *Dpc,
        union _SLIST_HEADER *DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  union _SLIST_HEADER *v4; // rbx
  unsigned int v5; // edi
  LARGE_INTEGER PerformanceCounter; // rax
  _DWORD *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  PSLIST_ENTRY i; // r14
  PSLIST_ENTRY v12; // rbx
  LARGE_INTEGER v13; // rax
  LARGE_INTEGER v14; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rtt
  __int64 v19; // r8
  unsigned __int64 v20; // rtt
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-38h] BYREF
  __int64 v22; // [rsp+68h] [rbp-30h]
  unsigned __int64 v23; // [rsp+70h] [rbp-28h]
  LARGE_INTEGER v24; // [rsp+B0h] [rbp+18h]

  v24.QuadPart = 0LL;
  v4 = DeferredContext + 4;
  v5 = 0;
  v22 = MEMORY[0xFFFFF78000000320];
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 )
  {
    if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v24 = PerformanceCounter;
  }
  v8 = (_DWORD *)SystemArgument1[8];
  for ( i = ExpInterlockedFlushSList(v4); i; ++v5 )
  {
    v12 = i - 2;
    i = i->Next;
    if ( (BYTE1(v12[1].Next) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(
        *((_QWORD *)&v12[13].Next + 1),
        *((unsigned int *)&v12[46].Next + 3),
        v9,
        v10);
      BYTE1(v12[1].Next) &= ~1u;
    }
    ((void (__fastcall *)(PSLIST_ENTRY))v12[41].Next)(v12);
  }
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v22) > v8[1198] )
  {
    v8[1198] = MEMORY[0xFFFFF78000000320] - v22;
    v8[1199] = v5;
  }
  if ( v5 > v8[1197] )
    v8[1197] = v5;
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 && v5 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
      v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v13.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v13.QuadPart <= 0 || v13.QuadPart >= v24.QuadPart )
      v16 = v13.QuadPart - v24.QuadPart;
    else
      v16 = v13.QuadPart - v24.QuadPart - 1;
    v23 = v16;
    if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
    {
      LowPart = PerformanceFrequency.LowPart;
      LODWORD(v17) = 0;
      if ( PerformanceFrequency.QuadPart && v16 )
      {
        v18 = 1000 * (v16 % PerformanceFrequency.QuadPart);
        v19 = 10000 * (v18 / PerformanceFrequency.QuadPart + 1000 * (v16 / PerformanceFrequency.QuadPart));
        v20 = 10000 * (v18 % PerformanceFrequency.QuadPart);
        v14.QuadPart = v20 % PerformanceFrequency.QuadPart;
        v17 = v20 / PerformanceFrequency.QuadPart + v19;
      }
    }
    else
    {
      LODWORD(v17) = v16;
    }
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 )
      Template_pzqqxxtt(
        LowPart,
        v14.LowPart,
        v17,
        (unsigned int)RaidpAdapterRedirectDpcRoutine,
        (__int64)L"RaidpAdapterRedirectDpcRoutine",
        v8[14],
        v5,
        v16,
        v17,
        0,
        0);
  }
}
