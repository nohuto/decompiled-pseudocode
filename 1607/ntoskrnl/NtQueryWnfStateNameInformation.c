/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1404DCB58
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1403F620C (ExpWnfLookupPermanentName.c)
 *     ProbeForWrite @ 0x14044DAC0 (ProbeForWrite.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1404624D4 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140462514 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1404628C8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404629B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140462DF0 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x140462F14 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404E3BCC (ExpWnfCheckCrossScopeAccess.c)
 */

__int64 __fastcall NtQueryWnfStateNameInformation(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        int *a4,
        unsigned int Length)
{
  int *v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  int v10; // edi
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  int v13; // esi
  int v14; // r13d
  ACCESS_MASK v15; // r12d
  struct _KTHREAD *v16; // r8
  _KPROCESS *Process; // rdx
  int v18; // eax
  int v20; // [rsp+38h] [rbp-90h]
  int v21; // [rsp+3Ch] [rbp-8Ch]
  __int64 v22; // [rsp+40h] [rbp-88h] BYREF
  int v23; // [rsp+48h] [rbp-80h]
  unsigned __int64 v24; // [rsp+50h] [rbp-78h] BYREF
  int v25[2]; // [rsp+58h] [rbp-70h] BYREF
  PVOID P; // [rsp+60h] [rbp-68h] BYREF
  int v27; // [rsp+68h] [rbp-60h]
  int v28; // [rsp+6Ch] [rbp-5Ch]
  PSID Sid[4]; // [rsp+70h] [rbp-58h] BYREF
  PVOID v30[2]; // [rsp+90h] [rbp-38h] BYREF

  v5 = a4;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v25 = 0LL;
  v22 = 0LL;
  v20 = 0;
  v30[0] = 0LL;
  v30[1] = 0LL;
  v10 = ExpCaptureWnfStateName(a1, &v24, PreviousMode);
  if ( v10 >= 0 )
  {
    v12 = v24;
    v23 = (v24 >> 4) & 3;
    v20 = (v24 >> 6) & 0xF;
    v10 = ExpWnfCaptureScopeInstanceId(v20, a3, v11, Sid, v30);
    if ( v10 >= 0 )
    {
      if ( a2 > 2 )
      {
        v10 = -1073741821;
      }
      else
      {
        v27 = 4;
        v28 = 4;
        if ( Length >= 4 )
        {
          if ( PreviousMode )
            ProbeForWrite(v5, Length, 4u);
          v13 = 1;
          if ( a2 )
          {
            v21 = 0;
          }
          else
          {
            v21 = 1;
            if ( a3 )
            {
              v10 = -1073741811;
              goto LABEL_52;
            }
          }
          if ( PreviousMode && a2 )
          {
            v14 = 0;
            if ( a3 )
            {
              v10 = ExpWnfCheckCrossScopeAccess(v12);
              if ( v10 < 0 )
                goto LABEL_52;
            }
          }
          else
          {
            v14 = 1;
          }
          v15 = 0;
          if ( !v14 && a2 - 1 <= 1 )
            v15 = 2;
          v16 = 0LL;
          if ( PreviousMode )
          {
            if ( v21 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
            }
            else
            {
              v16 = KeGetCurrentThread();
              Process = v16->ApcState.Process;
            }
            v12 = v24;
          }
          else
          {
            Process = PsInitialSystemProcess;
          }
          v10 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v25, (__int64)Process, (__int64)v16, v20, Sid[0]);
          if ( v10 >= 0 )
          {
            v18 = ExpWnfLookupNameInstance(*(__int64 *)v25, v12, &v22);
            v10 = v18;
            if ( v18 != -1073741772 || v23 == 3 )
            {
              if ( v18 >= 0 )
              {
                if ( v14 )
                  goto LABEL_29;
                v10 = ExpWnfCheckCallerAccess(*(PSECURITY_DESCRIPTOR *)(v22 + 72), v15);
                if ( v10 >= 0 )
                  goto LABEL_29;
              }
            }
            else
            {
              v10 = ExpWnfLookupPermanentName(v12, &P);
              if ( v10 >= 0 )
              {
                if ( v14 || (v10 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), v15), v10 >= 0) )
                {
LABEL_29:
                  if ( a2 )
                  {
                    if ( a2 == 1 )
                    {
                      if ( v22 && *(_DWORD *)(v22 + 160) )
                        goto LABEL_37;
                    }
                    else if ( !v22 || !*(_DWORD *)(v22 + 164) )
                    {
                      goto LABEL_37;
                    }
                    v13 = 0;
                  }
LABEL_37:
                  *a4 = v13;
                  v10 = 0;
                  v5 = a4;
                  goto LABEL_38;
                }
              }
            }
          }
LABEL_52:
          v5 = a4;
          goto LABEL_38;
        }
        v10 = -1073741811;
      }
    }
  }
LABEL_38:
  if ( v10 == -1073741772 && !a2 )
  {
    *v5 = 0;
    v10 = 0;
  }
  if ( v22 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v22 + 8));
  if ( *(_QWORD *)v25 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v25 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  ExpWnfReleaseCapturedScopeInstanceId(v20, v30, PreviousMode);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
