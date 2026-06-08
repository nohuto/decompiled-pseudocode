/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C00051C0
 * Callers:
 *     RegisterHvLegacyPccCounters @ 0x1C001C880 (RegisterHvLegacyPccCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001AAC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001AE8 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D00 (memset.c)
 *     GetPerfDomain @ 0x1C001596C (GetPerfDomain.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(__int64 a1)
{
  _DWORD *v1; // r13
  _QWORD *v3; // rdi
  int v4; // ebx
  int PerfDomain; // r14d
  SIZE_T v6; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rsi
  unsigned int v9; // ebp
  unsigned int v10; // r15d
  PVOID v11; // rax
  char *v12; // r9
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rbp
  _QWORD *v18; // r15
  _QWORD *v19; // r14
  int v20; // r10d
  __int64 v21; // rbx
  _QWORD *v22; // rdx
  unsigned int *v23; // rcx
  __int64 v24; // r10
  _QWORD *v25; // rax
  __int64 v27[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF

  v1 = (_DWORD *)qword_1C000E170;
  v3 = 0LL;
  if ( qword_1C000E1C8 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C000DD08,
      0LL);
    PerfDomain = GetPerfDomain(a1, v27, &v28);
    v6 = (unsigned int)(56 * PerfDomain);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
    v8 = PoolWithTag;
    if ( PoolWithTag
      && (memset(PoolWithTag, 0, v6),
          v9 = (32 * PerfDomain + 415) & 0xFFFFFFF8,
          v10 = (v9 + 31) & 0xFFFFFFF8,
          v11 = ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 8 * PerfDomain, 0x72637250u),
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
      *(_DWORD *)v3 = 42;
      v3[49] = v3 + 51;
      *((_DWORD *)v3 + 3) = PerfDomain;
      *((_DWORD *)v3 + 8) = 1;
      *((_DWORD *)v3 + 1) = 65537;
      *((_BYTE *)v3 + 40) = 0;
      v3[50] = (char *)v3 + v10;
      v12 = (char *)v3 + v9;
      v3[48] = v12;
      v3[41] = PerfControlLegacyPcc;
      v3[40] = PerfSelectionLegacyPcc;
      v3[42] = PerfInitiateLegacyPcc;
      v3[44] = PerfCommitLegacyPcc;
      v13 = v1[7];
      *((_DWORD *)v3 + 4) = v13;
      *((_DWORD *)v3 + 5) = 100;
      v14 = 100 * v1[9] / v13;
      *((_DWORD *)v3 + 6) = v14;
      v15 = 100 * v1[8] / v13;
      if ( !v14 )
        v14 = 1;
      *((_DWORD *)v3 + 6) = v14;
      if ( !v15 )
        v15 = 1;
      *((_DWORD *)v3 + 7) = v15;
      v3[6] = (unsigned int)v1[9];
      v3[7] = (unsigned int)v1[7];
      v16 = *(_QWORD *)(a1 + 288);
      if ( v16 )
        v3[30] = v16;
      v3[32] = *(_QWORD *)(a1 + 296);
      v3[33] = *(_QWORD *)(a1 + 304);
      if ( dword_1C000E16C )
        *((_DWORD *)v3 + 9) = 0x989680 / ((unsigned int)dword_1C000E16C >> 1);
      *((_QWORD *)v12 + 1) = 100LL;
      *(_QWORD *)v12 = LegacyPccInstantaneousFrequency;
      *((_WORD *)v12 + 8) = 0;
      v17 = v3[49];
      v18 = (_QWORD *)v3[50];
      *((_DWORD *)v3 + 8) = 1;
      ResetEnumerationContext(v27);
      v19 = v8 + 5;
      while ( !(unsigned int)EnumerateNextDevice((__int64)v27, &v28) )
      {
        v21 = v28;
        *(_DWORD *)(v17 + 16) = v20;
        *(_DWORD *)(v17 + 20) = *(_DWORD *)(v21 + 664);
        KeGetProcessorNumberFromIndex(*(_DWORD *)(v21 + 56), (PPROCESSOR_NUMBER)v17);
        v22 = v19 - 5;
        *(_QWORD *)(v17 + 8) = v19 - 5;
        v23 = *(unsigned int **)(v21 + 512);
        v19[1] = v21;
        *(_DWORD *)v19 = 100;
        *(v19 - 2) = (char *)v1 + *v23;
        *(v19 - 1) = (char *)v1 + v23[1];
        v19 += 7;
        *v18++ = v22;
        v17 += 32LL;
      }
      v4 = ((__int64 (__fastcall *)(_QWORD *))qword_1C000DEE8)(v3);
      if ( v4 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          qword_1C000E1C0);
        ResetEnumerationContext(v27);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v27, &v28) )
        {
          *(_QWORD *)(v28 + 216) = v8;
          v25 = (_QWORD *)qword_1C000DD60;
          *v8 = v24;
          v8[1] = v25;
          if ( *v25 != v24 )
            __fastfail(3u);
          *v25 = v8;
          qword_1C000DD60 = (__int64)v8;
          v8 += 7;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          qword_1C000E1C0);
        v8 = 0LL;
        v4 = 0;
      }
    }
    else
    {
      v4 = -1073741670;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C000DD08);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x72637250u);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
