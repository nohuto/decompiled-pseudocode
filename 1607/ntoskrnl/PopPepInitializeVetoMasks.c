/*
 * XREFs of PopPepInitializeVetoMasks @ 0x1402063D4
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x1401420A0 (PoFxStartDevicePowerManagement.c)
 *     PopPepPlatformStateRegistered @ 0x1402067F4 (PopPepPlatformStateRegistered.c)
 * Callees:
 *     PopFxActivateDevice @ 0x140007BFC (PopFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x140007FA0 (PoFxIdleDevice.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140130DD8 (PopPepUpdateIdleStateRefCount.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 *     PopPluginRequestDeviceIdleConstraints @ 0x140204804 (PopPluginRequestDeviceIdleConstraints.c)
 *     PopFxEnableEnhancedAccounting @ 0x140205BDC (PopFxEnableEnhancedAccounting.c)
 *     PopPepInitializeDebuggerMasks @ 0x1402062E4 (PopPepInitializeDebuggerMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x140206C2C (PopPepResetDeviceAccountingLevel.c)
 *     PopDiagTraceFxComponentIdleConstraints @ 0x14020847C (PopDiagTraceFxComponentIdleConstraints.c)
 */

void __fastcall PopPepInitializeVetoMasks(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // r15
  unsigned int v3; // r14d
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _DWORD *v8; // r8
  KIRQL v9; // al
  int v10; // r13d
  signed __int32 v11; // esi
  bool v12; // al
  unsigned int v13; // edx
  unsigned int *v14; // rsi
  int v15; // r14d
  __int64 v16; // r11
  _DWORD *v17; // r10
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // r13
  __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // r8
  unsigned int *v26; // rdi
  unsigned int v27; // edx
  int v28; // r11d
  __int64 v29; // r10
  _DWORD *v30; // r8
  __int64 v31; // r9
  unsigned int v32; // eax
  _DWORD *v33; // rcx
  bool v34; // [rsp+20h] [rbp-A9h]
  KIRQL OldIrql; // [rsp+21h] [rbp-A8h]
  signed __int32 v36; // [rsp+24h] [rbp-A5h] BYREF
  int v37; // [rsp+28h] [rbp-A1h]
  __int64 v38; // [rsp+30h] [rbp-99h]
  __int64 v39; // [rsp+38h] [rbp-91h]
  __int64 v40; // [rsp+40h] [rbp-89h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-81h]
  _DWORD *v42; // [rsp+50h] [rbp-79h]
  unsigned int v43; // [rsp+58h] [rbp-71h]
  _DWORD v44[32]; // [rsp+60h] [rbp-69h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 48);
  if ( v6 )
  {
    v39 = *(_QWORD *)(v6 + 32);
    PopFxActivateDevice(v39, 0);
    v7 = 32LL;
    v8 = v44;
    if ( ((unsigned __int8)v44 & 4) != 0 )
    {
      v44[0] = 1;
      v7 = 31LL;
      v8 = &v44[1];
    }
    memset64(v8, 0x100000001uLL, v7 >> 1);
    if ( (v7 & 1) != 0 )
      v8[v7 - 1] = 1;
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
    v10 = dword_140328980;
    OldIrql = v9;
    v37 = dword_140328980;
    v34 = 0;
    v36 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
    v11 = v36;
    KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 568));
    *(_QWORD *)(v2 + 608) = 0LL;
    *(_QWORD *)(v2 + 600) = 0LL;
    *(_QWORD *)(v2 + 592) = 0LL;
    *(_BYTE *)(v2 + 576) = 0;
    if ( PopPluginRequestDeviceIdleConstraints(*(_QWORD *)(a1 + 32), (__int64)v44, a2) )
    {
      v12 = PopFxEnableEnhancedAccounting(&v36);
      v13 = 0;
      v34 = v12;
      v14 = v44;
      v15 = 1;
      if ( a2 )
      {
        v16 = 0LL;
        v17 = v44;
        do
        {
          if ( !*(_BYTE *)(v16 + PopPepPlatformState + 49) && *v17 != 1 )
            PopFxBugCheck(0x620uLL, v2, v13, 0LL);
          v18 = *v14;
          v19 = 1;
          do
          {
            if ( v19 >= v18 )
              break;
            v20 = v19++ - 1;
            *(_DWORD *)(a1 + 4 * v20 + 144) |= v15;
          }
          while ( v19 <= 3 );
          if ( v10 != -1 && v13 == v10 && v18 > 1 )
          {
            *(_DWORD *)(v2 + 580) = v18;
            *(_QWORD *)(v2 + 592) = MEMORY[0xFFFFF78000000008];
            *(_BYTE *)(v2 + 576) = 1;
          }
          ++v14;
          v15 *= 2;
          ++v13;
          v16 += 384LL;
          ++v17;
        }
        while ( v13 < a2 );
      }
      v11 = v36;
      v3 = 0;
    }
    *(_DWORD *)(v2 + 584) = v11;
    KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 568));
    v21 = *(_DWORD *)(a1 + 156);
    if ( v21 != 4 )
      PopPepUpdateIdleStateRefCount(0, *(_DWORD *)(a1 + 4LL * (v21 - 1) + 144), 1);
    if ( *(_DWORD *)(a1 + 168) )
    {
      do
      {
        v38 = 200LL * v3;
        v22 = *(_QWORD *)(*(_QWORD *)(v2 + 624) + 8LL * v3);
        memset(v44, 0, sizeof(v44));
        v23 = v22 + 200;
        KxAcquireSpinLock((PKSPIN_LOCK)v23);
        *(_QWORD *)(v23 + 32) = 0LL;
        *(_QWORD *)(v23 + 40) = 0LL;
        *(_QWORD *)(v23 + 24) = 0LL;
        *(_BYTE *)(v23 + 8) = 0;
        v24 = *(_QWORD *)(a1 + 32);
        v25 = *(_QWORD *)(v24 + 64);
        if ( v25 == PopFxProcessorPlugin )
        {
          v40 = *(_QWORD *)(v24 + 72);
          v41 = v3;
          v42 = v44;
          v43 = a2;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(v25 + 96))(27LL, &v40) )
          {
            PopDiagTraceFxComponentIdleConstraints(v24, v3, v44, a2);
            v34 = PopFxEnableEnhancedAccounting(&v36);
            v26 = v44;
            v27 = 0;
            v28 = 1;
            if ( a2 )
            {
              v29 = v38;
              v30 = v44;
              v31 = 0LL;
              do
              {
                if ( !*(_BYTE *)(v31 + PopPepPlatformState + 49) && *v30 )
                  PopFxBugCheck(0x621uLL, v2, v3, v27);
                v32 = 0;
                if ( *(_DWORD *)(v29 + a1 + 364) )
                {
                  v33 = (_DWORD *)(*(_QWORD *)(v29 + a1 + 368) + 16LL);
                  do
                  {
                    if ( v32 >= *v26 )
                      break;
                    *v33 |= v28;
                    ++v32;
                    v33 += 6;
                  }
                  while ( v32 < *(_DWORD *)(v29 + a1 + 364) );
                }
                if ( v37 != -1 && v27 == v37 && *v26 )
                {
                  *(_DWORD *)(v23 + 12) = *v26;
                  *(_QWORD *)(v23 + 24) = MEMORY[0xFFFFF78000000008];
                  *(_BYTE *)(v23 + 8) = 1;
                }
                ++v26;
                v28 *= 2;
                ++v27;
                v31 += 384LL;
                ++v30;
              }
              while ( v27 < a2 );
            }
            v11 = v36;
          }
        }
        *(_DWORD *)(v23 + 16) = v11;
        KxReleaseSpinLock((PKSPIN_LOCK)v23);
        PopPepUpdateIdleStateRefCount(
          0,
          *(_DWORD *)(*(_QWORD *)(v38 + a1 + 368) + 24LL * *(unsigned int *)(v38 + a1 + 352) + 16),
          1);
        ++v3;
      }
      while ( v3 < *(_DWORD *)(a1 + 168) );
    }
    *(_DWORD *)(a1 + 160) = 2;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64), OldIrql);
    PoFxIdleDevice(v39);
    if ( v34 )
      PopPepResetDeviceAccountingLevel();
  }
  else if ( (*(_DWORD *)(v2 + 616) & 2) != 0 )
  {
    PopPepInitializeDebuggerMasks(a1, a2);
  }
}
