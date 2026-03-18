/*
 * XREFs of NtQueryValueKey @ 0x1404C0BB0
 * Callers:
 *     sub_1404F4090 @ 0x1404F4090 (sub_1404F4090.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     CmpCreateControlSet @ 0x1407D64A0 (CmpCreateControlSet.c)
 *     CmpSetSystemValues @ 0x1407D7B24 (CmpSetSystemValues.c)
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 *     sub_1407DD578 @ 0x1407DD578 (sub_1407DD578.c)
 *     IopProtectSystemPartition @ 0x1407E7F0C (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x1407F80B8 (InitSafeBoot.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404C7070 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rtt
  unsigned __int8 v14; // r12
  NTSTATUS v15; // ebx
  int v16; // eax
  wchar_t *Buffer; // rcx
  ULONG64 v18; // r8
  ULONG *v19; // rdx
  unsigned __int16 v20; // ax
  _BYTE *PoolWithQuotaTag; // rbx
  ULONG v22; // esi
  PULONG v23; // rcx
  unsigned __int16 i; // ax
  unsigned __int16 v25; // dx
  KEY_VALUE_INFORMATION_CLASS v26; // r12d
  struct _KTHREAD *v27; // rax
  int v28; // eax
  int v29; // ebx
  PVOID v30; // rdi
  PVOID v31; // rsi
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  unsigned __int64 v34; // rtt
  struct _KTHREAD *v35; // rax
  __int16 v36; // cx
  BOOLEAN v38; // si
  struct _KTHREAD *v39; // rax
  void (__fastcall *v40)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD); // rax
  unsigned __int64 v41; // rtt
  struct _KTHREAD *v42; // rdx
  __int16 v43; // ax
  __int64 v44; // rcx
  ULONG Object; // [rsp+20h] [rbp-1F8h]
  NTSTATUS v46; // [rsp+30h] [rbp-1E8h]
  void *Src[2]; // [rsp+40h] [rbp-1D8h] BYREF
  PVOID v49; // [rsp+50h] [rbp-1C8h] BYREF
  _BYTE *v50; // [rsp+58h] [rbp-1C0h]
  __int64 v51; // [rsp+60h] [rbp-1B8h]
  PVOID v52; // [rsp+68h] [rbp-1B0h] BYREF
  _QWORD v53[2]; // [rsp+70h] [rbp-1A8h] BYREF
  KEY_VALUE_INFORMATION_CLASS v54; // [rsp+80h] [rbp-198h]
  __int64 v55; // [rsp+88h] [rbp-190h]
  PVOID v56; // [rsp+98h] [rbp-180h]
  PVOID v57; // [rsp+A0h] [rbp-178h] BYREF
  PVOID v58[3]; // [rsp+A8h] [rbp-170h] BYREF
  __int128 v59; // [rsp+C0h] [rbp-158h]
  _QWORD v60[10]; // [rsp+D0h] [rbp-148h] BYREF
  __int128 v61; // [rsp+120h] [rbp-F8h] BYREF
  _QWORD v62[8]; // [rsp+130h] [rbp-E8h] BYREF
  __int128 v63; // [rsp+170h] [rbp-A8h] BYREF
  int v64; // [rsp+180h] [rbp-98h] BYREF
  __int64 v65; // [rsp+184h] [rbp-94h]
  int v66; // [rsp+18Ch] [rbp-8Ch]
  _BYTE v67[64]; // [rsp+190h] [rbp-88h] BYREF

  v54 = KeyValueInformationClass;
  v56 = KeyValueInformation;
  v58[1] = ResultLength;
  LOWORD(Src[0]) = 0;
  *(void **)((char *)Src + 2) = 0LL;
  *(_DWORD *)((char *)&Src[1] + 2) = 0;
  HIWORD(Src[1]) = 0;
  memset(v60, 0, 72);
  v50 = 0LL;
  v64 = 0;
  v65 = 0LL;
  v66 = 0;
  v10 = 0LL;
  v51 = 0LL;
  v55 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v64, (char *)0x20000);
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
    v38 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v38 )
    {
      v39 = KeGetCurrentThread();
      v12 = (unsigned int)++v39->KernelApcDisable;
      if ( !(_WORD)v12 )
      {
        v12 = (signed __int64)&v39->152;
        if ( *(_QWORD *)v12 != v12 && !v39->SpecialApcDisable )
          KiCheckForKernelApcDelivery();
      }
    }
    if ( !v38 )
    {
      if ( CmpTraceRoutine )
      {
        LOBYTE(v12) = 16;
        CmpTraceRoutine(v12, &v64, 3221225865LL, (unsigned int)KeyValueInformationClass, 0LL, 0LL);
      }
      return -1073741431;
    }
    v10 = 0LL;
  }
  if ( (unsigned int)KeyValueInformationClass <= KeyValuePartialInformationAlign64 )
  {
    v14 = KeGetCurrentThread()->gap0[10];
    v15 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, v14, v58, 0LL);
    v49 = v58[0];
    if ( v15 >= 0 && *(_DWORD *)v58[0] != 1803104306 )
    {
      v15 = -1073741816;
      ObfDereferenceObject(v58[0]);
      v49 = 0LL;
    }
    v46 = v15;
    if ( v15 < 0 )
    {
      v26 = KeyValueInformationClass;
LABEL_60:
      PoolWithQuotaTag = v50;
      goto LABEL_61;
    }
    if ( CmpTraceRoutine && v49 )
    {
      v51 = *((_QWORD *)v49 + 1);
      v55 = v51;
    }
    if ( v14 != 1 )
    {
      *(UNICODE_STRING *)Src = *ValueName;
      v22 = Length;
LABEL_28:
      if ( ((__int64)Src[0] & 1) != 0 )
      {
        v46 = -1073741811;
      }
      else
      {
        for ( i = (unsigned __int16)Src[0]; i; i -= 2 )
        {
          v25 = i;
          if ( *((_WORD *)Src[1] + ((unsigned __int64)i >> 1) - 1) )
            break;
          LOWORD(Src[0]) = v25 - 2;
        }
      }
      if ( v46 < 0 )
      {
        v26 = KeyValueInformationClass;
      }
      else
      {
        v53[1] = v53;
        v53[0] = v53;
        v27 = KeGetCurrentThread();
        --v27->KernelApcDisable;
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
        {
          v28 = v46;
        }
        else
        {
          v60[0] = v49;
          v60[1] = Src;
          LODWORD(v60[2]) = KeyValueInformationClass;
          v60[3] = KeyValueInformation;
          LODWORD(v60[4]) = v22;
          v60[5] = ResultLength;
          v28 = CmpCallCallBacks(8u, (__int64)v60, 1, 23LL, (__int64)v49, (__int64)v53);
        }
        if ( v28 < 0 )
        {
          if ( v28 == -1073740541 )
            v28 = 0;
          v46 = v28;
          v26 = KeyValueInformationClass;
        }
        else
        {
          v52 = 0LL;
          v29 = CmKeyBodyRemapToVirtualForEnum(&v49, v14, 1LL, &v52);
          v46 = v29;
          v30 = v52;
          v26 = KeyValueInformationClass;
          if ( v29 >= 0
            && (!v52
             || (v63 = *(_OWORD *)Src,
                 v29 = CmQueryValueKey(
                         v52,
                         &v63,
                         (unsigned int)KeyValueInformationClass,
                         KeyValueInformation,
                         v22,
                         ResultLength),
                 v46 = v29,
                 v29 == -1073741772)) )
          {
            v61 = *(_OWORD *)Src;
            Object = v22;
            v31 = v49;
            v29 = CmQueryValueKey(
                    v49,
                    &v61,
                    (unsigned int)KeyValueInformationClass,
                    KeyValueInformation,
                    Object,
                    ResultLength);
            v46 = v29;
          }
          else
          {
            v31 = v49;
          }
          if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) && (_QWORD *)v53[0] != v53 )
          {
            memset(&v62[1], 0, 0x30uLL);
            v62[0] = v31;
            LODWORD(v62[1]) = v29;
            LODWORD(v62[3]) = v29;
            v62[2] = v60;
            CmpCallCallBacks(0x17u, (__int64)v62, 0, 23LL, (__int64)v31, (__int64)v53);
            v46 = v62[3];
          }
          if ( v30 )
            ObfDereferenceObject(v30);
        }
        v32 = KeGetCurrentThread();
        v33 = v32->KernelApcDisable + 1;
        v32->KernelApcDisable = v33;
        if ( !v33
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
          && !v32->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      ObfDereferenceObject(v49);
      goto LABEL_60;
    }
    if ( (unsigned __int64)ValueName >= MmUserProbeAddress )
      ValueName = (PUNICODE_STRING)MmUserProbeAddress;
    v16 = *(_DWORD *)&ValueName->Length;
    LODWORD(v59) = v16;
    Buffer = ValueName->Buffer;
    *((_QWORD *)&v59 + 1) = Buffer;
    *(_OWORD *)Src = v59;
    if ( (_WORD)v16 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = (ULONG64)Buffer + (unsigned __int16)v16;
      v19 = (ULONG *)MmUserProbeAddress;
      if ( v18 <= MmUserProbeAddress && v18 >= (unsigned __int64)Buffer )
        goto LABEL_17;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v19 = (ULONG *)MmUserProbeAddress;
LABEL_17:
    v20 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0]) )
    {
      if ( LOWORD(Src[0]) > 0x40u )
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LOWORD(Src[0]), 0x6E764D43u);
        v50 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
          v46 = -1073741670;
          v26 = KeyValueInformationClass;
LABEL_61:
          if ( CmpTraceRoutine )
          {
            v44 = v51;
            LOBYTE(v44) = 16;
            CmpTraceRoutine(v44, &v64, (unsigned int)v46, (unsigned int)v26, v51, Src);
          }
          if ( PoolWithQuotaTag && PoolWithQuotaTag != v67 )
            ExFreePoolWithTag(PoolWithQuotaTag, 0);
          _m_prefetchw(&CmpShutdownRundown);
          v34 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v34 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&CmpShutdownRundown,
                        (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                        CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
            ExfReleaseRundownProtection(&CmpShutdownRundown);
          v35 = KeGetCurrentThread();
          v36 = v35->KernelApcDisable + 1;
          v35->KernelApcDisable = v36;
          if ( !v36
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
            && !v35->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          return v46;
        }
        v20 = (unsigned __int16)Src[0];
      }
      else
      {
        PoolWithQuotaTag = v67;
        v50 = v67;
      }
      memmove(PoolWithQuotaTag, Src[1], v20);
      Src[1] = PoolWithQuotaTag;
      v19 = (ULONG *)MmUserProbeAddress;
    }
    v22 = Length;
    if ( Length )
    {
      if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (char *)KeyValueInformation + Length > (char *)v19
        || (char *)KeyValueInformation + Length < KeyValueInformation )
      {
        *(_BYTE *)v19 = 0;
        v19 = (ULONG *)MmUserProbeAddress;
      }
    }
    v23 = ResultLength;
    if ( ResultLength >= v19 )
      v23 = v19;
    *v23 = *v23;
    goto LABEL_28;
  }
  v40 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    if ( KeyHandle )
    {
      if ( ObReferenceObjectByHandle(
             KeyHandle,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             &v57,
             0LL) >= 0 )
      {
        v10 = *((_QWORD *)v57 + 1);
        ObfDereferenceObject(v57);
      }
      v40 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD))CmpTraceRoutine;
    }
    if ( v40 )
    {
      LOBYTE(v12) = 16;
      v40(v12, &v64, 3221225485LL, (unsigned int)KeyValueInformationClass, v10, 0LL);
    }
  }
  _m_prefetchw(&CmpShutdownRundown);
  v41 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v41 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v42 = KeGetCurrentThread();
  v43 = v42->KernelApcDisable + 1;
  v42->KernelApcDisable = v43;
  if ( !v43
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v42->ApcState.ApcListHead[0].Flink != &v42->152
    && !v42->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return -1073741811;
}
