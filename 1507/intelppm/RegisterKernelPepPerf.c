/*
 * XREFs of RegisterKernelPepPerf @ 0x1C001FE90
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C00016FC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001738 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00025C0 (memset.c)
 *     PepNotifyPerfConstraints @ 0x1C00063C4 (PepNotifyPerfConstraints.c)
 *     GetPerfDomain @ 0x1C001596C (GetPerfDomain.c)
 *     PepTranslateLimitReason @ 0x1C0021800 (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  unsigned int *v2; // rsi
  char *v3; // rbx
  char *v4; // r14
  int v5; // edi
  char *PoolWithTag; // rax
  unsigned int *v7; // r12
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  int v11; // edi
  unsigned int v12; // r12d
  int v13; // eax
  char *v14; // rax
  char *v15; // r12
  int v16; // eax
  int v17; // ecx
  char v18; // r10
  _DWORD *v19; // rdi
  signed __int64 v20; // r13
  int v21; // eax
  __int64 v22; // rcx
  char *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  void *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  void *v29; // rax
  __int64 v30; // r10
  int v32; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+24h] [rbp-44h]
  __int64 v34; // [rsp+28h] [rbp-40h] BYREF
  unsigned int *v35; // [rsp+30h] [rbp-38h]
  __int64 v36[6]; // [rsp+38h] [rbp-30h] BYREF
  char v37; // [rsp+B0h] [rbp+48h]
  int v38; // [rsp+B8h] [rbp+50h]
  unsigned int v39; // [rsp+B8h] [rbp+50h]
  int PerfDomain; // [rsp+C0h] [rbp+58h]
  size_t Size; // [rsp+C8h] [rbp+60h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000D9C8,
    0LL);
  v2 = *(unsigned int **)(a1 + 1120);
  v3 = 0LL;
  v4 = 0LL;
  v35 = v2;
  v33 = v2[4];
  if ( !v33 )
  {
    v5 = -1073741823;
    goto LABEL_39;
  }
  if ( v2[9] == -1 )
  {
    v37 = 0;
    v38 = 1;
  }
  else
  {
    v37 = 1;
    v38 = 2;
  }
  PerfDomain = GetPerfDomain((_QWORD *)a1, (__int64)v36, &v32);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * PerfDomain), 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, (unsigned int)(32 * PerfDomain));
  ResetEnumerationContext(v36);
  if ( (unsigned int)EnumerateNextDevice((__int64)v36, &v34) )
  {
LABEL_14:
    v11 = v38;
    v12 = (32 * PerfDomain + 415) & 0xFFFFFFF8;
    v13 = v38 * PerfDomain;
    v39 = (v12 + 24 * v38 + 7) & 0xFFFFFFF8;
    Size = v39 + 8 * v13;
    v14 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72637250u);
    v3 = v14;
    if ( !v14 )
    {
LABEL_7:
      v5 = -1073741670;
      goto LABEL_39;
    }
    memset(v14, 0, Size);
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
    *(_DWORD *)v3 = 42;
    *((_DWORD *)v3 + 8) = v11;
    *((_WORD *)v3 + 3) = 0;
    v3[40] = 0;
    *((_QWORD *)v3 + 48) = &v3[v12];
    v15 = &v3[v39];
    *((_WORD *)v3 + 2) = v32;
    *((_QWORD *)v3 + 41) = PepPerfControlHandler;
    *((_QWORD *)v3 + 40) = PepPerfSelectionHandler;
    *((_QWORD *)v3 + 31) = PepSetTimeWindow;
    *((_DWORD *)v3 + 4) = v33;
    *((_QWORD *)v3 + 50) = v15;
    *((_DWORD *)v3 + 5) = v2[5];
    v16 = v2[6];
    *((_DWORD *)v3 + 6) = v16;
    v17 = v2[7];
    if ( !v16 )
      v16 = 1;
    *((_DWORD *)v3 + 6) = v16;
    if ( !v17 )
      v17 = 1;
    *((_DWORD *)v3 + 7) = v17;
    *((_QWORD *)v3 + 6) = v2[3];
    *((_QWORD *)v3 + 7) = v2[1];
    ResetEnumerationContext(v36);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v36, &v34) )
    {
      v19 = v3 + 432;
      v20 = v4 - v3;
      do
      {
        *(v19 - 2) = *(_DWORD *)((char *)v19 + v20 - 408);
        v21 = PepTranslateLimitReason(*(unsigned int *)((char *)v19 + v20 - 416));
        v22 = v34;
        *v19 = v21;
        *(v19 - 1) = *(_DWORD *)(v22 + 672);
        *((_QWORD *)v19 - 2) = (char *)v19 + v20 - 432;
        KeGetProcessorNumberFromIndex(*(_DWORD *)(v22 + 56), (PPROCESSOR_NUMBER)v19 - 6);
        v23 = (char *)v19 + v20 - 432;
        *(_QWORD *)v15 = v23;
        v15 += 8;
        if ( v37 )
        {
          *(_QWORD *)v15 = v23;
          v15 += 8;
        }
        v19 += 8;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v36, &v34) );
      v2 = v35;
    }
    v24 = v2[8];
    v25 = *((_QWORD *)v3 + 48);
    *(_QWORD *)(v25 + 8) = 100LL;
    *(_BYTE *)(v25 + 16) = v2[2 * v24 + 10] & 1;
    v26 = PepDifferentialFrequencyRead;
    LOBYTE(v24) = (v2[2 * v24 + 10] & 6) == 2;
    *(_BYTE *)(v25 + 17) = v24;
    if ( !(_BYTE)v24 )
      v26 = PepInstantaneousFrequencyRead;
    *(_QWORD *)v25 = v26;
    *((_DWORD *)v3 + 8) = 1;
    if ( v37 != v18 )
    {
      v27 = v2[9];
      v28 = *((_QWORD *)v3 + 48);
      *(_DWORD *)(v28 + 32) = 100;
      *(_DWORD *)(v28 + 36) = 1;
      *(_BYTE *)(v28 + 40) = v2[2 * v27 + 10] & 1;
      v29 = PepDifferentialPerfRead;
      LOBYTE(v27) = (v2[2 * v27 + 10] & 6) == 2;
      *(_BYTE *)(v28 + 41) = v27;
      if ( !(_BYTE)v27 )
        v29 = PepInstantaneousPerfRead;
      *(_QWORD *)(v28 + 24) = v29;
      ++*((_DWORD *)v3 + 8);
    }
    v5 = ((__int64 (__fastcall *)(char *))qword_1C000DBA8)(v3);
    if ( v5 >= 0 )
    {
      ResetEnumerationContext(v36);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v36, &v34) )
      {
        v4 = 0LL;
        do
          *(_QWORD *)(v34 + 1128) = v30;
        while ( !(unsigned int)EnumerateNextDevice((__int64)v36, &v34) );
      }
    }
  }
  else
  {
    v7 = (unsigned int *)(v4 + 20);
    while ( 1 )
    {
      v8 = v34;
      *(_QWORD *)(v7 - 3) = *(_QWORD *)(v34 + 1056);
      *(_QWORD *)(v7 - 5) = *(_QWORD *)(v8 + 1120);
      v5 = PepNotifyPerfConstraints(a1, v7, v7 - 1);
      if ( v5 < 0 )
        break;
      v9 = *v7;
      v10 = v2[1];
      if ( *v7 > v10 || v9 < v2[3] )
      {
        v5 = -1073741811;
        break;
      }
      v7[1] = 100 * v9 / v10;
      v7 += 8;
      if ( (unsigned int)EnumerateNextDevice((__int64)v36, &v34) )
        goto LABEL_14;
    }
  }
LABEL_39:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000D9C8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return (unsigned int)v5;
}
