/*
 * XREFs of PspCreateThread @ 0x14044564C
 * Callers:
 *     NtCreateThreadEx @ 0x14044528C (NtCreateThreadEx.c)
 *     PsCreateSystemThreadEx @ 0x1404D211C (PsCreateSystemThreadEx.c)
 *     NtCreateThread @ 0x14063E6F8 (NtCreateThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     PspMapThreadCreationFlags @ 0x14044593C (PspMapThreadCreationFlags.c)
 */

NTSTATUS __fastcall PspCreateThread(
        __int64 a1,
        int a2,
        __int64 a3,
        void *a4,
        struct _EX_RUNDOWN_REF *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  struct _KTHREAD *CurrentThread; // r14
  char PreviousMode; // r13
  struct _EX_RUNDOWN_REF *v15; // rbx
  int Thread; // edi
  NTSTATUS result; // eax
  __int64 v18; // r15
  unsigned __int8 *v19; // r15
  int inserted; // eax
  struct _EX_RUNDOWN_REF *v21; // rcx
  int v22; // ebx
  struct _LIST_ENTRY *v23; // [rsp+30h] [rbp-D0h]
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  __int64 v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int64 v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  _KPROCESS *Process; // [rsp+B8h] [rbp-48h]
  __int64 v36[4]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v37[100]; // [rsp+E0h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v33 = a1;
  v29 = a6;
  v32 = a7;
  v26 = a9;
  v27 = a12;
  v28 = a13;
  Process = CurrentThread->ApcState.Process;
  v34 = a3;
  HIDWORD(v24) = a2;
  v31 = a8;
  if ( a8 )
    PreviousMode = CurrentThread->PreviousMode;
  else
    PreviousMode = 0;
  v25 = 0LL;
  v15 = 0LL;
  Object = 0LL;
  Thread = -1073741816;
  if ( a4 )
  {
    result = ObReferenceObjectByHandleWithTag(
               a4,
               2u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x72437350u,
               &Object,
               0LL);
    v15 = (struct _EX_RUNDOWN_REF *)Object;
  }
  else
  {
    if ( !a8 )
    {
      ObfReferenceObjectWithTag(a5, 0x72437350u);
      v15 = a5;
      goto LABEL_6;
    }
    result = -1073741816;
  }
  if ( result < 0 )
    return result;
LABEL_6:
  v18 = a11;
  if ( a11 && a8 )
    v18 = -(__int64)(v15[90].Count != 0) & a11;
  if ( !v29 && !v18 && ((HIDWORD(v15[96].Ptr) & 0x10) != 0 || (Process[1].DirectoryTableBase & 0x1000000000LL) != 0) )
    return -1073741790;
  if ( PreviousMode && v15 == (struct _EX_RUNDOWN_REF *)PsInitialSystemProcess || (HIDWORD(v15[215].Ptr) & 1) != 0 )
  {
LABEL_24:
    ObfDereferenceObjectWithTag(v15, 0x72437350u);
    return Thread;
  }
  PspMapThreadCreationFlags(a10, &v24);
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(v15 + 92) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    Thread = -1073741558;
    goto LABEL_24;
  }
  ObfReferenceObjectWithTag(v15, 0x72437350u);
  v36[0] = v26;
  v23 = (struct _LIST_ENTRY *)v18;
  v19 = (unsigned __int8 *)v29;
  Thread = PspAllocateThread(
             (ULONG_PTR)v15,
             v34,
             PreviousMode,
             v29,
             v31,
             v36,
             v23,
             v27,
             (int *)&v24,
             (__int64 *)&v25,
             (_BYTE *)v28,
             v37);
  if ( Thread < 0 )
  {
    ExReleaseRundownProtection_0(v15 + 92);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_24;
  }
  ObfDereferenceObjectWithTag(v15, 0x72437350u);
  inserted = PspInsertThread(
               (char *)v25,
               (ULONG_PTR)v15,
               v26,
               &v24,
               SHIDWORD(v24),
               (_BYTE *)v28,
               v19,
               v27,
               (__int64)v37,
               (_QWORD *)v33,
               (_OWORD *)v32);
  v21 = v15 + 92;
  v22 = inserted;
  ExReleaseRundownProtection_0(v21);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  ObfDereferenceObject(v25);
  return v22;
}
