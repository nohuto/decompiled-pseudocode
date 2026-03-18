/*
 * XREFs of NtEnumerateValueKey @ 0x1404273A0
 * Callers:
 *     AdtpObjsInitialize @ 0x140592B28 (AdtpObjsInitialize.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmEnumerateValueKey @ 0x1404277E0 (CmEnumerateValueKey.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404C7070 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140657138 (CmEnumerateValueKeyFromMergedView.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  ULONG v8; // esi
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rtt
  unsigned __int8 v14; // di
  int v15; // ebx
  ULONG v16; // esi
  ULONG64 v17; // rax
  PULONG v18; // rcx
  struct _KTHREAD *v19; // rax
  int v20; // r8d
  int v21; // edi
  PVOID v22; // rbx
  int v23; // esi
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  unsigned __int64 v26; // rtt
  struct _KTHREAD *v27; // rax
  __int16 v28; // cx
  BOOLEAN v30; // di
  struct _KTHREAD *v31; // rax
  void (__fastcall *v32)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD); // rax
  unsigned __int64 v33; // rtt
  struct _KTHREAD *v34; // rdx
  __int16 v35; // ax
  __int64 v36; // rcx
  ULONG Object; // [rsp+20h] [rbp-138h]
  int v38; // [rsp+30h] [rbp-128h]
  PVOID v40; // [rsp+58h] [rbp-100h] BYREF
  KEY_VALUE_INFORMATION_CLASS v41; // [rsp+60h] [rbp-F8h]
  PVOID v42; // [rsp+68h] [rbp-F0h] BYREF
  ULONG v43; // [rsp+70h] [rbp-E8h]
  __int64 v44; // [rsp+78h] [rbp-E0h]
  __int64 v45; // [rsp+80h] [rbp-D8h]
  _QWORD v46[4]; // [rsp+88h] [rbp-D0h] BYREF
  PVOID v47; // [rsp+A8h] [rbp-B0h] BYREF
  PVOID v48[2]; // [rsp+B0h] [rbp-A8h] BYREF
  _QWORD v49[8]; // [rsp+C0h] [rbp-98h] BYREF
  int v50; // [rsp+100h] [rbp-58h] BYREF
  __int64 v51; // [rsp+104h] [rbp-54h]
  int v52; // [rsp+10Ch] [rbp-4Ch]

  v8 = Index;
  v43 = Index;
  v41 = KeyValueInformationClass;
  v48[1] = KeyValueInformation;
  v46[3] = ResultLength;
  memset(v49, 0, sizeof(v49));
  v50 = 0;
  v51 = 0LL;
  v52 = 0;
  v10 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v50, (char *)0x20000);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v12 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  v13 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v13 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                v12,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v30 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v30 )
    {
      v31 = KeGetCurrentThread();
      v12 = (unsigned int)++v31->KernelApcDisable;
      if ( !(_WORD)v12 )
      {
        v12 = (signed __int64)&v31->152;
        if ( *(_QWORD *)v12 != v12 && !v31->SpecialApcDisable )
          KiCheckForKernelApcDelivery();
      }
    }
    if ( !v30 )
    {
      if ( CmpTraceRoutine )
      {
        LOBYTE(v12) = 18;
        CmpTraceRoutine(v12, &v50, 3221225865LL, v8, 0LL, 0LL);
      }
      return -1073741431;
    }
    v10 = 0LL;
  }
  if ( (unsigned int)KeyValueInformationClass <= KeyValuePartialInformation )
  {
    v14 = KeGetCurrentThread()->gap0[10];
    v15 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, v14, &v47, 0LL);
    v40 = v47;
    if ( v15 >= 0 && *(_DWORD *)v47 != 1803104306 )
    {
      v15 = -1073741816;
      ObfDereferenceObject(v47);
      v40 = 0LL;
    }
    if ( v15 < 0 )
      goto LABEL_34;
    if ( CmpTraceRoutine && v40 )
    {
      v44 = *((_QWORD *)v40 + 1);
      v45 = v44;
    }
    if ( v14 != 1 )
    {
      v16 = Length;
LABEL_22:
      v46[1] = v46;
      v46[0] = v46;
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
      {
        v49[0] = v40;
        v49[1] = __PAIR64__(KeyValueInformationClass, Index);
        v49[2] = KeyValueInformation;
        LODWORD(v49[3]) = v16;
        v49[4] = ResultLength;
        LOBYTE(v20) = 1;
        v15 = CmpCallCallBacks(6, (unsigned int)v49, v20, 21, (__int64)v40, (__int64)v46);
      }
      if ( v15 < 0 )
      {
        if ( v15 == -1073740541 )
          v15 = 0;
      }
      else
      {
        v42 = 0LL;
        v21 = CmKeyBodyRemapToVirtualForEnum(&v40, v14, 1LL, &v42);
        v22 = v42;
        if ( v21 < 0 )
        {
          v23 = (int)v40;
        }
        else if ( v42 )
        {
          v38 = v16;
          v23 = (int)v40;
          v21 = CmEnumerateValueKeyFromMergedView(
                  (int)v40,
                  (int)v42,
                  0,
                  Index,
                  KeyValueInformationClass,
                  KeyValueInformation,
                  v38,
                  (__int64)ResultLength,
                  0LL);
        }
        else
        {
          Object = v16;
          v23 = (int)v40;
          v21 = CmEnumerateValueKey(
                  v40,
                  Index,
                  (unsigned int)KeyValueInformationClass,
                  KeyValueInformation,
                  Object,
                  ResultLength);
        }
        if ( v22 )
          ObfDereferenceObject(v22);
        v15 = CmPostCallbackNotification(21, v23, v21, (unsigned int)v49, (__int64)v46);
      }
      v24 = KeGetCurrentThread();
      v25 = v24->KernelApcDisable + 1;
      v24->KernelApcDisable = v25;
      if ( !v25
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
        && !v24->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      ObfDereferenceObject(v40);
      v8 = Index;
LABEL_34:
      if ( CmpTraceRoutine )
      {
        v36 = v44;
        LOBYTE(v36) = 18;
        CmpTraceRoutine(v36, &v50, (unsigned int)v15, v8, v44, 0LL);
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
      if ( !v28
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
        && !v27->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return v15;
    }
    v16 = Length;
    if ( Length )
    {
      if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = MmUserProbeAddress;
      if ( (unsigned __int64)KeyValueInformation + Length <= MmUserProbeAddress
        && (char *)KeyValueInformation + Length >= KeyValueInformation )
      {
        goto LABEL_15;
      }
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v17 = MmUserProbeAddress;
LABEL_15:
    v18 = ResultLength;
    if ( (unsigned __int64)ResultLength >= v17 )
      v18 = (PULONG)v17;
    *v18 = *v18;
    goto LABEL_22;
  }
  v32 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    if ( KeyHandle )
    {
      if ( ObReferenceObjectByHandle(
             KeyHandle,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             v48,
             0LL) >= 0 )
      {
        v10 = *((_QWORD *)v48[0] + 1);
        ObfDereferenceObject(v48[0]);
      }
      v32 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
    }
    if ( v32 )
    {
      LOBYTE(v12) = 18;
      v32(v12, &v50, 3221225485LL, v8, v10, 0LL);
    }
  }
  _m_prefetchw(&CmpShutdownRundown);
  v33 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v33 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v34 = KeGetCurrentThread();
  v35 = v34->KernelApcDisable + 1;
  v34->KernelApcDisable = v35;
  if ( !v35
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152
    && !v34->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return -1073741811;
}
