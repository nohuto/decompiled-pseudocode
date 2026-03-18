/*
 * XREFs of NtCreateWnfStateName @ 0x1403E262C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExpWnfGenerateStateName @ 0x1403E295C (ExpWnfGenerateStateName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1403E2A80 (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x1403E5290 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x140434450 (SeCaptureSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ExpWnfRegisterPermanentName @ 0x1404C2D98 (ExpWnfRegisterPermanentName.c)
 */

__int64 __fastcall NtCreateWnfStateName(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        ULONG64 a5,
        unsigned int a6,
        PSECURITY_DESCRIPTOR a7)
{
  unsigned int v8; // r13d
  __int128 *v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int NameInstance; // edi
  __int64 v14; // r9
  __int64 v15; // rbx
  _KPROCESS *Process; // rsi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp-B0h] BYREF
  int v19[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-A0h] BYREF
  __int128 *v21; // [rsp+50h] [rbp-98h]
  PSECURITY_DESCRIPTOR v22; // [rsp+58h] [rbp-90h]
  __int64 *v23; // [rsp+60h] [rbp-88h]
  struct _EX_RUNDOWN_REF *v24; // [rsp+78h] [rbp-70h] BYREF
  unsigned int v25; // [rsp+80h] [rbp-68h] BYREF
  __int128 *v26; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v27; // [rsp+90h] [rbp-58h]
  __int128 v28; // [rsp+98h] [rbp-50h] BYREF

  v8 = a3;
  v23 = a1;
  v10 = (__int128 *)a5;
  v22 = a7;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v19 = 0LL;
  SecurityDescriptor = 0LL;
  v21 = (__int128 *)a5;
  if ( !PreviousMode )
  {
    NameInstance = SeCaptureSecurityDescriptor((_DWORD)a7, 0, 1, 1, (__int64)&SecurityDescriptor);
    if ( NameInstance < 0 )
      goto LABEL_27;
LABEL_13:
    ExpWnfSpecializeSecurityDescriptor(SecurityDescriptor);
    if ( a2 <= 3 && a2 && v8 <= 4 && (!a4 || (v8 & 0xFFFFFFFB) == 0 && a2 == 1) && a6 <= 0x1000 )
    {
      if ( a2 != 3 )
      {
        if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
        {
          NameInstance = -1073741727;
          goto LABEL_27;
        }
        goto LABEL_20;
      }
      if ( v8 != 3 )
      {
LABEL_20:
        LOBYTE(v14) = a4;
        NameInstance = ExpWnfGenerateStateName(&v20, a2, v8, v14);
        if ( NameInstance >= 0 )
        {
          v15 = v20;
          *v23 = v20 ^ 0x41C64E6DA3BC0074LL;
          v25 = a6;
          v26 = v21;
          v27 = SecurityDescriptor;
          if ( a2 == 3 )
          {
            if ( PreviousMode )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              LODWORD(v15) = v20;
            }
            else
            {
              LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
            }
            NameInstance = ExpWnfResolveScopeInstance((int)v19, (int)Process, 0, v8, 0LL);
            if ( NameInstance >= 0 )
            {
              NameInstance = ExpWnfCreateNameInstance(v19[0], v15, (unsigned int)&v25, (_DWORD)Process, (__int64)&v24);
              if ( NameInstance >= 0 )
                ExReleaseRundownProtection_0(v24 + 1);
            }
          }
          else
          {
            NameInstance = ExpWnfRegisterPermanentName(v15, &v25);
          }
        }
        goto LABEL_27;
      }
    }
    NameInstance = -1073741811;
    goto LABEL_27;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  *(_BYTE *)a1 = *(_BYTE *)a1;
  *((_BYTE *)a1 + 7) = *((_BYTE *)a1 + 7);
  if ( a5 )
  {
    if ( a5 >= MmUserProbeAddress )
      v10 = (__int128 *)MmUserProbeAddress;
    v28 = *v10;
    v21 = &v28;
  }
  if ( !a7 )
  {
    NameInstance = -1073741819;
    goto LABEL_27;
  }
  LOBYTE(v10) = PreviousMode;
  NameInstance = SeCaptureSecurityDescriptor((_DWORD)a7, (_DWORD)v10, 1, 1, (__int64)&SecurityDescriptor);
  if ( NameInstance >= 0 )
    goto LABEL_13;
LABEL_27:
  if ( *(_QWORD *)v19 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v19 + 8LL));
  if ( SecurityDescriptor && SecurityDescriptor != a7 )
  {
    LOBYTE(a3) = 1;
    LOBYTE(v10) = PreviousMode;
    SeReleaseSecurityDescriptor(SecurityDescriptor, v10, a3);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)NameInstance;
}
