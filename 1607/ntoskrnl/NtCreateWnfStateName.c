/*
 * XREFs of NtCreateWnfStateName @ 0x1403F5A04
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExpWnfGenerateStateName @ 0x1403F5D2C (ExpWnfGenerateStateName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1403F5E24 (ExpWnfSpecializeSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x140461464 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfRegisterPermanentName @ 0x1404D1140 (ExpWnfRegisterPermanentName.c)
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
  __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS NameInstance; // edi
  __int64 v14; // r9
  __int64 v15; // rbx
  _KPROCESS *Process; // rsi
  PSECURITY_DESCRIPTOR v18; // [rsp+38h] [rbp-B0h] BYREF
  int v19[2]; // [rsp+40h] [rbp-A8h] BYREF
  PCWNF_TYPE_ID v20; // [rsp+48h] [rbp-A0h]
  _QWORD v21[3]; // [rsp+50h] [rbp-98h] BYREF
  PWNF_STATE_NAME v22; // [rsp+68h] [rbp-80h]
  struct _EX_RUNDOWN_REF *v23; // [rsp+70h] [rbp-78h] BYREF
  ULONG v24; // [rsp+80h] [rbp-68h] BYREF
  PCWNF_TYPE_ID v25; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v26; // [rsp+90h] [rbp-58h]
  __int128 v27; // [rsp+98h] [rbp-50h] BYREF

  v8 = DataScope;
  v22 = StateName;
  v10 = (__int64)TypeId;
  v21[1] = SecurityDescriptor;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v19 = 0LL;
  v18 = 0LL;
  v20 = TypeId;
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
        NameInstance = ExpWnfGenerateStateName(v21, (unsigned int)NameLifetime, (unsigned int)v8, v14);
        if ( NameInstance >= 0 )
        {
          v15 = v21[0];
          *v22 = (_WNF_STATE_NAME)(v21[0] ^ 0x41C64E6DA3BC0074LL);
          v24 = MaximumStateSize;
          v25 = v20;
          v26 = v18;
          if ( NameLifetime == WnfTemporaryStateName )
          {
            if ( PreviousMode )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              LODWORD(v15) = v21[0];
            }
            else
            {
              LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
            }
            NameInstance = ExpWnfResolveScopeInstance((int)v19, (int)Process, 0, v8, 0LL);
            if ( NameInstance >= 0 )
            {
              NameInstance = ExpWnfCreateNameInstance(v19[0], v15, (unsigned int)&v24, (_DWORD)Process, (__int64)&v23);
              if ( NameInstance >= 0 )
                ExReleaseRundownProtection(v23 + 1);
            }
          }
          else
          {
            NameInstance = ExpWnfRegisterPermanentName(v15, &v24);
          }
        }
        goto LABEL_27;
      }
    }
    NameInstance = -1073741811;
    goto LABEL_27;
  }
  if ( (unsigned __int64)StateName >= 0x7FFFFFFF0000LL )
    StateName = (PWNF_STATE_NAME)0x7FFFFFFF0000LL;
  LOBYTE(StateName->Data[0]) = StateName->Data[0];
  HIBYTE(StateName->Data[1]) = HIBYTE(StateName->Data[1]);
  if ( TypeId )
  {
    if ( (unsigned __int64)TypeId >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    v27 = *(_OWORD *)v10;
    v20 = (PCWNF_TYPE_ID)&v27;
  }
  if ( !SecurityDescriptor )
  {
    NameInstance = -1073741819;
    goto LABEL_27;
  }
  LOBYTE(v10) = PreviousMode;
  NameInstance = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, v10, 1, 1, (__int64)&v18);
  if ( NameInstance >= 0 )
    goto LABEL_13;
LABEL_27:
  if ( *(_QWORD *)v19 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v19 + 8LL));
  if ( v18 && v18 != SecurityDescriptor )
  {
    LOBYTE(DataScope) = 1;
    LOBYTE(v10) = PreviousMode;
    SeReleaseSecurityDescriptor(v18, v10, *(_QWORD *)&DataScope);
  }
  KeLeaveCriticalRegion();
  return NameInstance;
}
