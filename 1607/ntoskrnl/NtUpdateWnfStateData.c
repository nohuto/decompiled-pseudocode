/*
 * XREFs of NtUpdateWnfStateData @ 0x140461CC4
 * Callers:
 *     PfSnPowerBoostUpdate @ 0x1404EB038 (PfSnPowerBoostUpdate.c)
 *     SepSecureBootCheckForUpdates @ 0x1407D1590 (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1403F620C (ExpWnfLookupPermanentName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1404624D4 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140462514 (ExpCaptureWnfStateName.c)
 *     ExpWnfCreateNameInstance @ 0x140462594 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1404628C8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404629B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140462DF0 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x140462EB8 (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404630B4 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfWriteStateData @ 0x140463388 (ExpWnfWriteStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404E3BCC (ExpWnfCheckCrossScopeAccess.c)
 */

__int64 __fastcall NtUpdateWnfStateData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        unsigned int a6,
        int a7)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v9; // rsi
  int NameInstance; // edi
  struct _KTHREAD *v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // r11
  int v15; // r15d
  _KPROCESS *Process; // r12
  unsigned __int64 v17; // rbx
  int v18; // r13d
  int v19; // eax
  unsigned int v20; // ebx
  PVOID v22; // r15
  int Sid; // [rsp+20h] [rbp-D8h]
  int v24; // [rsp+38h] [rbp-C0h]
  unsigned int v25; // [rsp+3Ch] [rbp-BCh]
  struct _EX_RUNDOWN_REF *v26; // [rsp+40h] [rbp-B8h] BYREF
  PVOID P; // [rsp+48h] [rbp-B0h] BYREF
  int v28; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v29; // [rsp+58h] [rbp-A0h] BYREF
  __int128 *v30; // [rsp+60h] [rbp-98h]
  int v31[2]; // [rsp+68h] [rbp-90h] BYREF
  PSID v32; // [rsp+70h] [rbp-88h] BYREF
  __int64 v33; // [rsp+78h] [rbp-80h]
  _QWORD v34[2]; // [rsp+90h] [rbp-68h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-58h] BYREF

  v25 = a3;
  v33 = a2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v31 = 0LL;
  v26 = 0LL;
  LODWORD(v9) = 0;
  v34[0] = 0LL;
  v34[1] = 0LL;
  v30 = a4;
  LOBYTE(a3) = PreviousMode;
  NameInstance = ExpCaptureWnfStateName(a1, &v29, a3);
  if ( NameInstance >= 0 )
  {
    v28 = (v29 >> 4) & 3;
    v9 = (v29 >> 6) & 0xF;
    v24 = (v29 >> 6) & 0xF;
    if ( PreviousMode )
    {
      if ( (_DWORD)v13 && (v14 + v13 > 0x7FFFFFFF0000LL || v14 + v13 < v14) )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( v12 )
      {
        if ( v12 >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        v35 = *(_OWORD *)v12;
        v30 = &v35;
      }
    }
    LOBYTE(v11) = PreviousMode;
    NameInstance = ExpWnfCaptureScopeInstanceId((v29 >> 6) & 0xF, a5, v11, &v32, v34);
    if ( NameInstance >= 0 )
    {
      if ( PreviousMode )
      {
        v15 = 0;
        if ( a5 )
        {
          NameInstance = ExpWnfCheckCrossScopeAccess(v29);
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
        if ( v24 == 3 && (!v32 || Process == *(_KPROCESS **)v32) )
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
      NameInstance = ExpWnfResolveScopeInstance((int)v31, (int)Process, (int)v11, v9, v32);
      if ( NameInstance < 0 )
        goto LABEL_25;
      v17 = v29;
      v18 = v31[0];
      v19 = ExpWnfLookupNameInstance(*(_QWORD *)v31, v29, &v26);
      NameInstance = v19;
      if ( v19 != -1073741772 || v28 == 3 )
      {
        if ( v19 < 0 )
          goto LABEL_25;
        v20 = v25;
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
        v20 = v25;
      }
      NameInstance = ExpWnfWriteStateData(v26, v33, v20, a6, a7);
      if ( NameInstance >= 0 )
      {
        ExpWnfNotifyNameSubscribers(v26, 1LL, 1LL);
        NameInstance = 0;
      }
    }
  }
LABEL_25:
  if ( v26 )
    ExReleaseRundownProtection(v26 + 1);
  if ( *(_QWORD *)v31 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v31 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  LOBYTE(v11) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v9, v34, v11);
  KeLeaveCriticalRegion();
  return (unsigned int)NameInstance;
}
