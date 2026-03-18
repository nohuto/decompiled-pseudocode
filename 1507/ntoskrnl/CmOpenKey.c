/*
 * XREFs of CmOpenKey @ 0x1404F5560
 * Callers:
 *     sub_1404F4090 @ 0x1404F4090 (sub_1404F4090.c)
 *     NtOpenKeyTransactedEx @ 0x1404F50F4 (NtOpenKeyTransactedEx.c)
 *     NtOpenKey @ 0x1404F5530 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x1404F5548 (NtOpenKeyEx.c)
 *     CmpSaveBootControlSet @ 0x140584D98 (CmpSaveBootControlSet.c)
 *     AdtpObjsInitialize @ 0x140592B28 (AdtpObjsInitialize.c)
 *     CmpCreatePerfKeys @ 0x1405A4110 (CmpCreatePerfKeys.c)
 *     NtOpenKeyTransacted @ 0x1406501AC (NtOpenKeyTransacted.c)
 *     sub_1406EF8FC @ 0x1406EF8FC (sub_1406EF8FC.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, int a2, __int64 a3, int a4, __int64 a5)
{
  ACCESS_MASK v9; // r14d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rtt
  char PreviousMode; // si
  _QWORD *v13; // rcx
  ULONG64 v14; // rcx
  int v15; // eax
  ULONG64 v16; // rcx
  ULONG64 v17; // rdx
  void *v18; // rax
  int v19; // edi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rtt
  struct _KTHREAD *v22; // rax
  __int16 v23; // cx
  struct _KTHREAD *v25; // rcx
  BOOLEAN v26; // si
  __int16 v27; // ax
  unsigned __int64 v28; // rtt
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  __int128 v31; // [rsp+50h] [rbp-158h] BYREF
  int v32; // [rsp+60h] [rbp-148h]
  HANDLE Handle; // [rsp+68h] [rbp-140h] BYREF
  HANDLE v34; // [rsp+70h] [rbp-138h]
  ACCESS_MASK v35; // [rsp+78h] [rbp-130h]
  __int64 v36; // [rsp+80h] [rbp-128h]
  __int64 v37; // [rsp+90h] [rbp-118h]
  __int64 v38; // [rsp+98h] [rbp-110h]
  PVOID Object[2]; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-F8h]
  _QWORD v41[18]; // [rsp+C0h] [rbp-E8h] BYREF
  int v42; // [rsp+150h] [rbp-58h] BYREF
  __int64 v43; // [rsp+154h] [rbp-54h]
  int v44; // [rsp+15Ch] [rbp-4Ch]

  Object[1] = a1;
  v38 = a3;
  v32 = a4;
  v37 = a5;
  Handle = 0LL;
  v31 = 0uLL;
  memset(v41, 0, 136);
  v34 = 0LL;
  v42 = 0;
  v43 = 0LL;
  v44 = 0;
  v36 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v42, (char *)0x20000);
  HIDWORD(v41[3]) = a2 & 0x300;
  v9 = a2 & 0xFFFFFCFF;
  v35 = v9;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v11 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v11 == _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    goto LABEL_4;
  v26 = ExfAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v26 )
  {
    v25 = KeGetCurrentThread();
    v27 = v25->KernelApcDisable + 1;
    v25->KernelApcDisable = v27;
    if ( !v27
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
      && !v25->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( v26 )
  {
LABEL_4:
    if ( (a4 & 0xC) == a4 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v13 = a1;
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          v13 = (_QWORD *)MmUserProbeAddress;
        *v13 = 0LL;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = *(_QWORD *)(a3 + 16);
        if ( v14 >= MmUserProbeAddress )
          v14 = MmUserProbeAddress;
        v15 = *(_DWORD *)v14;
        LODWORD(v40) = v15;
        v16 = *(_QWORD *)(v14 + 8);
        *((_QWORD *)&v40 + 1) = v16;
        v31 = v40;
        if ( (_WORD)v15 )
        {
          if ( (v16 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v17 = v16 + (unsigned __int16)v15;
          if ( v17 > MmUserProbeAddress || v17 < v16 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      else
      {
        v31 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      }
      v18 = *(void **)(a3 + 8);
      v34 = v18;
      if ( CmpTraceRoutine
        && v18
        && ObReferenceObjectByHandle(
             v34,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             Object,
             0LL) >= 0 )
      {
        v36 = *((_QWORD *)Object[0] + 1);
        ObfDereferenceObject(Object[0]);
      }
      v41[10] = v37;
      LODWORD(v41[3]) = a4;
      v19 = ObOpenObjectByName(a3, (__int64)CmKeyObjectType, PreviousMode, 0LL, v9, (__int64)v41, &Handle);
      v20 = v19 >= 0;
      if ( v19 >= 0 )
      {
        v20 = (unsigned __int64)Handle;
        *a1 = Handle;
      }
      if ( CmpTraceRoutine )
      {
        LOBYTE(v20) = 11;
        CmpTraceRoutine(v20, &v42, (unsigned int)v19, 0LL, v36, &v31);
      }
      _m_prefetchw(&CmpShutdownRundown);
      v21 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v21 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v22 = KeGetCurrentThread();
      v23 = v22->KernelApcDisable + 1;
      v22->KernelApcDisable = v23;
      if ( !v23
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
        && !v22->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return (unsigned int)v19;
    }
    else
    {
      _m_prefetchw(&CmpShutdownRundown);
      v28 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v28 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v29 = KeGetCurrentThread();
      v30 = v29->KernelApcDisable + 1;
      v29->KernelApcDisable = v30;
      if ( !v30
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
        && !v29->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221225714LL;
    }
  }
  else
  {
    if ( CmpTraceRoutine )
    {
      LOBYTE(v25) = 11;
      CmpTraceRoutine(v25, &v42, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return 3221225865LL;
  }
}
