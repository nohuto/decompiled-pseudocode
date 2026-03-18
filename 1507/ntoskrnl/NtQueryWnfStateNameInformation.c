/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x14054BE40
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExpWnfLookupPermanentName @ 0x1404FE56C (ExpWnfLookupPermanentName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140502BAC (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfLookupNameInstance @ 0x140502BEC (ExpWnfLookupNameInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140502CE8 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140502DAC (ExpCaptureWnfStateName.c)
 *     ExpWnfCheckCallerAccess @ 0x140502E84 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140554F94 (ExpWnfCheckCrossScopeAccess.c)
 */

__int64 __fastcall NtQueryWnfStateNameInformation(
        __int64 *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        int *a4,
        unsigned int Length)
{
  int *v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  int v13; // esi
  int v14; // r13d
  ACCESS_MASK v15; // r12d
  struct _KTHREAD *v16; // r8
  int v17; // ecx
  _KPROCESS *Process; // rdx
  __int64 v19; // r9
  struct _EX_RUNDOWN_REF *v20; // rcx
  unsigned __int64 v21; // rtt
  struct _EX_RUNDOWN_REF *v22; // rcx
  unsigned __int64 v23; // rtt
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  SIZE_T NumberOfBytes; // [rsp+28h] [rbp-B0h]
  unsigned int v28; // [rsp+30h] [rbp-A8h]
  unsigned int v29; // [rsp+38h] [rbp-A0h]
  __int64 v30; // [rsp+40h] [rbp-98h] BYREF
  int v31; // [rsp+48h] [rbp-90h]
  unsigned __int64 v32; // [rsp+50h] [rbp-88h] BYREF
  int v33; // [rsp+58h] [rbp-80h]
  PVOID P; // [rsp+60h] [rbp-78h] BYREF
  int v35[2]; // [rsp+68h] [rbp-70h] BYREF
  PSID Sid; // [rsp+70h] [rbp-68h] BYREF
  int v37; // [rsp+78h] [rbp-60h]
  int v38; // [rsp+88h] [rbp-50h]
  PVOID v39[2]; // [rsp+A0h] [rbp-38h] BYREF

  v5 = a4;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v35 = 0LL;
  v30 = 0LL;
  v29 = 0;
  v39[0] = 0LL;
  v39[1] = 0LL;
  v10 = ExpCaptureWnfStateName(a1, &v32, PreviousMode);
  v28 = v10;
  if ( v10 >= 0 )
  {
    v12 = v32;
    v33 = (v32 >> 4) & 3;
    v29 = (v32 >> 6) & 0xF;
    v10 = ExpWnfCaptureScopeInstanceId(v29, a3, v11, &Sid, v39);
    v28 = v10;
    if ( v10 >= 0 )
    {
      if ( a2 > 2 )
      {
        v10 = -1073741821;
        v28 = -1073741821;
      }
      else
      {
        v38 = 4;
        v37 = 4;
        if ( Length >= 4 )
        {
          if ( PreviousMode )
            ProbeForWrite(v5, Length, 4u);
          v13 = 1;
          if ( a2 )
          {
            v31 = 0;
          }
          else
          {
            v31 = 1;
            if ( a3 )
            {
              v10 = -1073741811;
              v28 = -1073741811;
              goto LABEL_60;
            }
          }
          if ( PreviousMode && a2 )
          {
            v14 = 0;
            if ( a3 )
            {
              v10 = ExpWnfCheckCrossScopeAccess(v12);
              v28 = v10;
              if ( v10 < 0 )
                goto LABEL_60;
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
            v17 = 0;
            if ( v31 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
            }
            else
            {
              v16 = KeGetCurrentThread();
              Process = v16->ApcState.Process;
            }
            v12 = v32;
          }
          else
          {
            Process = PsInitialSystemProcess;
            v17 = 1;
          }
          LODWORD(NumberOfBytes) = v17;
          v10 = ExpWnfResolveScopeInstance(
                  (signed __int64 *)v35,
                  (__int64)Process,
                  (__int64)v16,
                  v29,
                  Sid,
                  NumberOfBytes);
          v28 = v10;
          if ( v10 < 0 )
            goto LABEL_60;
          v10 = ExpWnfLookupNameInstance(*(__int64 *)v35, v12, &v30, v19);
          v28 = v10;
          if ( v10 != -1073741772 || v33 == 3 )
          {
            if ( v10 >= 0 )
            {
              if ( v14 )
                goto LABEL_29;
              v10 = ExpWnfCheckCallerAccess(*(PSECURITY_DESCRIPTOR *)(v30 + 72), v15);
              v28 = v10;
              if ( v10 >= 0 )
                goto LABEL_29;
            }
          }
          else
          {
            v10 = ExpWnfLookupPermanentName(v12, &P);
            v28 = v10;
            if ( v10 >= 0 )
            {
              if ( v14 || (v10 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), v15), v28 = v10, v10 >= 0) )
              {
LABEL_29:
                if ( a2 )
                {
                  if ( a2 == 1 )
                  {
                    if ( v30 && *(_DWORD *)(v30 + 160) )
                      goto LABEL_37;
                  }
                  else if ( !v30 || !*(_DWORD *)(v30 + 164) )
                  {
                    goto LABEL_37;
                  }
                  v13 = 0;
                }
LABEL_37:
                *a4 = v13;
                v10 = 0;
                v28 = 0;
                v5 = a4;
                goto LABEL_38;
              }
            }
          }
LABEL_60:
          v5 = a4;
          goto LABEL_38;
        }
        v10 = -1073741811;
        v28 = -1073741811;
      }
    }
  }
LABEL_38:
  if ( v10 == -1073741772 && !a2 )
  {
    *v5 = 0;
    v28 = 0;
  }
  if ( v30 )
  {
    v20 = (struct _EX_RUNDOWN_REF *)(v30 + 8);
    _m_prefetchw((const void *)(v30 + 8));
    v21 = *(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v21 != _InterlockedCompareExchange64((volatile signed __int64 *)v20, v21 - 2, v21) )
      ExfReleaseRundownProtection(v20);
  }
  if ( *(_QWORD *)v35 )
  {
    v22 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)v35 + 8LL);
    _m_prefetchw((const void *)(*(_QWORD *)v35 + 8LL));
    v23 = v22->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v23 != _InterlockedCompareExchange64((volatile signed __int64 *)v22, v23 - 2, v23) )
      ExfReleaseRundownProtection(v22);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  ExpWnfReleaseCapturedScopeInstanceId(v29, v39, PreviousMode);
  v24 = KeGetCurrentThread();
  v25 = v24->KernelApcDisable + 1;
  v24->KernelApcDisable = v25;
  if ( !v25
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
    && !v24->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v28;
}
