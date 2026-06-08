/*
 * XREFs of InitPerfFeedbackInternal @ 0x1C001741C
 * Callers:
 *     RegisterKernelPerfFeedback @ 0x1C0017770 (RegisterKernelPerfFeedback.c)
 *     RegisterHvPerfFeedbackCounters @ 0x1C001B0C0 (RegisterHvPerfFeedbackCounters.c)
 * Callees:
 *     ResetEnumerationContext @ 0x1C00047E8 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00047FC (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 *     GetPerfDomain @ 0x1C00190EC (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001BE2C (GetRegistryDwordValueNoDefault.c)
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
  __int64 v12; // r9
  __int64 v13; // rax
  _DWORD *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // r15
  __int64 v18; // r14
  _QWORD *v19; // r13
  __int64 v20; // rbx
  __int64 v22[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+58h]

  v3 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  PerfDomain = GetPerfDomain(a1, v22, &v24);
  v5 = (unsigned int)(72 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x72637250u);
  v7 = PoolWithTag;
  if ( PoolWithTag
    && (memset(PoolWithTag, 0, v5),
        v9 = (32 * PerfDomain + 415) & 0xFFFFFFF8,
        v10 = (v9 + 31) & 0xFFFFFFF8,
        v25 = v10 + 8 * PerfDomain,
        v11 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v25, 0x72637250u),
        (v3 = v11) != 0LL) )
  {
    memset(v11, 0, v10 + 8 * PerfDomain);
    if ( *(_BYTE *)(a1 + 1065) )
      *((_QWORD *)v3 + 45) = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v3 + 46) = PepParkMask;
      *((_QWORD *)v3 + 47) = PepPerfCheckComplete;
      *((_QWORD *)v3 + 8) = *(_QWORD *)(a1 + 1048);
    }
    *(_DWORD *)v3 = 42;
    *((_QWORD *)v3 + 49) = v3 + 408;
    *((_DWORD *)v3 + 3) = PerfDomain;
    *((_QWORD *)v3 + 48) = &v3[v9];
    v13 = v10;
    v14 = v3 + 16;
    *((_DWORD *)v3 + 4) = 0;
    *((_QWORD *)v3 + 50) = &v3[v13];
    *((_WORD *)v3 + 2) = v24;
    *((_QWORD *)v3 + 41) = AcpiCStateIdleCancel;
    *((_QWORD *)v3 + 40) = PerfSelectionFeedback;
    *((_DWORD *)v3 + 8) = 1;
    *((_WORD *)v3 + 3) = 1;
    v3[40] = 1;
    *((_DWORD *)v3 + 5) = 100;
    *((_DWORD *)v3 + 6) = 100;
    *((_DWORD *)v3 + 7) = 100;
    *((_QWORD *)v3 + 6) = 100LL;
    *((_QWORD *)v3 + 7) = 100LL;
    if ( (int)GetRegistryDwordValueNoDefault(
                L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                L"~MHz",
                v3 + 16,
                v12) < 0 )
      *v14 = 0;
    if ( *v14 )
    {
      v15 = *(_QWORD *)(a1 + 288);
      if ( v15 )
        *((_QWORD *)v3 + 30) = v15;
      v16 = *((_QWORD *)v3 + 48);
      v17 = v7;
      *(_DWORD *)(v16 + 12) = 0;
      *(_QWORD *)v16 = PerfReadWrappingCounter;
      *(_DWORD *)(v16 + 8) = 100;
      *(_WORD *)(v16 + 16) = 257;
      v18 = *((_QWORD *)v3 + 49);
      v19 = (_QWORD *)*((_QWORD *)v3 + 50);
      ResetEnumerationContext(v22);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v22, &v24) )
      {
        v20 = v24;
        *(_DWORD *)(v18 + 16) = 100;
        *(_DWORD *)(v18 + 20) = *(_DWORD *)(v20 + 664);
        KeGetProcessorNumberFromIndex(*(_DWORD *)(v20 + 56), (PPROCESSOR_NUMBER)v18);
        *(_QWORD *)(v18 + 8) = v17;
        *((_DWORD *)v17 + 16) = *v14;
        *((_QWORD *)v17 + 6) = *(_QWORD *)(v20 + 280);
        *v19 = v17;
        v17 += 72;
        v18 += 32LL;
        ++v19;
      }
      v8 = a2(v3, v25);
      if ( v8 >= 0 )
      {
        ResetEnumerationContext(v22);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v22, &v24) )
        {
          *(_QWORD *)(v24 + 208) = v7;
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
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00093A8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  return (unsigned int)v8;
}
