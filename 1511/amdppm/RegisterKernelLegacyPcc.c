/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C0003250
 * Callers:
 *     RegisterHvLegacyPccCounters @ 0x1C001B0D0 (RegisterHvLegacyPccCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C00047FC (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 *     GetPerfDomain @ 0x1C00190EC (GetPerfDomain.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(__int64 a1)
{
  _DWORD *v1; // r13
  _QWORD *v2; // rdi
  int v4; // ebx
  int PerfDomain; // r15d
  SIZE_T v6; // r14
  __int64 **PoolWithTag; // rax
  __int64 **v8; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  PVOID v11; // rax
  char *v12; // r9
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r15
  _QWORD *v18; // r12
  int v19; // r10d
  _QWORD *v20; // r14
  size_t v21; // rbx
  _QWORD *v22; // rdx
  unsigned int *v23; // rcx
  __int64 *v24; // r10
  __int64 **v25; // rax
  __int64 v27; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+28h] [rbp-18h]
  __int64 v29; // [rsp+30h] [rbp-10h]
  char v30; // [rsp+38h] [rbp-8h]
  size_t Size; // [rsp+78h] [rbp+38h] BYREF

  v1 = (_DWORD *)qword_1C0009810;
  v2 = 0LL;
  if ( qword_1C0009868 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00093A8,
      0LL);
    PerfDomain = GetPerfDomain(a1, &v27, &Size);
    v6 = (unsigned int)(56 * PerfDomain);
    PoolWithTag = (__int64 **)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
    v8 = PoolWithTag;
    if ( PoolWithTag
      && (memset(PoolWithTag, 0, v6),
          v9 = (32 * PerfDomain + 415) & 0xFFFFFFF8,
          v10 = (v9 + 31) & 0xFFFFFFF8,
          Size = v10 + 8 * PerfDomain,
          v11 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u),
          (v2 = v11) != 0LL) )
    {
      memset(v11, 0, Size);
      if ( *(_BYTE *)(a1 + 1065) )
        v2[45] = PepParkPreference;
      if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
      {
        v2[46] = PepParkMask;
        v2[47] = PepPerfCheckComplete;
        v2[8] = *(_QWORD *)(a1 + 1048);
      }
      *(_DWORD *)v2 = 42;
      v2[49] = v2 + 51;
      *((_DWORD *)v2 + 3) = PerfDomain;
      *((_DWORD *)v2 + 8) = 1;
      *((_DWORD *)v2 + 1) = 65537;
      *((_BYTE *)v2 + 40) = 0;
      v12 = (char *)v2 + v9;
      v2[48] = v12;
      v2[50] = (char *)v2 + v10;
      v2[41] = PerfControlLegacyPcc;
      v2[40] = PerfSelectionLegacyPcc;
      v2[42] = PerfInitiateLegacyPcc;
      v2[44] = PerfCommitLegacyPcc;
      v13 = v1[7];
      *((_DWORD *)v2 + 4) = v13;
      *((_DWORD *)v2 + 5) = 100;
      v14 = 100 * v1[9] / v13;
      *((_DWORD *)v2 + 6) = v14;
      v15 = 100 * v1[8] / v13;
      if ( !v14 )
        v14 = 1;
      *((_DWORD *)v2 + 6) = v14;
      if ( !v15 )
        v15 = 1;
      *((_DWORD *)v2 + 7) = v15;
      v2[6] = (unsigned int)v1[9];
      v2[7] = (unsigned int)v1[7];
      v16 = *(_QWORD *)(a1 + 288);
      if ( v16 )
        v2[30] = v16;
      v2[32] = *(_QWORD *)(a1 + 296);
      v2[33] = *(_QWORD *)(a1 + 304);
      if ( dword_1C000980C )
        *((_DWORD *)v2 + 9) = 0x989680 / ((unsigned int)dword_1C000980C >> 1);
      *((_QWORD *)v12 + 1) = 100LL;
      *(_QWORD *)v12 = LegacyPccInstantaneousFrequency;
      *((_WORD *)v12 + 8) = 0;
      v17 = v2[49];
      v18 = (_QWORD *)v2[50];
      *((_DWORD *)v2 + 8) = 1;
      if ( v29 )
        v30 = 0;
      else
        v28 = v27;
      if ( !(unsigned int)EnumerateNextDevice(&v27, &Size) )
      {
        v20 = v8 + 5;
        do
        {
          v21 = Size;
          *(_DWORD *)(v17 + 16) = v19;
          *(_DWORD *)(v17 + 20) = *(_DWORD *)(v21 + 664);
          KeGetProcessorNumberFromIndex(*(_DWORD *)(v21 + 56), (PPROCESSOR_NUMBER)v17);
          v22 = v20 - 5;
          *(_QWORD *)(v17 + 8) = v20 - 5;
          v17 += 32LL;
          v23 = *(unsigned int **)(v21 + 512);
          v20[1] = v21;
          *(_DWORD *)v20 = 100;
          v20 += 7;
          *(v20 - 9) = (char *)v1 + *v23;
          *(v20 - 8) = (char *)v1 + v23[1];
          *v18++ = v22;
        }
        while ( !(unsigned int)EnumerateNextDevice(&v27, &Size) );
      }
      v4 = ((__int64 (__fastcall *)(_QWORD *))qword_1C0009588)(v2);
      if ( v4 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          qword_1C0009860);
        if ( v29 )
          v30 = 0;
        else
          v28 = v27;
        if ( !(unsigned int)EnumerateNextDevice(&v27, &Size) )
        {
          v24 = &qword_1C00093F8;
          do
          {
            *(_QWORD *)(Size + 216) = v8;
            v25 = (__int64 **)qword_1C0009400;
            *v8 = v24;
            v8[1] = (__int64 *)v25;
            if ( *v25 != v24 )
              __fastfail(3u);
            *v25 = (__int64 *)v8;
            qword_1C0009400 = (__int64)v8;
            v8 += 7;
          }
          while ( !(unsigned int)EnumerateNextDevice(&v27, &Size) );
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          qword_1C0009860);
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
      qword_1C00093A8);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x72637250u);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
