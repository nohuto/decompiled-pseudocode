/*
 * XREFs of PspCreateThread @ 0x140457BE8
 * Callers:
 *     PsCreateSystemThreadEx @ 0x1403E5D7C (PsCreateSystemThreadEx.c)
 *     NtCreateThreadEx @ 0x140457828 (NtCreateThreadEx.c)
 *     NtCreateThread @ 0x14067CCE4 (NtCreateThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     PspMapThreadCreationFlags @ 0x140457EFC (PspMapThreadCreationFlags.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
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
  KPROCESSOR_MODE PreviousMode; // r12
  struct _EX_RUNDOWN_REF *v15; // rbx
  int Thread; // edi
  NTSTATUS result; // eax
  __int64 v18; // r15
  __int64 v19; // r15
  int inserted; // eax
  struct _EX_RUNDOWN_REF *v21; // rcx
  int v22; // ebx
  __int64 v23; // [rsp+30h] [rbp-D0h]
  __int64 v24; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v25; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  __int64 v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  _KPROCESS *Process; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int64 v35[4]; // [rsp+C0h] [rbp-40h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+E0h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v34 = a1;
  v27 = a6;
  v33 = a7;
  v30 = a9;
  v28 = a12;
  v29 = a13;
  Process = CurrentThread->ApcState.Process;
  v32 = a3;
  HIDWORD(v24) = a2;
  if ( a8 )
    PreviousMode = CurrentThread->PreviousMode;
  else
    PreviousMode = 0;
  v25 = 0LL;
  v15 = 0LL;
  Thread = -1073741816;
  Object = 0LL;
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
      goto LABEL_10;
    }
    result = -1073741816;
  }
  if ( result < 0 )
    return result;
LABEL_10:
  v18 = a11;
  if ( a11 && a8 )
    v18 = -(__int64)(v15[90].Count != 0) & a11;
  if ( !v27 && !v18 && ((HIDWORD(v15[96].Ptr) & 0x10) != 0 || (Process[1].DirectoryTableBase & 0x1000000000LL) != 0) )
    return -1073741790;
  if ( PreviousMode && (v15 == (struct _EX_RUNDOWN_REF *)PsInitialSystemProcess || (HIDWORD(v15[217].Ptr) & 1) != 0) )
    goto LABEL_20;
  if ( (HIDWORD(v15[217].Ptr) & 1) != 0 && !v15[226].Count && a8 )
  {
    Thread = -1073741790;
LABEL_20:
    ObfDereferenceObjectWithTag(v15, 0x72437350u);
    return Thread;
  }
  PspMapThreadCreationFlags(a10, &v24);
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(v15 + 92) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    Thread = -1073741558;
    goto LABEL_20;
  }
  ObfReferenceObjectWithTag(v15, 0x72437350u);
  v35[0] = v30;
  v23 = v18;
  v19 = v27;
  Thread = PspAllocateThread(
             (ULONG_PTR)v15,
             a8,
             (__int64)v35,
             v23,
             v28,
             (__int64)&v24,
             (__int64)&v25,
             v29,
             (__int64)&AccessState);
  if ( Thread < 0 )
  {
    ExReleaseRundownProtection(v15 + 92);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_20;
  }
  ObfDereferenceObjectWithTag(v15, 0x72437350u);
  inserted = PspInsertThread(v25, SHIDWORD(v24), v29, v19, v28, &AccessState, v34, v33);
  v21 = v15 + 92;
  v22 = inserted;
  ExReleaseRundownProtection(v21);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  ObfDereferenceObject(v25);
  return v22;
}
