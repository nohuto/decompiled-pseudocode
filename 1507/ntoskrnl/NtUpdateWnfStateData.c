/*
 * XREFs of NtUpdateWnfStateData @ 0x140501A48
 * Callers:
 *     PfSnPowerBoostUpdate @ 0x140458EA4 (PfSnPowerBoostUpdate.c)
 *     SepSecureBootCheckForUpdates @ 0x1407FBAE4 (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupPermanentName @ 0x1404FE56C (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x1405023B4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140502BAC (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfLookupNameInstance @ 0x140502BEC (ExpWnfLookupNameInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140502CE8 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140502DAC (ExpCaptureWnfStateName.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x140502E28 (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140503674 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfWriteStateData @ 0x14050395C (ExpWnfWriteStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140554F94 (ExpWnfCheckCrossScopeAccess.c)
 */

NTSTATUS __cdecl NtUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  __int64 v7; // r13
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  struct _KTHREAD *v10; // r8
  __int128 *v11; // r9
  unsigned __int64 v12; // r10
  int v13; // r14d
  PEPROCESS Process; // r12
  int v15; // ecx
  unsigned __int64 v16; // rbx
  int v17; // r15d
  int v18; // eax
  struct _EX_RUNDOWN_REF *v19; // rcx
  unsigned __int64 v20; // rtt
  struct _EX_RUNDOWN_REF *v21; // rcx
  unsigned __int64 v22; // rax
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  PVOID v26; // r14
  int Sid; // [rsp+20h] [rbp-D8h]
  SIZE_T NumberOfBytes; // [rsp+28h] [rbp-D0h]
  NTSTATUS NameInstance; // [rsp+30h] [rbp-C8h]
  unsigned int v30; // [rsp+38h] [rbp-C0h]
  struct _EX_RUNDOWN_REF *v31; // [rsp+40h] [rbp-B8h] BYREF
  PVOID P; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-A8h] BYREF
  const void *v34; // [rsp+58h] [rbp-A0h]
  int v35; // [rsp+60h] [rbp-98h]
  PCWNF_TYPE_ID v36; // [rsp+68h] [rbp-90h]
  int v37[2]; // [rsp+70h] [rbp-88h] BYREF
  PSID v38[2]; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v39[3]; // [rsp+88h] [rbp-70h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-58h] BYREF

  v7 = Length;
  v34 = Buffer;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v37 = 0LL;
  v31 = 0LL;
  v30 = 0;
  v39[0] = 0LL;
  v39[1] = 0LL;
  v36 = TypeId;
  LOBYTE(Length) = PreviousMode;
  NameInstance = ExpCaptureWnfStateName(StateName, &v33, Length);
  if ( NameInstance >= 0 )
  {
    v35 = (v33 >> 4) & 3;
    v30 = (v33 >> 6) & 0xF;
    if ( PreviousMode )
    {
      if ( (_DWORD)v7 && (v12 + v7 > MmUserProbeAddress || v12 + v7 < v12) )
        *(_BYTE *)MmUserProbeAddress = 0;
      if ( v11 )
      {
        if ( (unsigned __int64)v11 >= MmUserProbeAddress )
          v11 = (__int128 *)MmUserProbeAddress;
        v40 = *v11;
        v36 = (PCWNF_TYPE_ID)&v40;
      }
    }
    LOBYTE(v10) = PreviousMode;
    NameInstance = ExpWnfCaptureScopeInstanceId(v30, ExplicitScope, v10, v38, v39);
    if ( NameInstance >= 0 )
    {
      if ( PreviousMode )
      {
        v13 = 0;
        if ( ExplicitScope )
        {
          NameInstance = ExpWnfCheckCrossScopeAccess(v33);
          if ( NameInstance < 0 )
            goto LABEL_24;
        }
      }
      else
      {
        v13 = 1;
      }
      if ( PreviousMode )
      {
        v10 = KeGetCurrentThread();
        Process = v10->ApcState.Process;
        v15 = 0;
        if ( v30 == 3 && (!v38[0] || Process == *(PEPROCESS *)v38[0]) )
        {
          NameInstance = -1073741811;
          goto LABEL_24;
        }
      }
      else
      {
        v10 = 0LL;
        Process = PsInitialSystemProcess;
        v15 = 1;
      }
      LODWORD(NumberOfBytes) = v15;
      NameInstance = ExpWnfResolveScopeInstance(
                       (signed __int64 *)v37,
                       (__int64)Process,
                       (__int64)v10,
                       v30,
                       v38[0],
                       NumberOfBytes);
      if ( NameInstance >= 0 )
      {
        v16 = v33;
        v17 = v37[0];
        v18 = ExpWnfLookupNameInstance(*(_QWORD *)v37, v33, &v31);
        NameInstance = v18;
        if ( v18 != -1073741772 || v35 == 3 )
        {
          if ( v18 < 0 )
            goto LABEL_24;
          NameInstance = ExpWnfValidatePubSubPreconditions(2u, v13);
          if ( NameInstance < 0 )
            goto LABEL_24;
        }
        else
        {
          NameInstance = ExpWnfLookupPermanentName(v16, &P);
          if ( NameInstance < 0 )
            goto LABEL_24;
          Sid = v13;
          v26 = P;
          NameInstance = ExpWnfValidatePubSubPreconditions(2u, Sid);
          if ( NameInstance < 0 )
            goto LABEL_24;
          NameInstance = ExpWnfCreateNameInstance(v17, v16, (_DWORD)v26, (_DWORD)Process, (__int64)&v31);
          ExFreePoolWithTag(v26, 0x20666E57u);
          P = 0LL;
          if ( NameInstance < 0 )
            goto LABEL_24;
        }
        NameInstance = ExpWnfWriteStateData(v31, v34, (unsigned int)v7, MatchingChangeStamp, CheckStamp);
        if ( NameInstance >= 0 )
        {
          ExpWnfNotifyNameSubscribers(v31, 1LL, 1LL);
          NameInstance = 0;
        }
      }
    }
  }
LABEL_24:
  if ( v31 )
  {
    v19 = v31 + 1;
    _m_prefetchw(&v31[1]);
    v20 = v19->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v19, v20 - 2, v20) )
      ExfReleaseRundownProtection(v19);
  }
  if ( *(_QWORD *)v37 )
  {
    v21 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)v37 + 8LL);
    _m_prefetchw((const void *)(*(_QWORD *)v37 + 8LL));
    v22 = *(_QWORD *)(*(_QWORD *)v37 + 8LL) & 0xFFFFFFFFFFFFFFFEuLL;
    v10 = (struct _KTHREAD *)(v22 - 2);
    if ( v22 != _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v37 + 8LL), v22 - 2, v22) )
      ExfReleaseRundownProtection(v21);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  LOBYTE(v10) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId(v30, v39, v10);
  v23 = KeGetCurrentThread();
  v24 = v23->KernelApcDisable + 1;
  v23->KernelApcDisable = v24;
  if ( !v24
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
    && !v23->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return NameInstance;
}
