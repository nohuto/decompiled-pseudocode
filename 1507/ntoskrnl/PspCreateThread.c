/*
 * XREFs of PspCreateThread @ 0x140450CE0
 * Callers:
 *     NtCreateThreadEx @ 0x140450950 (NtCreateThreadEx.c)
 *     PsCreateSystemThreadEx @ 0x1404F927C (PsCreateSystemThreadEx.c)
 *     NtCreateThread @ 0x1406BF114 (NtCreateThread.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall PspCreateThread(
        _QWORD *a1,
        int a2,
        __int64 a3,
        void *a4,
        struct _EX_RUNDOWN_REF *a5,
        unsigned __int8 *a6,
        _OWORD *a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE PreviousMode; // r13
  struct _EX_RUNDOWN_REF *v15; // r8
  int Thread; // esi
  NTSTATUS result; // eax
  __int64 v18; // r15
  int v19; // eax
  struct _EX_RUNDOWN_REF *v20; // rdi
  unsigned __int64 v21; // rtt
  PVOID v22; // r12
  unsigned __int8 *v23; // r15
  unsigned __int64 v24; // rtt
  __int16 v25; // ax
  __int16 v26; // ax
  unsigned __int64 v27; // rtt
  __int16 v28; // ax
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+30h] [rbp-D0h]
  __int64 Process; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+70h] [rbp-90h]
  PVOID v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  unsigned __int8 *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  _OWORD *v40; // [rsp+B8h] [rbp-48h]
  _QWORD *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v43[50]; // [rsp+E0h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  PreviousMode = 0;
  v41 = a1;
  v36 = a6;
  v40 = a7;
  v34 = a9;
  v37 = a12;
  v35 = a13;
  Process = (__int64)CurrentThread->ApcState.Process;
  v38 = a3;
  v32 = a2;
  v39 = a8;
  if ( a8 )
    PreviousMode = CurrentThread->PreviousMode;
  v33 = 0LL;
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
      Object = a5;
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
  if ( !v36 && !v18 && ((HIDWORD(v15[96].Ptr) & 0x10) != 0 || (*(_DWORD *)(Process + 772) & 0x10) != 0) )
    return -1073741790;
  if ( (!PreviousMode || v15 != (struct _EX_RUNDOWN_REF *)PsInitialSystemProcess) && (HIDWORD(v15[214].Ptr) & 1) == 0 )
  {
    v19 = (a10 & 1) != 0;
    LODWORD(Process) = v19;
    if ( (a10 & 2) != 0 )
    {
      v19 |= 2u;
      LODWORD(Process) = v19;
    }
    if ( (a10 & 4) != 0 )
    {
      v19 |= 4u;
      LODWORD(Process) = v19;
    }
    if ( (a10 & 0x10) != 0 )
      LODWORD(Process) = v19 | 0x80;
    --CurrentThread->KernelApcDisable;
    v20 = v15 + 92;
    _m_prefetchw(&v15[92]);
    v21 = v15[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v21 == _InterlockedCompareExchange64((volatile signed __int64 *)&v15[92], v21 + 2, v21)
      || ExfAcquireRundownProtection(v15 + 92) )
    {
      v22 = Object;
      ObfReferenceObjectWithTag(Object, 0x72437350u);
      v42[0] = v34;
      HandleInformation = (POBJECT_HANDLE_INFORMATION)v18;
      v23 = v36;
      Thread = PspAllocateThread(
                 (ULONG_PTR)v22,
                 v39,
                 (__int64)v42,
                 (__int64)HandleInformation,
                 v37,
                 (__int64)&Process,
                 (__int64)&v33,
                 v35,
                 (__int64)v43);
      if ( Thread >= 0 )
      {
        ObfDereferenceObjectWithTag(v22, 0x72437350u);
        Thread = PspInsertThread(
                   (ULONG_PTR)v33,
                   (__int64)v22,
                   v34,
                   &Process,
                   v32,
                   (_BYTE *)v35,
                   v23,
                   v37,
                   (__int64)v43,
                   v41,
                   v40);
        _m_prefetchw(v20);
        v24 = v20->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)v20, v24 - 2, v24) )
          ExfReleaseRundownProtection(v20);
        v25 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v25;
        if ( !v25
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfDereferenceObject(v33);
        return Thread;
      }
      _m_prefetchw(v20);
      v27 = v20->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)v20, v27 - 2, v27) )
        ExfReleaseRundownProtection(v20);
      v28 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v28;
      if ( !v28
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else
    {
      v26 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v26;
      if ( !v26
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      Thread = -1073741558;
    }
    v15 = (struct _EX_RUNDOWN_REF *)Object;
  }
  ObfDereferenceObjectWithTag(v15, 0x72437350u);
  return Thread;
}
