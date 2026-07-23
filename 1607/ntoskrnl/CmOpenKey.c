/*
 * XREFs of CmOpenKey @ 0x140417B50
 * Callers:
 *     NtOpenKey @ 0x140414318 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x140414330 (NtOpenKeyEx.c)
 *     NtOpenKeyTransactedEx @ 0x1404C210C (NtOpenKeyTransactedEx.c)
 *     ExpWatchProductTypeWork @ 0x1404CA880 (ExpWatchProductTypeWork.c)
 *     CmpCreatePerfKeys @ 0x14055DD0C (CmpCreatePerfKeys.c)
 *     AdtpObjsInitialize @ 0x140570130 (AdtpObjsInitialize.c)
 *     CmpSaveBootControlSet @ 0x1405F9148 (CmpSaveBootControlSet.c)
 *     ExpWatchLicenseInfoWork @ 0x1406ACB24 (ExpWatchLicenseInfoWork.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PspGetJobSilo @ 0x1400767A8 (PspGetJobSilo.c)
 *     ExfAcquireRundownProtection @ 0x14008BD40 (ExfAcquireRundownProtection.c)
 *     ExfReleaseRundownProtection @ 0x140090490 (ExfReleaseRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, int a2, __int64 a3, int a4, __int64 a5)
{
  char v9; // di
  unsigned int v10; // r13d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v12; // rtt
  unsigned __int8 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  void *v19; // rax
  int v20; // edx
  struct _KTHREAD *v21; // rax
  __int64 JobSilo; // rax
  int v23; // eax
  unsigned int v24; // esi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rtt
  struct _KTHREAD *v27; // rax
  __int16 v28; // cx
  $2B8565053CDC740D4E4887693DD8AC9E *v29; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int128 v38; // [rsp+50h] [rbp-1B8h] BYREF
  unsigned int v39; // [rsp+60h] [rbp-1A8h]
  int v40; // [rsp+68h] [rbp-1A0h]
  HANDLE v41; // [rsp+70h] [rbp-198h]
  HANDLE Handle; // [rsp+78h] [rbp-190h] BYREF
  __int64 v43; // [rsp+80h] [rbp-188h]
  HANDLE *v44; // [rsp+88h] [rbp-180h]
  __int64 v45; // [rsp+90h] [rbp-178h]
  PVOID Object; // [rsp+98h] [rbp-170h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-158h]
  int v48; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v49; // [rsp+C4h] [rbp-144h]
  int v50; // [rsp+CCh] [rbp-13Ch]
  _QWORD v51[30]; // [rsp+D0h] [rbp-138h] BYREF

  v44 = a1;
  v45 = a3;
  v40 = a4;
  v9 = 0;
  Handle = 0LL;
  v38 = 0uLL;
  v41 = 0LL;
  v48 = 0;
  v49 = 0LL;
  v50 = 0;
  v43 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v48, 0x20000uLL);
  memset(v51, 0, 0xE8uLL);
  HIDWORD(v51[3]) = a2 & 0x300;
  v10 = a2 & 0xFFFFFCFF;
  v39 = v10;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v12 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v12 == _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    if ( (a4 & 0xC) == a4 )
    {
      v13 = KeGetCurrentThread()->gap0[10];
      if ( v13 == 1 )
      {
        v14 = (__int64)a1;
        if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
          v14 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v14 = 0LL;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = *(_QWORD *)(a3 + 16);
        if ( v15 >= 0x7FFFFFFF0000LL )
          v15 = 0x7FFFFFFF0000LL;
        v16 = *(_DWORD *)v15;
        LODWORD(v47) = v16;
        v17 = *(_QWORD *)(v15 + 8);
        *((_QWORD *)&v47 + 1) = v17;
        v38 = v47;
        if ( (_WORD)v16 )
        {
          if ( (v17 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v18 = v17 + (unsigned __int16)v16;
          if ( v18 > 0x7FFFFFFF0000LL || v18 < v17 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v38 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      }
      v19 = *(void **)(a3 + 8);
      v41 = v19;
      if ( CmpTraceRoutine
        && v19
        && ObReferenceObjectByHandle(
             v41,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL) >= 0 )
      {
        v43 = *((_QWORD *)Object + 1);
        ObfDereferenceObject(Object);
      }
      v51[10] = a5;
      LODWORD(v51[3]) = a4;
      v20 = (int)CmKeyObjectType;
      v21 = KeGetCurrentThread();
      if ( *(_QWORD *)&v21[1].WaitBlockFill11[160] != -3LL )
        v9 = 1;
      if ( v9 )
        JobSilo = *(_QWORD *)&v21[1].WaitBlockFill11[160];
      else
        JobSilo = PspGetJobSilo(v21->Process[1].Affinity.Bitmap[16]);
      v23 = ObOpenObjectByNameEx(a3, v20, v13, 0, v10, (__int64)v51, JobSilo, (__int64)&Handle);
      v24 = v23;
      v25 = v23 >= 0;
      if ( v23 >= 0 )
      {
        v25 = (unsigned __int64)Handle;
        *a1 = Handle;
      }
      if ( CmpTraceRoutine )
      {
        LOBYTE(v25) = 11;
        CmpTraceRoutine(v25, &v48, (unsigned int)v23, 0LL, v43, &v38);
      }
      if ( v51[12] )
      {
        CmpLockRegistry();
        CmpDereferenceKeyControlBlock(v51[12]);
        CmpUnlockRegistry();
      }
      _m_prefetchw(&CmpShutdownRundown);
      v26 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v26 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v27 = KeGetCurrentThread();
      v28 = v27->KernelApcDisable + 1;
      v27->KernelApcDisable = v28;
      if ( !v28 )
      {
        v29 = &v27->152;
        if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v29->ApcState.ApcListHead[0].Flink != v29 && !v27->SpecialApcDisable )
          KiCheckForKernelApcDelivery((__int64)v29);
      }
      return v24;
    }
    else
    {
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v35, v36, v37);
      return 3221225714LL;
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v31, v32, v33);
    if ( CmpTraceRoutine )
    {
      LOBYTE(v34) = 11;
      CmpTraceRoutine(v34, &v48, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return 3221225865LL;
  }
}
