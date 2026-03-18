/*
 * XREFs of CmLoadKeyHelper @ 0x1401DE79C
 * Callers:
 *     NtLoadKey3 @ 0x1401DF924 (NtLoadKey3.c)
 *     NtLoadKeyEx @ 0x1404454BC (NtLoadKeyEx.c)
 *     NtLoadKey @ 0x14055D22C (NtLoadKey.c)
 *     NtLoadKey2 @ 0x140584524 (NtLoadKey2.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     CmpTraceHiveLoadStop @ 0x1404454F8 (CmpTraceHiveLoadStop.c)
 *     CmpTraceHiveLoadStart @ 0x14044554C (CmpTraceHiveLoadStart.c)
 *     CmConvertHandleToKernelHandle @ 0x1404455C0 (CmConvertHandleToKernelHandle.c)
 *     CmpNameFromAttributes @ 0x14044565C (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x140445960 (CmCheckNoTxContext.c)
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     ObReferenceObjectByName @ 0x1404CF06C (ObReferenceObjectByName.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     ObDeleteCapturedInsertInfo @ 0x1404ECC84 (ObDeleteCapturedInsertInfo.c)
 *     SeTokenType @ 0x1405411D4 (SeTokenType.c)
 *     CmReleaseLoadKeyContext @ 0x1405562AC (CmReleaseLoadKeyContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmLoadKeyHelper(
        _OWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        HANDLE *a7,
        char a8,
        HANDLE a9)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v12; // rtt
  BOOLEAN v13; // bl
  struct _KTHREAD *v14; // rdx
  __int16 v15; // cx
  bool v17; // zf
  unsigned __int64 v18; // rtt
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  unsigned __int64 v21; // rtt
  __int64 v22; // rdx
  NTSTATUS v23; // ebx
  unsigned __int64 v24; // rax
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned __int64 v28; // rtt
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  unsigned __int64 v31; // rax
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  unsigned __int64 v34; // rtt
  struct _KTHREAD *v35; // rcx
  __int16 v36; // ax
  HANDLE *v37; // rdx
  __int64 v38; // r8
  int v39; // r9d
  _QWORD *v40; // rcx
  unsigned __int64 v41; // rtt
  struct _KTHREAD *v42; // rcx
  __int16 v43; // ax
  ULONG64 v44; // rcx
  int v45; // eax
  ULONG64 v46; // rcx
  unsigned __int64 v47; // rtt
  struct _KTHREAD *v48; // rcx
  __int16 v49; // ax
  struct _KTHREAD *v50; // rax
  NTSTATUS v51; // esi
  struct _KTHREAD *v52; // rcx
  int v53; // r8d
  int v54; // eax
  unsigned __int64 v55; // rtt
  struct _KTHREAD *v56; // rcx
  __int16 v57; // ax
  struct _KTHREAD *v58; // rcx
  __int16 v59; // ax
  int v60; // ecx
  void *v61; // rcx
  PVOID v62; // rbx
  struct _KTHREAD *v63; // rcx
  __int16 v64; // ax
  unsigned __int64 v65; // rtt
  struct _KTHREAD *v66; // rcx
  __int16 v67; // ax
  char v68; // [rsp+40h] [rbp-218h]
  char v69; // [rsp+41h] [rbp-217h]
  void *Src[2]; // [rsp+50h] [rbp-208h] BYREF
  PVOID v71; // [rsp+60h] [rbp-1F8h] BYREF
  PVOID v72; // [rsp+68h] [rbp-1F0h]
  PVOID v73; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v74; // [rsp+78h] [rbp-1E0h] BYREF
  PVOID v75; // [rsp+80h] [rbp-1D8h]
  PVOID v76; // [rsp+88h] [rbp-1D0h]
  PVOID PoolWithQuotaTag; // [rsp+90h] [rbp-1C8h]
  char v78[8]; // [rsp+98h] [rbp-1C0h] BYREF
  PVOID P; // [rsp+A0h] [rbp-1B8h]
  __int16 v80; // [rsp+A8h] [rbp-1B0h]
  PVOID v81; // [rsp+B0h] [rbp-1A8h] BYREF
  _QWORD v82[2]; // [rsp+B8h] [rbp-1A0h] BYREF
  int v83; // [rsp+C8h] [rbp-190h]
  _BYTE v84[48]; // [rsp+D0h] [rbp-188h] BYREF
  HANDLE v85; // [rsp+100h] [rbp-158h] BYREF
  PVOID Object; // [rsp+108h] [rbp-150h] BYREF
  PVOID Token; // [rsp+110h] [rbp-148h] BYREF
  PVOID v88; // [rsp+118h] [rbp-140h] BYREF
  __int128 v89; // [rsp+120h] [rbp-138h]
  _QWORD v90[12]; // [rsp+130h] [rbp-128h] BYREF
  _DWORD v91[50]; // [rsp+190h] [rbp-C8h] BYREF
  char v94; // [rsp+298h] [rbp+40h]

  *(_DWORD *)v84 = 0;
  memset(&v84[8], 0, 0x28uLL);
  LOWORD(Src[0]) = 0;
  *(void **)((char *)Src + 2) = 0LL;
  *(_DWORD *)((char *)&Src[1] + 2) = 0;
  HIWORD(Src[1]) = 0;
  v71 = 0LL;
  v73 = 0LL;
  memset(v91, 0, 136);
  v75 = 0LL;
  v94 = 0;
  v74 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v12 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v12 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v13 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v13 )
    {
      v14 = KeGetCurrentThread();
      v15 = v14->KernelApcDisable + 1;
      v14->KernelApcDisable = v15;
      if ( !v15
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
        && !v14->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( !v13 )
      return 3221225865LL;
  }
  v68 = 1;
  v69 = 0;
  v72 = 0LL;
  if ( (a3 & 0xFFFF400B) != 0 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v18 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    v17 = v18 == _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpShutdownRundown,
                   (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                   CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_11:
    if ( !v17 )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v19 = KeGetCurrentThread();
    v20 = v19->KernelApcDisable + 1;
    v19->KernelApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
      && !v19->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225713LL;
  }
  if ( (a3 & 0x2010) == 0x2000 || (a3 & 0x1000) != 0 && (a3 & 0x600) != 0x600 )
    goto LABEL_19;
  v23 = CmCheckNoTxContext();
  if ( v23 < 0 )
  {
LABEL_23:
    v24 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    _m_prefetchw(&CmpShutdownRundown);
    if ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownRundown, v24 - 2, v24) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v25 = KeGetCurrentThread();
    v26 = v25->KernelApcDisable + 1;
    v25->KernelApcDisable = v26;
    if ( !v26
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
      && !v25->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return (unsigned int)v23;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v83 = a3 & 0x10;
  if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
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
    return 3221225569LL;
  }
  if ( (a3 & 0x810) != 0 )
  {
    if ( !a7 )
    {
LABEL_41:
      v31 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      _m_prefetchw(&CmpShutdownRundown);
      if ( v31 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownRundown, v31 - 2, v31) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v32 = KeGetCurrentThread();
      v33 = v32->KernelApcDisable + 1;
      v32->KernelApcDisable = v33;
      if ( !v33
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
        && !v32->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221225715LL;
    }
    if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
    {
LABEL_19:
      _m_prefetchw(&CmpShutdownRundown);
      v21 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      v17 = v21 == _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpShutdownRundown,
                     (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                     CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
      goto LABEL_11;
    }
  }
  else
  {
    if ( a7 )
    {
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
      return 3221225716LL;
    }
    if ( Handle )
      goto LABEL_41;
  }
  P = 0LL;
  PoolWithQuotaTag = 0LL;
  LOBYTE(v22) = PreviousMode;
  v23 = CmpNameFromAttributes(a2, v22, v78);
  if ( v23 < 0 )
    goto LABEL_23;
  if ( PreviousMode == 1 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a3 & 0x810) != 0 )
    {
      v37 = a7;
      v40 = a7;
      if ( (unsigned __int64)a7 >= MmUserProbeAddress )
        v40 = (_QWORD *)MmUserProbeAddress;
      *v40 = 0LL;
    }
  }
  *(_OWORD *)v84 = *a1;
  *(_OWORD *)&v84[16] = a1[1];
  *(_OWORD *)&v84[32] = a1[2];
  if ( v83 && *(_QWORD *)&v84[8] )
  {
    ExFreePoolWithTag(P, 0);
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
    return 3221225711LL;
  }
  if ( PreviousMode == 1 )
  {
    v44 = *(_QWORD *)&v84[16];
    if ( *(_QWORD *)&v84[16] >= MmUserProbeAddress )
      v44 = MmUserProbeAddress;
    v45 = *(_DWORD *)v44;
    LODWORD(v89) = v45;
    v37 = *(HANDLE **)(v44 + 8);
    *((_QWORD *)&v89 + 1) = v37;
    *(_OWORD *)Src = v89;
    if ( (_WORD)v45 )
    {
      if ( ((unsigned __int8)v37 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v46 = (ULONG64)v37 + (unsigned __int16)v45;
      if ( v46 > MmUserProbeAddress || v46 < (unsigned __int64)v37 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  else
  {
    *(_OWORD *)Src = *(_OWORD *)*((_QWORD *)a1 + 2);
  }
  v80 = (__int16)Src[0];
  if ( LOWORD(Src[0]) )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, LOWORD(Src[0]), 0x6B624D43u);
    if ( !PoolWithQuotaTag )
    {
      ExFreePoolWithTag(P, 0);
      _m_prefetchw(&CmpShutdownRundown);
      v47 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v47 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v48 = KeGetCurrentThread();
      v49 = v48->KernelApcDisable + 1;
      v48->KernelApcDisable = v49;
      if ( !v49
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v48->ApcState.ApcListHead[0].Flink != &v48->152
        && !v48->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221225626LL;
    }
    memmove(PoolWithQuotaTag, Src[1], LOWORD(Src[0]));
    Src[1] = PoolWithQuotaTag;
  }
  else
  {
    Src[1] = 0LL;
  }
  *(_QWORD *)&v84[16] = Src;
  *(_QWORD *)&v84[32] = 0LL;
  if ( a4 )
  {
    LOBYTE(v39) = PreviousMode;
    v23 = CmObReferenceObjectByHandle(a4, 0, v38, v39, (__int64)&v71, 0LL);
  }
  if ( Handle && v23 >= 0 )
  {
    v23 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v75 = Object;
  }
  if ( a9 )
  {
    if ( v23 < 0 )
    {
LABEL_107:
      if ( v71 )
        ObfDereferenceObject(v71);
      ExFreePoolWithTag(P, 0);
      if ( PoolWithQuotaTag )
        ExFreePoolWithTag(PoolWithQuotaTag, 0);
      goto LABEL_23;
    }
    v23 = ObReferenceObjectByHandle(a9, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
    v72 = Token;
    if ( SeTokenType(Token) != TokenImpersonation )
      v23 = -1073741656;
  }
  if ( v23 < 0 )
    goto LABEL_107;
  v50 = KeGetCurrentThread();
  --v50->KernelApcDisable;
  LOBYTE(v38) = PreviousMode;
  v51 = CmConvertHandleToKernelHandle(*(_QWORD *)&v84[8], v37, v38, 131097LL, &v84[8]);
  if ( v51 >= 0 )
  {
    v76 = 0LL;
    memset(v90, 0, sizeof(v90));
    v82[1] = v82;
    v82[0] = v82;
    v52 = KeGetCurrentThread();
    --v52->KernelApcDisable;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    {
      if ( *(_QWORD *)&v84[8] )
      {
        ObReferenceObjectByHandle(*(HANDLE *)&v84[8], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v88, 0LL);
        v76 = v88;
      }
      v90[10] = 2LL;
      v90[0] = v76;
      v90[1] = Src;
      v90[2] = v78;
      LODWORD(v90[3]) = a3;
      v90[4] = v71;
      v90[5] = v75;
      LODWORD(v90[6]) = DesiredAccess;
      v90[7] = a7;
      v90[11] = v72;
      LOBYTE(v53) = 1;
      v51 = CmpCallCallBacks(32, (unsigned int)v90, v53, 33, 0LL, (__int64)v82);
    }
    if ( v51 < 0 )
    {
      if ( v51 == -1073740541 )
      {
        v51 = 0;
        v94 = 1;
      }
    }
    else
    {
      CmpTraceHiveLoadStart(v78, a3);
      v69 = 1;
      if ( (a3 & 0x10) != 0 )
      {
        _m_prefetchw(&CmpShutdownRundown);
        v55 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v55 != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&CmpShutdownRundown,
                      (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                      CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
          ExfReleaseRundownProtection(&CmpShutdownRundown);
        v56 = KeGetCurrentThread();
        v57 = v56->KernelApcDisable + 1;
        v56->KernelApcDisable = v57;
        if ( !v57
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v56->ApcState.ApcListHead[0].Flink != &v56->152
          && !v56->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v68 = 0;
        v54 = CmLoadAppKey(v84, v78, a3, v71, v75, v72, &v73, &v74);
      }
      else
      {
        v54 = CmLoadKey(v84, v78, a3, v71, v75, v72, &v73, &v74);
      }
      v51 = CmPostCallbackNotification(33, (_DWORD)v76, v54, (unsigned int)v90, (__int64)v82);
    }
    v58 = KeGetCurrentThread();
    v59 = v58->KernelApcDisable + 1;
    v58->KernelApcDisable = v59;
    if ( !v59
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v58->ApcState.ApcListHead[0].Flink != &v58->152
      && !v58->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( *(_QWORD *)&v84[8] )
      ZwClose(*(HANDLE *)&v84[8]);
    if ( v76 )
      ObfDereferenceObject(v76);
  }
  if ( v71 )
    ObfDereferenceObject(v71);
  if ( v51 >= 0 && (a3 & 0x810) != 0 && !v94 )
  {
    v81 = 0LL;
    v60 = v91[0];
    if ( (a3 & 0x10) != 0 )
      v60 = 64;
    v91[0] = v60;
    v61 = Src;
    if ( v73 )
      v61 = v73;
    v73 = v61;
    v51 = ObReferenceObjectByName((_DWORD)v61, 64, 0, 0, (__int64)CmKeyObjectType, 0, (__int64)v91, (__int64)&v81);
    if ( v51 >= 0 )
    {
      v62 = v81;
      ObDeleteCapturedInsertInfo(v81);
      v51 = ObOpenObjectByPointer(v62, 0x40u, 0LL, DesiredAccess, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v85);
      ObfDereferenceObject(v62);
      if ( v51 >= 0 )
        *a7 = v85;
    }
    if ( v74 )
    {
      if ( (a3 & 0x10) != 0 )
        CmReleaseLoadKeyContext(v74, (unsigned int)v51);
      else
        CmpDereferenceKeyControlBlock(v74);
      v74 = 0LL;
    }
    if ( v51 < 0 && (a3 & 0x800) != 0 )
      v51 = 0;
  }
  if ( v74 )
    CmReleaseLoadKeyContext(v74, (unsigned int)v51);
  v63 = KeGetCurrentThread();
  v64 = v63->KernelApcDisable + 1;
  v63->KernelApcDisable = v64;
  if ( !v64
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v63->ApcState.ApcListHead[0].Flink != &v63->152
    && !v63->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v73 && v73 != Src )
    ExFreePoolWithTag(v73, 0x624E4D43u);
  if ( v72 )
    ObfDereferenceObject(v72);
  if ( v75 )
    ObfDereferenceObject(v75);
  ExFreePoolWithTag(P, 0);
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( v68 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v65 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v65 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v66 = KeGetCurrentThread();
    v67 = v66->KernelApcDisable + 1;
    v66->KernelApcDisable = v67;
    if ( !v67
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v66->ApcState.ApcListHead[0].Flink != &v66->152
      && !v66->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( v69 )
    CmpTraceHiveLoadStop((unsigned int)v51);
  return (unsigned int)v51;
}
