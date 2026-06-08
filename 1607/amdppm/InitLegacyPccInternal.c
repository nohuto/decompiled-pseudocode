/*
 * XREFs of InitLegacyPccInternal @ 0x1C000400C
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C0004000 (RegisterKernelLegacyPcc.c)
 *     RegisterHvLegacyPccCounters @ 0x1C001DD70 (RegisterHvLegacyPccCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0006210 (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     GetPerfDomain @ 0x1C0016434 (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x1C0018484 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitLegacyPccInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  _DWORD *v2; // r13
  _QWORD *v3; // rbx
  int v5; // edi
  int PerfDomain; // r15d
  SIZE_T v7; // r14
  __int64 **PoolWithTag; // rax
  __int64 **v9; // rsi
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  PVOID v12; // rax
  char *v13; // r9
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  unsigned int *v20; // rdx
  __int64 v21; // r10
  int v22; // r9d
  int v23; // r10d
  int v24; // r11d
  __int64 **v25; // r10
  __int64 *v26; // r11
  __int64 *v27; // rax
  __int64 v29; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+38h] [rbp-18h]
  __int64 v31; // [rsp+40h] [rbp-10h]
  char v32; // [rsp+48h] [rbp-8h]
  __int64 v34; // [rsp+A0h] [rbp+50h] BYREF

  v2 = (_DWORD *)qword_1C0009868;
  v3 = 0LL;
  if ( qword_1C00098C0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00093A8,
      0LL);
    PerfDomain = GetPerfDomain(a1, &v29, &v34);
    v7 = (unsigned int)(56 * PerfDomain);
    PoolWithTag = (__int64 **)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72637250u);
    v9 = PoolWithTag;
    if ( PoolWithTag
      && (memset(PoolWithTag, 0, v7),
          v10 = (32 * PerfDomain + 423) & 0xFFFFFFF8,
          v11 = (v10 + 31) & 0xFFFFFFF8,
          v12 = ExAllocatePoolWithTag(NonPagedPoolNx, v11 + 8 * PerfDomain, 0x72637250u),
          (v3 = v12) != 0LL) )
    {
      memset(v12, 0, v11 + 8 * PerfDomain);
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
      *((_DWORD *)v3 + 3) = PerfDomain;
      *((_DWORD *)v3 + 8) = 1;
      *((_DWORD *)v3 + 1) = 65537;
      *((_BYTE *)v3 + 40) = 0;
      v13 = (char *)v3 + v10;
      v3[49] = v13;
      v3[51] = (char *)v3 + v11;
      v3[41] = PerfControlLegacyPcc;
      v3[42] = PerfControlLegacyPcc;
      v3[40] = PerfSelectionLegacyPcc;
      v3[43] = PerfInitiateLegacyPcc;
      v3[45] = PerfCommitLegacyPcc;
      v14 = v2[7];
      *((_DWORD *)v3 + 4) = v14;
      *((_DWORD *)v3 + 5) = 100;
      v15 = 100 * v2[9] / v14;
      *((_DWORD *)v3 + 6) = v15;
      v16 = 100 * v2[8] / v14;
      if ( !v15 )
        v15 = 1;
      *((_DWORD *)v3 + 6) = v15;
      if ( !v16 )
        v16 = 1;
      *((_DWORD *)v3 + 7) = v16;
      v3[6] = (unsigned int)v2[9];
      v3[7] = (unsigned int)v2[7];
      v17 = *(_QWORD *)(a1 + 304);
      if ( v17 )
        v3[30] = v17;
      v3[32] = *(_QWORD *)(a1 + 312);
      v3[33] = *(_QWORD *)(a1 + 320);
      if ( dword_1C0009864 )
        *((_DWORD *)v3 + 9) = 0x989680 / ((unsigned int)dword_1C0009864 >> 1);
      *((_QWORD *)v13 + 1) = 100LL;
      *(_QWORD *)v13 = LegacyPccInstantaneousFrequency;
      *((_WORD *)v13 + 8) = 0;
      v18 = (_QWORD *)v3[51];
      *((_DWORD *)v3 + 8) = 1;
      if ( v31 )
        v32 = 0;
      else
        v30 = v29;
      while ( !(unsigned int)EnumerateNextDevice(&v29, &v34) )
      {
        InitCommonPerfStateContext(v34, v23, v24, 100, 0);
        v20 = *(unsigned int **)(v19 + 528);
        *(_QWORD *)v21 = v19;
        *(_DWORD *)(v21 + 48) = v22;
        *(_QWORD *)(v21 + 32) = (char *)v2 + *v20;
        *(_QWORD *)(v21 + 40) = (char *)v2 + v20[1];
        *v18++ = v21;
      }
      v5 = a2(v3, v11 + 8 * PerfDomain);
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          qword_1C00098B8);
        if ( v31 )
          v32 = 0;
        else
          v30 = v29;
        if ( !(unsigned int)EnumerateNextDevice(&v29, &v34) )
        {
          v25 = v9 + 1;
          v26 = &qword_1C00093F8;
          do
          {
            *(_QWORD *)(v34 + 216) = v25 - 1;
            v27 = (__int64 *)qword_1C0009400;
            if ( *(__int64 **)qword_1C0009400 != v26 )
              __fastfail(3u);
            *v25 = v26;
            v25[1] = v27;
            *v27 = (__int64)v25;
            qword_1C0009400 = (__int64)v25;
          }
          while ( !(unsigned int)EnumerateNextDevice(&v29, &v34) );
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          qword_1C00098B8);
        v9 = 0LL;
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00093A8);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x72637250u);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
