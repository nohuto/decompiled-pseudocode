/*
 * XREFs of PopPowerInformationInternal @ 0x140500704
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     PoLatencySensitivityHint @ 0x140111844 (PoLatencySensitivityHint.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x140126714 (PopDiagTraceSessionDisplayStateChange.c)
 *     PopUmpoSendReapplyBrightnessSettings @ 0x14014C344 (PopUmpoSendReapplyBrightnessSettings.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x140201E5C (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopSetWatchdog @ 0x14020B2F8 (PopSetWatchdog.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     RtlIsMultiSessionSku @ 0x1404E674C (RtlIsMultiSessionSku.c)
 *     PopSetDisplayStatus @ 0x140534810 (PopSetDisplayStatus.c)
 *     PopUpdateConsoleDisplayState @ 0x140547D14 (PopUpdateConsoleDisplayState.c)
 *     PopNetUpdateStandbyRequest @ 0x14057ED68 (PopNetUpdateStandbyRequest.c)
 *     PopFxPlatformRegisterInterface @ 0x140581084 (PopFxPlatformRegisterInterface.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1405815F0 (PopUpdateBackgroundCoolingStatus.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1406737E4 (PopNetIsDisconnectStandbyActive.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x140675104 (PopUpdateSmartUserPresencePredictions.c)
 *     TtmNotifySessionPowerStateChange @ 0x140678C1C (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140678CA8 (TtmNotifySessionTerminalInput.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        signed int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6,
        _BYTE *a7)
{
  _QWORD *v7; // r14
  _DWORD *v8; // r15
  _BYTE *v10; // rbp
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v13; // eax
  int v14; // ecx
  _BYTE *v15; // rdi
  bool v16; // zf
  int BootSessionStandbyActivationInfo; // ebx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  _BYTE *v22; // rbx
  __int64 v23; // rcx
  _BYTE *v25; // rax
  _OWORD *PoolWithTag; // rax
  _OWORD *v27; // rbx
  __int128 v28; // xmm1
  char IsDisconnectStandbyActive; // al
  char v30; // cl
  int v31; // r8d
  char v32; // dl
  char v33; // cl
  char v34; // cl
  char v35; // cl
  __int64 v36; // rcx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  _OWORD *v41; // rax
  unsigned __int8 v42; // al
  _QWORD *v43; // rsi
  BOOL v44; // edi
  PVOID v45; // rax
  PVOID v46; // rdi

  v7 = a5;
  v8 = a6;
  v10 = a7;
  v11 = a2;
  *a5 = 0LL;
  *v8 = 0;
  *v10 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)a1 <= 0x15 )
  {
    if ( CurrentThread->PreviousMode )
    {
      v13 = 3670021;
      if ( _bittest(&v13, a1) )
        return (unsigned int)-1073741790;
    }
  }
  if ( a1 == 7 )
  {
    if ( (unsigned int)a3 < 8 || !a4 )
      return (unsigned int)-1073741789;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
    v27 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x20uLL);
    *v27 = PopBsdPowerTransitionAtBoot;
    v28 = xmmword_140328FC8;
    goto LABEL_42;
  }
  if ( a1 > 7 )
  {
    v36 = (unsigned int)(a1 - 8);
    if ( !(_DWORD)v36 )
    {
      if ( (unsigned int)a3 < 8 )
        return (unsigned int)-1073741789;
      if ( !a4 )
      {
        LOBYTE(v36) = *(_BYTE *)(a2 + 8);
        return (unsigned int)PopUpdateBackgroundCoolingStatus(v36);
      }
      return (unsigned int)-1073741811;
    }
    v37 = v36 - 10;
    if ( !v37 )
    {
      if ( !PopPlatformAoAc )
        return (unsigned int)-1073741637;
      if ( !a4 )
        return (unsigned int)-1073741789;
      v45 = ExAllocatePoolWithTag(PagedPool, 0x328uLL, 0x206D654Du);
      v46 = v45;
      if ( v45 )
      {
        BootSessionStandbyActivationInfo = PopQueryBootSessionStandbyActivationInfo((__int64)v45);
        if ( BootSessionStandbyActivationInfo < 0 )
          return (unsigned int)BootSessionStandbyActivationInfo;
        *v7 = v46;
        *v8 = 808;
        goto LABEL_37;
      }
      return (unsigned int)-1073741670;
    }
    v38 = v37 - 1;
    if ( !v38 )
    {
      if ( (_DWORD)a3 == 20 && !a4 )
      {
        LOBYTE(a2) = *(_BYTE *)(a2 + 12);
        TtmNotifySessionPowerStateChange(*(unsigned int *)(v11 + 8), a2);
        v44 = *(_BYTE *)(v11 + 12) != 0;
        if ( *(_BYTE *)(v11 + 13) )
        {
          PopSetDisplayStatus(*(_BYTE *)(v11 + 12) != 0);
          PopUpdateConsoleDisplayState(v44);
        }
        PopDiagTraceSessionDisplayStateChange(
          *(_BYTE *)(v11 + 12) == 0,
          *(_DWORD *)(v11 + 8),
          *(unsigned __int8 *)(v11 + 13),
          *(_DWORD *)(v11 + 16));
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    v39 = v38 - 1;
    if ( !v39 )
    {
      if ( (_DWORD)a3 == 20 && !a4 )
      {
        LOBYTE(a3) = *(_BYTE *)(a2 + 16);
        TtmNotifySessionTerminalInput(*(unsigned int *)(a2 + 8), *(unsigned int *)(a2 + 12), a3);
        return 0;
      }
      return (unsigned int)-1073741811;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      if ( (unsigned int)a3 < 0x50 || !*(_QWORD *)(a2 + 8) && !a4 )
        return (unsigned int)-1073741789;
      if ( *(_BYTE *)(a2 + 72) || (v42 = 1, !*(_DWORD *)(a2 + 16)) )
        v42 = 0;
      PopBsdPowerWatchdogArmed = v42;
      if ( v42 )
        PopBsdLastPowerWatchdogStage = *(_DWORD *)(a2 + 32);
      v43 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
      if ( !v43 )
        return (unsigned int)-1073741670;
      *v43 = PopSetWatchdog(*(_QWORD *)(v11 + 8), (unsigned int *)(v11 + 16), *(_BYTE *)(v11 + 72));
      if ( !a4 )
        return 0;
      *v7 = v43;
      *v8 = 8;
LABEL_23:
      *v10 = 1;
      return 0;
    }
    if ( v40 != 1 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)a3 < 8 || !a4 )
      return (unsigned int)-1073741789;
    v41 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
    v27 = v41;
    if ( !v41 )
      return (unsigned int)-1073741670;
    memset(v41, 0, 0x20uLL);
    *v27 = PopBsdPhysicalPowerButtonInfoAtBoot;
    v28 = xmmword_140328FA8;
LABEL_42:
    v27[1] = v28;
    *v7 = v27;
    *v8 = 32;
    goto LABEL_23;
  }
  if ( !a1 )
  {
    if ( (unsigned int)a3 < 0x20 || !a4 )
      return (unsigned int)-1073741789;
    v25 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x206D654Du);
    v15 = v25;
    if ( v25 )
    {
      BootSessionStandbyActivationInfo = PopFxPlatformRegisterInterface(v11, v25);
      if ( BootSessionStandbyActivationInfo < 0 )
        goto LABEL_12;
      *v7 = v15;
      *v8 = 16;
LABEL_37:
      *v10 = 1;
      return (unsigned int)BootSessionStandbyActivationInfo;
    }
    return (unsigned int)-1073741670;
  }
  v14 = a1 - 1;
  if ( v14 )
  {
    v19 = v14 - 1;
    if ( !v19 )
    {
      PopUmpoSendReapplyBrightnessSettings();
      return 0;
    }
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( !v21 )
      {
        if ( (unsigned int)a3 < 8 || !a4 )
          return (unsigned int)-1073741789;
        v22 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
        if ( !v22 )
          return (unsigned int)-1073741670;
        *v22 = PopPlatformAoAc && RtlIsMultiSessionSku();
        *v7 = v22;
        *v8 = 1;
        goto LABEL_23;
      }
      v23 = (unsigned int)(v21 - 1);
      if ( (_DWORD)v23 )
      {
        if ( (_DWORD)v23 == 1 )
        {
          if ( (unsigned int)a3 < 0xC )
            return (unsigned int)-1073741789;
          if ( !a4 )
          {
            LOBYTE(v23) = *(_BYTE *)(a2 + 8);
            return (unsigned int)PopNetUpdateStandbyRequest(v23);
          }
        }
      }
      else
      {
        if ( (unsigned int)a3 < 0xC )
          return (unsigned int)-1073741789;
        if ( !a4 )
        {
          PoLatencySensitivityHint(*(_DWORD *)(a2 + 8));
          return 0;
        }
      }
    }
    else
    {
      if ( (unsigned int)a3 < 0x10 )
        return (unsigned int)-1073741789;
      if ( !a4 && (PopSimulate & 1) != 0 )
      {
        PopUpdateSmartUserPresencePredictions(*(_QWORD *)(a2 + 8), 0LL);
        return 0;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 )
    return (unsigned int)-1073741789;
  v15 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
  if ( !v15 )
    return (unsigned int)-1073741670;
  v16 = PopPlatformAoAc == 0;
  *(_QWORD *)v15 = 0LL;
  if ( !v16 )
  {
    PopAcquirePolicyLock();
    IsDisconnectStandbyActive = PopNetIsDisconnectStandbyActive(&a5);
    v30 = v15[4];
    v31 = (int)a5;
    *(_DWORD *)v15 = (_DWORD)a5;
    v15[4] ^= ((PopCsDeviceCompliance == 1) ^ v30) & 1;
    v32 = v15[4] ^ (v15[4] ^ (2 * (dword_140358164 == 1))) & 2;
    v15[4] = v32;
    v33 = v32 ^ (v32 ^ (4 * (dword_140358168 == 1))) & 4;
    v15[4] = v33;
    v15[4] = v33 ^ (v33 ^ (8 * (dword_140358170 == 1))) & 8;
    v34 = v15[5] ^ (v15[5] ^ (IsDisconnectStandbyActive != 0)) & 1;
    v15[5] = v34;
    if ( (unsigned int)(v31 - 3) <= 1 )
      v35 = v34 | 2;
    else
      v35 = v34 & 0xFD;
    v15[5] = v35;
    PopReleasePolicyLock();
    *v7 = v15;
    BootSessionStandbyActivationInfo = 0;
    *v8 = 8;
    goto LABEL_37;
  }
  BootSessionStandbyActivationInfo = -1073741637;
LABEL_12:
  ExFreePoolWithTag(v15, 0x206D654Du);
  return (unsigned int)BootSessionStandbyActivationInfo;
}
