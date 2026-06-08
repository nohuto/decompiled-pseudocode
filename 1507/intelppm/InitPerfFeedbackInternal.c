/*
 * XREFs of InitPerfFeedbackInternal @ 0x1C001F0DC
 * Callers:
 *     RegisterHvPerfFeedbackCounters @ 0x1C001C900 (RegisterHvPerfFeedbackCounters.c)
 *     RegisterKernelPerfFeedback @ 0x1C0020340 (RegisterKernelPerfFeedback.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C00016FC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001738 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00025C0 (memset.c)
 *     GetPerfDomain @ 0x1C001596C (GetPerfDomain.c)
 *     GetRegistryDwordValue @ 0x1C0016238 (GetRegistryDwordValue.c)
 */

__int64 __fastcall InitPerfFeedbackInternal(__int64 a1, __int64 (__fastcall *a2)(char *, _QWORD))
{
  char *v3; // rdi
  int PerfDomain; // r13d
  SIZE_T v5; // r14
  char *PoolWithTag; // rax
  char *v7; // rsi
  int v8; // ebx
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  char *v11; // rax
  _DWORD *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // r15
  __int64 v16; // r14
  _QWORD *v17; // r12
  __int64 v18; // rbx
  __int64 v20[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+58h]

  v3 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000D9C8,
    0LL);
  PerfDomain = GetPerfDomain((_QWORD *)a1, (__int64)v20, &v22);
  v5 = (unsigned int)(72 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x72637250u);
  v7 = PoolWithTag;
  if ( PoolWithTag
    && (memset(PoolWithTag, 0, v5),
        v9 = (32 * PerfDomain + 415) & 0xFFFFFFF8,
        v10 = (v9 + 31) & 0xFFFFFFF8,
        v23 = v10 + 8 * PerfDomain,
        v11 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v23, 0x72637250u),
        (v3 = v11) != 0LL) )
  {
    memset(v11, 0, v10 + 8 * PerfDomain);
    if ( *(_BYTE *)(a1 + 1073) )
      *((_QWORD *)v3 + 45) = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v3 + 46) = PepParkMask;
      *((_QWORD *)v3 + 47) = PepPerfCheckComplete;
      *((_QWORD *)v3 + 8) = *(_QWORD *)(a1 + 1056);
    }
    *((_DWORD *)v3 + 3) = PerfDomain;
    *((_QWORD *)v3 + 49) = v3 + 408;
    v12 = v3 + 16;
    *((_DWORD *)v3 + 4) = 0;
    *(_DWORD *)v3 = 42;
    *((_QWORD *)v3 + 48) = &v3[v9];
    *((_DWORD *)v3 + 8) = 1;
    *((_QWORD *)v3 + 50) = &v3[v10];
    *((_WORD *)v3 + 2) = v22;
    *((_QWORD *)v3 + 41) = AcpiCStateIdleCancel;
    *((_QWORD *)v3 + 40) = PerfSelectionFeedback;
    *((_WORD *)v3 + 3) = 1;
    v3[40] = 1;
    *((_DWORD *)v3 + 5) = 100;
    *((_DWORD *)v3 + 6) = 100;
    *((_DWORD *)v3 + 7) = 100;
    *((_QWORD *)v3 + 6) = 100LL;
    *((_QWORD *)v3 + 7) = 100LL;
    if ( (int)GetRegistryDwordValue(
                (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                (__int64)L"~MHz",
                (__int64)(v3 + 16)) >= 0
      && *v12 )
    {
      v13 = *(_QWORD *)(a1 + 288);
      if ( v13 )
        *((_QWORD *)v3 + 30) = v13;
      v14 = *((_QWORD *)v3 + 48);
      v15 = v7;
      *(_DWORD *)(v14 + 12) = 0;
      *(_QWORD *)v14 = PerfReadWrappingCounter;
      *(_DWORD *)(v14 + 8) = 100;
      *(_WORD *)(v14 + 16) = 257;
      v16 = *((_QWORD *)v3 + 49);
      v17 = (_QWORD *)*((_QWORD *)v3 + 50);
      ResetEnumerationContext(v20);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v20, &v22) )
      {
        v18 = v22;
        *(_DWORD *)(v16 + 16) = 100;
        *(_DWORD *)(v16 + 20) = *(_DWORD *)(v18 + 672);
        KeGetProcessorNumberFromIndex(*(_DWORD *)(v18 + 56), (PPROCESSOR_NUMBER)v16);
        *(_QWORD *)(v16 + 8) = v15;
        *((_DWORD *)v15 + 16) = *v12;
        *((_QWORD *)v15 + 6) = *(_QWORD *)(v18 + 280);
        *v17 = v15;
        v15 += 72;
        v16 += 32LL;
        ++v17;
      }
      v8 = a2(v3, v23);
      if ( v8 >= 0 )
      {
        ResetEnumerationContext(v20);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v20, &v22) )
        {
          *(_QWORD *)(v22 + 208) = v7;
          v7 += 72;
        }
        v7 = 0LL;
        v8 = 0;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 248) &= ~0x4000000uLL;
      v8 = -1073741823;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000D9C8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  return (unsigned int)v8;
}
