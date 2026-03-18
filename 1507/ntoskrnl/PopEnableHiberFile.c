/*
 * XREFs of PopEnableHiberFile @ 0x1405BD654
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PoInitHiberServices @ 0x1405BD528 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x1405C3158 (PopNotifyPolicyDevice.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x140045B2C (MmGetHighestPhysicalPage.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PopOpenPowerKey @ 0x14015A76C (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x1403EB51C (EmClientQueryRuleState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1404E1074 (PopRemoveReasonRecordByReasonCode.c)
 *     MmReleaseDumpHibernateResources @ 0x1405651F4 (MmReleaseDumpHibernateResources.c)
 *     PopCalculateHiberFileSize @ 0x14056BFC0 (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x14056C368 (PopClearHiberFileSignature.c)
 *     MmAllocateDumpHibernateResources @ 0x14056C428 (MmAllocateDumpHibernateResources.c)
 *     PopResetCurrentPolicies @ 0x1405996E0 (PopResetCurrentPolicies.c)
 *     PopLogSleepDisabled @ 0x1405B227C (PopLogSleepDisabled.c)
 *     PopCheckDisabledReason @ 0x1405BDB60 (PopCheckDisabledReason.c)
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1405C61D8 (PopPreallocateHibernateMemory.c)
 *     MmZeroPageFileAtShutdown @ 0x1406A0668 (MmZeroPageFileAtShutdown.c)
 *     MmReturnChargesToLockPagedPool @ 0x1406A1364 (MmReturnChargesToLockPagedPool.c)
 *     PopSaveHibernateEnabled @ 0x1406B0814 (PopSaveHibernateEnabled.c)
 *     PopZeroHiberFile @ 0x1406B5D1C (PopZeroHiberFile.c)
 */

__int64 __fastcall PopEnableHiberFile(char a1, char a2)
{
  PVOID v4; // r14
  char v5; // bl
  PVOID v6; // rsi
  char v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r9d
  int v14; // ebx
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  HANDLE v18; // rdi
  __int64 DumpHibernateResources; // rax
  unsigned __int64 v20; // rbx
  PVOID PoolWithTag; // rax
  void *v22; // rbx
  char v24; // [rsp+38h] [rbp-39h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING v28; // [rsp+60h] [rbp-11h] BYREF
  UNICODE_STRING ValueName; // [rsp+70h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+Fh] BYREF
  int v31; // [rsp+90h] [rbp+1Fh]

  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  if ( (unsigned __int64)MmGetHighestPhysicalPage(0) >= 0x100000000LL )
  {
    v5 = 1;
    PopLogSleepDisabled(8, 8, 0LL, 0LL);
  }
  if ( !byte_14032E526 )
    v5 = 1;
  if ( (unsigned __int8)PopCheckDisabledReason(2LL, v8, v9, 1LL)
    || (unsigned __int8)PopCheckDisabledReason((unsigned int)v12, v10, v11, v12)
    || (unsigned __int8)PopCheckDisabledReason(15LL, v10, v11, v12) )
  {
    v5 = v12;
  }
  if ( (unsigned __int8)PopCheckDisabledReason(16LL, v10, v11, v12) )
    return (unsigned int)-1073741637;
  if ( a1 )
  {
    if ( FileObject )
      return 0;
    dword_14032E8E4 = v13;
    dword_14032E8C4 = 1601;
    byte_14032E8E1 = 0;
    dword_14032E968 = 0;
    if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
      v18 = KeyHandle;
      KeyValueInformation = 0uLL;
      v31 = 0;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_14032E8E4 = HIDWORD(KeyValueInformation);
        if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
          dword_14032E8E4 = 1;
      }
      RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
      KeyValueInformation = 0uLL;
      v31 = 0;
      if ( ZwQueryValueKey(v18, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_14032E8C4 = HIDWORD(KeyValueInformation);
      }
      RtlInitUnicodeString(&v28, L"MultiPhaseResumeDisabled");
      KeyValueInformation = 0uLL;
      v31 = 0;
      if ( ZwQueryValueKey(v18, &v28, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        byte_14032E8E1 = HIDWORD(KeyValueInformation) == 1;
        dword_14032E968 |= 0x20u;
      }
      ZwClose(v18);
    }
    if ( !PopHiberEnabled )
    {
      PopHiberEnabled = 1;
      v7 = 1;
    }
    if ( v5 )
    {
      v14 = -1073741637;
      goto LABEL_57;
    }
    DumpHibernateResources = MmAllocateDumpHibernateResources(0xD000uLL, v16, v17);
    v15 = DumpHibernateResources;
    if ( !DumpHibernateResources )
      goto LABEL_36;
    if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
      v20 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
    else
      v20 = DumpHibernateResources + 0x200000;
    if ( v20 - DumpHibernateResources >= 0x7000 )
      v20 = DumpHibernateResources;
    PopCalculateHiberFileSize(&KeyHandle);
    LODWORD(KeyHandle) = PopCreateHiberFile(KeyHandle);
    if ( (int)KeyHandle >= 0 )
    {
      *(_QWORD *)&xmmword_14032E8C8 = v15;
      *((_QWORD *)&xmmword_14032E8C8 + 1) = v20;
      v15 = 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1D0uLL, 0x70616D48u);
      v22 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_36:
        v14 = -1073741670;
        goto LABEL_57;
      }
      memset(PoolWithTag, 0, 0x1D0uLL);
      MemoryMap = v22;
      v14 = PopPreallocateHibernateMemory();
      if ( v14 < 0 )
        goto LABEL_57;
      LODWORD(KeyHandle) = 1;
      v6 = 0LL;
      EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
      if ( (_DWORD)KeyHandle == 2 )
      {
        dword_14032E968 |= 0x10u;
        byte_14032E8E1 = 1;
      }
      byte_14032E536 = v24;
      byte_14032E528 = 1;
      if ( !InitSafeBootMode )
        byte_14032E532 = 1;
      PopClearHiberFileSignature();
      v14 = 0;
    }
    else
    {
      PopLogSleepDisabled(6, 8, &KeyHandle, 4uLL);
      v14 = (int)KeyHandle;
    }
LABEL_51:
    if ( v15 )
      MmReleaseDumpHibernateResources(v15, 0xD000uLL);
    if ( v6 )
    {
      MmReturnChargesToLockPagedPool(v6, Length);
      ExFreePoolWithTag(v6, 0);
      memset(&qword_14032E8F0, 0, 0x78uLL);
    }
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x70616D48u);
      MemoryMap = 0LL;
    }
LABEL_57:
    if ( !v7 )
      return (unsigned int)v14;
    goto LABEL_58;
  }
  v7 = v13;
  PopHiberEnabled = 0;
  if ( FileObject )
  {
    if ( (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(PopHiberInfo);
    ObfDereferenceObject(FileObject);
    ZwClose(PopHiberInfo);
    ExFreePoolWithTag(qword_14032E8B8, 0x72626968u);
    memset(&PopHiberInfo, 0, 0xD8uLL);
    v15 = xmmword_14032E8C8;
    v6 = qword_14032E8F0;
    v4 = MemoryMap;
    xmmword_14032E8C8 = 0LL;
    byte_14032E528 = 0;
    byte_14032E536 = 0;
    byte_14032E532 = 0;
    qword_14032E8D8 = 0LL;
    v14 = PopResetCurrentPolicies();
    goto LABEL_51;
  }
  v14 = 0;
LABEL_58:
  if ( a2 )
    PopSaveHibernateEnabled();
  return (unsigned int)v14;
}
