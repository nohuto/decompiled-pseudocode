/*
 * XREFs of PspSetQuotaLimits @ 0x1404524F0
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     MmEnforceWorkingSetLimit @ 0x140021C18 (MmEnforceWorkingSetLimit.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     MmAdjustWorkingSetSizeEx @ 0x140096B2C (MmAdjustWorkingSetSizeEx.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspAssignProcessQuotaBlock @ 0x1403BD170 (PspAssignProcessQuotaBlock.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     PspSinglePrivCheck @ 0x140452944 (PspSinglePrivCheck.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140472A30 (SePrivilegedServiceAuditAlarm.c)
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
  __int64 v15; // r9
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // r15
  int v19; // r14d
  signed __int64 *v20; // rdi
  PACCESS_TOKEN v21; // rbx
  char v22; // [rsp+40h] [rbp-128h]
  char v23; // [rsp+41h] [rbp-127h]
  char v24; // [rsp+42h] [rbp-126h]
  char v25; // [rsp+43h] [rbp-125h]
  char v26; // [rsp+44h] [rbp-124h]
  _BYTE v27[3]; // [rsp+45h] [rbp-123h] BYREF
  int v28; // [rsp+48h] [rbp-120h]
  PVOID Object; // [rsp+50h] [rbp-118h] BYREF
  _QWORD *v30; // [rsp+58h] [rbp-110h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-108h]
  _OWORD v32[6]; // [rsp+70h] [rbp-F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v34[24]; // [rsp+F0h] [rbp-78h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v35; // [rsp+108h] [rbp-60h] BYREF

  if ( a3 == 48 )
  {
    v32[0] = *(_OWORD *)a2;
    v32[1] = *(_OWORD *)(a2 + 16);
    v32[2] = *(_OWORD *)(a2 + 32);
    memset(&v32[3], 0, 0x28uLL);
    v26 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return -1073741820;
    v26 = 0;
    v32[0] = *(_OWORD *)a2;
    v32[1] = *(_OWORD *)(a2 + 16);
    v32[2] = *(_OWORD *)(a2 + 32);
    v32[3] = *(_OWORD *)(a2 + 48);
    v32[4] = *(_OWORD *)(a2 + 64);
    *(_QWORD *)&v32[5] = *(_QWORD *)(a2 + 80);
  }
  if ( (v32[5] & 0xFFFFFFE0) != 0 || (v32[5] & 3) == 3 || (v32[5] & 0xC) == 0xC )
    return -1073741811;
  if ( (v32[5] & 1) != 0 )
  {
    v7 = 4;
  }
  else
  {
    v7 = 0;
    if ( (v32[5] & 2) != 0 )
      v7 = 8;
  }
  if ( (v32[5] & 4) != 0 )
  {
    v7 |= 1u;
  }
  else if ( (v32[5] & 8) != 0 )
  {
    v7 |= 2u;
  }
  if ( *((_QWORD *)&v32[3] + 1) | *(_QWORD *)&v32[4] | *((_QWORD *)&v32[4] + 1) | DWORD1(v32[5]) )
    return -1073741811;
  result = ObReferenceObjectByHandleWithTag(Handle, 0x100u, (POBJECT_TYPE)PsProcessType, a4, 0x79517350u, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 0;
    if ( *((_UNKNOWN **)Object + 130) != &PspSystemQuotaBlock || *(_QWORD *)&v32[1] && *((_QWORD *)&v32[1] + 1) )
    {
      if ( *(_QWORD *)&v32[1] && *((_QWORD *)&v32[1] + 1) )
      {
        if ( v32[1] == __PAIR128__(-1LL, -1LL) )
        {
          v24 = 1;
          LOBYTE(v28) = 0;
          v25 = 0;
        }
        else
        {
          v24 = 0;
          LOBYTE(v9) = a4;
          v28 = PspSinglePrivCheck(&PspSystemQuotaBlock, v8, v9, &SubjectContext);
          v25 = 1;
        }
        v11 = 0;
        v12 = Object;
        v30 = Object;
        do
        {
          v13 = 0;
          v22 = 0;
          v23 = 0;
          KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)&v35);
          --CurrentThread->SpecialApcDisable;
          v14 = v12[118];
          if ( v14 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            if ( (*(_DWORD *)(v14 + 856) & 1) != 0 )
            {
              v7 = 1;
              LOBYTE(v28) = 1;
              v23 = 1;
              v22 = 1;
              if ( !v24 )
                v32[1] = *(_OWORD *)(v14 + 792);
            }
            v17 = KeAbPreAcquire((ULONG_PTR)&qword_1402D4950, 0LL, 0LL);
            v18 = v17;
            if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402D4950, 0LL) )
              ExfAcquirePushLockExclusiveEx(&qword_1402D4950, v17, (ULONG_PTR)&qword_1402D4950);
            if ( v18 )
              *(_BYTE *)(v18 + 26) |= 1u;
            ExReleaseResourceLite((PERESOURCE)(v14 + 56));
            v13 = v22;
          }
          v10 = MmAdjustWorkingSetSizeEx(
                  *(unsigned __int64 *)&v32[1],
                  *((unsigned __int64 *)&v32[1] + 1),
                  0LL,
                  v28,
                  v7,
                  v27);
          if ( v10 < 0 && v13 == 1 )
            MmEnforceWorkingSetLimit((_KPROCESS *)Object, v7);
          if ( v14 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402D4950, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402D4950);
            KeAbPostRelease((ULONG_PTR)&qword_1402D4950);
          }
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          KiUnstackDetachProcess(&v35, 0LL);
          if ( v27[0] == 1 && !v23 )
            v11 = 1;
          v16 = v30[118] == v14;
          v12 = v30;
        }
        while ( !v16 );
        if ( v25 == 1 && v34[20] )
        {
          if ( v11 == 1 )
          {
            LOBYTE(v15) = v34[21];
            SePrivilegedServiceAuditAlarm(L"$&", &SubjectContext, v34, v15);
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
      }
      goto LABEL_36;
    }
    if ( v26 == 1 )
    {
      memset(v32, 0, 0x58uLL);
      LODWORD(v32[5]) = 16;
    }
    if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a4) )
    {
      v20 = (signed __int64 *)Object;
      v21 = PsReferencePrimaryToken((PEPROCESS)Object);
      v19 = PspAssignProcessQuotaBlock((__int64)v32, (__int64)v20, (__int64)v21);
      ObFastDereferenceObject(v20 + 107, (unsigned __int64)v21);
      if ( v19 >= 0 )
      {
LABEL_36:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v10;
      }
    }
    else
    {
      v19 = -1073741727;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return v19;
  }
  return result;
}
