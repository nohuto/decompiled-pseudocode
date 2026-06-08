/*
 * XREFs of ProcLibDeviceStart @ 0x1C0011F34
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C000F3D0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     AcpiEval_OSC @ 0x1C0001B54 (AcpiEval_OSC.c)
 *     AcquireBiosPpmControl @ 0x1C0001DC8 (AcquireBiosPpmControl.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0001ED0 (ProcLibTraceProcessorSpecificEvent.c)
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PDC @ 0x1C000F8DC (AcpiEval_PDC.c)
 *     AcpiEval_PPC @ 0x1C00105D0 (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C00108E0 (AcpiEval_TPC.c)
 *     AcquireAcpiInterfaces @ 0x1C00114E0 (AcquireAcpiInterfaces.c)
 *     EnumerateControlMethods @ 0x1C0011B70 (EnumerateControlMethods.c)
 *     ProcLibCapChange @ 0x1C0012990 (ProcLibCapChange.c)
 *     ProcLibTraceSummary2 @ 0x1C0012E34 (ProcLibTraceSummary2.c)
 *     InitPepIdleStates @ 0x1C001504C (InitPepIdleStates.c)
 *     InitAcpiProcessorDomains @ 0x1C00160BC (InitAcpiProcessorDomains.c)
 *     RegisterXsdDomain @ 0x1C00162C4 (RegisterXsdDomain.c)
 *     InitAcpiCpc @ 0x1C00164AC (InitAcpiCpc.c)
 *     InitAcpiCStates @ 0x1C0016B30 (InitAcpiCStates.c)
 *     InitAcpiPerfStates @ 0x1C001A7E0 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C001AA7C (InitAcpiThrottleStates.c)
 *     InitializeEnergyEstimation @ 0x1C001B140 (InitializeEnergyEstimation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001BBD4 (ValidatePerfDomainSymmetry.c)
 *     InitPepPerfStates @ 0x1C001C3EC (InitPepPerfStates.c)
 *     InitPep @ 0x1C001C8C8 (InitPep.c)
 *     InitAcpiLegacyPcc @ 0x1C001CCA0 (InitAcpiLegacyPcc.c)
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
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  void (__fastcall *v13)(_QWORD, _QWORD); // rax
  void (__fastcall *v14)(_QWORD); // rax
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
  v5 = ((__int64 (__fastcall *)(__int64))qword_1C0009768)(a1);
  if ( v5 >= 0 )
  {
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
    if ( qword_1C00094C8 && (int)AcpiEval_OSC(a1, (_DWORD *)qword_1C00094C8, v6, &v27) >= 0 )
    {
      if ( (*v27 & 0xE) == 0 )
        *(_QWORD *)(a1 + 72) = v27;
    }
    else if ( qword_1C00094C0 )
    {
      AcpiEval_PDC(a1, (const void *)qword_1C00094C0, word_1C00094D0);
    }
    EnumerateControlMethods(a1, (_DWORD *)(a1 + 1048));
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
      if ( (int)InitAcpiLegacyPcc(a1) >= 0 )
        *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF8CCFFFFFuLL;
      else
        *(_QWORD *)(a1 + 248) &= ~0x80000000uLL;
    }
    if ( (*(_DWORD *)(a1 + 248) & 0x70000000) != 0 && (int)InitAcpiPerfStates(a1) < 0 )
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF8FFFFFFFuLL;
    if ( (*(_DWORD *)(a1 + 248) & 0x3300000) != 0 && (int)InitAcpiThrottleStates(a1) < 0 )
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFCCFFFFFuLL;
    if ( !qword_1C00094D8 || (v5 = qword_1C00094D8(a1), v5 >= 0) )
    {
      if ( dword_1C00097B4 != 1 )
      {
        v10 = *(_QWORD *)(a1 + 248);
        if ( (v10 & 0x60000000) != 0 && *(_BYTE *)(a1 + 376) == 127 )
        {
          if ( (v10 & 0x20000000) != 0 )
          {
            *(_QWORD *)(a1 + 264) = qword_1C00094F8;
            *(_QWORD *)(a1 + 280) = qword_1C0009508;
          }
          if ( (v10 & 0x40000000) != 0 )
            *(_QWORD *)(a1 + 264) = SetPerfStateFFH;
        }
        else if ( *(_BYTE *)(a1 + 376) == 1 && (v10 & 0x10000000) != 0 )
        {
          *(_QWORD *)(a1 + 264) = SetPerfStateIO;
          *(_QWORD *)(a1 + 280) = SetPerfStateIOHidden;
        }
        else
        {
          *(_QWORD *)(a1 + 248) = v10 & 0xFFFFFFFF8FFFFFFFuLL;
        }
        v11 = *(_QWORD *)(a1 + 248);
        if ( (v11 & 0x4000000) != 0 )
          *(_QWORD *)(a1 + 296) = qword_1C0009520;
        if ( (v11 & 0xA8000000) != 0 )
        {
          *(_QWORD *)(a1 + 312) = qword_1C0009530;
          *(_QWORD *)(a1 + 320) = qword_1C0009538;
        }
        if ( (v11 & 0x2000000) != 0 && *(_BYTE *)(a1 + 432) == 127 )
        {
          *(_QWORD *)(a1 + 272) = qword_1C0009500;
          *(_QWORD *)(a1 + 288) = qword_1C0009510;
        }
        else if ( *(_BYTE *)(a1 + 432) == 1 && (v11 & 0x1100000) != 0 )
        {
          *(_QWORD *)(a1 + 272) = SetPerfStateIO;
          *(_QWORD *)(a1 + 288) = SetPerfStateIOHidden;
        }
        else
        {
          *(_QWORD *)(a1 + 248) = v11 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_1C0009528 )
          *(_QWORD *)(a1 + 304) = qword_1C0009528;
        v12 = *(_QWORD *)(a1 + 248);
        if ( (v12 & 0x10FF300000LL) == 0x4000000 && !qword_1C0009538 )
          *(_QWORD *)(a1 + 248) = v12 & 0xFFFFFFFFFBFFFFFFuLL;
      }
      InitAcpiProcessorDomains(a1);
      if ( (*(_DWORD *)(a1 + 248) & 0x7B07F070) != 0 && (v5 = AcquireAcpiInterfaces(a1), v5 < 0) )
      {
        v13 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 160);
        if ( v13 )
          v13(*(_QWORD *)(a1 + 8), AcpiNotifyCallback);
        v14 = *(void (__fastcall **)(_QWORD))(a1 + 104);
        if ( v14 )
          v14(*(_QWORD *)(a1 + 88));
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 192),
          0LL);
        ((void (__fastcall *)(__int64))qword_1C0009730)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 192));
        v15 = *(_DWORD *)(a1 + 248);
        v16 = 0;
        LODWORD(v27) = 0;
        if ( (v15 & 0x70000000) != 0 )
        {
          v17 = AcpiEval_PPC(a1, (unsigned int *)&v27);
          v16 = (unsigned int)v27;
          if ( v17 < 0 )
            v16 = 0;
        }
        v18 = *(_DWORD *)(a1 + 248);
        v19 = 0;
        LODWORD(v27) = 0;
        if ( (v18 & 0x3000000) != 0 )
        {
          v20 = AcpiEval_TPC(a1, (unsigned int *)&v27);
          v19 = (unsigned int)v27;
          if ( v20 < 0 )
            v19 = 0;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C00093A8,
          0LL);
        ProcLibCapChange(a1, v16, v19, 100LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C00093A8);
        if ( (*(_QWORD *)(a1 + 248) & 0x10FF300000LL) != 0 )
        {
          if ( *(_QWORD *)(a1 + 496) )
            v21 = RegisterXsdDomain(a1);
          else
            v21 = !byte_1C00097B0 || (unsigned int)((__int64 (__fastcall *)(__int64))qword_1C0009770)(a1) == 0;
          if ( v21 && (int)ValidatePerfDomainSymmetry(a1) >= 0 )
          {
            v22 = *(_QWORD *)(a1 + 248);
            if ( (v22 & 0x1000000000LL) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C0009760)(a1);
            }
            else if ( (v22 & 0x8000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C0009758)(a1);
            }
            else if ( (v22 & 0x80000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C0009750)(a1);
            }
            else
            {
              v23 = (void (__fastcall *)(__int64))qword_1C0009738;
              if ( (*(_QWORD *)(a1 + 248) & 0x73300000LL) == 0 )
                v23 = (void (__fastcall *)(__int64))qword_1C0009748;
              v23(a1);
            }
          }
        }
        if ( (*(_QWORD *)(a1 + 248) & 0x2000000000LL) != 0 && ++dword_1C0009AB8 == dword_1C00093A4 )
          InitializeEnergyEstimation();
        AcquireBiosPpmControl(a1);
        v5 = 0;
      }
    }
    if ( v3 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  else
  {
    *(_QWORD *)(a1 + 248) = 0LL;
    if ( dword_1C00097B4 == 1 )
      v5 = 0;
  }
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x7F077) != (*(_DWORD *)(a1 + 240) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C0009790, 0, 0LL);
  v24 = *(_QWORD *)(a1 + 248);
  v25 = *(_DWORD *)(a1 + 240) & 0x70000000;
  if ( (v24 & 0x40000000) != 0 )
    v25 = *(_DWORD *)(a1 + 240) & 0x40000000;
  if ( (v24 & v25) != (unsigned int)v25 )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C0009798, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x3300000) != (*(_DWORD *)(a1 + 240) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C00097A0, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x80000000) != (*(_DWORD *)(a1 + 240) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_ERROR, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x8000000) != (*(_DWORD *)(a1 + 240) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_CPC_ERROR, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v5;
}
