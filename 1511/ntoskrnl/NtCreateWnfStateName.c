/*
 * XREFs of NtCreateWnfStateName @ 0x1403E262C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExpWnfGenerateStateName @ 0x1403E295C (ExpWnfGenerateStateName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1403E2A80 (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x1403E5290 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x140434450 (SeCaptureSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ExpWnfRegisterPermanentName @ 0x1404C2D98 (ExpWnfRegisterPermanentName.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtCreateWnfStateName(
        PWNF_STATE_NAME StateName,
        WNF_STATE_NAME_LIFETIME NameLifetime,
        WNF_DATA_SCOPE DataScope,
        BOOLEAN PersistData,
        PCWNF_TYPE_ID TypeId,
        ULONG MaximumStateSize,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  WNF_DATA_SCOPE v8; // r13d
  __int128 *v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS NameInstance; // edi
  __int64 v14; // r9
  __int64 v15; // rbx
  _KPROCESS *Process; // rsi
  PSECURITY_DESCRIPTOR v18; // [rsp+38h] [rbp-B0h] BYREF
  int v19[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-A0h] BYREF
  PCWNF_TYPE_ID v21; // [rsp+50h] [rbp-98h]
  PSECURITY_DESCRIPTOR v22; // [rsp+58h] [rbp-90h]
  PWNF_STATE_NAME v23; // [rsp+60h] [rbp-88h]
  struct _EX_RUNDOWN_REF *v24; // [rsp+78h] [rbp-70h] BYREF
  ULONG v25; // [rsp+80h] [rbp-68h] BYREF
  PCWNF_TYPE_ID v26; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v27; // [rsp+90h] [rbp-58h]
  __int128 v28; // [rsp+98h] [rbp-50h] BYREF

  v8 = DataScope;
  v23 = StateName;
  v10 = (__int128 *)TypeId;
  v22 = SecurityDescriptor;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v19 = 0LL;
  v18 = 0LL;
  v21 = TypeId;
  if ( !PreviousMode )
  {
    NameInstance = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, 0, 1, 1, (__int64)&v18);
    if ( NameInstance < 0 )
      goto LABEL_27;
LABEL_13:
    ExpWnfSpecializeSecurityDescriptor(v18);
    if ( (unsigned int)NameLifetime <= WnfTemporaryStateName
      && NameLifetime
      && (unsigned int)v8 <= WnfDataScopeMachine
      && (!PersistData || (v8 & 0xFFFFFFFB) == 0 && NameLifetime == WnfPermanentStateName)
      && MaximumStateSize <= 0x1000 )
    {
      if ( NameLifetime != WnfTemporaryStateName )
      {
        if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
        {
          NameInstance = -1073741727;
          goto LABEL_27;
        }
        goto LABEL_20;
      }
      if ( v8 != WnfDataScopeProcess )
      {
LABEL_20:
        LOBYTE(v14) = PersistData;
        NameInstance = ExpWnfGenerateStateName(&v20, (unsigned int)NameLifetime, (unsigned int)v8, v14);
        if ( NameInstance >= 0 )
        {
          v15 = v20;
          *v23 = (_WNF_STATE_NAME)(v20 ^ 0x41C64E6DA3BC0074LL);
          v25 = MaximumStateSize;
          v26 = v21;
          v27 = v18;
          if ( NameLifetime == WnfTemporaryStateName )
          {
            if ( PreviousMode )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              LODWORD(v15) = v20;
            }
            else
            {
              LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
            }
            NameInstance = ExpWnfResolveScopeInstance((int)v19, (int)Process, 0, v8, 0LL);
            if ( NameInstance >= 0 )
            {
              NameInstance = ExpWnfCreateNameInstance(v19[0], v15, (unsigned int)&v25, (_DWORD)Process, (__int64)&v24);
              if ( NameInstance >= 0 )
                ExReleaseRundownProtection_0(v24 + 1);
            }
          }
          else
          {
            NameInstance = ExpWnfRegisterPermanentName(v15, &v25);
          }
        }
        goto LABEL_27;
      }
    }
    NameInstance = -1073741811;
    goto LABEL_27;
  }
  if ( (unsigned __int64)StateName >= MmUserProbeAddress )
    StateName = (PWNF_STATE_NAME)MmUserProbeAddress;
  LOBYTE(StateName->Data[0]) = StateName->Data[0];
  HIBYTE(StateName->Data[1]) = HIBYTE(StateName->Data[1]);
  if ( TypeId )
  {
    if ( (unsigned __int64)TypeId >= MmUserProbeAddress )
      v10 = (__int128 *)MmUserProbeAddress;
    v28 = *v10;
    v21 = (PCWNF_TYPE_ID)&v28;
  }
  if ( !SecurityDescriptor )
  {
    NameInstance = -1073741819;
    goto LABEL_27;
  }
  LOBYTE(v10) = PreviousMode;
  NameInstance = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, (_DWORD)v10, 1, 1, (__int64)&v18);
  if ( NameInstance >= 0 )
    goto LABEL_13;
LABEL_27:
  if ( *(_QWORD *)v19 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v19 + 8LL));
  if ( v18 && v18 != SecurityDescriptor )
  {
    LOBYTE(DataScope) = 1;
    LOBYTE(v10) = PreviousMode;
    SeReleaseSecurityDescriptor(v18, v10, *(_QWORD *)&DataScope);
  }
  KeLeaveCriticalRegion();
  return NameInstance;
}
