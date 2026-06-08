/*
 * XREFs of InitPerfFeedbackInternal @ 0x1C0020474
 * Callers:
 *     RegisterHvPerfFeedbackCounters @ 0x1C001DDF0 (RegisterHvPerfFeedbackCounters.c)
 *     RegisterKernelPerfFeedback @ 0x1C00217C0 (RegisterKernelPerfFeedback.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001724 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001760 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     GetRegistryDwordValue @ 0x1C00131E8 (GetRegistryDwordValue.c)
 *     GetPerfDomain @ 0x1C0013CD0 (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x1C001F570 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitPerfFeedbackInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  _QWORD *v3; // rbx
  int PerfDomain; // r13d
  SIZE_T v5; // r14
  char *PoolWithTag; // rax
  char *v7; // rsi
  int v8; // edi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  PVOID v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // r14
  char *v16; // r11
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v20[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+50h] BYREF

  v3 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000ECF8,
    0LL);
  PerfDomain = GetPerfDomain((_QWORD *)a1, (__int64)v20, &v22);
  v5 = (unsigned int)(80 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x72637250u);
  v7 = PoolWithTag;
  if ( PoolWithTag
    && (memset(PoolWithTag, 0, v5),
        v9 = (32 * PerfDomain + 423) & 0xFFFFFFF8,
        v10 = (v9 + 31) & 0xFFFFFFF8,
        v11 = ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 8 * PerfDomain, 0x72637250u),
        (v3 = v11) != 0LL) )
  {
    memset(v11, 0, v10 + 8 * PerfDomain);
    if ( *(_BYTE *)(a1 + 1081) )
      v3[46] = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
    {
      v3[47] = PepParkMask;
      v3[48] = PepPerfCheckComplete;
      v3[8] = *(_QWORD *)(a1 + 1064);
    }
    *(_DWORD *)v3 = 44;
    v3[50] = v3 + 52;
    *((_DWORD *)v3 + 4) = 0;
    *((_DWORD *)v3 + 3) = PerfDomain;
    v3[49] = (char *)v3 + v9;
    *((_DWORD *)v3 + 8) = 1;
    v3[51] = (char *)v3 + v10;
    *((_WORD *)v3 + 2) = v22;
    v3[41] = AcpiCStateIdleCancel;
    v3[42] = AcpiCStateIdleCancel;
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
      v12 = *(_QWORD *)(a1 + 304);
      if ( v12 )
        v3[30] = v12;
      v13 = v3[49];
      *(_DWORD *)(v13 + 12) = 0;
      *(_QWORD *)v13 = PerfReadWrappingCounter;
      *(_DWORD *)(v13 + 8) = 100;
      *(_WORD *)(v13 + 16) = 257;
      v14 = v3[50];
      v15 = (_QWORD *)v3[51];
      ResetEnumerationContext(v20);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v20, &v22) )
      {
        v16 = v7 + 56;
        do
        {
          InitCommonPerfStateContext(v22, (_QWORD *)v16 - 7, v14, 100, 0);
          *(_DWORD *)(v17 + 16) = *((_DWORD *)v3 + 4);
          v14 += 32LL;
          *(_QWORD *)v17 = *(_QWORD *)(v18 + 296);
          *v15++ = v17 - 48;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64)v20, &v22) );
      }
      v8 = a2(v3, v10 + 8 * PerfDomain);
      if ( v8 >= 0 )
      {
        ResetEnumerationContext(v20);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v20, &v22) )
        {
          *(_QWORD *)(v22 + 208) = v7;
          v7 += 80;
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
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000ECF8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  return (unsigned int)v8;
}
