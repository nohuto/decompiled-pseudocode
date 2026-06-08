/*
 * XREFs of RegisterKernelPepPerf @ 0x1C0018400
 * Callers:
 *     <none>
 * Callees:
 *     ResetEnumerationContext @ 0x1C00047E8 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00047FC (EnumerateNextDevice.c)
 *     PepNotifyPerfConstraints @ 0x1C0004844 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 *     GetPerfDomain @ 0x1C00190EC (GetPerfDomain.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  unsigned int *v2; // rsi
  char *v3; // rbx
  char *v4; // r14
  int v5; // edi
  int v6; // r12d
  char *PoolWithTag; // rax
  unsigned int *v8; // r15
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  unsigned int v13; // r15d
  char *v14; // rax
  char *v15; // r12
  int v16; // eax
  int v17; // ecx
  int v18; // r10d
  int *v19; // rdi
  signed __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rcx
  char *v23; // r13
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // eax
  void *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned int v30; // eax
  void *v31; // rcx
  __int64 v32; // r10
  unsigned int v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+28h] [rbp-40h] BYREF
  unsigned int *v36; // [rsp+30h] [rbp-38h]
  __int64 v37[6]; // [rsp+38h] [rbp-30h] BYREF
  bool v38; // [rsp+B0h] [rbp+48h]
  int PerfDomain; // [rsp+B8h] [rbp+50h]
  __int16 v40; // [rsp+C8h] [rbp+60h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00093A8,
    0LL);
  v2 = *(unsigned int **)(a1 + 1120);
  v3 = 0LL;
  v4 = 0LL;
  v36 = v2;
  v34 = v2[4];
  if ( !v34 )
  {
    v5 = -1073741823;
    goto LABEL_46;
  }
  v38 = v2[9] != -1;
  v6 = 1;
  if ( v2[9] != -1 )
    v6 = 2;
  PerfDomain = GetPerfDomain(a1, v37, &v40);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * PerfDomain), 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_6;
  memset(PoolWithTag, 0, (unsigned int)(32 * PerfDomain));
  ResetEnumerationContext(v37);
  if ( (unsigned int)EnumerateNextDevice((__int64)v37, &v35) )
  {
LABEL_13:
    v12 = (32 * PerfDomain + 415) & 0xFFFFFFF8;
    v13 = (v12 + 7 + 24 * v6) & 0xFFFFFFF8;
    v14 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v13 + 8 * v6 * PerfDomain, 0x72637250u);
    v3 = v14;
    if ( !v14 )
    {
LABEL_6:
      v5 = -1073741670;
      goto LABEL_46;
    }
    memset(v14, 0, v13 + 8 * v6 * PerfDomain);
    if ( *(_BYTE *)(a1 + 1065) )
      *((_QWORD *)v3 + 45) = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v3 + 46) = PepParkMask;
      *((_QWORD *)v3 + 47) = PepPerfCheckComplete;
      *((_QWORD *)v3 + 8) = *(_QWORD *)(a1 + 1048);
    }
    *((_DWORD *)v3 + 3) = PerfDomain;
    *((_QWORD *)v3 + 49) = v3 + 408;
    *((_DWORD *)v3 + 8) = v6;
    *(_DWORD *)v3 = 42;
    *((_WORD *)v3 + 3) = 0;
    v3[40] = 0;
    *((_QWORD *)v3 + 48) = &v3[v12];
    v15 = &v3[v13];
    *((_WORD *)v3 + 2) = v40;
    *((_QWORD *)v3 + 41) = PepPerfControlHandler;
    *((_QWORD *)v3 + 40) = PepPerfSelectionHandler;
    *((_QWORD *)v3 + 31) = PepSetTimeWindow;
    *((_DWORD *)v3 + 4) = v34;
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
    ResetEnumerationContext(v37);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v37, &v35) )
    {
      v19 = (int *)(v3 + 432);
      v20 = v4 - v3;
      do
      {
        *(v19 - 2) = *(int *)((char *)v19 + v20 - 408);
        switch ( *(int *)((char *)v19 + v20 - 416) )
        {
          case 1:
            v21 = 4;
            break;
          case 2:
            v21 = 8;
            break;
          case 4:
            v21 = 16;
            break;
          default:
            v21 = 2;
            break;
        }
        v22 = v35;
        *v19 = v21;
        v23 = (char *)v19 + v20 - 432;
        *(v19 - 1) = *(_DWORD *)(v22 + 664);
        *((_QWORD *)v19 - 2) = v23;
        KeGetProcessorNumberFromIndex(*(_DWORD *)(v22 + 56), (PPROCESSOR_NUMBER)v19 - 6);
        *(_QWORD *)v15 = v23;
        v15 += 8;
        if ( v38 )
        {
          *(_QWORD *)v15 = v23;
          v15 += 8;
        }
        v19 += 8;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v37, &v35) );
      v2 = v36;
      v18 = 1;
    }
    v24 = v2[8];
    v25 = *((_QWORD *)v3 + 48);
    *(_QWORD *)(v25 + 8) = 100LL;
    *(_BYTE *)(v25 + 16) = v18 & LOBYTE(v2[2 * v24 + 10]);
    v26 = v2[2 * v24 + 10];
    v27 = PepDifferentialFrequencyRead;
    LOBYTE(v26) = (v26 & 6) == 2;
    *(_BYTE *)(v25 + 17) = v26;
    if ( !(_BYTE)v26 )
      v27 = PepInstantaneousFrequencyRead;
    *(_QWORD *)v25 = v27;
    *((_DWORD *)v3 + 8) = v18;
    if ( v38 )
    {
      v28 = v2[9];
      v29 = *((_QWORD *)v3 + 48);
      *(_DWORD *)(v29 + 32) = 100;
      *(_DWORD *)(v29 + 36) = v18;
      *(_BYTE *)(v29 + 40) = v18 & LOBYTE(v2[2 * v28 + 10]);
      v30 = v2[2 * v28 + 10];
      v31 = PepDifferentialPerfRead;
      LOBYTE(v30) = (v30 & 6) == 2;
      *(_BYTE *)(v29 + 41) = v30;
      if ( !(_BYTE)v30 )
        v31 = PepInstantaneousPerfRead;
      *(_QWORD *)(v29 + 24) = v31;
      *((_DWORD *)v3 + 8) += v18;
    }
    v5 = ((__int64 (__fastcall *)(char *))qword_1C0009588)(v3);
    if ( v5 >= 0 )
    {
      ResetEnumerationContext(v37);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v37, &v35) )
      {
        v4 = 0LL;
        do
          *(_QWORD *)(v35 + 1128) = v32;
        while ( !(unsigned int)EnumerateNextDevice((__int64)v37, &v35) );
      }
    }
  }
  else
  {
    v8 = (unsigned int *)(v4 + 20);
    while ( 1 )
    {
      v9 = v35;
      *(_QWORD *)(v8 - 3) = *(_QWORD *)(v35 + 1048);
      *(_QWORD *)(v8 - 5) = *(_QWORD *)(v9 + 1120);
      v5 = PepNotifyPerfConstraints(a1, v8, v8 - 1);
      if ( v5 < 0 )
        break;
      v10 = *v8;
      v11 = v2[1];
      if ( *v8 > v11 || v10 < v2[3] )
      {
        v5 = -1073741811;
        break;
      }
      v8[1] = 100 * v10 / v11;
      v8 += 8;
      if ( (unsigned int)EnumerateNextDevice((__int64)v37, &v35) )
        goto LABEL_13;
    }
  }
LABEL_46:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00093A8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return (unsigned int)v5;
}
