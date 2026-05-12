/*
 * XREFs of RaidpAdapterRedirectDpcRoutine @ 0x1C0024CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0021D20 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     Template_pzqqxxtt @ 0x1C0025340 (Template_pzqqxxtt.c)
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
  PSLIST_ENTRY i; // r14
  PSLIST_ENTRY v10; // rbx
  LARGE_INTEGER v11; // rax
  LARGE_INTEGER v12; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
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
  if ( StorEtwLoggingEnabled )
  {
    if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v22 = PerformanceCounter;
  }
  v8 = (_DWORD *)SystemArgument1[8];
  for ( i = ExpInterlockedFlushSList(v4); i; ++v5 )
  {
    v10 = i - 2;
    i = i->Next;
    if ( (BYTE1(v10[1].Next) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport((__int64)v10[13].Next, *((unsigned int *)&v10[45].Next + 3));
      BYTE1(v10[1].Next) &= ~1u;
    }
    (*((void (__fastcall **)(PSLIST_ENTRY))&v10[40].Next + 1))(v10);
  }
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - v20) > v8[1198] )
  {
    v8[1198] = MEMORY[0xFFFFF78000000320] - v20;
    v8[1199] = v5;
  }
  if ( v5 > v8[1197] )
    v8[1197] = v5;
  if ( StorEtwLoggingEnabled && v5 >= 0x19 )
  {
    PerformanceFrequency.QuadPart = 1LL;
    if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
      v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v11.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v11.QuadPart <= 0 || v11.QuadPart >= v22.QuadPart )
      v14 = v11.QuadPart - v22.QuadPart;
    else
      v14 = v11.QuadPart - v22.QuadPart - 1;
    v21 = v14;
    if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
    {
      LowPart = PerformanceFrequency.LowPart;
      LODWORD(v15) = 0;
      if ( PerformanceFrequency.QuadPart && v14 )
      {
        v16 = 1000 * (v14 % PerformanceFrequency.QuadPart);
        v17 = 10000 * (v16 / PerformanceFrequency.QuadPart + 1000 * (v14 / PerformanceFrequency.QuadPart));
        v18 = 10000 * (v16 % PerformanceFrequency.QuadPart);
        v12.QuadPart = v18 % PerformanceFrequency.QuadPart;
        v15 = v18 / PerformanceFrequency.QuadPart + v17;
      }
    }
    else
    {
      LODWORD(v15) = v14;
    }
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x4000000) != 0 )
      Template_pzqqxxtt(
        LowPart,
        v12.LowPart,
        v15,
        (unsigned int)RaidpAdapterRedirectDpcRoutine,
        (__int64)L"RaidpAdapterRedirectDpcRoutine",
        v8[14],
        v5,
        v14,
        v15,
        0,
        0);
  }
}
