/*
 * XREFs of HUBACPI_GetAcpiPortAttributes @ 0x1C006F25C
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0062E40 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D7C (WPP_RECORDER_SF_dD.c)
 *     Template_pqq @ 0x1C000A2BC (Template_pqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C006E6A0 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C006EB0C (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EnumChildren @ 0x1C006EED4 (HUBACPI_EnumChildren.c)
 */

__int64 __fastcall HUBACPI_GetAcpiPortAttributes(__int64 a1)
{
  __int64 (__fastcall *v2)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, _QWORD *); // rax
  int v3; // eax
  unsigned __int16 v4; // r9
  int v5; // eax
  unsigned __int16 v6; // r9
  unsigned __int8 v7; // dl
  __int64 v8; // rbx
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 v12; // r12
  __int64 i; // rbx
  __int64 v14; // rbx
  unsigned __int16 v15; // r9
  unsigned int v16; // r8d
  unsigned __int8 v17; // dl
  int v18; // ecx
  int v19; // r15d
  int v20; // ebx
  __int64 v21; // rcx
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned int v26; // r8d
  __int64 v27; // rcx
  unsigned int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-79h]
  __int64 v32; // [rsp+28h] [rbp-71h]
  __int64 *v33; // [rsp+28h] [rbp-71h]
  __int64 *v34; // [rsp+30h] [rbp-69h]
  __int64 v35; // [rsp+40h] [rbp-59h] BYREF
  __int64 v36; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 v37; // [rsp+50h] [rbp-49h] BYREF
  __int16 v38; // [rsp+52h] [rbp-47h]
  _DWORD *v39; // [rsp+58h] [rbp-41h]
  __int64 v40; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v41[7]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v42[10]; // [rsp+A0h] [rbp+7h] BYREF
  int v43; // [rsp+100h] [rbp+67h]
  _DWORD *v44; // [rsp+108h] [rbp+6Fh]
  __int64 v45; // [rsp+110h] [rbp+77h] BYREF
  __int64 v46; // [rsp+118h] [rbp+7Fh] BYREF

  v36 = 0LL;
  v45 = 0LL;
  v35 = 0LL;
  memset(v41, 0, sizeof(v41));
  v41[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v41[0]) = 56;
  v2 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, _QWORD *))(WdfFunctions_01015 + 1536);
  v41[3] = 0x100000001LL;
  v3 = v2(WdfDriverGlobals, v41, (unsigned int)ExDefaultNonPagedPoolType, 1748191317LL, 20LL, &v35, v42);
  if ( v3 < 0 )
  {
    v4 = 32;
LABEL_3:
    LODWORD(v32) = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2464),
      2u,
      3u,
      v4,
      (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
      v32);
    goto LABEL_47;
  }
  v5 = HUBACPI_EnumChildren(a1, v35);
  if ( v5 == -1073741637 )
  {
    v6 = 33;
    v7 = 4;
LABEL_6:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2464), v7, 3u, v6, (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
    goto LABEL_47;
  }
  if ( v5 == -2147483643 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2464), 4u, 3u, 0x22u, (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
    v8 = *(unsigned int *)(v42[0] + 4LL);
    memset(v41, 0, sizeof(v41));
    v41[4] = *(_QWORD *)(a1 + 16);
    LODWORD(v41[0]) = 56;
    v41[3] = 0x100000001LL;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
           WdfDriverGlobals,
           v41,
           (unsigned int)ExDefaultNonPagedPoolType,
           1748191317LL,
           v8,
           &v36,
           &v40) < 0 )
    {
      v6 = 35;
LABEL_10:
      v7 = 2;
      goto LABEL_6;
    }
    v3 = HUBACPI_EnumChildren(a1, v36);
    if ( v3 < 0 )
    {
      v4 = 36;
      goto LABEL_3;
    }
    memset(v41, 0, sizeof(v41));
    v34 = &v46;
    v41[4] = *(_QWORD *)(a1 + 16);
    v33 = &v45;
    LODWORD(v41[0]) = 56;
    v41[3] = 0x100000001LL;
    LODWORD(v31) = 1044;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 1536))(
           WdfDriverGlobals,
           v41,
           (unsigned int)ExDefaultNonPagedPoolType,
           1748191317LL) < 0 )
    {
      v6 = 37;
      goto LABEL_10;
    }
    v43 = 1;
    v9 = (_DWORD *)(v40 + 8);
    if ( *(_DWORD *)(v40 + 4) > 1u )
    {
      while ( 1 )
      {
        v9 = (_DWORD *)((char *)v9 + (unsigned int)v9[1] + 8);
        v44 = v9;
        if ( (*v9 & 1) == 0 || !v9[1] )
          goto LABEL_46;
        v39 = v9 + 2;
        v38 = *((_WORD *)v9 + 2);
        v37 = v38 - 1;
        if ( (int)HUBACPI_EvalAcpiMethodEx(a1, &v37, 1380204895, v45) < 0
          || !*(_DWORD *)(v46 + 8)
          || *(_WORD *)(v46 + 12) )
        {
          goto LABEL_45;
        }
        v12 = *(_WORD *)(v46 + 16);
        if ( !v12 || v12 > *(_WORD *)(a1 + 44) )
        {
          LODWORD(v33) = v12;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2464),
            2u,
            6u,
            0x26u,
            (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
            v33);
          goto LABEL_45;
        }
        for ( i = *(_QWORD *)(a1 + 2304); ; i = *(_QWORD *)(v14 + 248) )
        {
          v14 = i - 248;
          if ( a1 + 2304 == v14 + 248 )
            goto LABEL_45;
          if ( *(_WORD *)(v14 + 200) == v12 )
            break;
        }
        if ( (int)HUBACPI_EvaluateDsmMethod(a1, &v37, v10, v11, v31, v45) >= 0 )
          break;
LABEL_40:
        v19 = HUBACPI_EvalAcpiMethodEx(a1, &v37, 1129338207, v45);
        if ( v19 < 0 )
        {
          v20 = v12;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2464),
            4u,
            3u,
            0x2Bu,
            (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
          goto LABEL_42;
        }
        v24 = v46;
        if ( *(_DWORD *)(v46 + 8) )
        {
          v25 = v46 + 12;
          v26 = 0;
          if ( v46 + 12 < v46 + (unsigned __int64)*(unsigned int *)(v46 + 4) )
          {
            while ( v26 < *(_DWORD *)(v24 + 8) )
            {
              if ( v26 >= 4 )
              {
                v19 = -1072431093;
                goto LABEL_71;
              }
              if ( *(_WORD *)v25 )
              {
                v19 = -1072431096;
                goto LABEL_71;
              }
              v27 = acpiUpcPackageFields[2 * v26];
              v28 = acpiUpcPackageFields[2 * v26 + 1];
              if ( v28 == 1 )
              {
                *(_BYTE *)(v27 + v14 + 1340) = *(_BYTE *)(v25 + 4);
              }
              else
              {
                if ( v28 != 4 )
                {
                  v19 = -1072431089;
                  break;
                }
                *(_DWORD *)(v27 + v14 + 1340) = *(_DWORD *)(v25 + 4);
              }
              LOWORD(v29) = *(_WORD *)(v25 + 2);
              if ( (unsigned __int16)v29 >= 4u )
                v29 = (unsigned __int16)v29;
              else
                v29 = 4LL;
              v24 = v46;
              v25 += v29 + 4;
              ++v26;
              if ( v25 >= v46 + (unsigned __int64)*(unsigned int *)(v46 + 4) )
                break;
            }
          }
          if ( v19 < 0 )
          {
LABEL_71:
            LODWORD(v34) = v19;
            v20 = v12;
            LODWORD(v33) = v12;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2464),
              2u,
              6u,
              0x2Du,
              (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
              v33,
              v34);
LABEL_42:
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x800) == 0 )
              goto LABEL_45;
            v22 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_44:
            LODWORD(v33) = v19;
            LODWORD(v31) = v20;
            Template_pqq(v21, v22, 0LL, *(_QWORD *)(a1 + 16), v31, v33);
            goto LABEL_45;
          }
          _InterlockedOr((volatile signed __int32 *)(v14 + 204), 2u);
          if ( *(_BYTE *)(v14 + 1340) )
            _InterlockedOr((volatile signed __int32 *)(v14 + 204), 1u);
          else
            _InterlockedAnd((volatile signed __int32 *)(v14 + 204), 0xFFFFFFFE);
          if ( *(_BYTE *)(v14 + 1341) == 10 )
            _InterlockedOr((volatile signed __int32 *)(v14 + 204), 0x200u);
          v19 = HUBACPI_EvalAcpiMethodEx(a1, &v37, 1145851999, v45);
          if ( v19 < 0 )
          {
            v20 = v12;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2464),
              4u,
              3u,
              0x2Eu,
              (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids);
            goto LABEL_82;
          }
          v30 = v46;
          if ( !*(_DWORD *)(v46 + 8) || *(_WORD *)(v46 + 12) != 2 || *(_WORD *)(v46 + 14) < 0x10u )
          {
            v20 = v12;
            LODWORD(v33) = v12;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 2464),
              2u,
              6u,
              0x2Fu,
              (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
              v33);
LABEL_82:
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x800) != 0 )
            {
              v22 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
              goto LABEL_44;
            }
            goto LABEL_45;
          }
          *(_OWORD *)(v14 + 1352) = *(_OWORD *)(v46 + 16);
          _InterlockedOr((volatile signed __int32 *)(v14 + 204), 4u);
          if ( (*(_BYTE *)(v30 + 24) & 1) == 0 )
            _InterlockedAnd((volatile signed __int32 *)(v14 + 204), 0xFFFFFFFE);
          _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000u);
        }
        else
        {
          if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x800) != 0 )
          {
            LODWORD(v33) = -1072431093;
            LODWORD(v31) = v12;
            Template_pqq(v46, &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE, 0LL, *(_QWORD *)(a1 + 16), v31, v33);
          }
          LODWORD(v33) = v12;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2464),
            2u,
            6u,
            0x2Cu,
            (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
            v33);
        }
LABEL_45:
        v9 = v44;
LABEL_46:
        if ( (unsigned int)++v43 >= *(_DWORD *)(v40 + 4) )
          goto LABEL_47;
      }
      if ( *(_WORD *)(v46 + 12) )
      {
        v15 = 39;
        v16 = 6;
        v17 = 2;
      }
      else
      {
        v18 = *(unsigned __int16 *)(v46 + 16);
        *(_DWORD *)(v14 + 216) = v18;
        switch ( v18 )
        {
          case 0:
            goto LABEL_40;
          case 1:
            v15 = 40;
            break;
          case 2:
            v15 = 41;
            break;
          default:
            v15 = 42;
            LODWORD(v33) = v18;
            v17 = 2;
            v16 = 6;
LABEL_39:
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 2464),
              v17,
              v16,
              v15,
              (__int64)&WPP_eda1603a3130e9b450b464bbeaa437a3_Traceguids,
              v33);
            goto LABEL_40;
        }
        v17 = 4;
        v16 = 3;
      }
      LODWORD(v33) = v12;
      goto LABEL_39;
    }
  }
LABEL_47:
  if ( v36 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v45 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v35 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return 0LL;
}
