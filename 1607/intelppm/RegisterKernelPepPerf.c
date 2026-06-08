/*
 * XREFs of RegisterKernelPepPerf @ 0x1C0021340
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001724 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001760 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     PepNotifyPerfConstraints @ 0x1C00075C4 (PepNotifyPerfConstraints.c)
 *     GetPerfDomain @ 0x1C0013CD0 (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x1C001F570 (InitCommonPerfStateContext.c)
 *     PepTranslateLimitReason @ 0x1C00238AC (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  unsigned int *v2; // rsi
  _QWORD *v3; // rbx
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
  _QWORD *v14; // rax
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r10
  unsigned int v19; // eax
  _QWORD *v20; // r10
  __int64 v21; // r10
  _QWORD *v22; // r11
  _QWORD *v23; // r11
  __int64 v24; // rcx
  __int64 v25; // rdx
  void *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  void *v29; // rax
  __int64 v30; // r10
  int v32; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v33; // [rsp+34h] [rbp-34h]
  __int64 v34; // [rsp+38h] [rbp-30h] BYREF
  __int64 v35[5]; // [rsp+40h] [rbp-28h] BYREF
  char v36; // [rsp+B0h] [rbp+48h]
  int v37; // [rsp+B8h] [rbp+50h]
  unsigned int v38; // [rsp+B8h] [rbp+50h]
  int PerfDomain; // [rsp+C0h] [rbp+58h]
  size_t Size; // [rsp+C8h] [rbp+60h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000ECF8,
    0LL);
  v2 = *(unsigned int **)(a1 + 1136);
  v3 = 0LL;
  v4 = 0LL;
  v33 = v2[6];
  if ( !v33 )
  {
    v5 = -1073741823;
    goto LABEL_37;
  }
  if ( v2[11] == -1 )
  {
    v36 = 0;
    v37 = 1;
  }
  else
  {
    v36 = 1;
    v37 = 2;
  }
  PerfDomain = GetPerfDomain((_QWORD *)a1, (__int64)v35, &v32);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * PerfDomain), 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, (unsigned int)(32 * PerfDomain));
  ResetEnumerationContext(v35);
  if ( (unsigned int)EnumerateNextDevice((__int64)v35, &v34) )
  {
LABEL_14:
    v11 = v37;
    v12 = (32 * PerfDomain + 423) & 0xFFFFFFF8;
    v13 = v37 * PerfDomain;
    v38 = (v12 + 24 * v37 + 7) & 0xFFFFFFF8;
    Size = v38 + 8 * v13;
    v14 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72637250u);
    v3 = v14;
    if ( !v14 )
    {
LABEL_7:
      v5 = -1073741670;
      goto LABEL_37;
    }
    memset(v14, 0, Size);
    if ( *(_BYTE *)(a1 + 1081) )
      v3[46] = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 248) & 0x10000000000LL) != 0 )
    {
      v3[47] = PepParkMask;
      v3[48] = PepPerfCheckComplete;
      v3[8] = *(_QWORD *)(a1 + 1064);
    }
    *((_WORD *)v3 + 3) = 0;
    *((_DWORD *)v3 + 3) = PerfDomain;
    *(_DWORD *)v3 = 44;
    v3[50] = v3 + 52;
    *((_DWORD *)v3 + 8) = v11;
    v3[51] = (char *)v3 + v38;
    *((_BYTE *)v3 + 40) = 0;
    v3[49] = (char *)v3 + v12;
    *((_WORD *)v3 + 2) = v32;
    v3[41] = PepPerfControlHandler;
    v3[40] = PepPerfSelectionHandler;
    v3[31] = PepSetTimeWindow;
    *((_DWORD *)v3 + 4) = v33;
    *((_DWORD *)v3 + 5) = v2[7];
    v15 = v2[8];
    *((_DWORD *)v3 + 6) = v15;
    v16 = v2[9];
    if ( !v15 )
      v15 = 1;
    *((_DWORD *)v3 + 6) = v15;
    if ( !v16 )
      v16 = 1;
    *((_DWORD *)v3 + 7) = v16;
    v3[6] = v2[5];
    v3[7] = v2[3];
    ResetEnumerationContext(v35);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v35, &v34) )
    {
      v19 = PepTranslateLimitReason(*(unsigned int *)(v18 + 16), v17);
      InitCommonPerfStateContext(v34, v20, (__int64)v20 + (char *)v3 - v4 + 416, *((_DWORD *)v20 + 6), v19);
      *v22 = v21;
      v23 = v22 + 1;
      if ( v36 )
        *v23 = v21;
    }
    v24 = v2[10];
    v25 = v3[49];
    *(_QWORD *)(v25 + 8) = 100LL;
    *(_BYTE *)(v25 + 16) = v2[2 * v24 + 12] & 1;
    v26 = PepDifferentialFrequencyRead;
    LOBYTE(v24) = (v2[2 * v24 + 12] & 6) == 2;
    *(_BYTE *)(v25 + 17) = v24;
    if ( !(_BYTE)v24 )
      v26 = PepInstantaneousFrequencyRead;
    *(_QWORD *)v25 = v26;
    *((_DWORD *)v3 + 8) = 1;
    if ( v36 )
    {
      v27 = v2[11];
      v28 = v3[49];
      *(_DWORD *)(v28 + 32) = 100;
      *(_DWORD *)(v28 + 36) = 1;
      *(_BYTE *)(v28 + 40) = v2[2 * v27 + 12] & 1;
      v29 = PepDifferentialPerfRead;
      LOBYTE(v27) = (v2[2 * v27 + 12] & 6) == 2;
      *(_BYTE *)(v28 + 41) = v27;
      if ( !(_BYTE)v27 )
        v29 = PepInstantaneousPerfRead;
      *(_QWORD *)(v28 + 24) = v29;
      ++*((_DWORD *)v3 + 8);
    }
    v5 = ((__int64 (__fastcall *)(_QWORD *))qword_1C000EEF0)(v3);
    if ( v5 >= 0 )
    {
      ResetEnumerationContext(v35);
      if ( !(unsigned int)EnumerateNextDevice((__int64)v35, &v34) )
      {
        v4 = 0LL;
        do
          *(_QWORD *)(v34 + 1144) = v30;
        while ( !(unsigned int)EnumerateNextDevice((__int64)v35, &v34) );
      }
    }
  }
  else
  {
    v7 = (unsigned int *)(v4 + 20);
    while ( 1 )
    {
      v8 = v34;
      *(_QWORD *)(v7 - 3) = *(_QWORD *)(v34 + 1064);
      *(_QWORD *)(v7 - 5) = *(_QWORD *)(v8 + 1136);
      v5 = PepNotifyPerfConstraints(a1, v7, v7 - 1);
      if ( v5 < 0 )
        break;
      v9 = *v7;
      v10 = v2[3];
      if ( *v7 > v10 || v9 < v2[5] )
      {
        v5 = -1073741811;
        break;
      }
      v7[1] = 100 * v9 / v10;
      v7 += 8;
      if ( (unsigned int)EnumerateNextDevice((__int64)v35, &v34) )
        goto LABEL_14;
    }
  }
LABEL_37:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000ECF8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return (unsigned int)v5;
}
