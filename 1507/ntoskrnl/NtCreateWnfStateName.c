/*
 * XREFs of NtCreateWnfStateName @ 0x140500CF0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C9790 (SeCaptureSecurityDescriptor.c)
 *     ExpWnfGenerateStateName @ 0x1405010A8 (ExpWnfGenerateStateName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x140501188 (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x1405023B4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfRegisterPermanentName @ 0x14055A4A8 (ExpWnfRegisterPermanentName.c)
 */

NTSTATUS __cdecl NtCreateWnfStateName(
        PWNF_STATE_NAME StateName,
        WNF_STATE_NAME_LIFETIME NameLifetime,
        WNF_DATA_SCOPE DataScope,
        BOOLEAN PersistData,
        PCWNF_TYPE_ID TypeId,
        ULONG MaximumStateSize,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int128 *v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v13; // r9
  __int64 v14; // rbx
  _KPROCESS *Process; // rsi
  int v16; // eax
  struct _EX_RUNDOWN_REF *v17; // rcx
  unsigned __int64 v18; // rtt
  struct _EX_RUNDOWN_REF *v19; // rcx
  unsigned __int64 v20; // rtt
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  SIZE_T NumberOfBytes; // [rsp+28h] [rbp-C0h]
  NTSTATUS NameInstance; // [rsp+30h] [rbp-B8h]
  PSECURITY_DESCRIPTOR v26; // [rsp+38h] [rbp-B0h] BYREF
  int v27[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-A0h] BYREF
  PWNF_STATE_NAME v29; // [rsp+50h] [rbp-98h]
  _QWORD v30[2]; // [rsp+58h] [rbp-90h] BYREF
  PCWNF_TYPE_ID v31; // [rsp+68h] [rbp-80h]
  ULONG v32; // [rsp+80h] [rbp-68h] BYREF
  PCWNF_TYPE_ID v33; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v34; // [rsp+90h] [rbp-58h]
  __int128 v35; // [rsp+98h] [rbp-50h] BYREF

  v29 = StateName;
  v10 = (__int128 *)TypeId;
  v30[1] = SecurityDescriptor;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v27 = 0LL;
  v26 = 0LL;
  v31 = TypeId;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)StateName >= MmUserProbeAddress )
      StateName = (PWNF_STATE_NAME)MmUserProbeAddress;
    LOBYTE(StateName->Data[0]) = StateName->Data[0];
    HIBYTE(StateName->Data[1]) = HIBYTE(StateName->Data[1]);
    if ( TypeId )
    {
      if ( (unsigned __int64)TypeId >= MmUserProbeAddress )
        v10 = (__int128 *)MmUserProbeAddress;
      v35 = *v10;
      v31 = (PCWNF_TYPE_ID)&v35;
    }
    if ( !SecurityDescriptor )
    {
      NameInstance = -1073741819;
      goto LABEL_28;
    }
    NameInstance = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, PagedPool, 1, &v26);
    if ( NameInstance < 0 )
      goto LABEL_28;
  }
  else
  {
    NameInstance = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v26);
    if ( NameInstance < 0 )
      goto LABEL_28;
  }
  ExpWnfSpecializeSecurityDescriptor(v26);
  if ( (unsigned int)NameLifetime > WnfTemporaryStateName
    || NameLifetime == WnfWellKnownStateName
    || (unsigned int)DataScope > WnfDataScopeProcess
    || PersistData && (DataScope || NameLifetime != WnfPermanentStateName)
    || MaximumStateSize > 0x1000 )
  {
    goto LABEL_47;
  }
  if ( NameLifetime != WnfTemporaryStateName )
  {
    if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    {
      NameInstance = -1073741727;
      goto LABEL_28;
    }
    goto LABEL_20;
  }
  if ( DataScope == WnfDataScopeProcess )
  {
LABEL_47:
    NameInstance = -1073741811;
    goto LABEL_28;
  }
LABEL_20:
  LOBYTE(v13) = PersistData;
  NameInstance = ExpWnfGenerateStateName(&v28, (unsigned int)NameLifetime, (unsigned int)DataScope, v13);
  if ( NameInstance >= 0 )
  {
    v14 = v28;
    *v29 = (_WNF_STATE_NAME)(v28 ^ 0x41C64E6DA3BC0074LL);
    v32 = MaximumStateSize;
    v33 = v31;
    v34 = v26;
    if ( NameLifetime == WnfTemporaryStateName )
    {
      if ( PreviousMode )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v16 = 0;
        LODWORD(v14) = v28;
      }
      else
      {
        Process = PsInitialSystemProcess;
        v16 = 1;
      }
      LODWORD(NumberOfBytes) = v16;
      NameInstance = ExpWnfResolveScopeInstance(
                       (signed __int64 *)v27,
                       (__int64)Process,
                       0LL,
                       (unsigned int)DataScope,
                       0LL,
                       NumberOfBytes);
      if ( NameInstance >= 0 )
      {
        NameInstance = ExpWnfCreateNameInstance(v27[0], v14, (unsigned int)&v32, (_DWORD)Process, (__int64)v30);
        if ( NameInstance >= 0 )
        {
          v17 = (struct _EX_RUNDOWN_REF *)(v30[0] + 8LL);
          _m_prefetchw((const void *)(v30[0] + 8LL));
          v18 = v17->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v17, v18 - 2, v18) )
            ExfReleaseRundownProtection(v17);
        }
      }
    }
    else
    {
      NameInstance = ExpWnfRegisterPermanentName(v14, &v32);
    }
  }
LABEL_28:
  if ( *(_QWORD *)v27 )
  {
    v19 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)v27 + 8LL);
    _m_prefetchw((const void *)(*(_QWORD *)v27 + 8LL));
    v20 = v19->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v19, v20 - 2, v20) )
      ExfReleaseRundownProtection(v19);
  }
  if ( v26 && v26 != SecurityDescriptor )
    SeReleaseSecurityDescriptor(v26, PreviousMode, 1);
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable + 1;
  v21->KernelApcDisable = v22;
  if ( !v22
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return NameInstance;
}
