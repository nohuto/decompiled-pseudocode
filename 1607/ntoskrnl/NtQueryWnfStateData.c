/*
 * XREFs of NtQueryWnfStateData @ 0x140462090
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1403F620C (ExpWnfLookupPermanentName.c)
 *     ProbeForWrite @ 0x14044DAC0 (ProbeForWrite.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1404624D4 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140462514 (ExpCaptureWnfStateName.c)
 *     ExpWnfCreateNameInstance @ 0x140462594 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1404628C8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404629B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140462DF0 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x140462EB8 (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfReadStateData @ 0x140462FA0 (ExpWnfReadStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404E3BCC (ExpWnfCheckCrossScopeAccess.c)
 */

__int64 __fastcall NtQueryWnfStateData(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        _DWORD *a4,
        volatile void *Address,
        __int64 a6)
{
  __int64 v6; // r13
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r12
  __int64 v9; // r15
  int NameInstance; // edi
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned int *v13; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 v19; // r14
  struct _KTHREAD *v20; // r8
  PEPROCESS Process; // rcx
  int v22; // r13d
  int v23; // eax
  _DWORD *v24; // rax
  PVOID v26; // r14
  int v27; // [rsp+3Ch] [rbp-DCh]
  int v28; // [rsp+40h] [rbp-D8h]
  struct _EX_RUNDOWN_REF *v29; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-C8h]
  PVOID P; // [rsp+58h] [rbp-C0h] BYREF
  int v32; // [rsp+60h] [rbp-B8h]
  __int128 *v33; // [rsp+68h] [rbp-B0h]
  int v34[2]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-A0h] BYREF
  PEPROCESS v36; // [rsp+80h] [rbp-98h]
  __int64 v37; // [rsp+88h] [rbp-90h]
  _DWORD *v38; // [rsp+90h] [rbp-88h]
  PSID Sid; // [rsp+98h] [rbp-80h] BYREF
  volatile void *v40; // [rsp+A0h] [rbp-78h]
  _QWORD v41[2]; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v42; // [rsp+C8h] [rbp-50h] BYREF

  v38 = a4;
  v6 = a3;
  v40 = Address;
  v37 = a6;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v34 = 0LL;
  v29 = 0LL;
  LODWORD(v9) = 0;
  v41[0] = 0LL;
  v41[1] = 0LL;
  v33 = a2;
  LOBYTE(a3) = PreviousMode;
  NameInstance = ExpCaptureWnfStateName(a1, &v35, a3);
  if ( NameInstance >= 0 )
  {
    if ( PreviousMode )
    {
      if ( v12 )
      {
        if ( v12 >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        v42 = *(_OWORD *)v12;
        v33 = &v42;
      }
      v15 = v14;
      if ( v14 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
      v16 = (__int64)v13;
      if ( (unsigned __int64)v13 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      v11 = *(unsigned int *)v16;
      v30 = *(_DWORD *)v16;
      v17 = (__int64)v13;
      if ( (unsigned __int64)v13 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v17 = *(_DWORD *)v17;
      if ( (_DWORD)v11 )
        ProbeForWrite(Address, (unsigned int)v11, 1u);
    }
    else
    {
      v30 = *v13;
    }
    v18 = v35;
    v19 = (v35 >> 4) & 3;
    v32 = (v35 >> 4) & 3;
    v9 = (v35 >> 6) & 0xF;
    v27 = (v35 >> 6) & 0xF;
    LOBYTE(v11) = PreviousMode;
    NameInstance = ExpWnfCaptureScopeInstanceId(v9, v6, v11, &Sid, v41);
    if ( NameInstance >= 0 )
    {
      if ( PreviousMode )
      {
        v28 = 0;
        if ( v6 )
        {
          NameInstance = ExpWnfCheckCrossScopeAccess(v18);
          if ( NameInstance < 0 )
            goto LABEL_31;
        }
      }
      else
      {
        v28 = 1;
      }
      if ( PreviousMode )
      {
        v20 = KeGetCurrentThread();
        Process = v20->ApcState.Process;
        LODWORD(v9) = v27;
        v18 = v35;
        LODWORD(v19) = v32;
      }
      else
      {
        LODWORD(v20) = 0;
        Process = PsInitialSystemProcess;
      }
      v36 = Process;
      NameInstance = ExpWnfResolveScopeInstance((int)v34, (int)Process, (int)v20, v9, Sid);
      if ( NameInstance >= 0 )
      {
        v22 = v34[0];
        v23 = ExpWnfLookupNameInstance(*(_QWORD *)v34, v18, &v29);
        NameInstance = v23;
        if ( v23 != -1073741772 || (_DWORD)v19 == 3 )
        {
          if ( v23 < 0 )
            goto LABEL_31;
          NameInstance = ExpWnfValidatePubSubPreconditions(1u, v28);
          if ( NameInstance < 0 )
            goto LABEL_31;
        }
        else
        {
          NameInstance = ExpWnfLookupPermanentName(v18, &P);
          if ( NameInstance < 0 )
            goto LABEL_31;
          v26 = P;
          NameInstance = ExpWnfValidatePubSubPreconditions(1u, v28);
          if ( NameInstance < 0 )
            goto LABEL_31;
          if ( (v18 & 0x400) != 0 )
          {
            NameInstance = ExpWnfCreateNameInstance(v22, v18, (_DWORD)v26, (_DWORD)v36, (__int64)&v29);
            ExFreePoolWithTag(v26, 0x20666E57u);
            P = 0LL;
            if ( NameInstance < 0 )
              goto LABEL_31;
          }
        }
        v24 = (_DWORD *)v37;
        if ( v29 )
        {
          NameInstance = ExpWnfReadStateData(v29, v38, v40, v30, v37);
        }
        else
        {
          *v38 = 0;
          *v24 = 0;
          NameInstance = 0;
        }
      }
    }
  }
LABEL_31:
  if ( v29 )
    ExReleaseRundownProtection(v29 + 1);
  if ( *(_QWORD *)v34 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v34 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  LOBYTE(v11) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v9, v41, v11);
  KeLeaveCriticalRegion();
  return (unsigned int)NameInstance;
}
