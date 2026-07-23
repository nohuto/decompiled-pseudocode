/*
 * XREFs of NtQueryWnfStateData @ 0x1405026FC
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExpWnfLookupPermanentName @ 0x1404FE56C (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x1405023B4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140502BAC (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfLookupNameInstance @ 0x140502BEC (ExpWnfLookupNameInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140502CE8 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140502DAC (ExpCaptureWnfStateName.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x140502E28 (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfReadStateData @ 0x140502F10 (ExpWnfReadStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140554F94 (ExpWnfCheckCrossScopeAccess.c)
 */

NTSTATUS __cdecl NtQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  const void *v6; // r13
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  unsigned __int64 v9; // r8
  __int128 *v10; // r9
  unsigned int *v11; // r10
  ULONG64 v12; // r11
  _DWORD *v13; // rcx
  unsigned int *v14; // rcx
  SIZE_T v15; // rdx
  _DWORD *v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // r14
  int v19; // r12d
  struct _KTHREAD *v20; // r8
  struct _KPROCESS *Process; // rcx
  int v22; // eax
  unsigned __int64 v23; // r13
  int v24; // eax
  PULONG v25; // rax
  struct _EX_RUNDOWN_REF *v26; // rcx
  unsigned __int64 v27; // rtt
  struct _EX_RUNDOWN_REF *v28; // rcx
  unsigned __int64 v29; // rax
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  PVOID v33; // r14
  int v34; // ebx
  SIZE_T NumberOfBytes; // [rsp+28h] [rbp-F0h]
  NTSTATUS StateData; // [rsp+30h] [rbp-E8h]
  unsigned int v37; // [rsp+38h] [rbp-E0h]
  struct _EX_RUNDOWN_REF *v38; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-D0h]
  PVOID P; // [rsp+50h] [rbp-C8h] BYREF
  int v41[2]; // [rsp+58h] [rbp-C0h] BYREF
  int v42; // [rsp+60h] [rbp-B8h]
  PVOID v43; // [rsp+68h] [rbp-B0h]
  PCWNF_TYPE_ID v44; // [rsp+70h] [rbp-A8h]
  PWNF_CHANGE_STAMP v45; // [rsp+78h] [rbp-A0h]
  struct _KPROCESS *v46; // [rsp+80h] [rbp-98h]
  unsigned __int64 v47; // [rsp+88h] [rbp-90h] BYREF
  PULONG v48; // [rsp+90h] [rbp-88h]
  _QWORD v49[2]; // [rsp+A8h] [rbp-70h] BYREF
  PSID Sid; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v51; // [rsp+C0h] [rbp-58h] BYREF

  v45 = ChangeStamp;
  v6 = ExplicitScope;
  v43 = Buffer;
  v48 = BufferSize;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v41 = 0LL;
  v38 = 0LL;
  v37 = 0;
  v49[0] = 0LL;
  v49[1] = 0LL;
  v44 = TypeId;
  LOBYTE(ExplicitScope) = PreviousMode;
  StateData = ExpCaptureWnfStateName(StateName, &v47, ExplicitScope);
  if ( StateData >= 0 )
  {
    if ( PreviousMode )
    {
      if ( v10 )
      {
        if ( (unsigned __int64)v10 >= MmUserProbeAddress )
          v10 = (__int128 *)MmUserProbeAddress;
        v51 = *v10;
        v44 = (PCWNF_TYPE_ID)&v51;
      }
      v13 = (_DWORD *)v12;
      if ( v12 >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      *v13 = *v13;
      v14 = v11;
      if ( (unsigned __int64)v11 >= MmUserProbeAddress )
        v14 = (unsigned int *)MmUserProbeAddress;
      v15 = *v14;
      v39 = *v14;
      v16 = v11;
      if ( (unsigned __int64)v11 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = *v16;
      if ( (_DWORD)v15 )
        ProbeForWrite(Buffer, v15, 1u);
    }
    else
    {
      v39 = *v11;
    }
    v17 = v47;
    v18 = (v47 >> 4) & 3;
    v42 = (v47 >> 4) & 3;
    v37 = (v47 >> 6) & 0xF;
    LOBYTE(v9) = PreviousMode;
    StateData = ExpWnfCaptureScopeInstanceId((v47 >> 6) & 0xF, v6, v9, &Sid, v49);
    if ( StateData >= 0 )
    {
      if ( PreviousMode )
      {
        v19 = 0;
        if ( v6 )
        {
          StateData = ExpWnfCheckCrossScopeAccess(v17);
          if ( StateData < 0 )
            goto LABEL_31;
        }
      }
      else
      {
        v19 = 1;
      }
      if ( PreviousMode )
      {
        v20 = KeGetCurrentThread();
        Process = v20->ApcState.Process;
        v22 = 0;
        v17 = v47;
        LODWORD(v18) = v42;
      }
      else
      {
        v20 = 0LL;
        Process = PsInitialSystemProcess;
        v22 = 1;
      }
      v46 = Process;
      LODWORD(NumberOfBytes) = v22;
      StateData = ExpWnfResolveScopeInstance(
                    (signed __int64 *)v41,
                    (__int64)Process,
                    (__int64)v20,
                    v37,
                    Sid,
                    NumberOfBytes);
      if ( StateData >= 0 )
      {
        v23 = *(_QWORD *)v41;
        v24 = ExpWnfLookupNameInstance(*(_QWORD *)v41, v17, &v38);
        StateData = v24;
        if ( v24 != -1073741772 || (_DWORD)v18 == 3 )
        {
          if ( v24 < 0 )
            goto LABEL_31;
          StateData = ExpWnfValidatePubSubPreconditions(1u, v19);
          if ( StateData < 0 )
            goto LABEL_31;
        }
        else
        {
          StateData = ExpWnfLookupPermanentName(v17, &P);
          if ( StateData < 0 )
            goto LABEL_31;
          v33 = P;
          StateData = ExpWnfValidatePubSubPreconditions(1u, v19);
          if ( StateData < 0 )
            goto LABEL_31;
          if ( (v17 & 0x400) != 0 )
          {
            v34 = ExpWnfCreateNameInstance(v23, v17, (__int64)v33, v46, &v38);
            StateData = v34;
            ExFreePoolWithTag(v33, 0x20666E57u);
            P = 0LL;
            if ( v34 < 0 )
              goto LABEL_31;
          }
        }
        v25 = v48;
        if ( v38 )
        {
          StateData = ExpWnfReadStateData(v38, v45, v43, v39, v48);
        }
        else
        {
          *v45 = 0;
          *v25 = 0;
          StateData = 0;
        }
      }
    }
  }
LABEL_31:
  if ( v38 )
  {
    v26 = v38 + 1;
    _m_prefetchw(&v38[1]);
    v27 = v26->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)v26, v27 - 2, v27) )
      ExfReleaseRundownProtection(v26);
  }
  if ( *(_QWORD *)v41 )
  {
    v28 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)v41 + 8LL);
    _m_prefetchw((const void *)(*(_QWORD *)v41 + 8LL));
    v29 = *(_QWORD *)(*(_QWORD *)v41 + 8LL) & 0xFFFFFFFFFFFFFFFEuLL;
    v9 = v29 - 2;
    if ( v29 != _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v41 + 8LL), v29 - 2, v29) )
      ExfReleaseRundownProtection(v28);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  LOBYTE(v9) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId(v37, v49, v9);
  v30 = KeGetCurrentThread();
  v31 = v30->KernelApcDisable + 1;
  v30->KernelApcDisable = v31;
  if ( !v31
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
    && !v30->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return StateData;
}
