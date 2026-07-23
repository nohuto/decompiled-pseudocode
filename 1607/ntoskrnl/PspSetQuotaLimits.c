/*
 * XREFs of PspSetQuotaLimits @ 0x1404C28C8
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MmEnforceWorkingSetLimit @ 0x140076D74 (MmEnforceWorkingSetLimit.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400AB9B4 (MmAdjustWorkingSetSizeEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14041423C (SePrivilegedServiceAuditAlarm.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     PspAssignProcessQuotaBlock @ 0x1404BAE98 (PspAssignProcessQuotaBlock.c)
 *     PspSinglePrivCheck @ 0x1404C2CF4 (PspSinglePrivCheck.c)
 */

NTSTATUS __fastcall PspSetQuotaLimits(HANDLE Handle, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  NTSTATUS result; // eax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r15d
  char v11; // r12
  _QWORD *v12; // r14
  char v13; // r13
  __int64 v14; // r14
  bool v15; // zf
  _BYTE *v16; // rax
  _BYTE *v17; // r15
  int v18; // r14d
  signed __int64 *v19; // rdi
  PACCESS_TOKEN v20; // rbx
  char v21; // [rsp+40h] [rbp-128h]
  char v22; // [rsp+41h] [rbp-127h]
  char v23; // [rsp+42h] [rbp-126h]
  char v24; // [rsp+43h] [rbp-125h]
  char v25; // [rsp+44h] [rbp-124h]
  _BYTE v26[3]; // [rsp+45h] [rbp-123h] BYREF
  int v27; // [rsp+48h] [rbp-120h]
  PVOID Object; // [rsp+50h] [rbp-118h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-110h]
  _QWORD *v30; // [rsp+60h] [rbp-108h]
  _OWORD v31[6]; // [rsp+70h] [rbp-F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-98h] BYREF
  int v33[5]; // [rsp+F0h] [rbp-78h] BYREF
  char v34; // [rsp+104h] [rbp-64h]
  char v35; // [rsp+105h] [rbp-63h]
  _BYTE v36[48]; // [rsp+108h] [rbp-60h] BYREF

  if ( a3 == 48 )
  {
    v31[0] = *(_OWORD *)a2;
    v31[1] = *(_OWORD *)(a2 + 16);
    v31[2] = *(_OWORD *)(a2 + 32);
    memset(&v31[3], 0, 0x28uLL);
    v21 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return -1073741820;
    v21 = 0;
    v31[0] = *(_OWORD *)a2;
    v31[1] = *(_OWORD *)(a2 + 16);
    v31[2] = *(_OWORD *)(a2 + 32);
    v31[3] = *(_OWORD *)(a2 + 48);
    v31[4] = *(_OWORD *)(a2 + 64);
    *(_QWORD *)&v31[5] = *(_QWORD *)(a2 + 80);
  }
  if ( (v31[5] & 0xFFFFFFE0) != 0 || (v31[5] & 3) == 3 || (v31[5] & 0xC) == 0xC )
    return -1073741811;
  if ( (v31[5] & 1) != 0 )
  {
    v7 = 4;
  }
  else
  {
    v7 = 0;
    if ( (v31[5] & 2) != 0 )
      v7 = 8;
  }
  if ( (v31[5] & 4) != 0 )
  {
    v7 |= 1u;
  }
  else if ( (v31[5] & 8) != 0 )
  {
    v7 |= 2u;
  }
  if ( *((_QWORD *)&v31[3] + 1) | *(_QWORD *)&v31[4] | *((_QWORD *)&v31[4] + 1) | DWORD1(v31[5]) )
    return -1073741811;
  result = ObReferenceObjectByHandleWithTag(Handle, 0x100u, (POBJECT_TYPE)PsProcessType, a4, 0x79517350u, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 0;
    if ( *((_UNKNOWN **)Object + 130) != &PspSystemQuotaBlock || *(_QWORD *)&v31[1] && *((_QWORD *)&v31[1] + 1) )
    {
      if ( *(_QWORD *)&v31[1] && *((_QWORD *)&v31[1] + 1) )
      {
        if ( v31[1] == __PAIR128__(-1LL, -1LL) )
        {
          v22 = 1;
          LOBYTE(v27) = 0;
          v25 = 0;
        }
        else
        {
          v22 = 0;
          LOBYTE(v9) = a4;
          v27 = PspSinglePrivCheck(&PspSystemQuotaBlock, v8, v9, &SubjectContext);
          v25 = 1;
        }
        v11 = 0;
        v12 = Object;
        v30 = Object;
        do
        {
          v13 = 0;
          v23 = 0;
          v24 = 0;
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v36);
          --CurrentThread->SpecialApcDisable;
          v14 = v12[118];
          if ( v14 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            if ( (*(_DWORD *)(v14 + 848) & 1) != 0 )
            {
              v7 = 1;
              LOBYTE(v27) = 1;
              v24 = 1;
              v23 = 1;
              if ( !v22 )
                v31[1] = *(_OWORD *)(v14 + 792);
            }
            v16 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1402F9CD0, 0LL, 0);
            v17 = v16;
            if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402F9CD0, 0LL) )
              ExfAcquirePushLockExclusiveEx(&qword_1402F9CD0, v16, (ULONG_PTR)&qword_1402F9CD0);
            if ( v17 )
              v17[26] |= 1u;
            ExReleaseResourceLite((PERESOURCE)(v14 + 56));
            v13 = v23;
          }
          v10 = MmAdjustWorkingSetSizeEx(
                  *(unsigned __int64 *)&v31[1],
                  *((unsigned __int64 *)&v31[1] + 1),
                  0,
                  v27,
                  v7,
                  v26);
          if ( v10 < 0 && v13 == 1 )
            MmEnforceWorkingSetLimit((_KPROCESS *)Object, v7);
          if ( v14 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402F9CD0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402F9CD0);
            KeAbPostRelease((ULONG_PTR)&qword_1402F9CD0);
          }
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          KiUnstackDetachProcess((struct _KTHREAD *)v36, 0);
          if ( v26[0] == 1 && !v24 )
            v11 = 1;
          v15 = v30[118] == v14;
          v12 = v30;
        }
        while ( !v15 );
        if ( v25 == 1 && v34 )
        {
          if ( v11 == 1 )
            SePrivilegedServiceAuditAlarm(L"$&", (__int64 *)&SubjectContext, v33, v35);
          SeReleaseSubjectContext(&SubjectContext);
        }
      }
      goto LABEL_35;
    }
    if ( v21 == 1 )
    {
      memset(v31, 0, 0x58uLL);
      LODWORD(v31[5]) = 16;
    }
    if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a4) )
    {
      v19 = (signed __int64 *)Object;
      v20 = PsReferencePrimaryToken((PEPROCESS)Object);
      v18 = PspAssignProcessQuotaBlock((__int64)v31, (__int64)v19, (__int64)v20);
      ObFastDereferenceObject(v19 + 107, (unsigned __int64)v20);
      if ( v18 >= 0 )
      {
LABEL_35:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v10;
      }
    }
    else
    {
      v18 = -1073741727;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return v18;
  }
  return result;
}
