/*
 * XREFs of PopEnableHiberFile @ 0x1405467D4
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PoInitHiberServices @ 0x1405466A8 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14054BEDC (PopNotifyPolicyDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     MmGetHighestPhysicalPage @ 0x1400BC1BC (MmGetHighestPhysicalPage.c)
 *     PopOpenPowerKey @ 0x140127640 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x14039C5A8 (EmClientQueryRuleState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x140458028 (PopRemoveReasonRecordByReasonCode.c)
 *     MmReleaseDumpHibernateResources @ 0x1404F5948 (MmReleaseDumpHibernateResources.c)
 *     PopCalculateHiberFileSize @ 0x1404F9E4C (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x1404FA16C (PopClearHiberFileSignature.c)
 *     MmAllocateDumpHibernateResources @ 0x1404FA284 (MmAllocateDumpHibernateResources.c)
 *     PopDeleteHiberFile @ 0x14051AD40 (PopDeleteHiberFile.c)
 *     PopLogSleepDisabled @ 0x14053D3AC (PopLogSleepDisabled.c)
 *     PopResetCurrentPolicies @ 0x14053E130 (PopResetCurrentPolicies.c)
 *     PopCheckDisabledReason @ 0x140546B64 (PopCheckDisabledReason.c)
 *     PopCreateHiberFile @ 0x14054BA2C (PopCreateHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x14054E350 (PopPreallocateHibernateMemory.c)
 *     MmZeroPageFileAtShutdown @ 0x140620FD4 (MmZeroPageFileAtShutdown.c)
 *     MmReturnChargesToLockPagedPool @ 0x140621C54 (MmReturnChargesToLockPagedPool.c)
 *     PopSaveHibernateEnabled @ 0x1406322A4 (PopSaveHibernateEnabled.c)
 *     PopZeroHiberFile @ 0x140636434 (PopZeroHiberFile.c)
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
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  HANDLE v16; // rdi
  ULONG_PTR DumpHibernateResources; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  PVOID PoolWithTag; // rax
  void *v21; // rbx
  int v22; // ebx
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
  if ( !byte_1402DDF66 )
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
    if ( !FileObject )
    {
      dword_1402DE324 = v13;
      dword_1402DE304 = 1601;
      byte_1402DE321 = 0;
      dword_1402DE3A8 = 0;
      if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
        v16 = KeyHandle;
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
          dword_1402DE324 = HIDWORD(KeyValueInformation);
          if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
            dword_1402DE324 = 1;
        }
        RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
        KeyValueInformation = 0uLL;
        v31 = 0;
        if ( ZwQueryValueKey(v16, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          dword_1402DE304 = HIDWORD(KeyValueInformation);
        }
        RtlInitUnicodeString(&v28, L"MultiPhaseResumeDisabled");
        KeyValueInformation = 0uLL;
        v31 = 0;
        if ( ZwQueryValueKey(v16, &v28, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          byte_1402DE321 = HIDWORD(KeyValueInformation) == 1;
          dword_1402DE3A8 |= 0x20u;
        }
        ZwClose(v16);
      }
      if ( !PopHiberEnabled )
      {
        PopHiberEnabled = 1;
        v7 = 1;
      }
      if ( v5 )
      {
        v22 = -1073741637;
        goto LABEL_38;
      }
      DumpHibernateResources = MmAllocateDumpHibernateResources(0xD000uLL, v14, v15);
      v18 = DumpHibernateResources;
      if ( !DumpHibernateResources )
        goto LABEL_60;
      if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
        v19 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      else
        v19 = DumpHibernateResources + 0x200000;
      if ( v19 - DumpHibernateResources >= 0x7000 )
        v19 = DumpHibernateResources;
      PopCalculateHiberFileSize(&KeyHandle);
      LODWORD(KeyHandle) = PopCreateHiberFile(KeyHandle);
      if ( (int)KeyHandle >= 0 )
      {
        *(_QWORD *)&xmmword_1402DE308 = v18;
        *((_QWORD *)&xmmword_1402DE308 + 1) = v19;
        v18 = 0LL;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1D0uLL, 0x70616D48u);
        v21 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x1D0uLL);
          MemoryMap = v21;
          v22 = PopPreallocateHibernateMemory();
          if ( v22 < 0 )
            goto LABEL_38;
          LODWORD(KeyHandle) = 1;
          v6 = 0LL;
          EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
          if ( (_DWORD)KeyHandle == 2 )
          {
            dword_1402DE3A8 |= 0x10u;
            byte_1402DE321 = 1;
          }
          byte_1402DDF76 = v24;
          byte_1402DDF68 = 1;
          if ( !InitSafeBootMode )
            byte_1402DDF72 = 1;
          PopClearHiberFileSignature();
          v22 = 0;
          goto LABEL_32;
        }
LABEL_60:
        v22 = -1073741670;
        goto LABEL_38;
      }
      PopLogSleepDisabled(6, 8, &KeyHandle, 4uLL);
      v22 = (int)KeyHandle;
LABEL_32:
      if ( v18 )
        MmReleaseDumpHibernateResources(v18, 0xD000uLL);
      if ( v6 )
      {
        MmReturnChargesToLockPagedPool(v6, Length);
        ExFreePoolWithTag(v6, 0);
        memset(&qword_1402DE330, 0, 0x78uLL);
      }
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0x70616D48u);
        MemoryMap = 0LL;
      }
LABEL_38:
      if ( !v7 )
        return (unsigned int)v22;
      goto LABEL_39;
    }
    return 0;
  }
  if ( !PopHiberEnabled )
  {
    PopDeleteHiberFile(0LL);
    return 0;
  }
  v7 = v13;
  PopHiberEnabled = 0;
  if ( FileObject )
  {
    if ( (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(PopHiberInfo);
    ObfDereferenceObject(FileObject);
    ZwClose(PopHiberInfo);
    ExFreePoolWithTag(qword_1402DE2F8, 0x72626968u);
    memset(&PopHiberInfo, 0, 0xD8uLL);
    v18 = xmmword_1402DE308;
    v6 = qword_1402DE330;
    v4 = MemoryMap;
    xmmword_1402DE308 = 0LL;
    byte_1402DDF68 = 0;
    byte_1402DDF76 = 0;
    byte_1402DDF72 = 0;
    qword_1402DE318 = 0LL;
    v22 = PopResetCurrentPolicies();
    goto LABEL_32;
  }
  v22 = 0;
LABEL_39:
  if ( a2 )
    PopSaveHibernateEnabled();
  return (unsigned int)v22;
}
