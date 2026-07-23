/*
 * XREFs of NtSetValueKey @ 0x140401F58
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1404CA880 (ExpWatchProductTypeWork.c)
 *     ExUpdateLicenseRegistry @ 0x1404CAF7C (ExUpdateLicenseRegistry.c)
 *     ExpWatchLicenseInfoWork @ 0x1406ACB24 (ExpWatchLicenseInfoWork.c)
 *     IopStoreSystemPartitionInformation @ 0x140798C34 (IopStoreSystemPartitionInformation.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1407AA814 (ExpUpdateProductSuiteTypeInRegistry.c)
 *     CmpCreateControlSet @ 0x1407AC02C (CmpCreateControlSet.c)
 *     CmpAddDockingInfo @ 0x1407AC56C (CmpAddDockingInfo.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemBiosInformation @ 0x1407ACD84 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407AD088 (CmpSetVideoBiosInformation.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x1407AE930 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetSystemValues @ 0x1407AE99C (CmpSetSystemValues.c)
 *     InitSafeBoot @ 0x1407CD104 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x1407CD4E0 (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x1407CD8C8 (CmpSetNetworkValue.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405FFE80 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  int v7; // esi
  __int64 v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r13
  char PreviousMode; // r12
  int v15; // r9d
  int v16; // r8d
  char *v17; // rdx
  NTSTATUS v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  ULONG v21; // esi
  ULONG v22; // ebx
  _BYTE *v23; // r14
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  _BYTE *v26; // r14
  void *v27; // rbx
  char v28; // r14
  struct _KTHREAD *v29; // rax
  int v30; // ebx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  int v40; // eax
  PVOID v41; // rsi
  void **v42; // rcx
  size_t v43; // [rsp+20h] [rbp-188h]
  NTSTATUS v44; // [rsp+44h] [rbp-164h]
  void *Src[2]; // [rsp+50h] [rbp-158h] BYREF
  PVOID Object; // [rsp+60h] [rbp-148h] BYREF
  void *v47; // [rsp+68h] [rbp-140h]
  void *v48; // [rsp+70h] [rbp-138h]
  int v49; // [rsp+78h] [rbp-130h]
  int v50; // [rsp+7Ch] [rbp-12Ch] BYREF
  PVOID P; // [rsp+80h] [rbp-128h]
  ULONG v52; // [rsp+88h] [rbp-120h]
  _BYTE v53[8]; // [rsp+90h] [rbp-118h] BYREF
  __int64 v54; // [rsp+98h] [rbp-110h]
  _QWORD v55[2]; // [rsp+A0h] [rbp-108h] BYREF
  _BYTE *v56; // [rsp+B0h] [rbp-F8h]
  __int64 v57; // [rsp+B8h] [rbp-F0h]
  __int128 v58; // [rsp+C0h] [rbp-E8h]
  _QWORD v59[8]; // [rsp+D0h] [rbp-D8h] BYREF
  int v60; // [rsp+110h] [rbp-98h] BYREF
  __int64 v61; // [rsp+114h] [rbp-94h]
  int v62; // [rsp+11Ch] [rbp-8Ch]
  _BYTE v63[64]; // [rsp+120h] [rbp-88h] BYREF

  v49 = Type;
  v52 = TitleIndex;
  v7 = (int)KeyHandle;
  v57 = (__int64)KeyHandle;
  v47 = Data;
  v60 = 0;
  v61 = 0LL;
  v62 = 0;
  v8 = 0LL;
  v54 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v60, 0x20000uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
    if ( CmpTraceRoutine )
    {
      LOBYTE(v39) = 14;
      CmpTraceRoutine(v39, &v60, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
  memset(v59, 0, sizeof(v59));
  Src[0] = 0LL;
  Src[1] = 0LL;
  v48 = 0LL;
  v56 = 0LL;
  v50 = 0;
  v13 = 0;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v15) = PreviousMode;
  v18 = CmObReferenceObjectByHandle(v7, 2, v16, v15, (__int64)&Object, (__int64)v53);
  v44 = v18;
  if ( v18 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v50) )
  {
    LOBYTE(v20) = PreviousMode;
    v40 = CmObReferenceObjectByHandle(v7, 131097, v19, v20, (__int64)&Object, (__int64)v53);
    v18 = v40;
    v44 = v40;
    if ( v40 >= 0 )
    {
      v41 = Object;
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
        ObfDereferenceObject(v41);
        v18 = -1073741790;
        v44 = -1073741790;
      }
    }
    v13 = 1;
  }
  if ( v18 < 0 )
  {
    v28 = 1;
    goto LABEL_70;
  }
  if ( CmpTraceRoutine && Object )
  {
    v8 = *((_QWORD *)Object + 1);
    v54 = v8;
  }
  if ( PreviousMode == 1 )
  {
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
      ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    LODWORD(v58) = *(_DWORD *)&ValueName->Length;
    *((_QWORD *)&v58 + 1) = ValueName->Buffer;
    *(_OWORD *)Src = v58;
    WORD1(Src[0]) = v58;
    if ( (_WORD)v58 )
    {
      if ( ((__int64)Src[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (char *)Src[1] + LOWORD(Src[0]);
      if ( (unsigned __int64)v17 > 0x7FFFFFFF0000LL || v17 < Src[1] )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v21 = DataSize;
    if ( DataSize )
    {
      v17 = (char *)v47 + DataSize;
      if ( (unsigned __int64)v17 > 0x7FFFFFFF0000LL || v17 < v47 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *ValueName;
    v48 = 0LL;
    v21 = DataSize;
  }
  if ( LOWORD(Src[0]) > 0x7FFFu || ((__int64)Src[0] & 1) != 0 || v21 > 0x7FFFF000 )
  {
    v18 = -1073741811;
    v44 = -1073741811;
    v28 = 1;
  }
  else
  {
    v22 = LOWORD(Src[0]);
    v23 = (_BYTE *)((LOWORD(Src[0]) + 7) & 0xFFFFFFF8);
    v24 = (_DWORD)v23 + v21;
    if ( (unsigned int)v23 + v21 < v21 )
    {
      v18 = -1073741811;
      v44 = -1073741811;
      v28 = 1;
    }
    else
    {
      if ( PreviousMode != 1 )
      {
LABEL_56:
        while ( LOWORD(Src[0]) )
        {
          if ( *((_WORD *)Src[1] + ((unsigned __int64)LOWORD(Src[0]) >> 1) - 1) )
            break;
          LOWORD(Src[0]) -= 2;
        }
        if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) != 0 )
        {
          v18 = -1073741790;
          v44 = -1073741790;
          v28 = 1;
        }
        else
        {
          v55[1] = v55;
          v55[0] = v55;
          v29 = KeGetCurrentThread();
          --v29->KernelApcDisable;
          if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
          {
            v31 = v44;
            v30 = v49;
          }
          else
          {
            v59[0] = Object;
            v59[1] = Src;
            v59[2] = __PAIR64__(v49, v52);
            v30 = v49;
            v59[3] = v47;
            LODWORD(v59[4]) = v21;
            LOBYTE(v19) = 1;
            v31 = CmpCallCallBacks(1, (unsigned int)v59, v19, 16, (__int64)Object, (__int64)v55);
          }
          if ( v31 < 0 )
          {
            if ( v31 == -1073740541 )
              v31 = 0;
            v28 = 1;
          }
          else
          {
            if ( v13 )
            {
              LOBYTE(v17) = PreviousMode;
              v31 = CmKeyBodyReplicateToVirtual(&Object, v17, 2LL, &v50);
            }
            if ( v31 < 0 )
            {
              v28 = 1;
            }
            else
            {
              ExReleaseRundownProtection(&CmpShutdownRundown);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v32, v33, v34);
              v28 = 0;
              LODWORD(v43) = v21;
              v31 = CmSetValueKey((int)Object, (int)Src, v30, (int)v47, v43, v57, (v53[0] & 4) != 0);
            }
            v31 = CmPostCallbackNotification(16, (_DWORD)Object, v31, (unsigned int)v59, (__int64)v55);
          }
          v44 = v31;
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), (__int64)v17, v19, v20);
          v18 = v44;
        }
        goto LABEL_69;
      }
      if ( !v24 )
      {
        v26 = v56;
        goto LABEL_27;
      }
      if ( v24 <= 0x40 )
        goto LABEL_25;
      if ( v21 <= 0x40 )
      {
        if ( LOWORD(Src[0]) <= 0x40u && v21 < LOWORD(Src[0]) )
          v22 = v21;
      }
      else
      {
        v22 = (_DWORD)v23 + v21;
        if ( LOWORD(Src[0]) <= 0x40u )
          v22 = v21;
      }
      if ( !v22 )
      {
LABEL_25:
        v48 = v63;
        v25 = (unsigned int)v23;
        v23 = v63;
        goto LABEL_26;
      }
      P = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v22, 0x6E566D43u);
      if ( P )
      {
        if ( v22 == v21 )
        {
          v48 = v63;
          v26 = P;
          goto LABEL_27;
        }
        v25 = (unsigned __int64)P;
        v48 = P;
        if ( v22 == LOWORD(Src[0]) )
        {
          v26 = v63;
          goto LABEL_27;
        }
LABEL_26:
        v26 = &v23[v25];
LABEL_27:
        if ( LOWORD(Src[0]) )
        {
          v27 = v48;
          memmove(v48, Src[1], LOWORD(Src[0]));
          Src[1] = v27;
        }
        else
        {
          Src[1] = 0LL;
        }
        if ( v21 )
        {
          memmove(v26, v47, v21);
          v47 = v26;
        }
        else
        {
          v47 = 0LL;
        }
        goto LABEL_56;
      }
      v18 = -1073741670;
      v44 = -1073741670;
      v28 = 1;
    }
  }
LABEL_69:
  ObfDereferenceObject(Object);
LABEL_70:
  if ( CmpTraceRoutine )
  {
    v42 = Src;
    LOBYTE(v42) = 14;
    CmpTraceRoutine(v42, &v60, (unsigned int)v18, 0LL, v8, Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v28 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v36, v37, v38);
    return v44;
  }
  return v18;
}
