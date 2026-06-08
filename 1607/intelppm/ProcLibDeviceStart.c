/*
 * XREFs of ProcLibDeviceStart @ 0x1C001403C
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C0013D20 (EvtDevicePrepareHardware.c)
 * Callees:
 *     AcquireBiosPpmControl @ 0x1C0001FE8 (AcquireBiosPpmControl.c)
 *     AcpiEval_OSC @ 0x1C00020BC (AcpiEval_OSC.c)
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0004498 (ProcLibTraceProcessorSpecificEvent.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001328C (ValidatePerfDomainSymmetry.c)
 *     ProcLibTraceSummary2 @ 0x1C0015104 (ProcLibTraceSummary2.c)
 *     RegisterXsdDomain @ 0x1C0015380 (RegisterXsdDomain.c)
 *     ProcLibCapChange @ 0x1C00154EC (ProcLibCapChange.c)
 *     InitAcpiCpc @ 0x1C0015588 (InitAcpiCpc.c)
 *     InitAcpiProcessorDomains @ 0x1C001562C (InitAcpiProcessorDomains.c)
 *     InitAcpiPerfStates @ 0x1C00157EC (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0015A24 (InitAcpiThrottleStates.c)
 *     InitAcpiCStates @ 0x1C0015C00 (InitAcpiCStates.c)
 *     AcpiEval_PPC @ 0x1C0016D34 (AcpiEval_PPC.c)
 *     AcquireAcpiInterfaces @ 0x1C00170DC (AcquireAcpiInterfaces.c)
 *     AcquirePccInterface @ 0x1C0017190 (AcquirePccInterface.c)
 *     InitPep @ 0x1C0017290 (InitPep.c)
 *     EnumerateControlMethods @ 0x1C0017500 (EnumerateControlMethods.c)
 *     AcpiEval_PCCP @ 0x1C001E8D8 (AcpiEval_PCCP.c)
 *     AcpiEval_PDC @ 0x1C001EA44 (AcpiEval_PDC.c)
 *     AcpiEval_TPC @ 0x1C001EB30 (AcpiEval_TPC.c)
 *     ReleaseAcpiInterfaces @ 0x1C001F110 (ReleaseAcpiInterfaces.c)
 *     InitPepIdleStates @ 0x1C0021F28 (InitPepIdleStates.c)
 *     InitializeEnergyEstimation @ 0x1C0023000 (InitializeEnergyEstimation.c)
 *     InitPepPerfStates @ 0x1C0023504 (InitPepPerfStates.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // r14d
  int (__fastcall *v4)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD); // rax
  int v5; // edi
  __int16 v6; // r8
  __int64 v7; // rax
  bool v8; // sf
  unsigned __int64 v9; // rax
  signed int v10; // edi
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  char v21; // al
  __int64 v22; // rax
  void (__fastcall *v23)(__int64); // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  _DWORD *v27; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v28[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v29; // [rsp+68h] [rbp-11h]
  _BYTE v30[12]; // [rsp+70h] [rbp-9h] BYREF
  int v31; // [rsp+7Ch] [rbp+3h]
  struct _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp+7h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp+17h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v30[4] = 0LL;
  v31 = 0;
  *(_QWORD *)(a1 + 232) = Globals;
  v3 = 0;
  *(_QWORD *)(a1 + 248) = Globals;
  v28[0] = 0LL;
  v29 = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  v28[1] = v30;
  v4 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488);
  *(_DWORD *)v30 = 0;
  LODWORD(v28[0]) = 1;
  LODWORD(v29) = 16;
  if ( v4(WdfDriverGlobals, v1, 0LL, 2703744LL, 0LL, v28, 0LL, 0LL) >= 0 )
  {
    if ( *(_DWORD *)&v30[4] )
    {
      *(_DWORD *)(a1 + 172) = *(_DWORD *)&v30[4];
      *(_BYTE *)(a1 + 169) = v30[8];
      *(_BYTE *)(a1 + 168) = 1;
      *(_WORD *)(a1 + 170) = 0x2000;
      *(_DWORD *)(a1 + 176) = 0;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFFCFFFF9uLL;
    v31 = -1;
    memset(v30, 0, sizeof(v30));
  }
  *(_DWORD *)(a1 + 48) = v31;
  *(_DWORD *)(a1 + 52) = *(_DWORD *)v30;
  v5 = ((__int64 (__fastcall *)(__int64))qword_1C000F0B8)(a1);
  if ( v5 < 0 )
  {
    *(_QWORD *)(a1 + 248) = 0LL;
    if ( dword_1C000F104 == 1 )
      v5 = 0;
    goto LABEL_115;
  }
  if ( *(_DWORD *)(a1 + 56) == -1 )
  {
    if ( (Globals & 0x200000000000LL) != 0 )
    {
      *(_DWORD *)(a1 + 68) = *(_DWORD *)(a1 + 60);
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFCFFFFFFFFFuLL;
      *(_BYTE *)(a1 + 66) = 1;
    }
  }
  else
  {
    IoSetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 8), &PROCESSOR_NUMBER_PKEY, 0, 0, 7u, 4u, (PVOID)(a1 + 56));
    KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v3 = 1;
  }
  v27 = 0LL;
  if ( qword_1C000EE18 && (int)AcpiEval_OSC(a1, (_DWORD *)qword_1C000EE18, v6, &v27) >= 0 )
  {
    if ( (*v27 & 0xE) == 0 )
      *(_QWORD *)(a1 + 72) = v27;
  }
  else if ( qword_1C000EE10 )
  {
    AcpiEval_PDC(a1, qword_1C000EE10, (unsigned __int16)word_1C000EE20);
  }
  EnumerateControlMethods(a1, a1 + 1048);
  if ( (*(_QWORD *)(a1 + 248) & 0x11300000F00LL) != 0 && (int)InitPep(a1) < 0 )
    *(_QWORD *)(a1 + 248) &= 0xFFFFFEECFFFFF0FFuLL;
  InitAcpiCStates(a1);
  v7 = *(_QWORD *)(a1 + 248);
  if ( (v7 & 0x7F077) == 0 )
    *(_QWORD *)(a1 + 248) = v7 & 0xFFFFFFFFFFFFFCFFuLL;
  if ( (*(_QWORD *)(a1 + 248) & 0x300000300LL) != 0 && (int)InitPepIdleStates(a1) < 0 )
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFCFFFFFCFFuLL;
  if ( (*(_QWORD *)(a1 + 248) & 0x1000000000LL) != 0 )
  {
    v8 = (int)InitPepPerfStates(a1) < 0;
    v9 = 0xFFFFFFEFFFFFFFFFuLL;
    if ( !v8 )
      v9 = -4214226945LL;
    *(_QWORD *)(a1 + 248) &= v9;
  }
  if ( (*(_DWORD *)(a1 + 248) & 0x8000000) != 0 )
  {
    if ( (int)InitAcpiCpc(a1) >= 0 )
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF0CCFFFFFuLL;
    else
      *(_QWORD *)(a1 + 248) &= ~0x8000000uLL;
  }
  if ( (*(_DWORD *)(a1 + 248) & 0x80000000) != 0 )
  {
    if ( (int)AcquirePccInterface(a1) < 0 )
      goto LABEL_46;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 192),
      0LL);
    v10 = AcpiEval_PCCP(a1, a1 + 528);
    if ( v10 >= 0 )
    {
      v10 = -1073741811;
      v11 = *(_DWORD **)(a1 + 528);
      if ( qword_1C000F1B8 && *v11 <= (unsigned int)(dword_1C000F1C0 - 4) )
        v10 = (unsigned int)(dword_1C000F1C0 - 4) < v11[1] ? 0xC000000D : 0;
      if ( v10 >= 0 )
      {
        if ( (unsigned int)(dword_1C000F1B4 - 1) > 0x26 )
          goto LABEL_44;
        v10 = -1073741823;
      }
      *(_QWORD *)(a1 + 248) &= ~0x80000000uLL;
    }
LABEL_44:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 192));
    if ( v10 >= 0 )
    {
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF8CCFFFFFuLL;
      goto LABEL_47;
    }
LABEL_46:
    *(_QWORD *)(a1 + 248) &= ~0x80000000uLL;
  }
LABEL_47:
  if ( (*(_DWORD *)(a1 + 248) & 0x70000000) != 0 && (int)InitAcpiPerfStates(a1) < 0 )
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF8FFFFFFFuLL;
  if ( (*(_DWORD *)(a1 + 248) & 0x3300000) != 0 && (int)InitAcpiThrottleStates(a1) < 0 )
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFCCFFFFFuLL;
  if ( qword_1C000EE28 )
  {
    v5 = qword_1C000EE28(a1);
    if ( v5 < 0 )
      goto LABEL_113;
  }
  if ( dword_1C000F104 != 1 )
  {
    v12 = *(_QWORD *)(a1 + 248);
    if ( (v12 & 0x60000000) != 0 && *(_BYTE *)(a1 + 376) == 127 )
    {
      if ( (v12 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 264) = qword_1C000EE48;
        *(_QWORD *)(a1 + 280) = qword_1C000EE58;
      }
      if ( (v12 & 0x40000000) != 0 )
        *(_QWORD *)(a1 + 264) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 376) == 1 && (v12 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 264) = SetPerfStateIO;
      *(_QWORD *)(a1 + 280) = SetPerfStateIOHidden;
    }
    else
    {
      *(_QWORD *)(a1 + 248) = v12 & 0xFFFFFFFF8FFFFFFFuLL;
    }
    v13 = *(_QWORD *)(a1 + 248);
    if ( (v13 & 0x4000000) != 0 )
      *(_QWORD *)(a1 + 296) = qword_1C000EE70;
    if ( (v13 & 0xA8000000) != 0 )
    {
      *(_QWORD *)(a1 + 312) = qword_1C000EE80;
      *(_QWORD *)(a1 + 320) = qword_1C000EE88;
    }
    if ( (v13 & 0x2000000) != 0 && *(_BYTE *)(a1 + 432) == 127 )
    {
      *(_QWORD *)(a1 + 272) = qword_1C000EE50;
      *(_QWORD *)(a1 + 288) = qword_1C000EE60;
    }
    else if ( *(_BYTE *)(a1 + 432) == 1 && (v13 & 0x1100000) != 0 )
    {
      *(_QWORD *)(a1 + 272) = SetPerfStateIO;
      *(_QWORD *)(a1 + 288) = SetPerfStateIOHidden;
    }
    else
    {
      *(_QWORD *)(a1 + 248) = v13 & 0xFFFFFFFFFCCFFFFFuLL;
    }
    if ( qword_1C000EE78 )
      *(_QWORD *)(a1 + 304) = qword_1C000EE78;
    v14 = *(_QWORD *)(a1 + 248);
    if ( (v14 & 0x10FF300000LL) == 0x4000000 && !qword_1C000EE88 )
      *(_QWORD *)(a1 + 248) = v14 & 0xFFFFFFFFFBFFFFFFuLL;
  }
  InitAcpiProcessorDomains(a1);
  if ( (*(_DWORD *)(a1 + 248) & 0x7B07F070) == 0 || (v5 = AcquireAcpiInterfaces(a1), v5 >= 0) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 192),
      0LL);
    ((void (__fastcall *)(__int64))qword_1C000F080)(a1);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 192));
    v15 = *(_DWORD *)(a1 + 248);
    v16 = 0;
    LODWORD(v27) = 0;
    if ( (v15 & 0x70000000) != 0 )
    {
      v17 = AcpiEval_PPC(a1, &v27);
      v16 = (unsigned int)v27;
      if ( v17 < 0 )
        v16 = 0;
    }
    v18 = *(_DWORD *)(a1 + 248);
    v19 = 0;
    LODWORD(v27) = 0;
    if ( (v18 & 0x3000000) != 0 )
    {
      v20 = AcpiEval_TPC(a1, &v27);
      v19 = (unsigned int)v27;
      if ( v20 < 0 )
        v19 = 0;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C000ECF8,
      0LL);
    ProcLibCapChange(a1, v16, v19, 100LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C000ECF8);
    if ( (*(_QWORD *)(a1 + 248) & 0x10FF300000LL) == 0 )
      goto LABEL_109;
    if ( *(_QWORD *)(a1 + 496) )
    {
      v21 = RegisterXsdDomain(a1);
    }
    else
    {
      if ( byte_1C000F100 )
      {
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64))qword_1C000F0C0)(a1) )
          goto LABEL_99;
        goto LABEL_109;
      }
      v21 = 1;
    }
    if ( v21 )
    {
LABEL_99:
      if ( (int)ValidatePerfDomainSymmetry((_QWORD *)a1) >= 0 )
      {
        v22 = *(_QWORD *)(a1 + 248);
        if ( (v22 & 0x1000000000LL) != 0 )
        {
          ((void (__fastcall *)(__int64))qword_1C000F0B0)(a1);
        }
        else if ( (v22 & 0x8000000) != 0 )
        {
          ((void (__fastcall *)(__int64))qword_1C000F0A8)(a1);
        }
        else if ( (v22 & 0x80000000) != 0 )
        {
          ((void (__fastcall *)(__int64))qword_1C000F0A0)(a1);
        }
        else
        {
          v23 = (void (__fastcall *)(__int64))qword_1C000F088;
          if ( (*(_QWORD *)(a1 + 248) & 0x73300000LL) == 0 )
            v23 = (void (__fastcall *)(__int64))qword_1C000F098;
          v23(a1);
        }
      }
    }
LABEL_109:
    if ( (*(_QWORD *)(a1 + 248) & 0x2000000000LL) != 0 && ++dword_1C000F408 == dword_1C000ECF4 )
      InitializeEnergyEstimation();
    AcquireBiosPpmControl(a1);
    v5 = 0;
    goto LABEL_113;
  }
  ReleaseAcpiInterfaces(a1);
LABEL_113:
  if ( v3 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_115:
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x7F077) != (*(_DWORD *)(a1 + 240) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C000F0E0, 0, 0LL);
  v24 = *(_QWORD *)(a1 + 248);
  v25 = *(_DWORD *)(a1 + 240) & 0x70000000;
  if ( (v24 & 0x40000000) != 0 )
    v25 = *(_DWORD *)(a1 + 240) & 0x40000000;
  if ( (v24 & v25) != (unsigned int)v25 )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C000F0E8, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x3300000) != (*(_DWORD *)(a1 + 240) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C000F0F0, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x80000000) != (*(_DWORD *)(a1 + 240) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_ERROR, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x8000000) != (*(_DWORD *)(a1 + 240) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_CPC_ERROR, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v5;
}
