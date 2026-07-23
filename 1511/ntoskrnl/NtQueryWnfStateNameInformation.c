/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1404B550C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpWnfLookupPermanentName @ 0x1403E0F08 (ExpWnfLookupPermanentName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1403E51C8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x1403E5210 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1403E55A8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1403E5B1C (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x1403E5C68 (ExpWnfCheckCallerAccess.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404BF3D0 (ExpWnfCheckCrossScopeAccess.c)
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  _DWORD *v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  NTSTATUS v10; // edi
  KPROCESSOR_MODE v11; // r8
  __int64 v12; // rbx
  int v13; // esi
  int v14; // r13d
  ACCESS_MASK v15; // r12d
  struct _KTHREAD *v16; // r8
  _KPROCESS *Process; // rdx
  int v18; // eax
  int v20; // [rsp+38h] [rbp-A0h]
  __int64 v21; // [rsp+40h] [rbp-98h] BYREF
  int v22; // [rsp+48h] [rbp-90h]
  PVOID P; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-80h] BYREF
  int v25; // [rsp+60h] [rbp-78h]
  int v26[2]; // [rsp+68h] [rbp-70h] BYREF
  int v27; // [rsp+70h] [rbp-68h]
  PSID Sid[2]; // [rsp+88h] [rbp-50h] BYREF
  int v29; // [rsp+98h] [rbp-40h]
  PVOID v30[2]; // [rsp+A0h] [rbp-38h] BYREF

  v5 = InfoBuffer;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v26 = 0LL;
  v21 = 0LL;
  v20 = 0;
  v30[0] = 0LL;
  v30[1] = 0LL;
  v10 = ExpCaptureWnfStateName((__int64 *)StateName, &v24, PreviousMode);
  if ( v10 >= 0 )
  {
    v12 = v24;
    v25 = (v24 >> 4) & 3;
    v20 = (v24 >> 6) & 0xF;
    v10 = ExpWnfCaptureScopeInstanceId(v20, (int *)ExplicitScope, v11, Sid, v30);
    if ( v10 >= 0 )
    {
      if ( (unsigned int)NameInfoClass > WnfInfoIsQuiescent )
      {
        v10 = -1073741821;
      }
      else
      {
        v29 = 4;
        v27 = 4;
        if ( InfoBufferSize >= 4 )
        {
          if ( PreviousMode )
            ProbeForWrite(v5, InfoBufferSize, 4u);
          v13 = 1;
          if ( NameInfoClass )
          {
            v22 = 0;
          }
          else
          {
            v22 = 1;
            if ( ExplicitScope )
            {
              v10 = -1073741811;
              goto LABEL_56;
            }
          }
          if ( PreviousMode && NameInfoClass )
          {
            v14 = 0;
            if ( ExplicitScope )
            {
              v10 = ExpWnfCheckCrossScopeAccess(v12);
              if ( v10 < 0 )
                goto LABEL_56;
            }
          }
          else
          {
            v14 = 1;
          }
          v15 = 0;
          if ( !v14 && (unsigned int)(NameInfoClass - 1) <= 1 )
            v15 = 2;
          v16 = 0LL;
          if ( PreviousMode )
          {
            if ( v22 )
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
          v10 = ExpWnfResolveScopeInstance((struct _EX_RUNDOWN_REF **)v26, (__int64)Process, (__int64)v16, v20, Sid[0]);
          if ( v10 >= 0 )
          {
            v18 = ExpWnfLookupNameInstance(*(__int64 *)v26, v12, &v21);
            v10 = v18;
            if ( v18 != -1073741772 || v25 == 3 )
            {
              if ( v18 >= 0 )
              {
                if ( v14 )
                  goto LABEL_29;
                v10 = ExpWnfCheckCallerAccess(*(PSECURITY_DESCRIPTOR *)(v21 + 72), v15);
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
                  if ( NameInfoClass )
                  {
                    if ( NameInfoClass == WnfInfoSubscribersPresent )
                    {
                      if ( v21 && *(_DWORD *)(v21 + 160) )
                        goto LABEL_37;
                    }
                    else if ( !v21 || !*(_DWORD *)(v21 + 164) )
                    {
                      goto LABEL_37;
                    }
                    v13 = 0;
                  }
LABEL_37:
                  *(_DWORD *)InfoBuffer = v13;
                  v10 = 0;
                  v5 = InfoBuffer;
                  goto LABEL_38;
                }
              }
            }
          }
LABEL_56:
          v5 = InfoBuffer;
          goto LABEL_38;
        }
        v10 = -1073741811;
      }
    }
  }
LABEL_38:
  if ( v10 == -1073741772 && NameInfoClass == WnfInfoStateNameExist )
  {
    *v5 = 0;
    v10 = 0;
  }
  if ( v21 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v21 + 8));
  if ( *(_QWORD *)v26 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v26 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  ExpWnfReleaseCapturedScopeInstanceId(v20, v30, PreviousMode);
  KeLeaveCriticalRegion();
  return v10;
}
