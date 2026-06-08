/*
 * XREFs of InitPerfFeedbackInternal @ 0x1C001F1D4
 * Callers:
 *     RegisterHvPerfFeedbackCounters @ 0x1C001CA10 (RegisterHvPerfFeedbackCounters.c)
 *     RegisterKernelPerfFeedback @ 0x1C0020430 (RegisterKernelPerfFeedback.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001AAC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001AE8 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D00 (memset.c)
 *     GetPerfDomain @ 0x1C001596C (GetPerfDomain.c)
 *     GetRegistryDwordValue @ 0x1C00162F0 (GetRegistryDwordValue.c)
 */

__int64 __fastcall InitPerfFeedbackInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  _QWORD *v3; // rdi
  int PerfDomain; // r13d
  SIZE_T v5; // r14
  char *PoolWithTag; // rax
  char *v7; // rsi
  int v8; // ebx
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  PVOID v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // r15
  __int64 v15; // r14
  _QWORD *v16; // r12
  __int64 v17; // rbx
  __int64 v19[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v21; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+58h]

  v3 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000DD08,
    0LL);
  PerfDomain = GetPerfDomain((_QWORD *)a1, (__int64)v19, &v21);
  v5 = (unsigned int)(72 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x72637250u);
  v7 = PoolWithTag;
  if ( PoolWithTag
    && (memset(PoolWithTag, 0, v5),
        v9 = (32 * PerfDomain + 415) & 0xFFFFFFF8,
        v10 = (v9 + 31) & 0xFFFFFFF8,
        v22 = v10 + 8 * PerfDomain,
        v11 = ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x72637250u),
        (v3 = v11) != 0LL) )
  {
    memset(v11, 0, v10 + 8 * PerfDomain);
    if ( *(_BYTE *)(a1 + 1065) )
      v3[45] = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
    {
      v3[46] = PepParkMask;
      v3[47] = PepPerfCheckComplete;
      v3[8] = *(_QWORD *)(a1 + 1048);
    }
    *((_DWORD *)v3 + 3) = PerfDomain;
    v3[49] = v3 + 51;
    *((_DWORD *)v3 + 4) = 0;
    *(_DWORD *)v3 = 42;
    v3[48] = (char *)v3 + v9;
    *((_DWORD *)v3 + 8) = 1;
    v3[50] = (char *)v3 + v10;
    *((_WORD *)v3 + 2) = v21;
    v3[41] = AcpiCStateIdleCancel;
    v3[40] = PerfSelectionFeedback;
    *((_WORD *)v3 + 3) = 1;
    *((_BYTE *)v3 + 40) = 1;
    *((_DWORD *)v3 + 5) = 100;
    *((_DWORD *)v3 + 6) = 100;
    *((_DWORD *)v3 + 7) = 100;
    v3[6] = 100LL;
    v3[7] = 100LL;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
      (__int64)L"~MHz",
      (_DWORD *)v3 + 4);
    if ( *((_DWORD *)v3 + 4) )
    {
      v12 = *(_QWORD *)(a1 + 288);
      if ( v12 )
        v3[30] = v12;
      v13 = v3[48];
      v14 = v7;
      *(_DWORD *)(v13 + 12) = 0;
      *(_QWORD *)v13 = PerfReadWrappingCounter;
      *(_DWORD *)(v13 + 8) = 100;
      *(_WORD *)(v13 + 16) = 257;
      v15 = v3[49];
      v16 = (_QWORD *)v3[50];
      ResetEnumerationContext(v19);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v19, &v21) )
      {
        v17 = v21;
        *(_DWORD *)(v15 + 16) = 100;
        *(_DWORD *)(v15 + 20) = *(_DWORD *)(v17 + 664);
        KeGetProcessorNumberFromIndex(*(_DWORD *)(v17 + 56), (PPROCESSOR_NUMBER)v15);
        *(_QWORD *)(v15 + 8) = v14;
        *((_DWORD *)v14 + 16) = *((_DWORD *)v3 + 4);
        *((_QWORD *)v14 + 6) = *(_QWORD *)(v17 + 280);
        *v16 = v14;
        v14 += 72;
        v15 += 32LL;
        ++v16;
      }
      v8 = a2(v3, v22);
      if ( v8 >= 0 )
      {
        ResetEnumerationContext(v19);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v19, &v21) )
        {
          *(_QWORD *)(v21 + 208) = v7;
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
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000DD08);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  return (unsigned int)v8;
}
