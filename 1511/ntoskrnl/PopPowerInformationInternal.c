/*
 * XREFs of PopPowerInformationInternal @ 0x1404C5AFC
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 * Callees:
 *     PoLatencySensitivityHint @ 0x140105D7C (PoLatencySensitivityHint.c)
 *     PopUmpoSendReapplyBrightnessSettings @ 0x1401426B0 (PopUmpoSendReapplyBrightnessSettings.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopFxPlatformRegisterInterface @ 0x14054AF4C (PopFxPlatformRegisterInterface.c)
 *     PopConnectedStandbyComplianceChecks @ 0x140633B50 (PopConnectedStandbyComplianceChecks.c)
 *     PopDisconnectedStandbyEnabled @ 0x140633BC8 (PopDisconnectedStandbyEnabled.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14063C8C8 (PopUpdateSmartUserPresencePredictions.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6,
        _BYTE *a7)
{
  _QWORD *v7; // rsi
  _DWORD *v9; // r14
  _BYTE *v10; // r15
  int v11; // ecx
  _BYTE *v12; // rdi
  bool v13; // zf
  int v14; // ebx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  _BYTE *v19; // rcx
  _BYTE *PoolWithTag; // rax
  char v21; // dl
  char v22; // cl
  char v23; // r10
  bool v24; // al

  v7 = a5;
  v9 = a6;
  v10 = a7;
  *a5 = 0LL;
  *v9 = 0;
  *v10 = 0;
  if ( KeGetCurrentThread()->PreviousMode && (a1 & 0xFFFFFFFD) == 0 )
    return (unsigned int)-1073741790;
  if ( !a1 )
  {
    if ( a3 < 0x20 || !a4 )
      return (unsigned int)-1073741789;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x206D654Du);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      v14 = PopFxPlatformRegisterInterface(a2, PoolWithTag);
      if ( v14 < 0 )
        goto LABEL_9;
      *v7 = v12;
      *v9 = 16;
LABEL_22:
      *v10 = 1;
      return (unsigned int)v14;
    }
    return (unsigned int)-1073741670;
  }
  v11 = a1 - 1;
  if ( v11 )
  {
    v16 = v11 - 1;
    if ( !v16 )
    {
      PopUmpoSendReapplyBrightnessSettings();
      return 0;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( a3 < 8 || !a4 )
          return (unsigned int)-1073741789;
        v19 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
        if ( v19 )
        {
          *v19 = PopPlatformAoAc && (MEMORY[0xFFFFF780000002F0] & 0x100) != 0;
          *v7 = v19;
          v14 = 0;
          *v9 = 1;
          goto LABEL_22;
        }
        return (unsigned int)-1073741670;
      }
      if ( v18 == 1 )
      {
        if ( a3 < 0xC )
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
      if ( a3 < 0x10 )
        return (unsigned int)-1073741789;
      if ( !a4 && (PopSimulate & 1) != 0 )
      {
        PopUpdateSmartUserPresencePredictions(*(_QWORD *)(a2 + 8));
        return 0;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 )
    return (unsigned int)-1073741789;
  v12 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
  if ( !v12 )
    return (unsigned int)-1073741670;
  v13 = PopPlatformAoAc == 0;
  *(_QWORD *)v12 = 0LL;
  if ( !v13 )
  {
    PopAcquirePolicyLock();
    PopDisconnectedStandbyEnabled(&a5);
    v13 = PopCsDeviceCompliance == 1;
    *(_DWORD *)v12 = (_DWORD)a5;
    v12[4] ^= (v12[4] ^ v13) & 1;
    v21 = v12[4] ^ (v12[4] ^ (2 * (dword_140335194 == 1))) & 2;
    v22 = v21 ^ (v21 ^ (4 * (dword_140335198 == 1))) & 4;
    v12[4] = v22 ^ (v22 ^ (8 * (dword_1403351A0 == 1))) & 8;
    v12[5] ^= ((dword_1402DE2D8 == 1) ^ v12[5]) & 1;
    v23 = v12[5];
    v24 = PopEnforceDisconnectedStandby || !(unsigned __int8)PopConnectedStandbyComplianceChecks();
    v12[5] = v23 ^ (v23 ^ (2 * v24)) & 2;
    PopReleasePolicyLock();
    *v7 = v12;
    v14 = 0;
    *v9 = 8;
    goto LABEL_22;
  }
  v14 = -1073741637;
LABEL_9:
  ExFreePoolWithTag(v12, 0x206D654Du);
  return (unsigned int)v14;
}
