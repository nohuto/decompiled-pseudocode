/*
 * XREFs of PspInsertProcess @ 0x14045E490
 * Callers:
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x1404CDA18 (PspCreateProcess.c)
 *     PsCreateMinimalProcess @ 0x14057E7B8 (PsCreateMinimalProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x1400760AC (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1400760E8 (PspLockProcessListExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObCheckRefTraceProcess @ 0x14045E6E8 (ObCheckRefTraceProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x14045E744 (DbgkCopyProcessDebugPort.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14045F3F4 (SeAuditingWithTokenForSubcategory.c)
 *     SeCreateAccessStateEx @ 0x1404B6E3C (SeCreateAccessStateEx.c)
 *     PspValidateJobAffinityState @ 0x1404C3034 (PspValidateJobAffinityState.c)
 *     PspImplicitAssignProcessToJob @ 0x1404D65FC (PspImplicitAssignProcessToJob.c)
 *     SeAuditProcessCreation @ 0x14056F30C (SeAuditProcessCreation.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        __int64 a2,
        unsigned int a3,
        char a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        struct _SECURITY_SUBJECT_CONTEXT *AccessState)
{
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r13
  int inserted; // edi
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  PVOID v16; // rbp
  char v17; // bp
  int v18; // edx
  struct _SECURITY_SUBJECT_CONTEXT *v19; // rsi
  unsigned int v20; // r12d
  __int64 v21; // rcx
  NTSTATUS v23; // eax
  char v24; // [rsp+80h] [rbp+8h]
  PVOID v25; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+18h]

  v26 = a3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(*((_QWORD *)Object + 131) + 40LL) = *((_DWORD *)Object + 186);
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(134LL) )
    SeAuditProcessCreation((PEPROCESS)Object);
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 944) )
    {
      inserted = PspImplicitAssignProcessToJob(*(PVOID *)(a2 + 944), (ULONG_PTR)Object);
      if ( inserted < 0 )
        goto LABEL_34;
    }
  }
  PspLockProcessListExclusive((__int64)CurrentThread);
  v14 = (_QWORD *)qword_1403015E8;
  v15 = Object + 752;
  if ( *(__int64 **)qword_1403015E8 != &PsActiveProcessHead )
    __fastfail(3u);
  *((_QWORD *)Object + 95) = qword_1403015E8;
  *v15 = &PsActiveProcessHead;
  *v14 = v15;
  qword_1403015E8 = (__int64)(Object + 752);
  *((_QWORD *)Object + 232) = ++PspProcessSequenceNumber;
  PspUnlockProcessListExclusive((__int64)CurrentThread);
  if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
  {
    inserted = -1073741558;
  }
  else
  {
    if ( Handle )
    {
      v23 = ObReferenceObjectByHandle(Handle, 2u, DbgkDebugObjectType, KeGetCurrentThread()->PreviousMode, &v25, 0LL);
      v16 = v25;
      inserted = v23;
      if ( v23 < 0 )
        goto LABEL_34;
    }
    else
    {
      v16 = 0LL;
    }
    inserted = DbgkCopyProcessDebugPort((ULONG_PTR)Object);
    if ( v16 )
      ObfDereferenceObject(v16);
    if ( inserted >= 0 )
    {
      if ( v24 && (a4 & 2) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
      v17 = 0;
      if ( !a2 || (v18 = (int)PsInitialSystemProcess, (PEPROCESS)a2 != PsInitialSystemProcess) )
      {
        if ( (a6 & 2) != 0 )
        {
          v18 = (int)Object;
          v17 = 1;
        }
        else
        {
          v18 = (int)Process;
        }
      }
      v19 = AccessState;
      v20 = v26;
      inserted = SeCreateAccessStateEx(
                   0,
                   v18,
                   (_DWORD)AccessState,
                   (int)AccessState + 160,
                   v26,
                   (__int64)PsProcessType + 76);
      if ( inserted >= 0 )
      {
        ObfReferenceObjectWithTag(Object, 0x72437350u);
        inserted = ObInsertObjectEx(Object, v19, v20, 0, v17, 0LL, 0LL);
        if ( inserted >= 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x72437350u);
          v21 = *((_QWORD *)Object + 118);
          if ( !v21 )
          {
            _InterlockedOr((volatile signed __int32 *)Object + 193, 0x4000000u);
            goto LABEL_22;
          }
          inserted = PspValidateJobAffinityState(v21, Object);
          if ( inserted >= 0 )
          {
LABEL_22:
            ObCheckRefTraceProcess(Object);
            if ( (a6 & 1) != 0 )
              PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
            return 0LL;
          }
        }
        SeDeleteAccessState(v19);
      }
    }
  }
LABEL_34:
  if ( (a6 & 1) != 0 )
    PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
  return (unsigned int)inserted;
}
