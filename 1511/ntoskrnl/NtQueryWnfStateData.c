/*
 * XREFs of NtQueryWnfStateData @ 0x1403E4D70
 * Callers:
 *     <none>
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
 *     ExpWnfReadStateData @ 0x1403E5CF4 (ExpWnfReadStateData.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404BF3D0 (ExpWnfCheckCrossScopeAccess.c)
 */

NTSTATUS __cdecl NtQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r12
  __int64 v9; // r13
  NTSTATUS NameInstance; // edi
  __int64 v11; // r8
  __int128 *v12; // r9
  unsigned int *v13; // r10
  ULONG64 v14; // r11
  _DWORD *v15; // rcx
  unsigned int *v16; // rcx
  SIZE_T v17; // rdx
  _DWORD *v18; // rcx
  unsigned __int64 v19; // rbx
  __int64 v20; // r14
  struct _KTHREAD *v21; // r8
  PEPROCESS Process; // rcx
  int v23; // r15d
  int v24; // eax
  PULONG v25; // rax
  PVOID v27; // r14
  int v28; // [rsp+3Ch] [rbp-DCh]
  int v29; // [rsp+40h] [rbp-D8h]
  struct _EX_RUNDOWN_REF *v30; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-C8h]
  PVOID P; // [rsp+58h] [rbp-C0h] BYREF
  PCWNF_TYPE_ID v33; // [rsp+60h] [rbp-B8h]
  int v34; // [rsp+68h] [rbp-B0h]
  int v35[2]; // [rsp+70h] [rbp-A8h] BYREF
  PWNF_CHANGE_STAMP v36; // [rsp+78h] [rbp-A0h]
  PULONG v37; // [rsp+80h] [rbp-98h]
  PEPROCESS v38; // [rsp+88h] [rbp-90h]
  unsigned __int64 v39; // [rsp+90h] [rbp-88h] BYREF
  PVOID v40; // [rsp+98h] [rbp-80h]
  PSID Sid; // [rsp+A8h] [rbp-70h] BYREF
  _QWORD v42[3]; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v43; // [rsp+C8h] [rbp-50h] BYREF

  v36 = ChangeStamp;
  v40 = Buffer;
  v37 = BufferSize;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v35 = 0LL;
  v30 = 0LL;
  LODWORD(v9) = 0;
  v42[0] = 0LL;
  v42[1] = 0LL;
  v33 = TypeId;
  NameInstance = ExpCaptureWnfStateName(StateName, &v39);
  if ( NameInstance >= 0 )
  {
    if ( PreviousMode )
    {
      if ( v12 )
      {
        if ( (unsigned __int64)v12 >= MmUserProbeAddress )
          v12 = (__int128 *)MmUserProbeAddress;
        v43 = *v12;
        v33 = (PCWNF_TYPE_ID)&v43;
      }
      v15 = (_DWORD *)v14;
      if ( v14 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = *v15;
      v16 = v13;
      if ( (unsigned __int64)v13 >= MmUserProbeAddress )
        v16 = (unsigned int *)MmUserProbeAddress;
      v17 = *v16;
      v31 = *v16;
      v18 = v13;
      if ( (unsigned __int64)v13 >= MmUserProbeAddress )
        v18 = (_DWORD *)MmUserProbeAddress;
      *v18 = *v18;
      if ( (_DWORD)v17 )
        ProbeForWrite(Buffer, v17, 1u);
    }
    else
    {
      v31 = *v13;
    }
    v19 = v39;
    v20 = (v39 >> 4) & 3;
    v34 = (v39 >> 4) & 3;
    v9 = (v39 >> 6) & 0xF;
    v28 = (v39 >> 6) & 0xF;
    LOBYTE(v11) = PreviousMode;
    NameInstance = ExpWnfCaptureScopeInstanceId(v9, ExplicitScope, v11, &Sid, v42);
    if ( NameInstance >= 0 )
    {
      if ( PreviousMode )
      {
        v29 = 0;
        if ( ExplicitScope )
        {
          NameInstance = ExpWnfCheckCrossScopeAccess(v19);
          if ( NameInstance < 0 )
            goto LABEL_31;
        }
      }
      else
      {
        v29 = 1;
      }
      if ( PreviousMode )
      {
        v21 = KeGetCurrentThread();
        Process = v21->ApcState.Process;
        LODWORD(v9) = v28;
        v19 = v39;
        LODWORD(v20) = v34;
      }
      else
      {
        LODWORD(v21) = 0;
        Process = PsInitialSystemProcess;
      }
      v38 = Process;
      NameInstance = ExpWnfResolveScopeInstance((int)v35, (int)Process, (int)v21, v9, Sid);
      if ( NameInstance >= 0 )
      {
        v23 = v35[0];
        v24 = ExpWnfLookupNameInstance(*(_QWORD *)v35, v19, &v30);
        NameInstance = v24;
        if ( v24 != -1073741772 || (_DWORD)v20 == 3 )
        {
          if ( v24 < 0 )
            goto LABEL_31;
          NameInstance = ExpWnfValidatePubSubPreconditions(1u, v29);
          if ( NameInstance < 0 )
            goto LABEL_31;
        }
        else
        {
          NameInstance = ExpWnfLookupPermanentName(v19, &P);
          if ( NameInstance < 0 )
            goto LABEL_31;
          v27 = P;
          NameInstance = ExpWnfValidatePubSubPreconditions(1u, v29);
          if ( NameInstance < 0 )
            goto LABEL_31;
          if ( (v19 & 0x400) != 0 )
          {
            NameInstance = ExpWnfCreateNameInstance(v23, v19, (_DWORD)v27, (_DWORD)v38, (__int64)&v30);
            ExFreePoolWithTag(v27, 0x20666E57u);
            P = 0LL;
            if ( NameInstance < 0 )
              goto LABEL_31;
          }
        }
        v25 = v37;
        if ( v30 )
        {
          NameInstance = ExpWnfReadStateData(v30, v36, v40, v31, v37);
        }
        else
        {
          *v36 = 0;
          *v25 = 0;
          NameInstance = 0;
        }
      }
    }
  }
LABEL_31:
  if ( v30 )
    ExReleaseRundownProtection_0(v30 + 1);
  if ( *(_QWORD *)v35 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v35 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  LOBYTE(v11) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v9, v42, v11);
  KeLeaveCriticalRegion();
  return NameInstance;
}
