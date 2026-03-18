/*
 * XREFs of NtCreateWnfStateName @ 0x1403F6B44
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExpWnfGenerateStateName @ 0x1403F6E6C (ExpWnfGenerateStateName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1403F6F64 (ExpWnfSpecializeSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSecurityDescriptor @ 0x140420EC0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14044DB84 (SeReleaseSecurityDescriptor.c)
 *     ExpWnfCreateNameInstance @ 0x140462594 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404629B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfRegisterPermanentName @ 0x1404EF04C (ExpWnfRegisterPermanentName.c)
 */

__int64 __fastcall NtCreateWnfStateName(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned int a6,
        PSECURITY_DESCRIPTOR a7)
{
  unsigned int v8; // r13d
  __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int StateName; // edi
  __int64 v14; // r9
  __int64 v15; // rbx
  _KPROCESS *Process; // rsi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp-B0h] BYREF
  int v19[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 *v20; // [rsp+48h] [rbp-A0h]
  _QWORD v21[3]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD *v22; // [rsp+68h] [rbp-80h]
  struct _EX_RUNDOWN_REF *v23; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v24; // [rsp+80h] [rbp-68h] BYREF
  __int128 *v25; // [rsp+88h] [rbp-60h]
  PSECURITY_DESCRIPTOR v26; // [rsp+90h] [rbp-58h]
  __int128 v27; // [rsp+98h] [rbp-50h] BYREF

  v8 = a3;
  v22 = (_QWORD *)a1;
  v10 = a5;
  v21[1] = a7;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v19 = 0LL;
  SecurityDescriptor = 0LL;
  v20 = (__int128 *)a5;
  if ( !PreviousMode )
  {
    StateName = SeCaptureSecurityDescriptor((_DWORD)a7, 0, 1, 1, (__int64)&SecurityDescriptor);
    if ( StateName < 0 )
      goto LABEL_27;
LABEL_13:
    ExpWnfSpecializeSecurityDescriptor(SecurityDescriptor);
    if ( a2 <= 3 && a2 && v8 <= 4 && (!a4 || (v8 & 0xFFFFFFFB) == 0 && a2 == 1) && a6 <= 0x1000 )
    {
      if ( a2 != 3 )
      {
        if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
        {
          StateName = -1073741727;
          goto LABEL_27;
        }
        goto LABEL_20;
      }
      if ( v8 != 3 )
      {
LABEL_20:
        LOBYTE(v14) = a4;
        StateName = ExpWnfGenerateStateName(v21, a2, v8, v14);
        if ( StateName >= 0 )
        {
          v15 = v21[0];
          *v22 = v21[0] ^ 0x41C64E6DA3BC0074LL;
          v24 = a6;
          v25 = v20;
          v26 = SecurityDescriptor;
          if ( a2 == 3 )
          {
            if ( PreviousMode )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              LODWORD(v15) = v21[0];
            }
            else
            {
              LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
            }
            StateName = ExpWnfResolveScopeInstance((int)v19, (int)Process, 0, v8, 0LL);
            if ( StateName >= 0 )
            {
              StateName = ExpWnfCreateNameInstance(v19[0], v15, (unsigned int)&v24, (_DWORD)Process, (__int64)&v23);
              if ( StateName >= 0 )
                ExReleaseRundownProtection(v23 + 1);
            }
          }
          else
          {
            StateName = ExpWnfRegisterPermanentName(v15, &v24);
          }
        }
        goto LABEL_27;
      }
    }
    StateName = -1073741811;
    goto LABEL_27;
  }
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_BYTE *)a1 = *(_BYTE *)a1;
  *(_BYTE *)(a1 + 7) = *(_BYTE *)(a1 + 7);
  if ( a5 )
  {
    if ( a5 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    v27 = *(_OWORD *)v10;
    v20 = &v27;
  }
  if ( !a7 )
  {
    StateName = -1073741819;
    goto LABEL_27;
  }
  LOBYTE(v10) = PreviousMode;
  StateName = SeCaptureSecurityDescriptor((_DWORD)a7, v10, 1, 1, (__int64)&SecurityDescriptor);
  if ( StateName >= 0 )
    goto LABEL_13;
LABEL_27:
  if ( *(_QWORD *)v19 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v19 + 8LL));
  if ( SecurityDescriptor && SecurityDescriptor != a7 )
  {
    LOBYTE(a3) = 1;
    LOBYTE(v10) = PreviousMode;
    SeReleaseSecurityDescriptor(SecurityDescriptor, v10, a3);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)StateName;
}
