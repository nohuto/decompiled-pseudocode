/*
 * XREFs of ACPIThermalWorker @ 0x1C006CD70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AMLIFreeDataBuffs @ 0x1C00079D0 (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     ACPIThermalLoop @ 0x1C001A034 (ACPIThermalLoop.c)
 *     ACPIThermalUpdateConstraints @ 0x1C001A708 (ACPIThermalUpdateConstraints.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0040BB0 (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalBuildConstraints @ 0x1C0066D3C (ACPIThermalBuildConstraints.c)
 *     ACPIAmliEvaluateDsm @ 0x1C006BC54 (ACPIAmliEvaluateDsm.c)
 *     ACPIThermalGetParameter @ 0x1C006D198 (ACPIThermalGetParameter.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C006D228 (ACPIThermalGetOverrideHandle.c)
 *     ACPIThermalCheckNativeTemperatureSupport @ 0x1C006D2B8 (ACPIThermalCheckNativeTemperatureSupport.c)
 *     ACPIThermalCheckPolicySupport @ 0x1C006D334 (ACPIThermalCheckPolicySupport.c)
 *     ACPIThermalReadTemperature @ 0x1C007F29C (ACPIThermalReadTemperature.c)
 */

int __fastcall ACPIThermalWorker(__int64 a1, int a2)
{
  _UNKNOWN **v2; // rax
  __int64 v5; // rdi
  __int64 v6; // r15
  int v7; // r13d
  __int64 v8; // rdx
  __int64 OverrideHandle; // r15
  int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  int v14; // eax
  unsigned __int64 v15; // r14
  int v16; // eax
  unsigned int v17; // r14d
  __int64 *v18; // rax
  volatile signed __int32 *v19; // r12
  __int64 *v20; // r14
  __int64 *v21; // rax
  volatile signed __int32 *v22; // r14
  _WORD *v23; // rcx
  _WORD *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 v29; // [rsp+58h] [rbp-69h] BYREF
  PVOID P; // [rsp+60h] [rbp-61h] BYREF
  __int64 v31; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v32; // [rsp+70h] [rbp-51h] BYREF
  __int128 v33; // [rsp+78h] [rbp-49h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+88h] [rbp-39h] BYREF
  _BYTE v35[48]; // [rsp+90h] [rbp-31h] BYREF
  _DWORD v36[10]; // [rsp+C0h] [rbp-1h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+5Fh] BYREF

  v2 = &retaddr;
  if ( (a2 & 0x2000) != 0 )
    LODWORD(v2) = ACPIThermalStopZoneWorker(a1);
  if ( (*(_DWORD *)(a1 + 184) & 0x8000000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 192);
    v6 = *(_QWORD *)(a1 + 704);
    v7 = a2 & 0x202;
    LODWORD(v29) = v7;
    if ( (a2 & 0x202) != 0 )
      IoCancelIrp(*(PIRP *)(v5 + 208));
    if ( (a2 & 0x10) == 0 )
      goto LABEL_7;
    qmemcpy(v36, "_AL0_AL1_AL2_AL3_AL4_AL5_AL6_AL7_AL8_AL9", sizeof(v36));
    *(_BYTE *)(v5 + 273) = (int)ACPIThermalCheckPolicySupport(a1) >= 0;
    v16 = ACPIThermalCheckNativeTemperatureSupport(a1);
    *(_DWORD *)(v5 + 96) = 1;
    v17 = 0;
    *(_BYTE *)(v5 + 274) = v16 >= 0;
    do
    {
      v18 = (__int64 *)AMLIGetNamedChild(v6, v36[v17]);
      v19 = (volatile signed __int32 *)v18;
      if ( !v18 )
        break;
      ACPIThermalBuildConstraints(v18, a1, 0, v17);
      AMLIDereferenceHandleEx(v19);
      ++v17;
    }
    while ( v17 < 0xA );
    v7 = v29;
    v20 = (__int64 *)AMLIGetNamedChild(v6, 1280528479);
    if ( v20 )
    {
      ACPIThermalBuildConstraints(v20, a1, 1, 1u);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v20);
    }
    v21 = (__int64 *)AMLIGetNamedChild(v6, 1146770527);
    v22 = (volatile signed __int32 *)v21;
    if ( v21 )
    {
      ACPIThermalBuildConstraints(v21, a1, 1, 0);
      AMLIDereferenceHandleEx(v22);
    }
    *(_QWORD *)(v5 + 120) = AMLIGetNamedChild(v6, 1230259295);
    P = 0LL;
    if ( (int)ACPIGet((_QWORD *)a1, 1381258079, 402718728, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v32) < 0 )
      goto LABEL_7;
    if ( v32 > 2 && (v32 & 1) == 0 )
    {
      v23 = P;
      if ( *((_WORD *)P + ((unsigned __int64)v32 >> 1) - 1) )
        goto LABEL_54;
      *(_DWORD *)(v5 + 304) = 0;
      *(_QWORD *)(v5 + 312) = 0LL;
      if ( !v23 )
        goto LABEL_52;
      v24 = v23;
      v25 = 0x7FFFLL;
      do
      {
        if ( !*v24 )
          break;
        ++v24;
        --v25;
      }
      while ( v25 );
      if ( v25 )
      {
        *(_QWORD *)(v5 + 312) = v23;
        *(_WORD *)(v5 + 304) = 2 * (0x7FFF - v25);
        *(_WORD *)(v5 + 306) = 2 * (0x7FFF - v25) + 2;
LABEL_52:
        v23 = 0LL;
        P = 0LL;
        goto LABEL_54;
      }
    }
    v23 = P;
LABEL_54:
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
LABEL_7:
    if ( (a2 & 0x101) != 0 )
      ACPIThermalUpdateConstraints(a1);
    if ( (a2 & 4) != 0 )
    {
      qmemcpy(v36, "_AC0_AC1_AC2_AC3_AC4_AC5_AC6_AC7_AC8_AC9", sizeof(v36));
      OverrideHandle = ACPIThermalGetOverrideHandle(a1);
      ACPIThermalGetParameter(a1, OverrideHandle, 826496095LL, &v29);
      *(_DWORD *)(v5 + 4) = v29;
      ACPIThermalGetParameter(a1, OverrideHandle, 843273311LL, &v29);
      *(_DWORD *)(v5 + 8) = v29;
      ACPIThermalGetParameter(a1, OverrideHandle, 1448300639LL, &v29);
      *(_DWORD *)(v5 + 20) = v29;
      ACPIThermalGetParameter(a1, OverrideHandle, 1414677343LL, &v29);
      *(_DWORD *)(v5 + 28) = v29;
      if ( (int)ACPIThermalGetParameter(a1, OverrideHandle, 1346786399LL, &v29) >= 0
        || (int)ACPIThermalGetParameter(a1, OverrideHandle, 1347638367LL, &v29) < 0 )
      {
        v10 = v29;
      }
      else
      {
        v10 = 100 * v29;
        v29 *= 100LL;
      }
      *(_DWORD *)(v5 + 12) = v10;
      ACPIThermalGetParameter(a1, OverrideHandle, 861029215LL, &v29);
      *(_DWORD *)(v5 + 24) = v29;
      ACPIThermalGetParameter(a1, OverrideHandle, 1414482015LL, &v29);
      *(_DWORD *)(v5 + 76) = v29;
      ACPIThermalGetParameter(a1, OverrideHandle, 1414811231LL, &v29);
      v11 = 0;
      *(_DWORD *)(v5 + 100) = v29;
      do
      {
        v12 = v11;
        if ( (int)ACPIThermalGetParameter(a1, OverrideHandle, (unsigned int)v36[v11], &v29) < 0 )
          break;
        ++v11;
        *(_DWORD *)(v5 + 4 * v12 + 36) = v29;
      }
      while ( v11 < 0xA );
      *(_BYTE *)(v5 + 32) = v11;
      if ( (int)ACPIThermalGetParameter(a1, OverrideHandle, 1280593247LL, &v29) < 0
        && (*(_DWORD *)(v5 + 128) & 2) != 0
        && (memset(v35, 0, sizeof(v35)),
            v26 = *(_QWORD *)(a1 + 704),
            v33 = THRM_EXTENSIONS_DSM_UUID,
            (int)ACPIAmliEvaluateDsm(v26, (__int64)&v33, 0, 1u, (__int64)v35, &v31) >= 0) )
      {
        if ( *(_WORD *)(v31 + 2) == 1 )
          v13 = *(unsigned int *)(v31 + 16);
        else
          v13 = v29;
        AMLIFreeDataBuffs(v31);
      }
      else
      {
        v13 = v29;
      }
      if ( v13 > 0x64 )
        LODWORD(v13) = 100;
      v14 = *(_DWORD *)(v5 + 128);
      *(_DWORD *)(v5 + 80) = v13;
      v15 = 0LL;
      if ( (v14 & 8) != 0 )
      {
        memset(v35, 0, sizeof(v35));
        v27 = *(_QWORD *)(a1 + 704);
        v33 = THRM_EXTENSIONS_DSM_UUID;
        if ( (int)ACPIAmliEvaluateDsm(v27, (__int64)&v33, 0, 3u, (__int64)v35, &v31) >= 0 )
        {
          if ( *(_WORD *)(v31 + 2) == 1 )
            v15 = *(unsigned int *)(v31 + 16);
          AMLIFreeDataBuffs(v31);
          if ( v15 > 0x64 )
            LODWORD(v15) = 100;
        }
      }
      *(_DWORD *)(v5 + 84) = v15;
    }
    if ( v7 && *(_BYTE *)(v5 + 272) )
    {
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( (a2 & 2) != 0 )
      ACPIThermalReadTemperature(a1, 1LL);
    if ( (a2 & 0x200) != 0 )
      ACPIThermalReadTemperature(a1, 0LL);
    v8 = 0x40000000LL;
    if ( (a2 & 0xFFFFFDFD) != 0 )
      v8 = 1073742338LL;
    LODWORD(v2) = ACPIThermalLoop(a1, v8);
  }
  return (int)v2;
}
