/*
 * XREFs of CmOpenKey @ 0x1404128E0
 * Callers:
 *     NtOpenKeyEx @ 0x140412CF8 (NtOpenKeyEx.c)
 *     sub_140498054 @ 0x140498054 (sub_140498054.c)
 *     NtOpenKey @ 0x1404A5C10 (NtOpenKey.c)
 *     NtOpenKeyTransactedEx @ 0x1404B7F94 (NtOpenKeyTransactedEx.c)
 *     CmpSaveBootControlSet @ 0x14050EC14 (CmpSaveBootControlSet.c)
 *     CmpCreatePerfKeys @ 0x14051F758 (CmpCreatePerfKeys.c)
 *     AdtpObjsInitialize @ 0x14052EF6C (AdtpObjsInitialize.c)
 *     NtOpenKeyTransacted @ 0x1405DBABC (NtOpenKeyTransacted.c)
 *     sub_14066C188 @ 0x14066C188 (sub_14066C188.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x140079F60 (ExfAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleaseRundownProtection @ 0x1400D0750 (ExfReleaseRundownProtection.c)
 *     ObDereferenceObject @ 0x1400D2B58 (ObDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, int a2, __int64 a3, int a4, __int64 a5)
{
  ACCESS_MASK v9; // r15d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rtt
  char PreviousMode; // si
  _QWORD *v13; // rcx
  ULONG64 v14; // rcx
  int v15; // eax
  ULONG64 v16; // rcx
  ULONG64 v17; // rdx
  void *v18; // rax
  POBJECT_TYPE *v19; // rbx
  _QWORD *CurrentServerSilo; // r14
  int v21; // ebx
  __int64 v22; // rcx
  unsigned __int64 v23; // rtt
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  __int64 v27; // rcx
  __int128 v28; // [rsp+50h] [rbp-158h] BYREF
  int v29; // [rsp+60h] [rbp-148h]
  HANDLE Handle; // [rsp+68h] [rbp-140h] BYREF
  HANDLE v31; // [rsp+70h] [rbp-138h]
  ACCESS_MASK v32; // [rsp+78h] [rbp-130h]
  __int64 v33; // [rsp+80h] [rbp-128h]
  __int64 v34; // [rsp+88h] [rbp-120h]
  __int64 v35; // [rsp+98h] [rbp-110h]
  PVOID Object[2]; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v37; // [rsp+B0h] [rbp-F8h]
  _QWORD v38[18]; // [rsp+C0h] [rbp-E8h] BYREF
  int v39; // [rsp+150h] [rbp-58h] BYREF
  __int64 v40; // [rsp+154h] [rbp-54h]
  int v41; // [rsp+15Ch] [rbp-4Ch]

  Object[1] = a1;
  v35 = a3;
  v29 = a4;
  v34 = a5;
  Handle = 0LL;
  v28 = 0uLL;
  memset(v38, 0, 136);
  v31 = 0LL;
  v39 = 0;
  v40 = 0LL;
  v41 = 0;
  v33 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v39, (char *)0x20000);
  HIDWORD(v38[3]) = a2 & 0x300;
  v9 = a2 & 0xFFFFFCFF;
  v32 = v9;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v11 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v11 == _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
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
        LODWORD(v37) = v15;
        v16 = *(_QWORD *)(v14 + 8);
        *((_QWORD *)&v37 + 1) = v16;
        v28 = v37;
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
        v28 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      }
      v18 = *(void **)(a3 + 8);
      v31 = v18;
      if ( CmpTraceRoutine
        && v18
        && ObReferenceObjectByHandle(
             v31,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             Object,
             0LL) >= 0 )
      {
        v33 = *((_QWORD *)Object[0] + 1);
        ObfDereferenceObject(Object[0]);
      }
      v38[10] = v34;
      LODWORD(v38[3]) = a4;
      v19 = CmKeyObjectType;
      CurrentServerSilo = PsGetCurrentServerSilo();
      v21 = ObOpenObjectByNameEx(
              a3,
              (struct _OBJECT_TYPE *)v19,
              PreviousMode,
              0LL,
              v9,
              v38,
              (__int64)CurrentServerSilo,
              &Handle);
      if ( CurrentServerSilo )
        ObDereferenceObject(CurrentServerSilo);
      v22 = 1LL;
      if ( v21 >= 0 )
        *a1 = Handle;
      if ( CmpTraceRoutine )
      {
        LOBYTE(v22) = 11;
        CmpTraceRoutine(v22, &v39, (unsigned int)v21, 0LL, v33, &v28);
      }
      _m_prefetchw(&CmpShutdownRundown);
      v23 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v23 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v24 = KeGetCurrentThread();
      v25 = v24->KernelApcDisable + 1;
      v24->KernelApcDisable = v25;
      if ( !v25
        && ($E81C3296F15336D9BF9B2D43BB137B25 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
        && !v24->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v24);
      }
      return (unsigned int)v21;
    }
    else
    {
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return 3221225714LL;
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v27) = 11;
      CmpTraceRoutine(v27, &v39, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return 3221225865LL;
  }
}
