/*
 * XREFs of HUBACPI_GetAcpiPortAttributes @ 0x1C006E5EC
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0062B00 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     Template_pqq @ 0x1C0009D3C (Template_pqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C006DA30 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C006DE9C (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EnumChildren @ 0x1C006E264 (HUBACPI_EnumChildren.c)
 */

__int64 __fastcall HUBACPI_GetAcpiPortAttributes(__int64 a1)
{
  int v2; // eax
  unsigned __int16 v3; // r9
  int v4; // eax
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // dl
  __int64 v7; // rbx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // r12
  __int64 i; // rbx
  __int64 v13; // rbx
  unsigned __int16 v14; // r9
  unsigned int v15; // r8d
  unsigned __int8 v16; // dl
  int v17; // ecx
  int v18; // r15d
  int v19; // ebx
  __int64 v20; // rcx
  const EVENT_DESCRIPTOR *v21; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // rcx
  unsigned int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-79h]
  __int64 v31; // [rsp+28h] [rbp-71h]
  __int64 *v32; // [rsp+28h] [rbp-71h]
  __int64 *v33; // [rsp+30h] [rbp-69h]
  __int64 v34; // [rsp+40h] [rbp-59h] BYREF
  __int64 v35; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 v36; // [rsp+50h] [rbp-49h] BYREF
  __int16 v37; // [rsp+52h] [rbp-47h]
  _DWORD *v38; // [rsp+58h] [rbp-41h]
  __int64 v39; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v40[7]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v41[10]; // [rsp+A0h] [rbp+7h] BYREF
  int v42; // [rsp+100h] [rbp+67h]
  _DWORD *v43; // [rsp+108h] [rbp+6Fh]
  __int64 v44; // [rsp+110h] [rbp+77h] BYREF
  __int64 v45; // [rsp+118h] [rbp+7Fh] BYREF

  v35 = 0LL;
  v44 = 0LL;
  v34 = 0LL;
  memset(v40, 0, sizeof(v40));
  v40[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v40[0]) = 56;
  v40[3] = 0x100000001LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, _QWORD *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v40,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         20LL,
         &v34,
         v41);
  if ( v2 < 0 )
  {
    v3 = 32;
LABEL_3:
    LODWORD(v31) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2440),
      2u,
      3u,
      v3,
      (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
      v31);
    goto LABEL_47;
  }
  v4 = HUBACPI_EnumChildren(a1, v34);
  if ( v4 == -1073741637 )
  {
    v5 = 33;
    v6 = 4;
LABEL_6:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2440), v6, 3u, v5, (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
    goto LABEL_47;
  }
  if ( v4 == -2147483643 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2440), 4u, 3u, 0x22u, (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
    v7 = *(unsigned int *)(v41[0] + 4LL);
    memset(v40, 0, sizeof(v40));
    v40[4] = *(_QWORD *)(a1 + 16);
    LODWORD(v40[0]) = 56;
    v40[3] = 0x100000001LL;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
           WdfDriverGlobals,
           v40,
           (unsigned int)ExDefaultNonPagedPoolType,
           1748191317LL,
           v7,
           &v35,
           &v39) < 0 )
    {
      v5 = 35;
LABEL_10:
      v6 = 2;
      goto LABEL_6;
    }
    v2 = HUBACPI_EnumChildren(a1, v35);
    if ( v2 < 0 )
    {
      v3 = 36;
      goto LABEL_3;
    }
    memset(v40, 0, sizeof(v40));
    v33 = &v45;
    v40[4] = *(_QWORD *)(a1 + 16);
    v32 = &v44;
    LODWORD(v40[0]) = 56;
    v40[3] = 0x100000001LL;
    LODWORD(v30) = 1044;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 1536))(
           WdfDriverGlobals,
           v40,
           (unsigned int)ExDefaultNonPagedPoolType,
           1748191317LL) < 0 )
    {
      v5 = 37;
      goto LABEL_10;
    }
    v42 = 1;
    v8 = (_DWORD *)(v39 + 8);
    if ( *(_DWORD *)(v39 + 4) > 1u )
    {
      while ( 1 )
      {
        v8 = (_DWORD *)((char *)v8 + (unsigned int)v8[1] + 8);
        v43 = v8;
        if ( (*v8 & 1) == 0 || !v8[1] )
          goto LABEL_46;
        v38 = v8 + 2;
        v37 = *((_WORD *)v8 + 2);
        v36 = v37 - 1;
        if ( (int)HUBACPI_EvalAcpiMethodEx(a1, &v36, 1380204895, v44) < 0
          || !*(_DWORD *)(v45 + 8)
          || *(_WORD *)(v45 + 12) )
        {
          goto LABEL_45;
        }
        v11 = *(_WORD *)(v45 + 16);
        if ( !v11 || v11 > *(_WORD *)(a1 + 44) )
        {
          LODWORD(v32) = v11;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2440),
            2u,
            6u,
            0x26u,
            (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
            v32);
          goto LABEL_45;
        }
        for ( i = *(_QWORD *)(a1 + 2280); ; i = *(_QWORD *)(v13 + 248) )
        {
          v13 = i - 248;
          if ( a1 + 2280 == v13 + 248 )
            goto LABEL_45;
          if ( *(_WORD *)(v13 + 200) == v11 )
            break;
        }
        if ( (int)HUBACPI_EvaluateDsmMethod(a1, &v36, v9, v10, v30, v44) >= 0 )
          break;
LABEL_40:
        v18 = HUBACPI_EvalAcpiMethodEx(a1, &v36, 1129338207, v44);
        if ( v18 < 0 )
        {
          v19 = v11;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2440),
            4u,
            3u,
            0x2Bu,
            (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
          goto LABEL_42;
        }
        v23 = v45;
        if ( *(_DWORD *)(v45 + 8) )
        {
          v24 = v45 + 12;
          v25 = 0;
          if ( v45 + 12 < v45 + (unsigned __int64)*(unsigned int *)(v45 + 4) )
          {
            while ( v25 < *(_DWORD *)(v23 + 8) )
            {
              if ( v25 >= 4 )
              {
                v18 = -1072431093;
                goto LABEL_71;
              }
              if ( *(_WORD *)v24 )
              {
                v18 = -1072431096;
                goto LABEL_71;
              }
              v26 = acpiUpcPackageFields[2 * v25];
              v27 = acpiUpcPackageFields[2 * v25 + 1];
              if ( v27 == 1 )
              {
                *(_BYTE *)(v26 + v13 + 1340) = *(_BYTE *)(v24 + 4);
              }
              else
              {
                if ( v27 != 4 )
                {
                  v18 = -1072431089;
                  break;
                }
                *(_DWORD *)(v26 + v13 + 1340) = *(_DWORD *)(v24 + 4);
              }
              LOWORD(v28) = *(_WORD *)(v24 + 2);
              if ( (unsigned __int16)v28 >= 4u )
                v28 = (unsigned __int16)v28;
              else
                v28 = 4LL;
              v23 = v45;
              v24 += v28 + 4;
              ++v25;
              if ( v24 >= v45 + (unsigned __int64)*(unsigned int *)(v45 + 4) )
                break;
            }
          }
          if ( v18 < 0 )
          {
LABEL_71:
            LODWORD(v33) = v18;
            v19 = v11;
            LODWORD(v32) = v11;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2440),
              2u,
              6u,
              0x2Du,
              (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
              v32,
              v33);
LABEL_42:
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x800) == 0 )
              goto LABEL_45;
            v21 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_44:
            LODWORD(v32) = v18;
            LODWORD(v30) = v19;
            Template_pqq(v20, v21, 0LL, *(_QWORD *)(a1 + 16), v30, v32);
            goto LABEL_45;
          }
          _InterlockedOr((volatile signed __int32 *)(v13 + 204), 2u);
          if ( *(_BYTE *)(v13 + 1340) )
            _InterlockedOr((volatile signed __int32 *)(v13 + 204), 1u);
          else
            _InterlockedAnd((volatile signed __int32 *)(v13 + 204), 0xFFFFFFFE);
          if ( *(_BYTE *)(v13 + 1341) == 10 )
            _InterlockedOr((volatile signed __int32 *)(v13 + 204), 0x200u);
          v18 = HUBACPI_EvalAcpiMethodEx(a1, &v36, 1145851999, v44);
          if ( v18 < 0 )
          {
            v19 = v11;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2440),
              4u,
              3u,
              0x2Eu,
              (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
            goto LABEL_82;
          }
          v29 = v45;
          if ( !*(_DWORD *)(v45 + 8) || *(_WORD *)(v45 + 12) != 2 || *(_WORD *)(v45 + 14) < 0x10u )
          {
            v19 = v11;
            LODWORD(v32) = v11;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 2440),
              2u,
              6u,
              0x2Fu,
              (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
              v32);
LABEL_82:
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x800) != 0 )
            {
              v21 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
              goto LABEL_44;
            }
            goto LABEL_45;
          }
          *(_OWORD *)(v13 + 1352) = *(_OWORD *)(v45 + 16);
          _InterlockedOr((volatile signed __int32 *)(v13 + 204), 4u);
          if ( (*(_BYTE *)(v29 + 24) & 1) == 0 )
            _InterlockedAnd((volatile signed __int32 *)(v13 + 204), 0xFFFFFFFE);
          _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000u);
        }
        else
        {
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x800) != 0 )
          {
            LODWORD(v32) = -1072431093;
            LODWORD(v30) = v11;
            Template_pqq(v45, &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE, 0LL, *(_QWORD *)(a1 + 16), v30, v32);
          }
          LODWORD(v32) = v11;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2440),
            2u,
            6u,
            0x2Cu,
            (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
            v32);
        }
LABEL_45:
        v8 = v43;
LABEL_46:
        if ( (unsigned int)++v42 >= *(_DWORD *)(v39 + 4) )
          goto LABEL_47;
      }
      if ( *(_WORD *)(v45 + 12) )
      {
        v14 = 39;
        v15 = 6;
        v16 = 2;
      }
      else
      {
        v17 = *(unsigned __int16 *)(v45 + 16);
        *(_DWORD *)(v13 + 216) = v17;
        switch ( v17 )
        {
          case 0:
            goto LABEL_40;
          case 1:
            v14 = 40;
            break;
          case 2:
            v14 = 41;
            break;
          default:
            v14 = 42;
            LODWORD(v32) = v17;
            v16 = 2;
            v15 = 6;
LABEL_39:
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 2440),
              v16,
              v15,
              v14,
              (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
              v32);
            goto LABEL_40;
        }
        v16 = 4;
        v15 = 3;
      }
      LODWORD(v32) = v11;
      goto LABEL_39;
    }
  }
LABEL_47:
  if ( v35 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v44 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v34 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return 0LL;
}
