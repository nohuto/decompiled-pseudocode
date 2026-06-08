/*
 * XREFs of AcpiEval_CPC @ 0x1C0010ADC
 * Callers:
 *     InitAcpiCpc @ 0x1C001553C (InitAcpiCpc.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 *     memset @ 0x1C0006140 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C000F4D8 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0011050 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C0011884 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiEval_CPC(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // r12d
  _DWORD *v4; // rbx
  int v5; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // r14
  int v8; // ecx
  int v9; // edx
  unsigned int *v10; // rsi
  __int64 v11; // r11
  _BYTE *v12; // rcx
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v16; // [rsp+50h] [rbp-B0h]
  _BYTE v17[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+62h] [rbp-9Eh]
  const char *v19; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v20)(); // [rsp+70h] [rbp-90h]
  char v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ah] [rbp-86h]
  const char *v23; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v24)(); // [rsp+88h] [rbp-78h]
  char v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+92h] [rbp-6Eh]
  const char *v27; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v28)(); // [rsp+A0h] [rbp-60h]
  char v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+AAh] [rbp-56h]
  const char *v31; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v32)(); // [rsp+B8h] [rbp-48h]
  char v33; // [rsp+C0h] [rbp-40h]
  int v34; // [rsp+C2h] [rbp-3Eh]
  const char *v35; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v36)(); // [rsp+D0h] [rbp-30h]
  char v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DAh] [rbp-26h]
  const char *v39; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v40)(); // [rsp+E8h] [rbp-18h]
  char v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F2h] [rbp-Eh]
  const char *v43; // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v44)(); // [rsp+100h] [rbp+0h]
  char v45; // [rsp+108h] [rbp+8h]
  int v46; // [rsp+10Ah] [rbp+Ah]
  const char *v47; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v48)(); // [rsp+118h] [rbp+18h]
  char v49; // [rsp+120h] [rbp+20h]
  int v50; // [rsp+122h] [rbp+22h]
  const char *v51; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v52)(); // [rsp+130h] [rbp+30h]
  char v53; // [rsp+138h] [rbp+38h]
  int v54; // [rsp+13Ah] [rbp+3Ah]
  const char *v55; // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v56)(); // [rsp+148h] [rbp+48h]
  char v57; // [rsp+150h] [rbp+50h]
  int v58; // [rsp+152h] [rbp+52h]
  const char *v59; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v60)(); // [rsp+160h] [rbp+60h]
  char v61; // [rsp+168h] [rbp+68h]
  int v62; // [rsp+16Ah] [rbp+6Ah]
  const char *v63; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v64)(); // [rsp+178h] [rbp+78h]
  char v65; // [rsp+180h] [rbp+80h]
  int v66; // [rsp+182h] [rbp+82h]
  const char *v67; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v68)(); // [rsp+190h] [rbp+90h]
  char v69; // [rsp+198h] [rbp+98h]
  int v70; // [rsp+19Ah] [rbp+9Ah]
  const char *v71; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v72)(); // [rsp+1A8h] [rbp+A8h]
  char v73; // [rsp+1B0h] [rbp+B0h]
  int v74; // [rsp+1B2h] [rbp+B2h]
  const char *v75; // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v76)(); // [rsp+1C0h] [rbp+C0h]
  char v77; // [rsp+1C8h] [rbp+C8h]
  int v78; // [rsp+1CAh] [rbp+CAh]
  const char *v79; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v80)(); // [rsp+1D8h] [rbp+D8h]
  char v81; // [rsp+1E0h] [rbp+E0h]
  int v82; // [rsp+1E2h] [rbp+E2h]
  const char *v83; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v84)(); // [rsp+1F0h] [rbp+F0h]
  char v85; // [rsp+1F8h] [rbp+F8h]
  int v86; // [rsp+1FAh] [rbp+FAh]
  const char *v87; // [rsp+200h] [rbp+100h]
  __int64 (__fastcall *v88)(); // [rsp+208h] [rbp+108h]
  char v89; // [rsp+210h] [rbp+110h]
  int v90; // [rsp+212h] [rbp+112h]
  const char *v91; // [rsp+218h] [rbp+118h]
  __int64 (__fastcall *v92)(); // [rsp+220h] [rbp+120h]
  char v93; // [rsp+228h] [rbp+128h]
  int v94; // [rsp+22Ah] [rbp+12Ah]
  const char *v95; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v96)(); // [rsp+238h] [rbp+138h]
  char v97; // [rsp+240h] [rbp+140h]
  int v98; // [rsp+242h] [rbp+142h]
  const char *v99; // [rsp+248h] [rbp+148h]
  __int64 (__fastcall *v100)(); // [rsp+250h] [rbp+150h]
  char v101; // [rsp+258h] [rbp+158h]
  int v102; // [rsp+25Ah] [rbp+15Ah]
  const char *v103; // [rsp+260h] [rbp+160h]
  __int64 (__fastcall *v104)(); // [rsp+268h] [rbp+168h]
  char v105; // [rsp+270h] [rbp+170h]
  int v106; // [rsp+272h] [rbp+172h]
  const char *v107; // [rsp+278h] [rbp+178h]
  __int64 (__fastcall *v108)(); // [rsp+280h] [rbp+180h]
  char v109; // [rsp+288h] [rbp+188h]
  int v110; // [rsp+28Ah] [rbp+18Ah]
  const char *v111; // [rsp+290h] [rbp+190h]
  __int64 (__fastcall *v112)(); // [rsp+298h] [rbp+198h]
  char v113; // [rsp+2A0h] [rbp+1A0h]
  int v114; // [rsp+2A2h] [rbp+1A2h]
  const char *v115; // [rsp+2A8h] [rbp+1A8h]
  __int64 (__fastcall *v116)(); // [rsp+2B0h] [rbp+1B0h]
  char v117; // [rsp+2B8h] [rbp+1B8h]
  int v118; // [rsp+2BAh] [rbp+1BAh]
  const char *v119; // [rsp+2C0h] [rbp+1C0h]
  __int64 (__fastcall *v120)(); // [rsp+2C8h] [rbp+1C8h]
  char v121; // [rsp+2D0h] [rbp+1D0h]
  int v122; // [rsp+2D2h] [rbp+1D2h]
  const char *v123; // [rsp+2D8h] [rbp+1D8h]
  __int64 (__fastcall *v124)(); // [rsp+2E0h] [rbp+1E0h]

  v16 = a2;
  v21 = 1;
  v17[0] = 0;
  v18 = 0;
  v19 = "NumEntries";
  v22 = 0x40000;
  v23 = "Revision";
  v20 = AcpiParseULong;
  v27 = "HighestPerformance";
  v31 = "HighestPerformance";
  v24 = AcpiParseULong;
  v35 = "NominalPerformance";
  v39 = "NominalPerformance";
  v25 = 2;
  v43 = "LowestNonlinearPerformance";
  v47 = "LowestNonlinearPerformance";
  v51 = "LowestPerformance";
  v55 = "LowestPerformance";
  v59 = "GuaranteedPerformance";
  v63 = "DesiredPerformance";
  v67 = "MinimumPerformance";
  v71 = "MaximumPerformance";
  v75 = "PerformanceReductionTolerance";
  v26 = 0x80000;
  v28 = AcpiParseStaticRegister;
  v29 = 2;
  v30 = 524290;
  v32 = AcpiParseRegister;
  v33 = 3;
  v34 = 1310720;
  v36 = AcpiParseStaticRegister;
  v37 = 3;
  v38 = 1310722;
  v40 = AcpiParseRegister;
  v41 = 4;
  v42 = 0x200000;
  v44 = AcpiParseStaticRegister;
  v45 = 4;
  v46 = 2097154;
  v48 = AcpiParseRegister;
  v49 = 5;
  v50 = 2883584;
  v52 = AcpiParseStaticRegister;
  v53 = 5;
  v54 = 2883586;
  v56 = AcpiParseRegister;
  v57 = 6;
  v58 = 3670018;
  v60 = AcpiParseRegister;
  v61 = 7;
  v62 = 4456450;
  v64 = AcpiParseRegister;
  v65 = 8;
  v66 = 5242882;
  v68 = AcpiParseRegister;
  v69 = 9;
  v70 = 6029314;
  v72 = AcpiParseRegister;
  v73 = 10;
  v74 = 6815746;
  v76 = AcpiParseRegister;
  v77 = 11;
  v79 = "TimeWindow";
  v3 = 19;
  v78 = 7602178;
  v83 = "CounterWraparound";
  v4 = 0LL;
  v80 = AcpiParseRegister;
  v87 = "ReferenceCounter";
  v91 = "DeliveredCounter";
  v95 = "PerformanceLimited";
  v99 = "Enable";
  v103 = "AutonomousEnable";
  v107 = "AutonomousEnable";
  v111 = "AutonomousActivityWindow";
  v115 = "EnergyPerformancePreference";
  v119 = "ReferencePerformance";
  v123 = "ReferencePerformance";
  v81 = 12;
  v82 = 8388610;
  v84 = AcpiParseRegister;
  v85 = 13;
  v86 = 9175042;
  v88 = AcpiParseRegister;
  v89 = 14;
  v90 = 9961474;
  v92 = AcpiParseRegister;
  v93 = 15;
  v94 = 10747906;
  v96 = AcpiParseRegister;
  v97 = 16;
  v98 = 11534338;
  v100 = AcpiParseRegister;
  v101 = 17;
  v102 = 12320768;
  v104 = AcpiParseStaticRegister;
  v105 = 17;
  v106 = 12320770;
  v108 = AcpiParseRegister;
  v109 = 18;
  v110 = 13107202;
  v112 = AcpiParseRegister;
  v113 = 19;
  v114 = 13893634;
  v116 = AcpiParseRegister;
  v117 = 20;
  v118 = 14680064;
  v120 = AcpiParseStaticRegister;
  v121 = 20;
  v122 = 14680066;
  v124 = AcpiParseRegister;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1036), 0x40000u);
  v5 = AcpiEvaluateMethod(a1, 1129333599, 0LL, (unsigned int **)&P, &v15);
  if ( v5 >= 0 )
  {
    *(_QWORD *)(a1 + 240) |= *(_DWORD *)(a1 + 248) & 0x8000000;
    if ( v15 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xECuLL, 0x72637250u);
      v4 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0xECuLL);
        v7 = P;
        v5 = AcpiParseCore((unsigned int)v17, 2, (int)P + 12, *((_DWORD *)P + 1) - 12, (__int64)v4, 236);
        if ( v5 >= 0 )
        {
          v8 = v4[1];
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              v9 = 21;
              v10 = (unsigned int *)&CpcRegisterTable;
              v3 = 15;
            }
            else
            {
              v9 = 27;
              v10 = (unsigned int *)&Cpc2RegisterTable;
            }
            v5 = AcpiParseCore((unsigned int)v17, v9, (int)v7 + 12, v7[1] - 12, (__int64)v4, 236);
            if ( v5 < 0 )
              goto LABEL_19;
            v11 = v3;
            do
            {
              v12 = (char *)v4 + *v10;
              if ( *v12 != 10 )
                AcpiTranslateAccessSize(v12);
              v10 += 6;
              --v11;
            }
            while ( v11 );
            *v16 = v4;
            v4 = 0LL;
          }
          else
          {
            v5 = -1072431089;
          }
          if ( v5 >= 0 )
            goto LABEL_20;
        }
      }
      else
      {
        v5 = -1073741670;
      }
    }
    else
    {
      v5 = -1073741275;
    }
  }
LABEL_19:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1040), 0x40000u);
  v7 = P;
LABEL_20:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v5;
}
