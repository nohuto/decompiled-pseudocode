/*
 * XREFs of PopEnableHiberFile @ 0x14056CD38
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PoInitHiberServices @ 0x14056C3E8 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14056C598 (PopNotifyPolicyDevice.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x14000F70C (MmGetHighestPhysicalPage.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PopOpenPowerKey @ 0x140132A90 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x1403C84A8 (EmClientQueryRuleState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1403F2D30 (PopRemoveReasonRecordByReasonCode.c)
 *     PopCheckDisabledReason @ 0x1404D3644 (PopCheckDisabledReason.c)
 *     MmReleaseDumpHibernateResources @ 0x14052EF0C (MmReleaseDumpHibernateResources.c)
 *     PopCalculateHiberFileSize @ 0x140547194 (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x140548A34 (PopClearHiberFileSignature.c)
 *     MmAllocateDumpHibernateResources @ 0x140548D18 (MmAllocateDumpHibernateResources.c)
 *     PopLogSleepDisabled @ 0x14054CF98 (PopLogSleepDisabled.c)
 *     PopPreallocateHibernateMemory @ 0x14056D238 (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x14056D474 (PopCreateHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14056E44C (PopResetCurrentPolicies.c)
 *     MmZeroPageFileAtShutdown @ 0x1406575D8 (MmZeroPageFileAtShutdown.c)
 *     MmReturnChargesToLockPagedPool @ 0x14065A2D0 (MmReturnChargesToLockPagedPool.c)
 *     PopSaveHibernateEnabled @ 0x14066A694 (PopSaveHibernateEnabled.c)
 *     PopZeroHiberFile @ 0x14066E8C0 (PopZeroHiberFile.c)
 */

__int64 __fastcall PopEnableHiberFile(char a1, char a2)
{
  PVOID v3; // rsi
  PVOID v5; // r15
  char v6; // r12
  unsigned int v7; // ebx
  int v8; // r10d
  char v9; // al
  int v10; // r10d
  char v11; // r9
  char v12; // r14
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  HANDLE v18; // rbx
  ULONG_PTR DumpHibernateResources; // rax
  unsigned __int64 v20; // rbx
  PVOID PoolWithTag; // rax
  void *v22; // rbx
  char v24[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-11h] BYREF
  UNICODE_STRING v29; // [rsp+70h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+Fh] BYREF
  int v31; // [rsp+90h] [rbp+1Fh]

  v3 = 0LL;
  v5 = 0LL;
  v6 = 0;
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  if ( (unsigned __int64)MmGetHighestPhysicalPage() >= 0x100000000LL )
    PopLogSleepDisabled(8, 8, 0LL, 0LL);
  v7 = 0;
  if ( !PopCheckDisabledReason(2) && !PopCheckDisabledReason(v8) )
    PopCheckDisabledReason(15);
  if ( PopCheckDisabledReason(16) )
    return (unsigned int)-1073741637;
  v9 = PopCheckDisabledReason(13);
  v12 = v11;
  if ( v9 )
    v12 = v10;
  if ( a1 )
  {
    if ( FileObject )
      return v7;
    dword_140303504 = v10;
    dword_1403034E4 = 1601;
    byte_140303501 = 0;
    dword_140303588 = 0;
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
        dword_140303504 = HIDWORD(KeyValueInformation);
        if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
          dword_140303504 = 1;
      }
      RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
      KeyValueInformation = 0uLL;
      v31 = 0;
      if ( ZwQueryValueKey(v18, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_1403034E4 = HIDWORD(KeyValueInformation);
      }
      RtlInitUnicodeString(&v29, L"MultiPhaseResumeDisabled");
      KeyValueInformation = 0uLL;
      v31 = 0;
      if ( ZwQueryValueKey(v18, &v29, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        byte_140303501 = HIDWORD(KeyValueInformation) == 1;
        dword_140303588 |= 0x20u;
      }
      ZwClose(v18);
    }
    if ( !PopHiberEnabled )
    {
      PopHiberEnabled = 1;
      v6 = 1;
    }
    if ( v12 )
    {
      v7 = -1073741637;
      goto LABEL_54;
    }
    DumpHibernateResources = MmAllocateDumpHibernateResources(0xD000uLL, v16, v17);
    v13 = DumpHibernateResources;
    if ( !DumpHibernateResources )
      goto LABEL_33;
    if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
      v20 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
    else
      v20 = DumpHibernateResources + 0x200000;
    if ( v20 - DumpHibernateResources >= 0x7000 )
      v20 = DumpHibernateResources;
    PopCalculateHiberFileSize(&KeyHandle, (unsigned __int8 *)v24);
    LODWORD(KeyHandle) = PopCreateHiberFile(KeyHandle);
    if ( (int)KeyHandle >= 0 )
    {
      *(_QWORD *)&xmmword_1403034E8 = v13;
      *((_QWORD *)&xmmword_1403034E8 + 1) = v20;
      v13 = 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1D0uLL, 0x70616D48u);
      v22 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_33:
        v7 = -1073741670;
        goto LABEL_54;
      }
      memset(PoolWithTag, 0, 0x1D0uLL);
      MemoryMap = v22;
      v7 = PopPreallocateHibernateMemory();
      if ( (v7 & 0x80000000) != 0 )
        goto LABEL_54;
      LODWORD(KeyHandle) = 1;
      v3 = 0LL;
      EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
      if ( (_DWORD)KeyHandle == 2 )
      {
        dword_140303588 |= 0x10u;
        byte_140303501 = 1;
      }
      byte_140303EB6 = v24[0];
      byte_140303EA8 = 1;
      if ( !InitSafeBootMode )
        byte_140303EB2 = 1;
      PopClearHiberFileSignature();
      v7 = 0;
    }
    else
    {
      PopLogSleepDisabled(6, 8, &KeyHandle, 4uLL);
      v7 = (unsigned int)KeyHandle;
    }
LABEL_48:
    if ( v13 )
      MmReleaseDumpHibernateResources(v13);
    if ( v3 )
    {
      MmReturnChargesToLockPagedPool(v3, Length);
      ExFreePoolWithTag(v3, 0);
      memset(&qword_140303510, 0, 0x78uLL);
    }
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x70616D48u);
      MemoryMap = 0LL;
    }
LABEL_54:
    if ( !v6 )
      return v7;
    goto LABEL_55;
  }
  v6 = v10;
  PopHiberEnabled = 0;
  if ( FileObject )
  {
    if ( (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(PopHiberInfo);
    ObfDereferenceObject(FileObject);
    ZwClose(PopHiberInfo);
    ExFreePoolWithTag(qword_1403034D8, 0x72626968u);
    memset(&PopHiberInfo, 0, 0xD8uLL);
    v13 = xmmword_1403034E8;
    v3 = qword_140303510;
    v5 = MemoryMap;
    xmmword_1403034E8 = 0LL;
    byte_140303EA8 = 0;
    byte_140303EB6 = 0;
    byte_140303EB2 = 0;
    qword_1403034F8 = 0LL;
    v7 = PopResetCurrentPolicies(v15, v14);
    goto LABEL_48;
  }
LABEL_55:
  if ( a2 )
    PopSaveHibernateEnabled();
  return v7;
}
