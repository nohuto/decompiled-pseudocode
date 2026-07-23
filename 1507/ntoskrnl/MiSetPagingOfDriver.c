/*
 * XREFs of MiSetPagingOfDriver @ 0x1400D3E3C
 * Callers:
 *     MmPageEntireDriver @ 0x1404F5378 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x1405972D8 (MiEnablePagingOfDriver.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiDriverPageMustStayResident @ 0x1400D418C (MiDriverPageMustStayResident.c)
 *     MiTrimSystemImagePages @ 0x1400D41D4 (MiTrimSystemImagePages.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

PVOID __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 *v5; // rsi
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // edi
  signed __int32 i; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r10
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int16 v20; // ax
  unsigned __int64 v21; // r9
  PVOID result; // rax
  unsigned __int64 v23; // [rsp+20h] [rbp-B9h] BYREF
  __int64 CurrentIrql; // [rsp+28h] [rbp-B1h]
  int v25; // [rsp+30h] [rbp-A9h] BYREF
  __int16 v26; // [rsp+34h] [rbp-A5h]
  int v27; // [rsp+38h] [rbp-A1h]
  int v28; // [rsp+3Ch] [rbp-9Dh]
  __int64 v29; // [rsp+40h] [rbp-99h]
  __int64 v30; // [rsp+48h] [rbp-91h]

  v3 = 0LL;
  v27 = 20;
  v28 = 0;
  v25 = 0;
  v29 = 0LL;
  v5 = a2;
  v30 = 0LL;
  v7 = (__int64)((_QWORD)a2 << 25) >> 16;
  v8 = 0LL;
  v26 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FF40);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(dword_14034FF40, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FF40);
    for ( i = dword_14034FF40[0]; (dword_14034FF40[0] & 0xBFFFFFFF) != 0x80000000; i = dword_14034FF40[0] )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(dword_14034FF40, i | 0x40000000, i);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  if ( (unsigned __int64)v5 <= a3 )
  {
    do
    {
      if ( !(unsigned __int8)MiDriverPageMustStayResident(a1, v5) )
      {
        v14 = *v5;
        v15 = (unsigned __int64)v5 + v13;
        if ( (unsigned __int64)v5 + v13 <= 0x7F8
          && (unsigned int)MiPteHasShadow(v12, v11)
          && (v14 & 1) != 0
          && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
        {
          v16 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v16 )
          {
            v17 = *(_QWORD *)(v16 + 8 * (((unsigned __int64)v5 >> 3) & 0x1FF));
            if ( (v17 & 0x20) != 0 )
              v14 |= 0x20uLL;
            if ( (v17 & 0x42) != 0 )
              v14 |= 0x42uLL;
          }
        }
        v23 = v14;
        if ( (v14 & 1) != 0 )
        {
          v18 = v14;
          if ( (unsigned __int64)&v23 + v13 <= 0x7F8 )
            v18 = MiReadPteShadow(&v23, v14);
          v19 = 48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( !*(_QWORD *)v19 || (*(_BYTE *)(v19 + 35) & 8) != 0 )
          {
            v20 = *(_WORD *)(v19 + 32);
            if ( v20 == 1 || v20 == 2 && (*(_BYTE *)(v19 + 34) & 8) != 0 )
            {
              if ( !v3 )
                v3 = v5;
              v21 = v14 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v23 = v21;
              *v5 = v21;
              if ( v15 <= 0x7F8 )
                MiWritePteShadow(v5, v21);
              MiInsertTbFlushEntry((__int64)&v25, v7, 1LL, 0);
            }
          }
        }
        else if ( (v14 & 0x400) != 0 && v3 )
        {
          MiFlushTbList((__int64)&v25);
          v8 += MiTrimSystemImagePages(v3, v15 - 0x90482413008LL);
          v3 = 0LL;
        }
      }
      ++v5;
      v7 += 4096LL;
    }
    while ( (unsigned __int64)v5 <= a3 );
    if ( v3 )
    {
      MiFlushTbList((__int64)&v25);
      v8 += MiTrimSystemImagePages(v3, a3);
    }
  }
  result = (PVOID)MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, CurrentIrql);
  if ( v8 )
  {
    result = *(PVOID *)(a1 + 48);
    if ( result == PsNtosImageBase || result == PsHalImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_14034EA58 + 2, v8);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_14034EA58 + 3, v8);
  }
  return result;
}
