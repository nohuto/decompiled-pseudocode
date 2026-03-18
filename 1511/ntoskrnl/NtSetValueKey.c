/*
 * XREFs of NtSetValueKey @ 0x1403F2FD0
 * Callers:
 *     sub_140498054 @ 0x140498054 (sub_140498054.c)
 *     ExUpdateLicenseRegistry @ 0x14049B478 (ExUpdateLicenseRegistry.c)
 *     sub_14066C188 @ 0x14066C188 (sub_14066C188.c)
 *     CmpCreateControlSet @ 0x1407433D0 (CmpCreateControlSet.c)
 *     CmpAddDockingInfo @ 0x140743910 (CmpAddDockingInfo.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140743C5C (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemBiosInformation @ 0x140744130 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140744438 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemValues @ 0x140744BE0 (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140744E48 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     IopStoreSystemPartitionInformation @ 0x14075363C (IopStoreSystemPartitionInformation.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1407696E4 (ExpUpdateProductSuiteTypeInRegistry.c)
 *     InitSafeBoot @ 0x140781CE4 (InitSafeBoot.c)
 *     CmpAddAliasEntry @ 0x140781EB8 (CmpAddAliasEntry.c)
 *     CmpSetNetworkValue @ 0x1407822A0 (CmpSetNetworkValue.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405E17EC (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char v11; // r15
  unsigned __int8 v12; // r14
  int v13; // r8d
  NTSTATUS v14; // ebx
  unsigned __int16 v15; // dx
  char *v16; // r8
  _BYTE *v17; // r9
  ULONG v18; // ebx
  unsigned int v19; // esi
  unsigned int v20; // edi
  unsigned int v21; // eax
  char *v22; // rsi
  void *v23; // rdi
  struct _KTHREAD *v24; // rax
  int v25; // r8d
  int v26; // edi
  char v27; // si
  int v28; // eax
  int v30; // r8d
  __int64 v31; // rcx
  int v32; // eax
  PVOID v33; // rsi
  bool v34; // zf
  void **v35; // rcx
  size_t v36; // [rsp+20h] [rbp-188h]
  NTSTATUS v37; // [rsp+40h] [rbp-168h]
  char v38; // [rsp+44h] [rbp-164h]
  void *Src[2]; // [rsp+50h] [rbp-158h] BYREF
  PVOID Object; // [rsp+60h] [rbp-148h] BYREF
  __int64 v41; // [rsp+68h] [rbp-140h]
  void *v42; // [rsp+70h] [rbp-138h]
  void *v43; // [rsp+78h] [rbp-130h]
  int v44; // [rsp+80h] [rbp-128h] BYREF
  PVOID P; // [rsp+88h] [rbp-120h]
  ULONG v46; // [rsp+90h] [rbp-118h]
  _QWORD v47[2]; // [rsp+98h] [rbp-110h] BYREF
  _BYTE v48[8]; // [rsp+A8h] [rbp-100h] BYREF
  char *v49; // [rsp+B0h] [rbp-F8h]
  __int128 v50; // [rsp+C0h] [rbp-E8h]
  _QWORD v51[8]; // [rsp+D0h] [rbp-D8h] BYREF
  int v52; // [rsp+110h] [rbp-98h] BYREF
  __int64 v53; // [rsp+114h] [rbp-94h]
  int v54; // [rsp+11Ch] [rbp-8Ch]
  _BYTE v55[64]; // [rsp+120h] [rbp-88h] BYREF

  v46 = TitleIndex;
  v42 = Data;
  v52 = 0;
  v53 = 0LL;
  v54 = 0;
  v9 = 0LL;
  v41 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v52, (char *)0x20000);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v31) = 14;
      CmpTraceRoutine(v31, &v52, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
  memset(v51, 0, sizeof(v51));
  Src[0] = 0LL;
  Src[1] = 0LL;
  v43 = 0LL;
  v49 = 0LL;
  v44 = 0;
  v38 = 0;
  P = 0LL;
  v11 = 1;
  v12 = KeGetCurrentThread()->gap0[10];
  v14 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 2, v13, v12, (__int64)&Object, (__int64)v48);
  v37 = v14;
  if ( v14 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v44) )
  {
    v32 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 131097, v30, v12, (__int64)&Object, (__int64)v48);
    v14 = v32;
    v37 = v32;
    if ( v32 >= 0 )
    {
      v33 = Object;
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
        ObfDereferenceObject(v33);
        v14 = -1073741790;
        v37 = -1073741790;
      }
      v9 = v41;
    }
    v38 = 1;
  }
  if ( v14 >= 0 )
  {
    if ( CmpTraceRoutine )
    {
      if ( Object )
      {
        v9 = *((_QWORD *)Object + 1);
        v41 = v9;
      }
      else
      {
        v9 = v41;
      }
    }
    if ( v12 != 1 )
    {
      *(UNICODE_STRING *)Src = *ValueName;
      v43 = 0LL;
      v18 = DataSize;
      goto LABEL_52;
    }
    if ( (unsigned __int64)ValueName >= MmUserProbeAddress )
      ValueName = (PUNICODE_STRING)MmUserProbeAddress;
    LODWORD(v50) = *(_DWORD *)&ValueName->Length;
    *((_QWORD *)&v50 + 1) = ValueName->Buffer;
    *(_OWORD *)Src = v50;
    WORD1(Src[0]) = v50;
    v15 = v50;
    if ( (_WORD)v50 )
    {
      if ( ((__int64)Src[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (char *)Src[1] + (unsigned __int16)v50;
      v17 = (_BYTE *)MmUserProbeAddress;
      if ( (unsigned __int64)v16 <= MmUserProbeAddress && v16 >= Src[1] )
        goto LABEL_15;
      *(_BYTE *)MmUserProbeAddress = 0;
      v15 = (unsigned __int16)Src[0];
    }
    v17 = (_BYTE *)MmUserProbeAddress;
LABEL_15:
    v18 = DataSize;
    if ( !DataSize || (char *)v42 + DataSize <= v17 && (char *)v42 + DataSize >= v42 )
    {
LABEL_18:
      if ( v15 > 0x7FFFu || ((__int64)Src[0] & 1) != 0 || v18 > 0x7FFFF000 )
      {
        v14 = -1073741811;
        v37 = -1073741811;
      }
      else
      {
        v19 = v15;
        v20 = (v15 + 7) & 0xFFFFFFF8;
        v21 = v20 + v18;
        if ( v20 + v18 < v18 )
        {
          v14 = -1073741811;
          v37 = -1073741811;
          v9 = v41;
        }
        else
        {
          if ( v12 != 1 )
          {
LABEL_59:
            if ( v15 )
            {
              do
              {
                if ( *((_WORD *)Src[1] + ((unsigned __int64)v15 >> 1) - 1) )
                  break;
                v34 = v15 == 2;
                v15 -= 2;
                LOWORD(Src[0]) = v15;
              }
              while ( !v34 );
            }
            if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) != 0 )
            {
              v14 = -1073741790;
              v37 = -1073741790;
            }
            else
            {
              v47[1] = v47;
              v47[0] = v47;
              v24 = KeGetCurrentThread();
              --v24->KernelApcDisable;
              if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
              {
                v27 = 1;
                v28 = v37;
                v26 = (int)Object;
              }
              else
              {
                v26 = (int)Object;
                v51[0] = Object;
                v51[1] = Src;
                v51[2] = __PAIR64__(Type, v46);
                v51[3] = v42;
                LODWORD(v51[4]) = v18;
                LOBYTE(v25) = 1;
                v27 = 1;
                v28 = CmpCallCallBacks(1, (unsigned int)v51, v25, 16, (__int64)Object, (__int64)v47);
              }
              if ( v28 < 0 )
              {
                if ( v28 == -1073740541 )
                  v28 = 0;
              }
              else
              {
                if ( v38 )
                {
                  v28 = CmKeyBodyReplicateToVirtual(&Object, 2LL, &v44);
                  v26 = (int)Object;
                }
                if ( v28 >= 0 )
                {
                  ExReleaseRundownProtection_0(&CmpShutdownRundown);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  v11 = 0;
                  if ( (v48[0] & 4) == 0 )
                    v27 = 0;
                  LODWORD(v36) = v18;
                  v26 = (int)Object;
                  v28 = CmSetValueKey((int)Object, (int)Src, Type, (int)v42, v36, (__int64)KeyHandle, v27);
                }
                v28 = CmPostCallbackNotification(16, v26, v28, (unsigned int)v51, (__int64)v47);
              }
              v37 = v28;
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              v14 = v37;
            }
            v9 = v41;
            goto LABEL_75;
          }
          if ( !v21 )
          {
            v22 = v49;
            goto LABEL_26;
          }
          if ( v21 <= 0x40 )
            goto LABEL_25;
          if ( v18 <= 0x40 )
          {
            if ( v15 <= 0x40u && v18 < v15 )
              v19 = v18;
          }
          else
          {
            v19 = v15 > 0x40u ? v20 + v18 : v18;
          }
          if ( !v19 )
          {
LABEL_25:
            v43 = v55;
            v22 = &v55[v20];
            goto LABEL_26;
          }
          P = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v19, 0x6E566D43u);
          if ( P )
          {
            v15 = (unsigned __int16)Src[0];
            if ( v19 == v18 )
            {
              v43 = v55;
              v22 = (char *)P;
            }
            else
            {
              v43 = P;
              if ( v19 == LOWORD(Src[0]) )
                v22 = v55;
              else
                v22 = (char *)P + v20;
            }
LABEL_26:
            if ( v15 )
            {
              v23 = v43;
              memmove(v43, Src[1], v15);
              Src[1] = v23;
              v15 = (unsigned __int16)Src[0];
            }
            else
            {
              Src[1] = 0LL;
            }
            if ( v18 )
            {
              memmove(v22, v42, v18);
              v42 = v22;
              v15 = (unsigned __int16)Src[0];
            }
            else
            {
              v42 = 0LL;
            }
            goto LABEL_59;
          }
          v14 = -1073741670;
          v37 = -1073741670;
          v9 = v41;
        }
      }
LABEL_75:
      ObfDereferenceObject(Object);
      goto LABEL_76;
    }
    *v17 = 0;
LABEL_52:
    v15 = (unsigned __int16)Src[0];
    goto LABEL_18;
  }
LABEL_76:
  if ( CmpTraceRoutine )
  {
    v35 = Src;
    LOBYTE(v35) = 14;
    CmpTraceRoutine(v35, &v52, (unsigned int)v14, 0LL, v9, Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v11 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v37;
  }
  return v14;
}
