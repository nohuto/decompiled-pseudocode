/*
 * XREFs of NtSetValueKey @ 0x140428350
 * Callers:
 *     ExUpdateLicenseRegistry @ 0x1404F3AA8 (ExUpdateLicenseRegistry.c)
 *     sub_1404F4090 @ 0x1404F4090 (sub_1404F4090.c)
 *     sub_1406EF8FC @ 0x1406EF8FC (sub_1406EF8FC.c)
 *     IopStoreSystemPartitionInformation @ 0x1407B634C (IopStoreSystemPartitionInformation.c)
 *     CmpCreateControlSet @ 0x1407D64A0 (CmpCreateControlSet.c)
 *     CmpAddDockingInfo @ 0x1407D69E0 (CmpAddDockingInfo.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x1407D7AB8 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetSystemValues @ 0x1407D7B24 (CmpSetSystemValues.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407D7FF8 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemBiosInformation @ 0x1407D84CC (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407D87DC (CmpSetVideoBiosInformation.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1407DDA08 (ExpUpdateProductSuiteTypeInRegistry.c)
 *     InitSafeBoot @ 0x1407F80B8 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x1407F828C (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x1407F8674 (CmpSetNetworkValue.c)
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
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140657510 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140657718 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v10; // rtt
  char v11; // r13
  char v12; // r14
  unsigned __int8 v13; // r15
  int v14; // r8d
  NTSTATUS v15; // ebx
  int v16; // eax
  wchar_t *Buffer; // rcx
  ULONG64 v18; // rdx
  _BYTE *v19; // r8
  ULONG v20; // ebx
  unsigned __int16 v21; // cx
  ULONG v22; // esi
  unsigned int v23; // edi
  unsigned int v24; // eax
  char *v25; // rsi
  void *v26; // rdi
  struct _KTHREAD *v27; // rax
  int v28; // r8d
  int v29; // edi
  char v30; // si
  int v31; // eax
  unsigned __int64 v32; // rtt
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  struct _KTHREAD *v35; // rax
  __int16 v36; // cx
  $CD287064E7C9F7953DE243E927CFCB99 *v38; // rcx
  BOOLEAN v39; // bl
  int v40; // r8d
  unsigned __int64 v41; // rtt
  struct _KTHREAD *v42; // rcx
  __int16 v43; // ax
  struct _KTHREAD *v44; // rax
  int v45; // eax
  PVOID v46; // rsi
  bool v47; // zf
  __int64 v48; // rcx
  size_t v49; // [rsp+20h] [rbp-198h]
  NTSTATUS v50; // [rsp+40h] [rbp-178h]
  PVOID Object; // [rsp+48h] [rbp-170h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-168h] BYREF
  ULONG v53; // [rsp+60h] [rbp-158h]
  void *v54; // [rsp+68h] [rbp-150h]
  char *v55; // [rsp+70h] [rbp-148h]
  void *v56; // [rsp+78h] [rbp-140h]
  int v57; // [rsp+80h] [rbp-138h] BYREF
  PVOID P; // [rsp+88h] [rbp-130h]
  __int64 v59; // [rsp+90h] [rbp-128h]
  _BYTE v60[8]; // [rsp+98h] [rbp-120h] BYREF
  HANDLE v61; // [rsp+A0h] [rbp-118h]
  _QWORD v62[2]; // [rsp+A8h] [rbp-110h] BYREF
  ULONG v63; // [rsp+B8h] [rbp-100h]
  unsigned int v64; // [rsp+C0h] [rbp-F8h]
  unsigned int v65; // [rsp+C4h] [rbp-F4h]
  __int128 v66; // [rsp+D0h] [rbp-E8h]
  _QWORD v67[8]; // [rsp+E0h] [rbp-D8h] BYREF
  int v68; // [rsp+120h] [rbp-98h] BYREF
  __int64 v69; // [rsp+124h] [rbp-94h]
  int v70; // [rsp+12Ch] [rbp-8Ch]
  _BYTE v71[64]; // [rsp+130h] [rbp-88h] BYREF

  v63 = TitleIndex;
  v8 = (int)KeyHandle;
  v61 = KeyHandle;
  v54 = Data;
  v68 = 0;
  v69 = 0LL;
  v70 = 0;
  v59 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v68, (char *)0x20000);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v10 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v10 == _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    goto LABEL_4;
  v39 = ExfAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v39 )
  {
    v44 = KeGetCurrentThread();
    v38 = ($CD287064E7C9F7953DE243E927CFCB99 *)(unsigned int)++v44->KernelApcDisable;
    if ( !(_WORD)v38 )
    {
      v38 = &v44->152;
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v38->ApcState.ApcListHead[0].Flink != v38 && !v44->SpecialApcDisable )
        KiCheckForKernelApcDelivery();
    }
  }
  if ( v39 )
  {
LABEL_4:
    memset(v67, 0, sizeof(v67));
    Src[0] = 0LL;
    Src[1] = 0LL;
    v56 = 0LL;
    v55 = 0LL;
    v57 = 0;
    v11 = 0;
    P = 0LL;
    v12 = 1;
    v13 = KeGetCurrentThread()->gap0[10];
    v15 = CmObReferenceObjectByHandle(v8, 2, v14, v13, (__int64)&Object, (__int64)v60);
    v50 = v15;
    if ( v15 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v57) )
    {
      v45 = CmObReferenceObjectByHandle(v8, 131097, v40, v13, (__int64)&Object, (__int64)v60);
      v15 = v45;
      v50 = v45;
      if ( v45 >= 0 )
      {
        v46 = Object;
        if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
        {
          ObfDereferenceObject(v46);
          v15 = -1073741790;
          v50 = -1073741790;
        }
      }
      v11 = 1;
    }
    if ( v15 < 0 )
      goto LABEL_78;
    if ( CmpTraceRoutine && Object )
      v59 = *((_QWORD *)Object + 1);
    if ( v13 != 1 )
    {
      *(UNICODE_STRING *)Src = *ValueName;
      v56 = 0LL;
      v20 = DataSize;
      goto LABEL_17;
    }
    if ( (unsigned __int64)ValueName >= MmUserProbeAddress )
      ValueName = (PUNICODE_STRING)MmUserProbeAddress;
    v16 = *(_DWORD *)&ValueName->Length;
    LODWORD(v66) = v16;
    Buffer = ValueName->Buffer;
    *((_QWORD *)&v66 + 1) = Buffer;
    *(_OWORD *)Src = v66;
    if ( (_WORD)v16 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = (ULONG64)Buffer + (unsigned __int16)v16;
      v19 = (_BYTE *)MmUserProbeAddress;
      if ( v18 <= MmUserProbeAddress && v18 >= (unsigned __int64)Buffer )
        goto LABEL_14;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v19 = (_BYTE *)MmUserProbeAddress;
LABEL_14:
    v20 = DataSize;
    if ( DataSize && ((char *)v54 + DataSize > v19 || (char *)v54 + DataSize < v54) )
      *v19 = 0;
LABEL_17:
    v21 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0]) > 0x7FFFu || ((__int64)Src[0] & 1) != 0 || v20 > 0x7FFFF000 )
    {
      v15 = -1073741811;
      v50 = -1073741811;
    }
    else
    {
      v22 = LOWORD(Src[0]);
      v23 = (LOWORD(Src[0]) + 7) & 0xFFFFFFF8;
      v65 = v23;
      v24 = v23 + v20;
      v64 = v23 + v20;
      if ( v23 + v20 < v20 )
      {
        v15 = -1073741811;
        v50 = -1073741811;
      }
      else
      {
        if ( v13 != 1 )
          goto LABEL_29;
        if ( !v24 )
        {
          v25 = v55;
          goto LABEL_25;
        }
        if ( v24 <= 0x40 )
          goto LABEL_24;
        if ( v20 <= 0x40 )
        {
          if ( LOWORD(Src[0]) <= 0x40u )
          {
            if ( v20 < LOWORD(Src[0]) )
              v22 = v20;
            v53 = v22;
          }
          else
          {
            v53 = LOWORD(Src[0]);
          }
        }
        else if ( LOWORD(Src[0]) > 0x40u )
        {
          v22 = v23 + v20;
          v53 = v23 + v20;
        }
        else
        {
          v22 = v20;
          v53 = v20;
        }
        if ( !v22 )
        {
LABEL_24:
          v56 = v71;
          v25 = &v71[v23];
          v55 = v25;
          goto LABEL_25;
        }
        P = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v22, 0x6E566D43u);
        if ( P )
        {
          v21 = (unsigned __int16)Src[0];
          if ( v22 == v20 )
          {
            v56 = v71;
            v25 = (char *)P;
            v55 = (char *)P;
          }
          else
          {
            v56 = P;
            if ( v22 == LOWORD(Src[0]) )
            {
              v25 = v71;
              v55 = v71;
            }
            else
            {
              v25 = (char *)P + v23;
              v55 = v25;
            }
          }
LABEL_25:
          if ( v21 )
          {
            v26 = v56;
            memmove(v56, Src[1], v21);
            Src[1] = v26;
            v21 = (unsigned __int16)Src[0];
          }
          else
          {
            v26 = 0LL;
            Src[1] = 0LL;
          }
          if ( !v20 )
          {
            v54 = 0LL;
            goto LABEL_57;
          }
          memmove(v25, v54, v20);
          v54 = v25;
          v21 = (unsigned __int16)Src[0];
LABEL_29:
          v26 = Src[1];
LABEL_57:
          if ( v21 )
          {
            do
            {
              if ( *((_WORD *)v26 + ((unsigned __int64)v21 >> 1) - 1) )
                break;
              v47 = v21 == 2;
              v21 -= 2;
              LOWORD(Src[0]) = v21;
            }
            while ( !v47 );
          }
          if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) != 0 )
          {
            v15 = -1073741790;
            v50 = -1073741790;
          }
          else
          {
            v62[1] = v62;
            v62[0] = v62;
            v27 = KeGetCurrentThread();
            --v27->KernelApcDisable;
            if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
            {
              v30 = 1;
              v31 = v50;
              v29 = (int)Object;
            }
            else
            {
              v29 = (int)Object;
              v67[0] = Object;
              v67[1] = Src;
              v67[2] = __PAIR64__(Type, v63);
              v67[3] = v54;
              LODWORD(v67[4]) = v20;
              LOBYTE(v28) = 1;
              v30 = 1;
              v31 = CmpCallCallBacks(1, (unsigned int)v67, v28, 16, (__int64)Object, (__int64)v62);
            }
            if ( v31 < 0 )
            {
              if ( v31 == -1073740541 )
                v31 = 0;
            }
            else
            {
              if ( v11 )
              {
                v31 = CmKeyBodyReplicateToVirtual(&Object, v13, 2LL, &v57);
                v29 = (int)Object;
              }
              if ( v31 >= 0 )
              {
                _m_prefetchw(&CmpShutdownRundown);
                v32 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
                if ( v32 != _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&CmpShutdownRundown,
                              (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                              CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
                  ExfReleaseRundownProtection(&CmpShutdownRundown);
                v33 = KeGetCurrentThread();
                v34 = v33->KernelApcDisable + 1;
                v33->KernelApcDisable = v34;
                if ( !v34
                  && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
                  && !v33->SpecialApcDisable )
                {
                  KiCheckForKernelApcDelivery();
                }
                v12 = 0;
                if ( (v60[0] & 4) == 0 )
                  v30 = 0;
                LODWORD(v49) = v20;
                v29 = (int)Object;
                v31 = CmSetValueKey((_DWORD)Object, (unsigned int)Src, Type, (_DWORD)v54, v49, (__int64)v61, v30);
              }
              v31 = CmPostCallbackNotification(16, v29, v31, (unsigned int)v67, (__int64)v62);
            }
            v50 = v31;
            v35 = KeGetCurrentThread();
            v36 = v35->KernelApcDisable + 1;
            v35->KernelApcDisable = v36;
            if ( !v36
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
              && !v35->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            v15 = v50;
          }
          goto LABEL_77;
        }
        v15 = -1073741670;
        v50 = -1073741670;
      }
    }
LABEL_77:
    ObfDereferenceObject(Object);
LABEL_78:
    if ( CmpTraceRoutine )
    {
      v48 = v59;
      LOBYTE(v48) = 14;
      CmpTraceRoutine(v48, &v68, (unsigned int)v15, 0LL, v59, Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v12 )
    {
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
      return v50;
    }
    return v15;
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v38) = 14;
    CmpTraceRoutine(v38, &v68, 3221225865LL, 0LL, 0LL, 0LL);
  }
  return -1073741431;
}
