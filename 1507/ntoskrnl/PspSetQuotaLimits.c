/*
 * XREFs of PspSetQuotaLimits @ 0x14054F6C8
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 * Callees:
 *     MmEnforceWorkingSetLimit @ 0x14000961C (MmEnforceWorkingSetLimit.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012B124 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1404359A8 (SePrivilegedServiceAuditAlarm.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     PspAssignProcessQuotaBlock @ 0x140543A18 (PspAssignProcessQuotaBlock.c)
 *     PspSinglePrivCheck @ 0x14054FB2C (PspSinglePrivCheck.c)
 */

NTSTATUS __fastcall PspSetQuotaLimits(HANDLE Handle, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  NTSTATUS result; // eax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // r13
  int v11; // r15d
  char v12; // r12
  _QWORD *v13; // r15
  char v14; // r14
  __int64 v15; // r15
  __int16 v16; // ax
  bool v17; // zf
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r14
  int v22; // r14d
  signed __int64 *v23; // rdi
  PACCESS_TOKEN v24; // rbx
  char v25; // [rsp+40h] [rbp-128h]
  char v26; // [rsp+41h] [rbp-127h]
  char v27; // [rsp+42h] [rbp-126h]
  char v28; // [rsp+43h] [rbp-125h]
  char v29; // [rsp+44h] [rbp-124h]
  _BYTE v30[3]; // [rsp+45h] [rbp-123h] BYREF
  int v31; // [rsp+48h] [rbp-120h]
  PVOID Object; // [rsp+50h] [rbp-118h] BYREF
  int v33; // [rsp+58h] [rbp-110h]
  _QWORD *v34; // [rsp+60h] [rbp-108h]
  struct _KTHREAD *v35; // [rsp+68h] [rbp-100h]
  _OWORD v36[6]; // [rsp+70h] [rbp-F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-98h] BYREF
  unsigned int v38[5]; // [rsp+F0h] [rbp-78h] BYREF
  char v39; // [rsp+104h] [rbp-64h]
  unsigned __int8 v40; // [rsp+105h] [rbp-63h]
  _BYTE v41[48]; // [rsp+108h] [rbp-60h] BYREF

  if ( a3 == 48 )
  {
    v36[0] = *(_OWORD *)a2;
    v36[1] = *(_OWORD *)(a2 + 16);
    v36[2] = *(_OWORD *)(a2 + 32);
    memset(&v36[3], 0, 0x28uLL);
    v29 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return -1073741820;
    v29 = 0;
    v36[0] = *(_OWORD *)a2;
    v36[1] = *(_OWORD *)(a2 + 16);
    v36[2] = *(_OWORD *)(a2 + 32);
    v36[3] = *(_OWORD *)(a2 + 48);
    v36[4] = *(_OWORD *)(a2 + 64);
    *(_QWORD *)&v36[5] = *(_QWORD *)(a2 + 80);
  }
  if ( (v36[5] & 0xFFFFFFE0) != 0 || (v36[5] & 3) == 3 || (v36[5] & 0xC) == 0xC )
    return -1073741811;
  if ( (v36[5] & 1) != 0 )
  {
    v7 = 4;
  }
  else
  {
    v7 = 0;
    if ( (v36[5] & 2) != 0 )
      v7 = 8;
  }
  if ( (v36[5] & 4) != 0 )
  {
    v7 |= 1u;
  }
  else if ( (v36[5] & 8) != 0 )
  {
    v7 |= 2u;
  }
  if ( *((_QWORD *)&v36[3] + 1) | *(_QWORD *)&v36[4] | *((_QWORD *)&v36[4] + 1) | DWORD1(v36[5]) )
    return -1073741811;
  result = ObReferenceObjectByHandleWithTag(Handle, 0x100u, (POBJECT_TYPE)PsProcessType, a4, 0x79517350u, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v35 = CurrentThread;
    v11 = 0;
    if ( *((_UNKNOWN **)Object + 130) != &PspSystemQuotaBlock || *(_QWORD *)&v36[1] && *((_QWORD *)&v36[1] + 1) )
    {
      if ( *(_QWORD *)&v36[1] && *((_QWORD *)&v36[1] + 1) )
      {
        if ( v36[1] == __PAIR128__(-1LL, -1LL) )
        {
          v27 = 1;
          LOBYTE(v31) = 0;
          v28 = 0;
        }
        else
        {
          v27 = 0;
          LOBYTE(v9) = a4;
          v31 = PspSinglePrivCheck(&PspSystemQuotaBlock, v8, v9, &SubjectContext);
          v28 = 1;
        }
        v12 = 0;
        v13 = Object;
        v34 = Object;
        do
        {
          v14 = 0;
          v25 = 0;
          v26 = 0;
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v41);
          --CurrentThread->SpecialApcDisable;
          v15 = v13[118];
          if ( v15 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v15 + 56), 1u);
            if ( (*(_DWORD *)(v15 + 856) & 1) != 0 )
            {
              v7 = 1;
              LOBYTE(v31) = 1;
              v26 = 1;
              v25 = 1;
              if ( !v27 )
                v36[1] = *(_OWORD *)(v15 + 792);
            }
            v19 = KeAbPreAcquire((ULONG_PTR)&qword_140323A70, 0LL, 0LL, v18);
            v21 = v19;
            if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140323A70, 0LL) )
              ExfAcquirePushLockExclusiveEx(&qword_140323A70, v19, (ULONG_PTR)&qword_140323A70, v20);
            if ( v21 )
              *(_BYTE *)(v21 + 26) |= 1u;
            ExReleaseResourceLite((PERESOURCE)(v15 + 56));
            v14 = v25;
            CurrentThread = v35;
          }
          v33 = MmAdjustWorkingSetSizeEx(
                  *(unsigned __int64 *)&v36[1],
                  *((unsigned __int64 *)&v36[1] + 1),
                  0,
                  v31,
                  v7,
                  v30);
          if ( v33 < 0 && v14 == 1 )
            MmEnforceWorkingSetLimit((_KPROCESS *)Object, v7);
          if ( v15 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140323A70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140323A70);
            KeAbPostRelease((ULONG_PTR)&qword_140323A70);
          }
          v16 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v16;
          if ( !v16
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          KiUnstackDetachProcess((struct _KTHREAD *)v41, 0);
          if ( v30[0] == 1 && !v26 )
            v12 = 1;
          v17 = v34[118] == v15;
          v13 = v34;
        }
        while ( !v17 );
        if ( v28 == 1 && v39 )
        {
          if ( v12 == 1 )
            SePrivilegedServiceAuditAlarm(L"$&", (__int64 *)&SubjectContext, v38, v40);
          SeReleaseSubjectContext(&SubjectContext);
        }
        v11 = v33;
      }
      goto LABEL_39;
    }
    if ( v29 == 1 )
    {
      memset(v36, 0, 0x58uLL);
      LODWORD(v36[5]) = 16;
    }
    if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a4) )
    {
      v23 = (signed __int64 *)Object;
      v24 = PsReferencePrimaryToken((PEPROCESS)Object);
      v22 = PspAssignProcessQuotaBlock((__int64)v36, (__int64)v23, (__int64)v24);
      ObFastDereferenceObject(v23 + 107, (unsigned __int64)v24);
      if ( v22 >= 0 )
      {
LABEL_39:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v11;
      }
    }
    else
    {
      v22 = -1073741727;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return v22;
  }
  return result;
}
