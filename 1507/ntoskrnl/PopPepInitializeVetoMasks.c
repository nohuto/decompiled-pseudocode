/*
 * XREFs of PopPepInitializeVetoMasks @ 0x14023BA2C
 * Callers:
 *     PopPepDeviceStarted @ 0x14016991C (PopPepDeviceStarted.c)
 *     PopPepPlatformStateRegistered @ 0x14023BFE0 (PopPepPlatformStateRegistered.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140026DEC (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x140026F98 (PopFxActivateDevice.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1401386E8 (PopPepUpdateIdleStateRefCount.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 *     PopPluginRequestDeviceIdleConstraints @ 0x14023A21C (PopPluginRequestDeviceIdleConstraints.c)
 *     PopPepInitializeDebuggerMasks @ 0x14023B93C (PopPepInitializeDebuggerMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x14023C580 (PopPepResetDeviceAccountingLevel.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x14023DD98 (PopDiagTraceFxComponentIdleConstraints.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void **__fastcall PopPepInitializeVetoMasks(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // rsi
  __int64 v5; // rax
  void **result; // rax
  unsigned __int64 v7; // rdx
  _DWORD *v8; // r8
  volatile signed __int32 *v9; // r14
  bool v10; // r13
  ULONG_PTR v11; // rdi
  unsigned int v12; // r12d
  unsigned int v13; // edi
  signed __int32 v14; // eax
  signed __int32 v15; // eax
  unsigned int *v16; // rsi
  int v17; // r15d
  unsigned int v18; // edx
  _DWORD *v19; // r10
  __int64 v20; // r11
  unsigned int v21; // r9d
  unsigned int i; // r8d
  __int64 v23; // rax
  unsigned int v24; // r15d
  __int64 v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r8
  bool v30; // dl
  signed __int32 v31; // eax
  unsigned int *v32; // r8
  unsigned int v33; // ecx
  int v34; // r11d
  __int64 v35; // r10
  _DWORD *v36; // r9
  unsigned int v37; // eax
  _DWORD *v38; // rdx
  bool v39; // [rsp+20h] [rbp-B9h]
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-B1h]
  int v42; // [rsp+30h] [rbp-A9h]
  __int64 v43; // [rsp+38h] [rbp-A1h]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-99h]
  __int64 v45; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v46; // [rsp+50h] [rbp-89h]
  _DWORD *v47; // [rsp+58h] [rbp-81h]
  unsigned int v48; // [rsp+60h] [rbp-79h]
  _DWORD v49[32]; // [rsp+70h] [rbp-69h] BYREF
  __int64 retaddr; // [rsp+138h] [rbp+5Fh]

  v2 = *(_QWORD *)(a1 + 32);
  BugCheckParameter2 = v2;
  v5 = *(_QWORD *)(v2 + 48);
  if ( v5 )
  {
    v43 = *(_QWORD *)(v5 + 32);
    PopFxActivateDevice(v43, 0);
    v7 = 32LL;
    v8 = v49;
    if ( ((unsigned __int8)v49 & 4) != 0 )
    {
      v49[0] = 1;
      v7 = 31LL;
      v8 = &v49[1];
    }
    memset64(v8, 0x100000001uLL, v7 >> 1);
    if ( (v7 & 1) != 0 )
      v8[v7 - 1] = 1;
    v9 = (volatile signed __int32 *)(a1 + 64);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64);
    }
    else
    {
      v13 = 0;
      if ( _interlockedbittestandset(v9, 0x1Fu) )
        v13 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 64));
      while ( 1 )
      {
        v14 = *v9;
        if ( (*v9 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v14 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v9, v14 | 0x40000000, v14);
        if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v13);
      }
    }
    v10 = 0;
    v42 = dword_140353880;
    v39 = 0;
    v11 = v2 + 568;
    v12 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v2 + 568));
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v2 + 568));
    }
    *(_QWORD *)(v2 + 608) = 0LL;
    *(_QWORD *)(v2 + 600) = 0LL;
    *(_QWORD *)(v2 + 592) = 0LL;
    *(_BYTE *)(v2 + 576) = 0;
    if ( PopPluginRequestDeviceIdleConstraints(*(_QWORD *)(a1 + 32), (__int64)v49, a2) )
    {
      v39 = 0;
      v15 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
      v12 = v15;
      if ( v15 > 0 )
      {
        v12 = v15 | 0x80000000;
        v39 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, v15 | 0x80000000, v15) == v15;
      }
      v16 = v49;
      v17 = 1;
      v18 = 0;
      if ( a2 )
      {
        v19 = v49;
        v20 = 0LL;
        do
        {
          if ( !*(_BYTE *)(v20 + PopPepPlatformState + 49) && *v19 != 1 )
            PopFxBugCheck(0x620uLL, BugCheckParameter2, v18, 0LL);
          v21 = *v16;
          for ( i = 1; i <= 3; ++i )
          {
            if ( i >= v21 )
              break;
            *(_DWORD *)(a1 + 4LL * (i - 1) + 144) |= v17;
          }
          if ( v42 != -1 && v18 == v42 && v21 > 1 )
          {
            *(_DWORD *)(v11 + 12) = v21;
            *(_QWORD *)(v11 + 24) = MEMORY[0xFFFFF78000000008];
            *(_BYTE *)(v11 + 8) = 1;
          }
          ++v16;
          v17 *= 2;
          ++v18;
          v20 += 384LL;
          ++v19;
        }
        while ( v18 < a2 );
      }
      v2 = BugCheckParameter2;
      v10 = v39;
    }
    *(_DWORD *)(v11 + 16) = v12;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v11, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    v23 = *(int *)(a1 + 156);
    if ( (_DWORD)v23 != 4 )
      PopPepUpdateIdleStateRefCount(0, *(_DWORD *)(a1 + 4 * v23 + 140), 1);
    v24 = 0;
    if ( *(_DWORD *)(a1 + 168) )
    {
      while ( 1 )
      {
        v25 = 200LL * v24;
        v26 = *(_QWORD *)(*(_QWORD *)(v2 + 624) + 8LL * v24);
        memset(v49, 0, sizeof(v49));
        v27 = v26 + 200;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)v27);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v27);
        }
        *(_QWORD *)(v27 + 32) = 0LL;
        *(_QWORD *)(v27 + 40) = 0LL;
        *(_QWORD *)(v27 + 24) = 0LL;
        *(_BYTE *)(v27 + 8) = 0;
        v28 = *(_QWORD *)(a1 + 32);
        v29 = *(_QWORD *)(v28 + 64);
        if ( v29 == PopFxProcessorPlugin )
        {
          v45 = *(_QWORD *)(v28 + 72);
          v46 = v24;
          v47 = v49;
          v48 = a2;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(v29 + 96))(27LL, &v45) )
          {
            PopDiagTraceFxComponentIdleConstraints(v28, v24, v49, a2);
            v30 = 0;
            v31 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
            v12 = v31;
            if ( v31 > 0 )
            {
              v12 = v31 | 0x80000000;
              v30 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, v31 | 0x80000000, v31) == v31;
            }
            v32 = v49;
            v39 = v30;
            v33 = 0;
            v34 = 1;
            if ( a2 )
            {
              v35 = 0LL;
              v36 = v49;
              do
              {
                if ( !*(_BYTE *)(v35 + PopPepPlatformState + 49) && *v36 )
                  PopFxBugCheck(0x621uLL, BugCheckParameter2, v24, v33);
                v37 = 0;
                if ( *(_DWORD *)(v25 + a1 + 364) )
                {
                  v38 = (_DWORD *)(*(_QWORD *)(v25 + a1 + 368) + 16LL);
                  do
                  {
                    if ( v37 >= *v32 )
                      break;
                    *v38 |= v34;
                    ++v37;
                    v38 += 6;
                  }
                  while ( v37 < *(_DWORD *)(v25 + a1 + 364) );
                }
                if ( v42 != -1 && v33 == v42 && *v32 )
                {
                  *(_DWORD *)(v27 + 12) = *v32;
                  *(_QWORD *)(v27 + 24) = MEMORY[0xFFFFF78000000008];
                  *(_BYTE *)(v27 + 8) = 1;
                }
                ++v32;
                v34 *= 2;
                ++v33;
                v35 += 384LL;
                ++v36;
              }
              while ( v33 < a2 );
            }
          }
        }
        *(_DWORD *)(v27 + 16) = v12;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)v27, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v27, 0LL);
        PopPepUpdateIdleStateRefCount(
          0,
          *(_DWORD *)(*(_QWORD *)(v25 + a1 + 368) + 24LL * *(unsigned int *)(v25 + a1 + 352) + 16),
          1);
        if ( ++v24 >= *(_DWORD *)(a1 + 168) )
          break;
        v2 = BugCheckParameter2;
      }
      v10 = v39;
    }
    *(_DWORD *)(a1 + 160) = 2;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
    else
      *v9 = 0;
    __writecr8(CurrentIrql);
    result = PoFxIdleDevice(v43);
    if ( v10 )
      return (void **)PopPepResetDeviceAccountingLevel();
  }
  else
  {
    result = (void **)*(unsigned int *)(v2 + 616);
    if ( ((unsigned __int8)result & 2) != 0 )
      return (void **)PopPepInitializeDebuggerMasks(a1, a2);
  }
  return result;
}
