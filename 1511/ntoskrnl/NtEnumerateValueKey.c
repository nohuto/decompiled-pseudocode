/*
 * XREFs of NtEnumerateValueKey @ 0x140423C60
 * Callers:
 *     AdtpObjsInitialize @ 0x14052EF6C (AdtpObjsInitialize.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1403FD380 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmEnumerateValueKey @ 0x140423940 (CmEnumerateValueKey.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405E1414 (CmEnumerateValueKeyFromMergedView.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS v13; // ebx
  _QWORD *v14; // rdi
  ULONG v15; // esi
  ULONG64 v16; // rax
  PULONG v17; // rcx
  ULONG v18; // edi
  struct _KTHREAD *v19; // rax
  int v20; // edi
  PVOID v21; // rbx
  _DWORD *v22; // r9
  ULONG v23; // r14d
  int v24; // esi
  __int64 v26; // rcx
  void (__fastcall *v27)(__int64, int *, __int64, _QWORD, __int64, _QWORD); // rax
  __int64 v28; // rbx
  __int64 v29; // rcx
  int Object; // [rsp+20h] [rbp-138h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-130h]
  int v32; // [rsp+30h] [rbp-128h]
  PVOID v34; // [rsp+58h] [rbp-100h] BYREF
  KEY_VALUE_INFORMATION_CLASS v35; // [rsp+60h] [rbp-F8h]
  PVOID v36; // [rsp+68h] [rbp-F0h] BYREF
  ULONG v37; // [rsp+70h] [rbp-E8h]
  __int64 v38; // [rsp+78h] [rbp-E0h]
  __int64 v39; // [rsp+80h] [rbp-D8h]
  _QWORD v40[2]; // [rsp+88h] [rbp-D0h] BYREF
  PVOID v41[2]; // [rsp+98h] [rbp-C0h] BYREF
  PVOID v42[3]; // [rsp+A8h] [rbp-B0h] BYREF
  _QWORD v43[8]; // [rsp+C0h] [rbp-98h] BYREF
  int v44; // [rsp+100h] [rbp-58h] BYREF
  __int64 v45; // [rsp+104h] [rbp-54h]
  int v46; // [rsp+10Ch] [rbp-4Ch]

  v37 = Index;
  v35 = KeyValueInformationClass;
  v42[1] = KeyValueInformation;
  v41[1] = ResultLength;
  memset(v43, 0, sizeof(v43));
  v44 = 0;
  v45 = 0LL;
  v46 = 0;
  v38 = 0LL;
  v39 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v44, (char *)0x20000);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v26) = 18;
      CmpTraceRoutine(v26, &v44, 3221225865LL, Index, 0LL, 0LL);
    }
    return -1073741431;
  }
  if ( (unsigned int)KeyValueInformationClass <= KeyValuePartialInformation )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v13 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, v41, 0LL);
    v14 = v41[0];
    v34 = v41[0];
    if ( v13 >= 0 && *(_DWORD *)v41[0] != 1803104306 )
    {
      v13 = -1073741816;
      ObfDereferenceObject(v41[0]);
    }
    if ( v13 < 0 )
    {
      v23 = Index;
LABEL_34:
      if ( CmpTraceRoutine )
      {
        v29 = v38;
        LOBYTE(v29) = 18;
        CmpTraceRoutine(v29, &v44, (unsigned int)v13, v23, v38, 0LL);
      }
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return v13;
    }
    if ( CmpTraceRoutine && v14 )
    {
      v38 = v14[1];
      v39 = v38;
    }
    if ( PreviousMode != 1 )
    {
      v15 = Length;
      v18 = Index;
LABEL_23:
      v40[1] = v40;
      v40[0] = v40;
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
      {
        v43[0] = v41[0];
        v43[1] = __PAIR64__(KeyValueInformationClass, v18);
        v43[2] = KeyValueInformation;
        LODWORD(v43[3]) = v15;
        v43[4] = ResultLength;
        v13 = CmpCallCallBacks(6u, (__int64)v43, 1, 0x15u, (__int64)v41[0], (__int64)v40);
      }
      if ( v13 < 0 )
      {
        if ( v13 == -1073740541 )
          v13 = 0;
        v23 = Index;
      }
      else
      {
        v36 = 0LL;
        v20 = CmKeyBodyRemapToVirtualForEnum((__int64)&v34, &v36);
        v21 = v36;
        if ( v20 < 0 )
        {
          v24 = (int)v34;
          v23 = Index;
        }
        else if ( v36 )
        {
          v32 = v15;
          HandleInformation = (POBJECT_HANDLE_INFORMATION)KeyValueInformation;
          v23 = Index;
          v24 = (int)v34;
          v20 = CmEnumerateValueKeyFromMergedView(
                  (int)v34,
                  (int)v36,
                  0,
                  Index,
                  KeyValueInformationClass,
                  HandleInformation,
                  v32,
                  (__int64)ResultLength,
                  0LL);
        }
        else
        {
          Object = v15;
          v22 = KeyValueInformation;
          v23 = Index;
          v24 = (int)v34;
          v20 = CmEnumerateValueKey(
                  (__int64)v34,
                  Index,
                  (unsigned int)KeyValueInformationClass,
                  v22,
                  Object,
                  (__int64)ResultLength);
        }
        if ( v21 )
          ObfDereferenceObject(v21);
        v13 = CmPostCallbackNotification(21, v24, v20, (unsigned int)v43, (__int64)v40);
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(v34);
      goto LABEL_34;
    }
    v15 = Length;
    if ( Length )
    {
      if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = MmUserProbeAddress;
      if ( (unsigned __int64)KeyValueInformation + Length <= MmUserProbeAddress
        && (char *)KeyValueInformation + Length >= KeyValueInformation )
      {
        goto LABEL_16;
      }
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v16 = MmUserProbeAddress;
LABEL_16:
    v17 = ResultLength;
    if ( (unsigned __int64)ResultLength >= v16 )
      v17 = (PULONG)v16;
    *v17 = *v17;
    v18 = Index;
    goto LABEL_23;
  }
  v27 = (void (__fastcall *)(__int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  if ( !CmpTraceRoutine || !KeyHandle )
    goto LABEL_46;
  if ( ObReferenceObjectByHandle(
         KeyHandle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         v42,
         0LL) < 0 )
  {
    v27 = (void (__fastcall *)(__int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
LABEL_46:
    v28 = 0LL;
    goto LABEL_47;
  }
  v28 = *((_QWORD *)v42[0] + 1);
  ObfDereferenceObject(v42[0]);
  v27 = (void (__fastcall *)(__int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
LABEL_47:
  if ( v27 )
  {
    LOBYTE(v11) = 18;
    v27(v11, &v44, 3221225485LL, Index, v28, 0LL);
  }
  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return -1073741811;
}
