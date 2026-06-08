/*
 * XREFs of ProcLibDeviceStart @ 0x1C0012314
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C0012000 (EvtDevicePrepareHardware.c)
 * Callees:
 *     AcquireBiosPpmControl @ 0x1C000154C (AcquireBiosPpmControl.c)
 *     AcpiEval_OSC @ 0x1C0001594 (AcpiEval_OSC.c)
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0003A68 (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceSummary2 @ 0x1C00129BC (ProcLibTraceSummary2.c)
 *     RegisterXsdDomain @ 0x1C0012C38 (RegisterXsdDomain.c)
 *     ProcLibCapChange @ 0x1C0012DA4 (ProcLibCapChange.c)
 *     InitAcpiProcessorDomains @ 0x1C0012E40 (InitAcpiProcessorDomains.c)
 *     InitAcpiCpc @ 0x1C0012F2C (InitAcpiCpc.c)
 *     InitAcpiPerfStates @ 0x1C00130A4 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C00132DC (InitAcpiThrottleStates.c)
 *     InitAcpiCStates @ 0x1C00134B8 (InitAcpiCStates.c)
 *     AcpiEval_PPC @ 0x1C001457C (AcpiEval_PPC.c)
 *     AcquireAcpiInterfaces @ 0x1C0014924 (AcquireAcpiInterfaces.c)
 *     AcquirePccInterface @ 0x1C00149D8 (AcquirePccInterface.c)
 *     InitPep @ 0x1C0014AD8 (InitPep.c)
 *     EnumerateControlMethods @ 0x1C0014D24 (EnumerateControlMethods.c)
 *     ValidatePerfDomainSymmetry @ 0x1C00150EC (ValidatePerfDomainSymmetry.c)
 *     AcpiEval_PCCP @ 0x1C001D3D4 (AcpiEval_PCCP.c)
 *     AcpiEval_PDC @ 0x1C001D540 (AcpiEval_PDC.c)
 *     AcpiEval_TPC @ 0x1C001D628 (AcpiEval_TPC.c)
 *     ReleaseAcpiInterfaces @ 0x1C001DC10 (ReleaseAcpiInterfaces.c)
 *     InitPepIdleStates @ 0x1C00206FC (InitPepIdleStates.c)
 *     InitPepPerfStates @ 0x1C0021480 (InitPepPerfStates.c)
 *     InitializeEnergyEstimation @ 0x1C0021C0C (InitializeEnergyEstimation.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // r14d
  int v4; // edi
  __int16 v5; // r8
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(__int64, unsigned int, __int64); // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // esi
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v21; // rax
  void (__fastcall *v22)(__int64); // rax
  bool v23; // sf
  unsigned __int64 v24; // rax
  signed int v25; // edi
  _DWORD *v26; // rcx
  int v27; // eax
  _DWORD *v28; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v29[2]; // [rsp+58h] [rbp-21h] BYREF
  __int128 *v30; // [rsp+60h] [rbp-19h]
  int v31; // [rsp+68h] [rbp-11h]
  int v32; // [rsp+6Ch] [rbp-Dh]
  __int128 v33; // [rsp+70h] [rbp-9h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp+7h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp+17h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)((char *)&v33 + 4) = 0LL;
  HIDWORD(v33) = 0;
  *(_QWORD *)(a1 + 232) = Globals;
  v3 = 0;
  *(_QWORD *)(a1 + 248) = Globals;
  v29[1] = 0;
  v32 = 0;
  *(_QWORD *)(a1 + 240) = 0LL;
  v30 = &v33;
  LODWORD(v33) = 0;
  v29[0] = 1;
  v31 = 16;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v1,
         0LL,
         2703744LL,
         0LL,
         v29,
         0LL,
         0LL) < 0 )
  {
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFFCFFFF9uLL;
    *((_QWORD *)&v33 + 1) = 0xFFFFFFFF00000000uLL;
    *(_QWORD *)&v33 = 0LL;
  }
  else if ( DWORD1(v33) )
  {
    *(_DWORD *)(a1 + 172) = DWORD1(v33);
    *(_BYTE *)(a1 + 169) = BYTE8(v33);
    *(_BYTE *)(a1 + 168) = 1;
    *(_WORD *)(a1 + 170) = 0x2000;
    *(_DWORD *)(a1 + 176) = 0;
  }
  *(_DWORD *)(a1 + 48) = HIDWORD(v33);
  *(_DWORD *)(a1 + 52) = v33;
  v4 = ((__int64 (__fastcall *)(__int64))qword_1C000DD38)(a1);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 56) != -1 )
    {
      IoSetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 8), &PROCESSOR_NUMBER_PKEY, 0, 0, 7u, 4u, (PVOID)(a1 + 56));
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v3 = 1;
    }
    v28 = 0LL;
    if ( qword_1C000DAE8 && (int)AcpiEval_OSC(a1, qword_1C000DAE8, v5, &v28) >= 0 )
    {
      if ( (*v28 & 0xE) == 0 )
        *(_QWORD *)(a1 + 72) = v28;
    }
    else if ( qword_1C000DAE0 )
    {
      AcpiEval_PDC(a1, qword_1C000DAE0, (unsigned __int16)word_1C000DAF0);
    }
    EnumerateControlMethods(a1, a1 + 1040);
    if ( (*(_QWORD *)(a1 + 248) & 0x11300000F00LL) != 0 && (int)InitPep(a1) < 0 )
      *(_QWORD *)(a1 + 248) &= 0xFFFFFEECFFFFF0FFuLL;
    InitAcpiCStates(a1);
    v8 = *(_QWORD *)(a1 + 248);
    if ( (v8 & 0x7F077) == 0 )
      *(_QWORD *)(a1 + 248) = v8 & 0xFFFFFFFFFFFFFCFFuLL;
    if ( (*(_QWORD *)(a1 + 248) & 0x300000300LL) != 0 && (int)InitPepIdleStates(a1) < 0 )
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFCFFFFFCFFuLL;
    if ( (*(_QWORD *)(a1 + 248) & 0x1000000000LL) != 0 )
    {
      v23 = (int)InitPepPerfStates(a1) < 0;
      v24 = 0xFFFFFFEFFFFFFFFFuLL;
      if ( !v23 )
        v24 = -4214226945LL;
      *(_QWORD *)(a1 + 248) &= v24;
    }
    if ( (*(_DWORD *)(a1 + 248) & 0x8000000) != 0 )
    {
      if ( (int)InitAcpiCpc(a1) >= 0 )
        *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF0CCFFFFFuLL;
      else
        *(_QWORD *)(a1 + 248) &= ~0x8000000uLL;
    }
    if ( (*(_DWORD *)(a1 + 248) & 0x80000000) == 0 )
    {
LABEL_24:
      if ( (*(_DWORD *)(a1 + 248) & 0x70000000) != 0 && (int)InitAcpiPerfStates(a1) < 0 )
        *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF8FFFFFFFuLL;
      if ( (*(_DWORD *)(a1 + 248) & 0x3300000) != 0 && (int)InitAcpiThrottleStates(a1) < 0 )
        *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFCCFFFFFuLL;
      if ( qword_1C000DAF8 )
      {
        v4 = qword_1C000DAF8(a1);
        if ( v4 < 0 )
          goto LABEL_60;
      }
      if ( dword_1C000DD7C != 1 )
      {
        v9 = *(_QWORD *)(a1 + 248);
        v7 = SetPerfStateIO;
        if ( (v9 & 0x60000000) != 0 && *(_BYTE *)(a1 + 368) == 127 )
        {
          if ( (v9 & 0x20000000) != 0 )
            *(_QWORD *)(a1 + 264) = qword_1C000DB18;
          if ( (v9 & 0x40000000) != 0 )
            *(_QWORD *)(a1 + 264) = SetPerfStateFFH;
        }
        else if ( *(_BYTE *)(a1 + 368) == 1 && (v9 & 0x10000000) != 0 )
        {
          *(_QWORD *)(a1 + 264) = SetPerfStateIO;
        }
        else
        {
          *(_QWORD *)(a1 + 248) = v9 & 0xFFFFFFFF8FFFFFFFuLL;
        }
        v10 = *(_QWORD *)(a1 + 248);
        v6 = 0x4000000LL;
        if ( (v10 & 0x4000000) != 0 )
          *(_QWORD *)(a1 + 280) = qword_1C000DB28;
        if ( (v10 & 0xA8000000) != 0 )
        {
          *(_QWORD *)(a1 + 296) = qword_1C000DB38;
          *(_QWORD *)(a1 + 304) = qword_1C000DB40;
        }
        if ( (v10 & 0x2000000) != 0 && *(_BYTE *)(a1 + 424) == 127 )
        {
          *(_QWORD *)(a1 + 272) = qword_1C000DB20;
        }
        else if ( *(_BYTE *)(a1 + 424) == 1 && (v10 & 0x1100000) != 0 )
        {
          *(_QWORD *)(a1 + 272) = SetPerfStateIO;
        }
        else
        {
          *(_QWORD *)(a1 + 248) = v10 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_1C000DB30 )
          *(_QWORD *)(a1 + 288) = qword_1C000DB30;
        v11 = *(_QWORD *)(a1 + 248);
        if ( (v11 & 0x10FF300000LL) == 0x4000000 && !qword_1C000DB40 )
          *(_QWORD *)(a1 + 248) = v11 & 0xFFFFFFFFFBFFFFFFuLL;
      }
      InitAcpiProcessorDomains(a1, v6, v7, 0x10FF300000LL);
      if ( (*(_DWORD *)(a1 + 248) & 0x7B07F070) != 0 )
      {
        v4 = AcquireAcpiInterfaces(a1);
        if ( v4 < 0 )
        {
          ReleaseAcpiInterfaces(a1);
LABEL_60:
          if ( v3 )
            KeRevertToUserGroupAffinityThread(&PreviousAffinity);
          goto LABEL_62;
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 192),
        0LL);
      ((void (__fastcall *)(__int64))qword_1C000DD00)(a1);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 192));
      v12 = *(_DWORD *)(a1 + 248);
      v13 = 0;
      LODWORD(v28) = 0;
      if ( (v12 & 0x70000000) != 0 )
      {
        v14 = AcpiEval_PPC(a1, &v28);
        v13 = (unsigned int)v28;
        if ( v14 < 0 )
          v13 = 0;
      }
      v15 = *(_DWORD *)(a1 + 248);
      v16 = 0;
      LODWORD(v28) = 0;
      if ( (v15 & 0x3000000) != 0 )
      {
        v27 = AcpiEval_TPC(a1, &v28);
        v16 = (unsigned int)v28;
        if ( v27 < 0 )
          v16 = 0;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C000D9C8,
        0LL);
      ProcLibCapChange(a1, v13, v16, 100LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C000D9C8);
      if ( (*(_QWORD *)(a1 + 248) & 0x10FF300000LL) != 0 )
      {
        if ( *(_QWORD *)(a1 + 488) )
        {
          v17 = RegisterXsdDomain(a1);
          goto LABEL_57;
        }
        if ( !byte_1C000DD78 )
        {
          v17 = 1;
LABEL_57:
          if ( !v17 )
            goto LABEL_58;
LABEL_75:
          if ( (int)ValidatePerfDomainSymmetry(a1) >= 0 )
          {
            v21 = *(_QWORD *)(a1 + 248);
            if ( (v21 & 0x1000000000LL) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C000DD30)(a1);
            }
            else if ( (v21 & 0x8000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C000DD28)(a1);
            }
            else if ( (v21 & 0x80000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C000DD20)(a1);
            }
            else
            {
              v22 = (void (__fastcall *)(__int64))qword_1C000DD08;
              if ( (*(_QWORD *)(a1 + 248) & 0x73300000LL) == 0 )
                v22 = (void (__fastcall *)(__int64))qword_1C000DD18;
              v22(a1);
            }
          }
          goto LABEL_58;
        }
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64))qword_1C000DD40)(a1) )
          goto LABEL_75;
      }
LABEL_58:
      if ( (*(_QWORD *)(a1 + 248) & 0x2000000000LL) != 0 && ++dword_1C000DEE8 == dword_1C000D9C4 )
        InitializeEnergyEstimation();
      AcquireBiosPpmControl(a1);
      v4 = 0;
      goto LABEL_60;
    }
    if ( (int)AcquirePccInterface(a1) < 0 )
    {
LABEL_23:
      *(_QWORD *)(a1 + 248) &= ~0x80000000uLL;
      goto LABEL_24;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 192),
      0LL);
    v25 = AcpiEval_PCCP(a1, a1 + 520);
    if ( v25 >= 0 )
    {
      v25 = -1073741811;
      v26 = *(_DWORD **)(a1 + 520);
      if ( qword_1C000DE30 && *v26 <= (unsigned int)(dword_1C000DE38 - 4) )
        v25 = (unsigned int)(dword_1C000DE38 - 4) < v26[1] ? 0xC000000D : 0;
      if ( v25 >= 0 )
      {
        if ( (unsigned int)(dword_1C000DE2C - 1) > 0x26 )
          goto LABEL_104;
        v25 = -1073741823;
      }
      *(_QWORD *)(a1 + 248) &= ~0x80000000uLL;
    }
LABEL_104:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 192));
    if ( v25 >= 0 )
    {
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFF8CCFFFFFuLL;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  *(_QWORD *)(a1 + 248) = 0LL;
  if ( dword_1C000DD7C == 1 )
    v4 = 0;
LABEL_62:
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x7F077) != (*(_DWORD *)(a1 + 240) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C000DD58, 0, 0LL);
  v18 = *(_QWORD *)(a1 + 248);
  v19 = *(_DWORD *)(a1 + 240) & 0x70000000;
  if ( (v18 & 0x40000000) != 0 )
    v19 = *(_DWORD *)(a1 + 240) & 0x40000000;
  if ( (v18 & v19) != (unsigned int)v19 )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C000DD60, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x3300000) != (*(_DWORD *)(a1 + 240) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C000DD68, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x80000000) != (*(_DWORD *)(a1 + 240) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_ERROR, 0, 0LL);
  if ( (*(_QWORD *)(a1 + 248) & *(_DWORD *)(a1 + 240) & 0x8000000) != (*(_DWORD *)(a1 + 240) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_CPC_ERROR, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v4;
}
