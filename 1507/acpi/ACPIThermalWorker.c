/*
 * XREFs of ACPIThermalWorker @ 0x1C006F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AMLIFreeDataBuffs @ 0x1C0004D14 (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     ACPIThermalLoop @ 0x1C0019DF4 (ACPIThermalLoop.c)
 *     ACPIThermalUpdateConstraints @ 0x1C001A490 (ACPIThermalUpdateConstraints.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0041100 (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalBuildConstraints @ 0x1C0066214 (ACPIThermalBuildConstraints.c)
 *     ACPIAmliEvaluateDsm @ 0x1C006DFF0 (ACPIAmliEvaluateDsm.c)
 *     ACPIThermalCheckNativeTemperatureSupport @ 0x1C006F658 (ACPIThermalCheckNativeTemperatureSupport.c)
 *     ACPIThermalCheckPolicySupport @ 0x1C006F6D4 (ACPIThermalCheckPolicySupport.c)
 *     ACPIThermalReadTemperature @ 0x1C007F0BC (ACPIThermalReadTemperature.c)
 */

int __fastcall ACPIThermalWorker(__int64 a1, int a2)
{
  _UNKNOWN **v2; // rax
  __int64 v5; // rdi
  __int64 v6; // r15
  int v7; // r13d
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // eax
  unsigned __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rcx
  int v22; // eax
  unsigned __int64 v23; // rcx
  unsigned int v24; // r14d
  __int64 v25; // r15
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // r14d
  __int64 *v31; // rax
  volatile signed __int32 *v32; // r12
  __int64 *v33; // r14
  __int64 *v34; // rax
  volatile signed __int32 *v35; // r14
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned __int64 v39; // [rsp+58h] [rbp-59h] BYREF
  __int64 v40; // [rsp+60h] [rbp-51h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-49h] BYREF
  __int128 v42; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v43[48]; // [rsp+88h] [rbp-29h] BYREF
  _DWORD v44[10]; // [rsp+B8h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v2 = &retaddr;
  if ( (a2 & 0x2000) != 0 )
    LODWORD(v2) = ACPIThermalStopZoneWorker(a1);
  if ( (*(_DWORD *)(a1 + 184) & 0x8000000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 192);
    v6 = *(_QWORD *)(a1 + 704);
    v7 = a2 & 0x202;
    LODWORD(v40) = v7;
    if ( (a2 & 0x202) != 0 )
      IoCancelIrp(*(PIRP *)(v5 + 208));
    if ( (a2 & 0x10) != 0 )
    {
      qmemcpy(v44, "_AL0_AL1_AL2_AL3_AL4_AL5_AL6_AL7_AL8_AL9", sizeof(v44));
      *(_BYTE *)(v5 + 273) = (int)ACPIThermalCheckPolicySupport(a1) >= 0;
      v29 = ACPIThermalCheckNativeTemperatureSupport(a1);
      *(_DWORD *)(v5 + 96) = 1;
      v30 = 0;
      *(_BYTE *)(v5 + 274) = v29 >= 0;
      do
      {
        v31 = (__int64 *)AMLIGetNamedChild(v6, v44[v30]);
        v32 = (volatile signed __int32 *)v31;
        if ( !v31 )
          break;
        ACPIThermalBuildConstraints(v31, a1, 0, v30);
        AMLIDereferenceHandleEx(v32);
        ++v30;
      }
      while ( v30 < 0xA );
      v33 = (__int64 *)AMLIGetNamedChild(v6, 1280528479);
      if ( v33 )
      {
        ACPIThermalBuildConstraints(v33, a1, 1, 1u);
        AMLIDereferenceHandleEx((volatile signed __int32 *)v33);
      }
      v34 = (__int64 *)AMLIGetNamedChild(v6, 1146770527);
      v35 = (volatile signed __int32 *)v34;
      if ( v34 )
      {
        ACPIThermalBuildConstraints(v34, a1, 1, 0);
        AMLIDereferenceHandleEx(v35);
      }
      *(_QWORD *)(v5 + 120) = AMLIGetNamedChild(v6, 1230259295);
    }
    if ( (a2 & 0x101) != 0 )
      ACPIThermalUpdateConstraints(a1);
    if ( (a2 & 4) != 0 )
    {
      qmemcpy(v44, "_AC0_AC1_AC2_AC3_AC4_AC5_AC6_AC7_AC8_AC9", sizeof(v44));
      v9 = ACPIGet((_QWORD *)a1, 826496095, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL);
      v10 = v39;
      if ( v9 < 0 )
        v10 = 0LL;
      v39 = v10;
      *(_DWORD *)(v5 + 4) = v10;
      v11 = ACPIGet((_QWORD *)a1, 843273311, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL);
      v12 = v39;
      if ( v11 < 0 )
        v12 = 0LL;
      v39 = v12;
      *(_DWORD *)(v5 + 8) = v12;
      v13 = ACPIGet((_QWORD *)a1, 1448300639, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL);
      v14 = v39;
      if ( v13 < 0 )
        v14 = 0LL;
      v39 = v14;
      *(_DWORD *)(v5 + 20) = v14;
      v15 = ACPIGet((_QWORD *)a1, 1414677343, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL);
      v16 = v39;
      if ( v15 < 0 )
        v16 = 0LL;
      v39 = v16;
      *(_DWORD *)(v5 + 28) = v16;
      if ( (int)ACPIGet((_QWORD *)a1, 1346786399, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL) >= 0 )
      {
        LODWORD(v17) = v39;
      }
      else
      {
        if ( (int)ACPIGet((_QWORD *)a1, 1347638367, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL) >= 0 )
          v17 = 100 * v39;
        else
          v17 = 0LL;
        v39 = v17;
      }
      *(_DWORD *)(v5 + 12) = v17;
      v18 = ACPIGet((_QWORD *)a1, 861029215, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL);
      v19 = v39;
      if ( v18 < 0 )
        v19 = 0LL;
      v39 = v19;
      *(_DWORD *)(v5 + 24) = v19;
      v20 = ACPIGet((_QWORD *)a1, 1414482015, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL);
      v21 = v39;
      if ( v20 < 0 )
        v21 = 0LL;
      v39 = v21;
      *(_DWORD *)(v5 + 76) = v21;
      v22 = ACPIGet((_QWORD *)a1, 1414811231, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL);
      v23 = v39;
      v24 = 0;
      if ( v22 < 0 )
        v23 = 0LL;
      v39 = v23;
      *(_DWORD *)(v5 + 100) = v23;
      do
      {
        v25 = v24;
        if ( (int)ACPIGet((_QWORD *)a1, v44[v24], 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL) < 0 )
          break;
        ++v24;
        *(_DWORD *)(v5 + 4 * v25 + 36) = v39;
      }
      while ( v24 < 0xA );
      *(_BYTE *)(v5 + 32) = v24;
      v39 = 0LL;
      v26 = ACPIGet((_QWORD *)a1, 1280593247, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v39, 0LL);
      v7 = v40;
      if ( v26 < 0 && (*(_DWORD *)(v5 + 128) & 2) != 0 )
      {
        memset(v43, 0, sizeof(v43));
        v36 = *(_QWORD *)(a1 + 704);
        v42 = THRM_EXTENSIONS_DSM_UUID;
        if ( (int)ACPIAmliEvaluateDsm(v36, (__int64)&v42, 0, 1u, (__int64)v43, &v40) >= 0 )
        {
          if ( *(_WORD *)(v40 + 2) == 1 )
            v39 = *(unsigned int *)(v40 + 16);
          AMLIFreeDataBuffs(v40);
        }
      }
      v27 = v39;
      LODWORD(v28) = 0;
      if ( v39 > 0x64 )
        v27 = 100;
      *(_DWORD *)(v5 + 80) = v27;
      v39 = 0LL;
      if ( (*(_DWORD *)(v5 + 128) & 8) != 0 )
      {
        memset(v43, 0, sizeof(v43));
        v37 = *(_QWORD *)(a1 + 704);
        v42 = THRM_EXTENSIONS_DSM_UUID;
        if ( (int)ACPIAmliEvaluateDsm(v37, (__int64)&v42, 0, 3u, (__int64)v43, &v40) >= 0 )
        {
          if ( *(_WORD *)(v40 + 2) == 1 )
            v39 = *(unsigned int *)(v40 + 16);
          AMLIFreeDataBuffs(v40);
        }
        v28 = v39;
        if ( v39 > 0x64 )
          v28 = 100LL;
        v39 = v28;
      }
      *(_DWORD *)(v5 + 84) = v28;
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
