/*
 * XREFs of PopPowerInformationInternal @ 0x14055CB5C
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     PopUmpoSendReapplyBrightnessSettings @ 0x14017023C (PopUmpoSendReapplyBrightnessSettings.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopFxPlatformRegisterInterface @ 0x1405C23D8 (PopFxPlatformRegisterInterface.c)
 *     PopConnectedStandbyComplianceChecks @ 0x1406B316C (PopConnectedStandbyComplianceChecks.c)
 *     PopDisconnectedStandbyEnabled @ 0x1406B31E4 (PopDisconnectedStandbyEnabled.c)
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
  int v8; // ecx
  _BYTE *v9; // rsi
  bool v10; // zf
  int v11; // ebx
  _BYTE *PoolWithTag; // rax
  char v14; // dl
  char v15; // cl
  char v16; // r10
  bool v17; // al
  _DWORD v18[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( KeGetCurrentThread()->PreviousMode && (a1 & 0xFFFFFFFD) == 0 )
    return (unsigned int)-1073741790;
  if ( !a1 )
  {
    if ( a3 >= 0x20 && a4 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x206D654Du);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        v11 = PopFxPlatformRegisterInterface(a2, PoolWithTag);
        if ( v11 < 0 )
          goto LABEL_9;
        *a5 = v9;
        *a6 = 16;
        goto LABEL_18;
      }
      return (unsigned int)-1073741670;
    }
    return (unsigned int)-1073741789;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
    if ( a4 )
    {
      v9 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
      if ( v9 )
      {
        v10 = PopPlatformAoAc == 0;
        *(_QWORD *)v9 = 0LL;
        if ( v10 )
        {
          v11 = -1073741637;
LABEL_9:
          ExFreePoolWithTag(v9, 0x206D654Du);
          return (unsigned int)v11;
        }
        PopAcquirePolicyLock();
        PopDisconnectedStandbyEnabled(v18);
        v10 = PopCsDeviceCompliance == 1;
        *(_DWORD *)v9 = v18[0];
        v9[4] ^= (v9[4] ^ v10) & 1;
        v14 = v9[4] ^ (v9[4] ^ (2 * (dword_14038618C == 1))) & 2;
        v15 = v14 ^ (v14 ^ (4 * (dword_140386190 == 1))) & 4;
        v9[4] = v15 ^ (v15 ^ (8 * (dword_140386198 == 1))) & 8;
        v9[5] ^= ((dword_14032E898 == 1) ^ v9[5]) & 1;
        v16 = v9[5];
        v17 = PopEnforceDisconnectedStandby || !(unsigned __int8)PopConnectedStandbyComplianceChecks();
        v9[5] = v16 ^ (v16 ^ (2 * v17)) & 2;
        PopReleasePolicyLock();
        v11 = 0;
        *a5 = v9;
        *a6 = 8;
LABEL_18:
        *a7 = 1;
        return (unsigned int)v11;
      }
      return (unsigned int)-1073741670;
    }
    return (unsigned int)-1073741789;
  }
  if ( v8 == 1 )
  {
    PopUmpoSendReapplyBrightnessSettings();
    return 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
