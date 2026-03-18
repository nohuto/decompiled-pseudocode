/*
 * XREFs of ACPIThermalWorker @ 0x1C0081BD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     AMLIFreeDataBuffs @ 0x1C00080D4 (AMLIFreeDataBuffs.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x1C00087BC (WPP_RECORDER_SF_ddqssdddd.c)
 *     ACPIThermalLoop @ 0x1C0008D9C (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_dqssdddd @ 0x1C0009654 (WPP_RECORDER_SF_dqssdddd.c)
 *     WPP_RECORDER_SF_Dddqssdddd @ 0x1C00097D0 (WPP_RECORDER_SF_Dddqssdddd.c)
 *     ACPIThermalUpdateConstraints @ 0x1C0009960 (ACPIThermalUpdateConstraints.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0057384 (ACPIThermalStopZoneWorker.c)
 *     ACPIThermalBuildConstraints @ 0x1C00817DC (ACPIThermalBuildConstraints.c)
 *     ACPIThermalGetParameter @ 0x1C0082830 (ACPIThermalGetParameter.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00828C0 (ACPIThermalGetOverrideHandle.c)
 *     ACPIThermalCheckNativeTemperatureSupport @ 0x1C0082950 (ACPIThermalCheckNativeTemperatureSupport.c)
 *     ACPIThermalCheckPolicySupport @ 0x1C00829CC (ACPIThermalCheckPolicySupport.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0082E98 (ACPIAmliEvaluateDsm.c)
 *     ACPIThermalReadTemperature @ 0x1C00A0D0C (ACPIThermalReadTemperature.c)
 */

LONG __fastcall ACPIThermalWorker(union _LARGE_INTEGER *a1, __int64 a2)
{
  int v2; // r15d
  LONG result; // eax
  union _LARGE_INTEGER v5; // rdi
  __int64 *QuadPart; // r14
  __int64 v7; // rdx
  __int64 OverrideHandle; // r12
  union _LARGE_INTEGER v9; // rax
  union _LARGE_INTEGER v10; // r14
  union _LARGE_INTEGER v11; // rcx
  int v12; // eax
  union _LARGE_INTEGER v13; // r14
  union _LARGE_INTEGER v14; // rax
  union _LARGE_INTEGER v15; // rcx
  union _LARGE_INTEGER v16; // r15
  unsigned int i; // r14d
  union _LARGE_INTEGER v18; // rax
  int Parameter; // eax
  unsigned __int64 v20; // r14
  union _LARGE_INTEGER v21; // r13
  __int64 v22; // r8
  unsigned __int64 v23; // r14
  int v24; // eax
  unsigned int v25; // esi
  __int64 *v26; // rax
  volatile signed __int32 *v27; // r12
  __int64 *v28; // rax
  volatile signed __int32 *v29; // rsi
  __int64 v30; // rdx
  __int64 *v31; // rax
  volatile signed __int32 *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdx
  _WORD *v35; // rcx
  _WORD *v36; // r8
  __int64 v37; // rax
  union _LARGE_INTEGER v38; // rcx
  union _LARGE_INTEGER v39; // rcx
  int v40; // [rsp+28h] [rbp-E0h]
  int v41; // [rsp+28h] [rbp-E0h]
  int v42; // [rsp+28h] [rbp-E0h]
  int v43; // [rsp+28h] [rbp-E0h]
  int v44; // [rsp+28h] [rbp-E0h]
  int v45; // [rsp+28h] [rbp-E0h]
  int v46; // [rsp+28h] [rbp-E0h]
  int v47; // [rsp+28h] [rbp-E0h]
  int v48; // [rsp+28h] [rbp-E0h]
  int v49; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v50; // [rsp+88h] [rbp-80h] BYREF
  union _LARGE_INTEGER Time; // [rsp+90h] [rbp-78h] BYREF
  union _LARGE_INTEGER v52; // [rsp+98h] [rbp-70h] BYREF
  int v53; // [rsp+A0h] [rbp-68h]
  PVOID P; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v55; // [rsp+B0h] [rbp-58h] BYREF
  int v56; // [rsp+B4h] [rbp-54h]
  __int64 v57; // [rsp+B8h] [rbp-50h] BYREF
  union _LARGE_INTEGER v58; // [rsp+C0h] [rbp-48h] BYREF
  union _LARGE_INTEGER v59; // [rsp+C8h] [rbp-40h] BYREF
  union _LARGE_INTEGER v60; // [rsp+D0h] [rbp-38h] BYREF
  union _LARGE_INTEGER v61; // [rsp+D8h] [rbp-30h] BYREF
  union _LARGE_INTEGER v62; // [rsp+E0h] [rbp-28h] BYREF
  union _LARGE_INTEGER v63; // [rsp+E8h] [rbp-20h] BYREF
  union _LARGE_INTEGER v64; // [rsp+F0h] [rbp-18h] BYREF
  union _LARGE_INTEGER v65; // [rsp+F8h] [rbp-10h] BYREF
  union _LARGE_INTEGER v66; // [rsp+100h] [rbp-8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+108h] [rbp+0h] BYREF
  __int128 v68; // [rsp+118h] [rbp+10h] BYREF
  __int128 v69; // [rsp+128h] [rbp+20h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+138h] [rbp+30h] BYREF
  struct _TIME_FIELDS v71; // [rsp+148h] [rbp+40h] BYREF
  struct _TIME_FIELDS v72; // [rsp+158h] [rbp+50h] BYREF
  struct _TIME_FIELDS v73; // [rsp+168h] [rbp+60h] BYREF
  struct _TIME_FIELDS v74; // [rsp+178h] [rbp+70h] BYREF
  struct _TIME_FIELDS v75; // [rsp+188h] [rbp+80h] BYREF
  struct _TIME_FIELDS v76; // [rsp+198h] [rbp+90h] BYREF
  struct _TIME_FIELDS v77; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _TIME_FIELDS v78; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _TIME_FIELDS v79; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _TIME_FIELDS v80; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v81[48]; // [rsp+1E8h] [rbp+E0h] BYREF
  _DWORD v82[10]; // [rsp+218h] [rbp+110h] BYREF
  _DWORD v83[10]; // [rsp+240h] [rbp+138h] BYREF

  v53 = a2;
  v2 = a2;
  result = MEMORY[0xFFFFF78000000008];
  v52.QuadPart = MEMORY[0xFFFFF78000000008];
  if ( (a2 & 0x2000) != 0 )
    result = ACPIThermalStopZoneWorker((__int64)a1);
  if ( (a1[24].LowPart & 0x8000000) == 0 )
  {
    v5 = a1[25];
    QuadPart = (__int64 *)a1[89].QuadPart;
    v56 = v2 & 0x202;
    if ( (v2 & 0x202) != 0 )
      IoCancelIrp(*(PIRP *)(v5.QuadPart + 208));
    if ( (v2 & 0x10) == 0 )
      goto LABEL_7;
    qmemcpy(v82, "_AL0_AL1_AL2_AL3_AL4_AL5_AL6_AL7_AL8_AL9", sizeof(v82));
    *(_BYTE *)(v5.QuadPart + 273) = (int)ACPIThermalCheckPolicySupport(a1) >= 0;
    v24 = ACPIThermalCheckNativeTemperatureSupport(a1);
    *(_DWORD *)(v5.QuadPart + 96) = 1;
    v25 = 0;
    *(_BYTE *)(v5.QuadPart + 274) = v24 >= 0;
    do
    {
      v26 = AMLIGetNamedChild(QuadPart, v82[v25]);
      v27 = (volatile signed __int32 *)v26;
      if ( !v26 )
        break;
      ACPIThermalBuildConstraints(v26, (__int64)a1, 0, v25);
      AMLIDereferenceHandleEx(v27, v33);
      ++v25;
    }
    while ( v25 < 0xA );
    v28 = AMLIGetNamedChild(QuadPart, 1280528479);
    v2 = v53;
    v29 = (volatile signed __int32 *)v28;
    if ( v28 )
    {
      ACPIThermalBuildConstraints(v28, (__int64)a1, 1, 1u);
      AMLIDereferenceHandleEx(v29, v30);
    }
    v31 = AMLIGetNamedChild(QuadPart, 1146770527);
    v32 = (volatile signed __int32 *)v31;
    if ( v31 )
    {
      ACPIThermalBuildConstraints(v31, (__int64)a1, 1, 0);
      AMLIDereferenceHandleEx(v32, v34);
    }
    *(_QWORD *)(v5.QuadPart + 120) = AMLIGetNamedChild(QuadPart, 1230259295);
    P = 0LL;
    if ( (int)ACPIGet((__int64 *)a1, 1381258079, 402718728, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v55) < 0 )
      goto LABEL_7;
    if ( v55 > 2 && (v55 & 1) == 0 )
    {
      v35 = P;
      if ( *((_WORD *)P + ((unsigned __int64)v55 >> 1) - 1) )
        goto LABEL_67;
      *(_DWORD *)(v5.QuadPart + 304) = 0;
      *(_QWORD *)(v5.QuadPart + 312) = 0LL;
      if ( !v35 )
        goto LABEL_65;
      a2 = 0x7FFFLL;
      v36 = v35;
      v37 = 0x7FFFLL;
      do
      {
        if ( !*v36 )
          break;
        ++v36;
        --v37;
      }
      while ( v37 );
      if ( v37 )
      {
        a2 = 0x7FFF - v37;
        *(_QWORD *)(v5.QuadPart + 312) = v35;
        *(_WORD *)(v5.QuadPart + 304) = 2 * (0x7FFF - v37);
        *(_WORD *)(v5.QuadPart + 306) = 2 * (0x7FFF - v37) + 2;
LABEL_65:
        v35 = 0LL;
        P = 0LL;
        goto LABEL_67;
      }
    }
    v35 = P;
LABEL_67:
    if ( v35 )
      ExFreePoolWithTag(v35, 0);
LABEL_7:
    if ( (v2 & 0x101) != 0 )
      ACPIThermalUpdateConstraints((__int64)a1);
    if ( (v2 & 4) != 0 )
    {
      qmemcpy(v83, "_AC0_AC1_AC2_AC3_AC4_AC5_AC6_AC7_AC8_AC9", sizeof(v83));
      OverrideHandle = ACPIThermalGetOverrideHandle(a1);
      ACPIThermalGetParameter(a1, OverrideHandle, 826496095LL, &v50);
      v9 = v52;
      *(_DWORD *)(v5.QuadPart + 4) = v50;
      Time = v9;
      RtlTimeToTimeFields(&Time, &TimeFields);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)TimeFields.Minute,
        (unsigned int)TimeFields.Hour,
        0x17u,
        v40);
      ACPIThermalGetParameter(a1, OverrideHandle, 843273311LL, &v50);
      v10 = v52;
      *(_DWORD *)(v5.QuadPart + 8) = v50;
      v58 = v10;
      RtlTimeToTimeFields(&v58, &v71);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v71.Minute,
        (unsigned int)v71.Hour,
        0x18u,
        v41);
      ACPIThermalGetParameter(a1, OverrideHandle, 1448300639LL, &v50);
      *(_DWORD *)(v5.QuadPart + 20) = v50;
      Time.QuadPart = (__int64)qword_1C0090C20;
      v59 = v10;
      RtlTimeToTimeFields(&v59, &v72);
      if ( (a1[1].QuadPart & 0x200000000000LL) != 0 )
        Time = a1[70];
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 20) / 0xAu,
        (unsigned int)v72.Minute,
        0x19u,
        v42);
      ACPIThermalGetParameter(a1, OverrideHandle, 1414677343LL, &v50);
      *(_DWORD *)(v5.QuadPart + 28) = v50;
      Time.QuadPart = (__int64)qword_1C0090C20;
      v60 = v10;
      RtlTimeToTimeFields(&v60, &v73);
      v11 = a1[1];
      if ( (v11.QuadPart & 0x200000000000LL) != 0 )
        Time = a1[70];
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 28) / 0xAu,
        (unsigned int)v73.Minute,
        0x1Au,
        v43);
      if ( (int)ACPIThermalGetParameter(a1, OverrideHandle, 1346786399LL, &v50) >= 0
        || (int)ACPIThermalGetParameter(a1, OverrideHandle, 1347638367LL, &v50) < 0 )
      {
        v12 = v50;
      }
      else
      {
        v12 = 100 * v50;
        v50 *= 100LL;
      }
      *(_DWORD *)(v5.QuadPart + 12) = v12;
      v61 = v52;
      RtlTimeToTimeFields(&v61, &v74);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v74.Minute,
        (unsigned int)v74.Hour,
        0x1Bu,
        v44);
      ACPIThermalGetParameter(a1, OverrideHandle, 861029215LL, &v50);
      v13 = v52;
      *(_DWORD *)(v5.QuadPart + 24) = v50;
      v62 = v13;
      Time.QuadPart = (__int64)qword_1C0090C20;
      RtlTimeToTimeFields(&v62, &v75);
      if ( (a1[1].QuadPart & 0x200000000000LL) != 0 )
        Time = a1[70];
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 24) / 0xAu,
        (unsigned int)v75.Minute,
        0x1Cu,
        v45);
      ACPIThermalGetParameter(a1, OverrideHandle, 1414482015LL, &v50);
      *(_DWORD *)(v5.QuadPart + 76) = v50;
      Time.QuadPart = (__int64)qword_1C0090C20;
      v63 = v13;
      RtlTimeToTimeFields(&v63, &v76);
      v14 = a1[1];
      if ( (v14.QuadPart & 0x200000000000LL) != 0 )
        Time = a1[70];
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 76) / 0xAu,
        (unsigned int)v76.Minute,
        0x1Du,
        v46);
      ACPIThermalGetParameter(a1, OverrideHandle, 1414811231LL, &v50);
      *(_DWORD *)(v5.QuadPart + 100) = v50;
      Time.QuadPart = (__int64)qword_1C0090C20;
      v64 = v13;
      RtlTimeToTimeFields(&v64, &v77);
      v15 = a1[1];
      if ( (v15.QuadPart & 0x200000000000LL) != 0 )
        Time = a1[70];
      WPP_RECORDER_SF_ddqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)(v5.QuadPart + 100) / 0xAu,
        (unsigned int)v77.Minute,
        0x1Eu,
        v47);
      v16 = v52;
      for ( i = 0; i < 0xA; ++i )
      {
        if ( (int)ACPIThermalGetParameter(a1, OverrideHandle, (unsigned int)v83[i], &v50) < 0 )
          break;
        *(_DWORD *)(v5.QuadPart + 4LL * i + 36) = v50;
        Time.QuadPart = (__int64)qword_1C0090C20;
        v65 = v16;
        RtlTimeToTimeFields(&v65, &v78);
        v18 = a1[1];
        if ( (v18.QuadPart & 0x200000000000LL) != 0 && (v18.QuadPart & 0x400000000000LL) != 0 )
          Time = a1[71];
        WPP_RECORDER_SF_Dddqssdddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(_DWORD *)(v5.QuadPart + 4LL * i + 36) / 0xAu,
          (unsigned int)v78.Minute,
          (unsigned int)v78.Hour,
          v48);
      }
      *(_BYTE *)(v5.QuadPart + 32) = i;
      Parameter = ACPIThermalGetParameter(a1, OverrideHandle, 1280593247LL, &v50);
      v2 = v53;
      if ( Parameter < 0
        && (*(_DWORD *)(v5.QuadPart + 128) & 2) != 0
        && (memset(v81, 0, sizeof(v81)),
            v38 = a1[89],
            v68 = THRM_EXTENSIONS_DSM_UUID,
            (int)ACPIAmliEvaluateDsm(v38.LowPart, (unsigned int)&v68, 0, 1, (__int64)v81, (__int64)&v57) >= 0) )
      {
        if ( *(_WORD *)(v57 + 2) == 1 )
          v20 = *(unsigned int *)(v57 + 16);
        else
          v20 = v50;
        AMLIFreeDataBuffs(v57);
      }
      else
      {
        v20 = v50;
      }
      v21 = v52;
      if ( v20 > 0x64 )
        LODWORD(v20) = 100;
      *(_DWORD *)(v5.QuadPart + 80) = v20;
      RtlTimeToTimeFields(&v52, &v79);
      WPP_RECORDER_SF_dqssdddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (unsigned int)v79.Minute, v22, 0x20u, v48);
      v23 = 0LL;
      if ( (*(_DWORD *)(v5.QuadPart + 128) & 8) != 0 )
      {
        memset(v81, 0, sizeof(v81));
        v39 = a1[89];
        v69 = THRM_EXTENSIONS_DSM_UUID;
        if ( (int)ACPIAmliEvaluateDsm(v39.LowPart, (unsigned int)&v69, 0, 3, (__int64)v81, (__int64)&v57) >= 0 )
        {
          if ( *(_WORD *)(v57 + 2) == 1 )
            v23 = *(unsigned int *)(v57 + 16);
          AMLIFreeDataBuffs(v57);
          if ( v23 > 0x64 )
            LODWORD(v23) = 100;
        }
      }
      *(_DWORD *)(v5.QuadPart + 84) = v23;
      v66 = v21;
      RtlTimeToTimeFields(&v66, &v80);
      WPP_RECORDER_SF_dqssdddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)v80.Minute,
        (unsigned int)v80.Hour,
        0x21u,
        v49);
    }
    if ( v56 && *(_BYTE *)(v5.QuadPart + 272) )
    {
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( (v2 & 2) != 0 )
    {
      LOBYTE(a2) = 1;
      ACPIThermalReadTemperature(a1, a2);
    }
    if ( (v2 & 0x200) != 0 )
      ACPIThermalReadTemperature(a1, 0LL);
    v7 = 0x40000000LL;
    if ( (v2 & 0xFFFFFDFD) != 0 )
      v7 = 1073742338LL;
    return ACPIThermalLoop((__int64)a1, v7);
  }
  return result;
}
