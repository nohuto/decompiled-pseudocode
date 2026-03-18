/*
 * XREFs of PspInsertProcess @ 0x1403E3600
 * Callers:
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x1404C3BAC (PspCreateProcess.c)
 *     PspCreateMinimalProcess @ 0x1406431F4 (PspCreateMinimalProcess.c)
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x14001B46C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x14001B4A8 (PspLockProcessListExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14002BB54 (PspUnlockProcessExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ObCheckRefTraceProcess @ 0x1403E3858 (ObCheckRefTraceProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x1403E38B4 (DbgkCopyProcessDebugPort.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1403E3928 (SeAuditingWithTokenForSubcategory.c)
 *     PspValidateJobAffinityState @ 0x1403E8AD0 (PspValidateJobAffinityState.c)
 *     PspImplicitAssignProcessToJob @ 0x1403E8B34 (PspImplicitAssignProcessToJob.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     SeCreateAccessStateEx @ 0x14046E4F4 (SeCreateAccessStateEx.c)
 *     SeAuditProcessCreation @ 0x14053D024 (SeAuditProcessCreation.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        __int64 a2,
        int a3,
        char a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r13
  int AccessState; // edi
  __int64 **v14; // rcx
  PVOID v15; // rbp
  char v16; // bp
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rcx
  NTSTATUS v21; // eax
  char v22; // [rsp+80h] [rbp+8h]
  PVOID v23; // [rsp+88h] [rbp+10h] BYREF
  int v24; // [rsp+90h] [rbp+18h]

  v24 = a3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(*((_QWORD *)Object + 131) + 40LL) = *((_DWORD *)Object + 186);
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(133LL) )
    SeAuditProcessCreation((ULONG_PTR)Object);
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 944) )
    {
      AccessState = PspImplicitAssignProcessToJob(*(PVOID *)(a2 + 944));
      if ( AccessState < 0 )
        goto LABEL_34;
    }
  }
  PspLockProcessListExclusive((__int64)CurrentThread);
  v14 = (__int64 **)qword_1402DC228;
  *((_QWORD *)Object + 95) = qword_1402DC228;
  *((_QWORD *)Object + 94) = &PsActiveProcessHead;
  if ( *v14 != &PsActiveProcessHead )
    __fastfail(3u);
  *v14 = (__int64 *)(Object + 752);
  qword_1402DC228 = (__int64)(Object + 752);
  *((_QWORD *)Object + 230) = ++PspProcessSequenceNumber;
  PspUnlockProcessListExclusive((__int64)CurrentThread);
  if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
  {
    AccessState = -1073741558;
  }
  else
  {
    if ( Handle )
    {
      v21 = ObReferenceObjectByHandle(Handle, 2u, DbgkDebugObjectType, KeGetCurrentThread()->PreviousMode, &v23, 0LL);
      v15 = v23;
      AccessState = v21;
      if ( v21 < 0 )
        goto LABEL_34;
    }
    else
    {
      v15 = 0LL;
    }
    AccessState = DbgkCopyProcessDebugPort((ULONG_PTR)Object);
    if ( v15 )
      ObfDereferenceObject(v15);
    if ( AccessState >= 0 )
    {
      if ( v22 && (a4 & 2) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
      v16 = 0;
      if ( !a2 || (v17 = (int)PsInitialSystemProcess, (PEPROCESS)a2 != PsInitialSystemProcess) )
      {
        if ( (a6 & 2) != 0 )
        {
          v17 = (int)Object;
          v16 = 1;
        }
        else
        {
          v17 = (int)Process;
        }
      }
      v18 = a8;
      AccessState = SeCreateAccessStateEx(0, v17, a8, (int)a8 + 160, v24, (__int64)PsProcessType + 76);
      if ( AccessState >= 0 )
      {
        ObfReferenceObjectWithTag(Object, 0x72437350u);
        AccessState = ObInsertObjectEx(Object, v16, 0LL, 0LL);
        if ( AccessState >= 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x72437350u);
          v19 = *((_QWORD *)Object + 118);
          if ( !v19 )
          {
            _InterlockedOr((volatile signed __int32 *)Object + 193, 0x4000000u);
            goto LABEL_22;
          }
          AccessState = PspValidateJobAffinityState(v19, Object);
          if ( AccessState >= 0 )
          {
LABEL_22:
            ObCheckRefTraceProcess(Object);
            if ( (a6 & 1) != 0 )
              PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
            return 0LL;
          }
        }
        SeDeleteAccessState(v18);
      }
    }
  }
LABEL_34:
  if ( (a6 & 1) != 0 )
    PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
  return (unsigned int)AccessState;
}
