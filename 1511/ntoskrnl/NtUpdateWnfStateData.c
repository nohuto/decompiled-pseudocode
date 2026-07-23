/*
 * XREFs of NtUpdateWnfStateData @ 0x1403E457C
 * Callers:
 *     PfSnPowerBoostUpdate @ 0x1404C17F0 (PfSnPowerBoostUpdate.c)
 *     SepSecureBootCheckForUpdates @ 0x140785180 (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1403E0F08 (ExpWnfLookupPermanentName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1403E51C8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x1403E5210 (ExpCaptureWnfStateName.c)
 *     ExpWnfCreateNameInstance @ 0x1403E5290 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1403E55A8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1403E5B1C (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1403E5C0C (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1403E6600 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfWriteStateData @ 0x1403E68DC (ExpWnfWriteStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404BF3D0 (ExpWnfCheckCrossScopeAccess.c)
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
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v9; // rsi
  NTSTATUS NameInstance; // edi
  struct _KTHREAD *v11; // r8
  __int128 *v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // r11
  int v15; // r15d
  _KPROCESS *Process; // r12
  unsigned __int64 v17; // rbx
  int v18; // r13d
  int v19; // eax
  ULONG v20; // ebx
  PVOID v22; // r15
  int Sid; // [rsp+20h] [rbp-D8h]
  int v24; // [rsp+38h] [rbp-C0h]
  struct _EX_RUNDOWN_REF *v26; // [rsp+40h] [rbp-B8h] BYREF
  PVOID P; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-A8h] BYREF
  PCWNF_TYPE_ID v29; // [rsp+58h] [rbp-A0h]
  int v30; // [rsp+60h] [rbp-98h]
  int v31[2]; // [rsp+68h] [rbp-90h] BYREF
  PSID v32[2]; // [rsp+70h] [rbp-88h] BYREF
  const void *v33; // [rsp+80h] [rbp-78h]
  _QWORD v34[3]; // [rsp+88h] [rbp-70h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-58h] BYREF

  v33 = Buffer;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v31 = 0LL;
  v26 = 0LL;
  LODWORD(v9) = 0;
  v34[0] = 0LL;
  v34[1] = 0LL;
  v29 = TypeId;
  NameInstance = ExpCaptureWnfStateName(StateName, &v28);
  if ( NameInstance >= 0 )
  {
    v30 = (v28 >> 4) & 3;
    v9 = (v28 >> 6) & 0xF;
    v24 = (v28 >> 6) & 0xF;
    if ( PreviousMode )
    {
      if ( (_DWORD)v13 && (v14 + v13 > MmUserProbeAddress || v14 + v13 < v14) )
        *(_BYTE *)MmUserProbeAddress = 0;
      if ( v12 )
      {
        if ( (unsigned __int64)v12 >= MmUserProbeAddress )
          v12 = (__int128 *)MmUserProbeAddress;
        v35 = *v12;
        v29 = (PCWNF_TYPE_ID)&v35;
      }
    }
    LOBYTE(v11) = PreviousMode;
    NameInstance = ExpWnfCaptureScopeInstanceId((unsigned int)v9, ExplicitScope, v11, v32, v34);
    if ( NameInstance >= 0 )
    {
      if ( PreviousMode )
      {
        v15 = 0;
        if ( ExplicitScope )
        {
          NameInstance = ExpWnfCheckCrossScopeAccess(v28);
          if ( NameInstance < 0 )
            goto LABEL_25;
        }
      }
      else
      {
        v15 = 1;
      }
      if ( PreviousMode )
      {
        v11 = KeGetCurrentThread();
        Process = v11->ApcState.Process;
        LODWORD(v9) = v24;
        if ( v24 == 3 && (!v32[0] || Process == *(_KPROCESS **)v32[0]) )
        {
          NameInstance = -1073741811;
          goto LABEL_25;
        }
      }
      else
      {
        LODWORD(v11) = 0;
        LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
      }
      NameInstance = ExpWnfResolveScopeInstance((int)v31, (int)Process, (int)v11, v9, v32[0]);
      if ( NameInstance < 0 )
        goto LABEL_25;
      v17 = v28;
      v18 = v31[0];
      v19 = ExpWnfLookupNameInstance(*(_QWORD *)v31, v28, &v26);
      NameInstance = v19;
      if ( v19 != -1073741772 || v30 == 3 )
      {
        if ( v19 < 0 )
          goto LABEL_25;
        v20 = Length;
        NameInstance = ExpWnfValidatePubSubPreconditions(2u, v15);
        if ( NameInstance < 0 )
          goto LABEL_25;
      }
      else
      {
        NameInstance = ExpWnfLookupPermanentName(v17, &P);
        if ( NameInstance < 0 )
          goto LABEL_25;
        Sid = v15;
        v22 = P;
        NameInstance = ExpWnfValidatePubSubPreconditions(2u, Sid);
        if ( NameInstance < 0 )
          goto LABEL_25;
        NameInstance = ExpWnfCreateNameInstance(v18, v17, (_DWORD)v22, (_DWORD)Process, (__int64)&v26);
        ExFreePoolWithTag(v22, 0x20666E57u);
        P = 0LL;
        if ( NameInstance < 0 )
          goto LABEL_25;
        v20 = Length;
      }
      NameInstance = ExpWnfWriteStateData(v26, v33, v20, MatchingChangeStamp, CheckStamp);
      if ( NameInstance >= 0 )
      {
        ExpWnfNotifyNameSubscribers(v26, 1LL, 1LL, PreviousMode != 0);
        NameInstance = 0;
      }
    }
  }
LABEL_25:
  if ( v26 )
    ExReleaseRundownProtection_0(v26 + 1);
  if ( *(_QWORD *)v31 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v31 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  LOBYTE(v11) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v9, v34, v11);
  KeLeaveCriticalRegion();
  return NameInstance;
}
