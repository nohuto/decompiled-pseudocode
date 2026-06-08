/*
 * XREFs of InitPerfFeedbackInternal @ 0x1C0018C6C
 * Callers:
 *     RegisterKernelPerfFeedback @ 0x1C0018FF0 (RegisterKernelPerfFeedback.c)
 *     RegisterHvPerfFeedbackCounters @ 0x1C001DD60 (RegisterHvPerfFeedbackCounters.c)
 * Callees:
 *     ResetEnumerationContext @ 0x1C00061FC (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0006210 (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     GetPerfDomain @ 0x1C0016434 (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001E168 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall InitPerfFeedbackInternal(__int64 a1, __int64 (__fastcall *a2)(char *, _QWORD))
{
  char *v3; // rbx
  int PerfDomain; // r13d
  SIZE_T v5; // r14
  char *PoolWithTag; // rax
  char *v7; // rsi
  int v8; // edi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  char *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  _DWORD *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // r10
  char *v19; // r11
  __int64 v20; // rcx
  int v21; // eax
  __int64 v23[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+90h] [rbp+50h] BYREF

  v3 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  PerfDomain = GetPerfDomain((_QWORD *)a1, (__int64)v23, &v25);
  v5 = (unsigned int)(80 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x72637250u);
  v7 = PoolWithTag;
  if ( PoolWithTag
    && (memset(PoolWithTag, 0, v5),
        v9 = (32 * PerfDomain + 423) & 0xFFFFFFF8,
        v10 = (v9 + 31) & 0xFFFFFFF8,
        v11 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 8 * PerfDomain, 0x72637250u),
        (v3 = v11) != 0LL) )
  {
    memset(v11, 0, v10 + 8 * PerfDomain);
    if ( *(_BYTE *)(a1 + 1081) )
      *((_QWORD *)v3 + 46) = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v3 + 47) = PepParkMask;
      *((_QWORD *)v3 + 48) = PepPerfCheckComplete;
      *((_QWORD *)v3 + 8) = *(_QWORD *)(a1 + 1064);
    }
    *(_DWORD *)v3 = 44;
    *((_DWORD *)v3 + 5) = 100;
    *((_QWORD *)v3 + 50) = v3 + 416;
    v13 = v9;
    v14 = v3 + 16;
    *((_DWORD *)v3 + 6) = 100;
    *((_QWORD *)v3 + 49) = &v3[v13];
    *((_DWORD *)v3 + 7) = 100;
    *((_QWORD *)v3 + 6) = 100LL;
    *((_QWORD *)v3 + 7) = 100LL;
    *((_DWORD *)v3 + 3) = PerfDomain;
    *((_QWORD *)v3 + 51) = &v3[v10];
    *((_WORD *)v3 + 2) = v25;
    *((_QWORD *)v3 + 41) = AcpiCStateIdleCancel;
    *((_QWORD *)v3 + 42) = AcpiCStateIdleCancel;
    *((_QWORD *)v3 + 40) = PerfSelectionFeedback;
    *((_DWORD *)v3 + 8) = 1;
    *((_WORD *)v3 + 3) = 1;
    v3[40] = 1;
    *((_DWORD *)v3 + 4) = 0;
    if ( (int)GetRegistryDwordValueNoDefault(
                L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                L"~MHz",
                v3 + 16,
                v12) < 0 )
      *v14 = 0;
    if ( *v14 )
    {
      v15 = *(_QWORD *)(a1 + 304);
      if ( v15 )
        *((_QWORD *)v3 + 30) = v15;
      v16 = *((_QWORD *)v3 + 49);
      *(_QWORD *)v16 = PerfReadWrappingCounter;
      *(_QWORD *)(v16 + 8) = 100LL;
      *(_WORD *)(v16 + 16) = 257;
      v17 = (_QWORD *)*((_QWORD *)v3 + 51);
      ResetEnumerationContext(v23);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v23, &v25) )
      {
        v19 = v7 + 56;
        do
        {
          v20 = v25;
          *((_QWORD *)v19 - 7) = v25;
          *(_QWORD *)(v18 + 8) = v19 - 56;
          if ( *(_BYTE *)(v20 + 66) )
          {
            v21 = *(_DWORD *)(v20 + 68);
            *(_BYTE *)(v18 + 28) = 1;
          }
          else
          {
            v21 = *(_DWORD *)(v20 + 56);
          }
          *(_DWORD *)v18 = v21;
          *(_DWORD *)(v18 + 20) = *(_DWORD *)(v20 + 680);
          *(_DWORD *)(v18 + 16) = 100;
          *(_DWORD *)(v18 + 24) = 0;
          *((_DWORD *)v19 + 4) = *v14;
          *(_QWORD *)v19 = *(_QWORD *)(v20 + 296);
          *v17++ = v19 - 48;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64)v23, &v25) );
      }
      v8 = a2(v3, v10 + 8 * PerfDomain);
      if ( v8 >= 0 )
      {
        ResetEnumerationContext(v23);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v23, &v25) )
        {
          *(_QWORD *)(v25 + 208) = v7;
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
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00093A8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  return (unsigned int)v8;
}
