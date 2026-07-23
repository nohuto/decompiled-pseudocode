/*
 * XREFs of NtQueryKey @ 0x1404C1230
 * Callers:
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140589984 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140688F1C (PiDevCfgQueryPolicyStringList.c)
 *     sub_1406EF8FC @ 0x1406EF8FC (sub_1406EF8FC.c)
 *     sub_1407DD578 @ 0x1407DD578 (sub_1407DD578.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404C7070 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExRaiseAccessViolation @ 0x1406F7890 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v5; // rbx
  ACCESS_MASK v9; // r14d
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v11; // rcx
  unsigned __int64 v12; // rtt
  BOOLEAN v13; // r13
  unsigned __int8 v14; // r12
  unsigned __int64 v15; // rdx
  ULONG64 v16; // rcx
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rcx
  NTSTATUS v19; // eax
  _QWORD *v20; // rbx
  int v21; // ecx
  struct _KTHREAD *v22; // rax
  int v23; // eax
  int Key; // ebx
  PVOID v25; // rsi
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  __int64 v28; // rbx
  unsigned __int64 v29; // rtt
  struct _KTHREAD *v30; // rax
  __int16 v31; // cx
  struct _KTHREAD *v33; // rdx
  void (__fastcall *v34)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD, char); // rax
  __int64 v35; // rbx
  unsigned __int64 v36; // rtt
  struct _KTHREAD *v37; // rdx
  __int16 v38; // ax
  char v39; // [rsp+30h] [rbp-138h]
  unsigned int v40; // [rsp+34h] [rbp-134h]
  __int64 v42; // [rsp+40h] [rbp-128h]
  PVOID v43; // [rsp+50h] [rbp-118h] BYREF
  PVOID v44; // [rsp+58h] [rbp-110h] BYREF
  __int64 v45; // [rsp+60h] [rbp-108h]
  _QWORD v46[2]; // [rsp+68h] [rbp-100h] BYREF
  PVOID Object; // [rsp+78h] [rbp-F0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-E0h] BYREF
  PVOID v49; // [rsp+90h] [rbp-D8h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-D0h]
  _QWORD v51[8]; // [rsp+A0h] [rbp-C8h] BYREF
  _QWORD v52[7]; // [rsp+E0h] [rbp-88h] BYREF
  int v53; // [rsp+118h] [rbp-50h] BYREF
  __int64 v54; // [rsp+11Ch] [rbp-4Ch]
  int v55; // [rsp+124h] [rbp-44h]

  v5 = Length;
  Handle = KeyHandle;
  v9 = 0;
  memset(v51, 0, sizeof(v51));
  v44 = 0LL;
  v53 = 0;
  v54 = 0LL;
  v55 = 0;
  v42 = 0LL;
  v45 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v53, (char *)0x20000);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v11 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  v12 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v12 == _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                v11,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v13 = 1;
    v39 = 1;
  }
  else
  {
    v13 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    v39 = v13;
    if ( !v13 )
    {
      v33 = KeGetCurrentThread();
      v11 = (unsigned int)++v33->KernelApcDisable;
      if ( !(_WORD)v11
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
        && !v33->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( !v13 )
    {
      v40 = -1073741431;
      goto LABEL_61;
    }
  }
  if ( (unsigned int)KeyInformationClass <= KeyTrustInformation )
  {
    v14 = KeGetCurrentThread()->gap0[10];
    if ( v14 == 1 )
    {
      if ( (_DWORD)v5 )
      {
        v15 = (unsigned __int64)KeyInformation;
        if ( ((unsigned __int8)KeyInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (ULONG64)KeyInformation + v5 - 1;
        if ( (unsigned __int64)KeyInformation > v16 || v16 >= MmUserProbeAddress )
        {
          if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
            ExRaiseAccessViolation();
        }
        else
        {
          v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v15 = *(_BYTE *)v15;
            v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v15 != v17 );
        }
      }
      v18 = ResultLength;
      if ( (unsigned __int64)ResultLength >= MmUserProbeAddress )
        v18 = (_DWORD *)MmUserProbeAddress;
      *v18 = *v18;
    }
    if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0 )
      v9 = 1;
    v19 = ObReferenceObjectByHandle(Handle, v9, (POBJECT_TYPE)CmKeyObjectType, v14, &Object, &HandleInformation);
    v20 = Object;
    v43 = Object;
    v40 = v19;
    if ( v19 >= 0 )
    {
      v21 = *(_DWORD *)Object;
      if ( *(_DWORD *)Object == 1803104306 )
      {
        if ( CmpTraceRoutine )
        {
          v42 = *((_QWORD *)Object + 1);
          v45 = v42;
        }
        if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 )
        {
          if ( HandleInformation.GrantedAccess )
            goto LABEL_28;
          v40 = -1073741790;
LABEL_42:
          v28 = v42;
LABEL_43:
          ObfDereferenceObject(v43);
LABEL_44:
          if ( CmpTraceRoutine )
          {
            LOBYTE(v11) = 13;
            CmpTraceRoutine(v11, &v53, v40, (unsigned int)KeyInformationClass, v28, 0LL);
          }
          if ( v13 )
          {
            _m_prefetchw(&CmpShutdownRundown);
            v29 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v29 != _InterlockedCompareExchange64(
                          (volatile signed __int64 *)&CmpShutdownRundown,
                          (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                          CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
              ExfReleaseRundownProtection(&CmpShutdownRundown);
            v30 = KeGetCurrentThread();
            v31 = v30->KernelApcDisable + 1;
            v30->KernelApcDisable = v31;
            if ( !v31
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
              && !v30->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
          }
          return v40;
        }
        if ( KeyInformationClass != KeyCachedInformation )
          goto LABEL_28;
      }
      else if ( KeyInformationClass != KeyCachedInformation )
      {
        v40 = -1073741816;
        goto LABEL_42;
      }
      if ( v21 != 1803104306 )
      {
        *ResultLength = 40;
        if ( Length < 0x28 )
        {
          v40 = -1073741789;
        }
        else
        {
          memset(KeyInformation, 0, 0x28uLL);
          *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v20[1] + 96LL);
        }
        v28 = v42;
        goto LABEL_43;
      }
LABEL_28:
      v46[1] = v46;
      v46[0] = v46;
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
      {
        v23 = v40;
      }
      else
      {
        v51[0] = Object;
        LODWORD(v51[1]) = KeyInformationClass;
        v51[2] = KeyInformation;
        LODWORD(v51[3]) = Length;
        v51[4] = ResultLength;
        v23 = CmpCallCallBacks(7u, (__int64)v51, 1, 22LL, (__int64)Object, (__int64)v46);
      }
      if ( v23 < 0 )
      {
        if ( v23 == -1073740541 )
          v23 = 0;
      }
      else
      {
        Key = CmKeyBodyRemapToVirtualForEnum(&v43, v14, v9, &v44);
        v40 = Key;
        v25 = v43;
        if ( Key >= 0 )
        {
          Key = CmQueryKey((_DWORD)v43, (_DWORD)v44, Length, (__int64)ResultLength);
          v40 = Key;
        }
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) || (_QWORD *)v46[0] == v46 )
          goto LABEL_39;
        memset(&v52[1], 0, 0x30uLL);
        v52[0] = v25;
        LODWORD(v52[1]) = Key;
        LODWORD(v52[3]) = Key;
        v52[2] = v51;
        CmpCallCallBacks(0x16u, (__int64)v52, 0, 22LL, (__int64)v25, (__int64)v46);
        v23 = v52[3];
      }
      v40 = v23;
LABEL_39:
      v26 = KeGetCurrentThread();
      v27 = v26->KernelApcDisable + 1;
      v26->KernelApcDisable = v27;
      if ( !v27
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
        && !v26->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v44 )
        ObfDereferenceObject(v44);
      goto LABEL_42;
    }
LABEL_61:
    v28 = 0LL;
    goto LABEL_44;
  }
  v34 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD, char))CmpTraceRoutine;
  if ( !CmpTraceRoutine || !KeyHandle )
    goto LABEL_78;
  if ( ObReferenceObjectByHandle(
         KeyHandle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         &v49,
         0LL) < 0 )
  {
    v34 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD, char))CmpTraceRoutine;
LABEL_78:
    v35 = 0LL;
    goto LABEL_79;
  }
  v35 = *((_QWORD *)v49 + 1);
  ObfDereferenceObject(v49);
  v34 = (void (__fastcall *)(signed __int64, int *, __int64, _QWORD, __int64, _QWORD, char))CmpTraceRoutine;
LABEL_79:
  if ( v34 )
  {
    LOBYTE(v11) = 13;
    v34(v11, &v53, 3221225485LL, (unsigned int)KeyInformationClass, v35, 0LL, v39);
  }
  _m_prefetchw(&CmpShutdownRundown);
  v36 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v36 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v37 = KeGetCurrentThread();
  v38 = v37->KernelApcDisable + 1;
  v37->KernelApcDisable = v38;
  if ( !v38
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
    && !v37->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return -1073741811;
}
