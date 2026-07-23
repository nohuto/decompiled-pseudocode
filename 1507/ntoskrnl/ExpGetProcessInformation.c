/*
 * XREFs of ExpGetProcessInformation @ 0x140497410
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x14001AD60 (RtlQueryPackageIdentity.c)
 *     PoEnergyEstimationEnabled @ 0x140021210 (PoEnergyEstimationEnabled.c)
 *     KeFlushProcessWriteBuffers @ 0x14003FE30 (KeFlushProcessWriteBuffers.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     AuthzBasepSecurityAttributePresent @ 0x14004E5A0 (AuthzBasepSecurityAttributePresent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KeQueryValuesThread @ 0x14004FE00 (KeQueryValuesThread.c)
 *     PsIsProcessInSilo @ 0x140050120 (PsIsProcessInSilo.c)
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlULongAdd @ 0x1401E04A8 (RtlULongAdd.c)
 *     ExpCheckFullProcessInformationAccess @ 0x140413094 (ExpCheckFullProcessInformationAccess.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     SeQueryUserSidToken @ 0x140438B84 (SeQueryUserSidToken.c)
 *     ExpCopyProcessInfo @ 0x1404967A0 (ExpCopyProcessInfo.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     ExIsRestrictedCaller @ 0x1404CA200 (ExIsRestrictedCaller.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     PsGetCurrentSilo @ 0x140511880 (PsGetCurrentSilo.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x14053B960 (KeSynchronizeWithDynamicProcessors.c)
 */

__int64 __fastcall ExpGetProcessInformation(__int64 a1, ULONG a2, ULONG *a3, _DWORD *a4, int a5)
{
  ULONG_PTR v5; // r13
  unsigned __int8 v6; // bl
  unsigned __int64 v7; // r9
  PEPROCESS v8; // r14
  struct _KPROCESS *v9; // rcx
  int SessionId; // edi
  NTSTATUS v11; // eax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rax
  _QWORD *v18; // rsi
  char *p_Blink; // rdi
  struct _KTHREAD *v20; // rsi
  char *v21; // rcx
  _QWORD **v22; // r15
  int v23; // r12d
  unsigned __int64 *v24; // r14
  __int64 v25; // rbx
  __int64 v26; // r9
  _QWORD *i; // rbx
  signed __int64 *v28; // rbx
  __int16 v29; // ax
  ULONG v30; // r15d
  NTSTATUS v31; // eax
  unsigned __int8 v32; // cl
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  struct _KTHREAD *v35; // rsi
  char *v36; // rcx
  char *v37; // r12
  int v38; // r15d
  unsigned __int64 *v39; // r14
  __int64 v40; // rbx
  __int64 v41; // r9
  char *n; // rbx
  signed __int64 *v43; // rbx
  __int16 v44; // ax
  _QWORD *v45; // r15
  char *v46; // rsi
  signed __int64 *v47; // r14
  ULONG_PTR v48; // rbx
  __int64 v49; // r9
  struct _KTHREAD *v50; // rcx
  bool v51; // di
  struct _KTHREAD *v52; // rdx
  __int16 v53; // cx
  _DWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // r9
  struct _KTHREAD *v57; // r14
  unsigned __int64 *v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // r9
  __int64 v61; // r9
  unsigned int v62; // r8d
  unsigned int j; // edx
  _QWORD *k; // r9
  __int64 v65; // r10
  unsigned int v66; // r8d
  unsigned int m; // edx
  signed __int64 *v68; // rbx
  __int16 v69; // ax
  unsigned __int16 *v70; // rcx
  ULONG v71; // r10d
  char *v72; // r13
  _WORD *v73; // r9
  _WORD *v74; // r9
  unsigned __int64 v75; // r15
  ULONG v76; // r12d
  NTSTATUS v77; // eax
  int v78; // r10d
  __int64 v79; // rax
  _QWORD *p_Lock; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  int v82; // r15d
  __int64 v83; // rdi
  __int64 v84; // r9
  __int64 *v85; // rdi
  __int16 v86; // ax
  _LIST_ENTRY *v87; // rdi
  $26250A4449D73754BE65B784E5A61230 v88; // eax
  _LIST_ENTRY *Flink; // rdi
  PACCESS_TOKEN v90; // rbx
  ULONG_PTR v91; // r12
  NTSTATUS v92; // eax
  int v93; // edx
  unsigned int v94; // r9d
  NTSTATUS v95; // eax
  NTSTATUS v96; // eax
  struct _KTHREAD *v97; // rsi
  unsigned __int64 *v98; // rdi
  __int64 v99; // rbx
  __int64 v100; // r9
  __int16 v101; // ax
  __int64 v102; // rax
  __int64 v103; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v105; // eax
  __int64 result; // rax
  signed __int32 v107[8]; // [rsp+0h] [rbp-468h] BYREF
  int v108; // [rsp+40h] [rbp-428h]
  NTSTATUS v109; // [rsp+44h] [rbp-424h]
  char v110; // [rsp+48h] [rbp-420h]
  ULONG pulResult; // [rsp+4Ch] [rbp-41Ch] BYREF
  PVOID v112; // [rsp+50h] [rbp-418h]
  char v113; // [rsp+58h] [rbp-410h]
  ULONG v114; // [rsp+5Ch] [rbp-40Ch]
  PVOID Object; // [rsp+60h] [rbp-408h]
  _QWORD *v116; // [rsp+68h] [rbp-400h]
  ULONG v117; // [rsp+7Ch] [rbp-3ECh]
  ULONG v118; // [rsp+80h] [rbp-3E8h]
  __int64 v119; // [rsp+88h] [rbp-3E0h]
  ULONG *v120; // [rsp+90h] [rbp-3D8h]
  void *v121; // [rsp+98h] [rbp-3D0h]
  unsigned int v122; // [rsp+A0h] [rbp-3C8h]
  ULONG v123; // [rsp+A4h] [rbp-3C4h] BYREF
  ULONG v124; // [rsp+A8h] [rbp-3C0h]
  bool v125; // [rsp+ACh] [rbp-3BCh]
  unsigned int v126; // [rsp+B0h] [rbp-3B8h]
  ULONG_PTR AppIdSize; // [rsp+B8h] [rbp-3B0h] BYREF
  ULONG_PTR PackageSize; // [rsp+C0h] [rbp-3A8h] BYREF
  int v129; // [rsp+C8h] [rbp-3A0h] BYREF
  unsigned __int8 v130; // [rsp+CCh] [rbp-39Ch]
  unsigned __int8 v131; // [rsp+CDh] [rbp-39Bh]
  char v132; // [rsp+CEh] [rbp-39Ah]
  char v133; // [rsp+CFh] [rbp-399h]
  ULONG ulAddend; // [rsp+D0h] [rbp-398h]
  char *v135; // [rsp+D8h] [rbp-390h]
  _WORD *v136; // [rsp+E0h] [rbp-388h]
  unsigned __int64 v137; // [rsp+E8h] [rbp-380h]
  char *v138; // [rsp+F0h] [rbp-378h]
  void *CurrentSilo; // [rsp+F8h] [rbp-370h]
  char *v140; // [rsp+100h] [rbp-368h]
  _QWORD *v141; // [rsp+108h] [rbp-360h]
  unsigned __int16 *v142; // [rsp+110h] [rbp-358h]
  __int64 v143; // [rsp+118h] [rbp-350h]
  __int64 *v144; // [rsp+120h] [rbp-348h]
  int v145; // [rsp+158h] [rbp-310h]
  int v146; // [rsp+188h] [rbp-2E0h]
  PEPROCESS v147; // [rsp+190h] [rbp-2D8h]
  ULONG_PTR v148; // [rsp+198h] [rbp-2D0h]
  HANDLE Handle[10]; // [rsp+1A0h] [rbp-2C8h] BYREF
  _QWORD v150[10]; // [rsp+1F0h] [rbp-278h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-228h] BYREF
  WCHAR AppId[72]; // [rsp+290h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+320h] [rbp-148h] BYREF

  v143 = a1;
  v120 = a3;
  AppIdSize = 130LL;
  v5 = 0LL;
  v114 = 0;
  PackageSize = 254LL;
  v112 = 0LL;
  v108 = 0;
  Object = 0LL;
  pulResult = 0;
  if ( a3 )
    *a3 = 0;
  if ( a5 == 5 )
  {
    v113 = 0;
    v124 = 80;
  }
  else
  {
    v113 = 1;
    v124 = 136;
  }
  ulAddend = 480;
  v119 = a1;
  if ( a2 < 0x1E0 )
  {
    v108 = -1073741820;
    if ( !a3 )
      return 3221225476LL;
  }
  v110 = 0;
  v6 = KeGetCurrentThread()->gap0[10];
  if ( a5 != 148 || (result = ExpCheckFullProcessInformationAccess(v6), (int)result >= 0) )
  {
    if ( (unsigned int)ExIsRestrictedCaller(v6) )
      v110 = 1;
    v109 = 0;
    KeFlushProcessWriteBuffers(1);
    CurrentSilo = (void *)PsGetCurrentSilo();
    v8 = (PEPROCESS)PsIdleProcess;
    while ( 1 )
    {
LABEL_10:
      v112 = v8;
LABEL_11:
      if ( !v8 )
      {
        if ( v108 >= 0 && v119 && (*(_DWORD *)v119 = 0, v109 < 0) )
        {
          v108 = v109;
        }
        else if ( v120 )
        {
          *v120 = pulResult;
        }
        goto LABEL_195;
      }
      if ( (v8[1].DirectoryTableBase & 0x400000000LL) == 0
        || !v8->Header.SignalState
        || (v88 = v8[1].0, v8 = (PEPROCESS)v112, *(_DWORD *)&v88)
        || *((PVOID *)v112 + 6) != (char *)v112 + 48 )
      {
        if ( !a4 || v8 != PsIdleProcess )
        {
          SessionId = MmGetSessionId(v8);
          v145 = SessionId;
          if ( (!a4 || SessionId == *a4) && PsIsProcessInSilo(v9, (__int64)CurrentSilo) )
            break;
        }
      }
LABEL_149:
      if ( v8 == PsIdleProcess )
        v8 = 0LL;
      p_Lock = &v8->Header.Lock;
      v147 = v8;
      while ( 1 )
      {
        v8 = 0LL;
        v144 = 0LL;
        CurrentThread = KeGetCurrentThread();
        v82 = 0;
        --CurrentThread->SpecialApcDisable;
        v83 = KeAbPreAcquire((ULONG_PTR)&PspActiveProcessLock, 0LL, 0LL, v7);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(&PspActiveProcessLock, v83, (ULONG_PTR)&PspActiveProcessLock, v84);
        if ( v83 )
          *(_BYTE *)(v83 + 26) |= 1u;
        if ( p_Lock )
          v85 = (__int64 *)p_Lock[94];
        else
          v85 = (__int64 *)PsActiveProcessHead;
        while ( v85 != &PsActiveProcessHead )
        {
          v8 = (PEPROCESS)(v85 - 94);
          v144 = v85 - 94;
          if ( ObReferenceObjectSafeWithTag((__int64)(v85 - 94)) )
          {
            v82 = 1;
            break;
          }
          v85 = (__int64 *)*v85;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
        KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
        v86 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v86;
        if ( !v86
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( p_Lock )
          ObfDereferenceObjectWithTag(p_Lock, 0x6E457350u);
        if ( !v82 )
        {
          v8 = 0LL;
          v144 = 0LL;
        }
        p_Lock = &v8->Header.Lock;
        v147 = v8;
        if ( !v8 )
        {
          v8 = 0LL;
          v112 = 0LL;
          goto LABEL_11;
        }
        if ( (v8[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
        {
          if ( !v110 )
            goto LABEL_10;
          if ( ObOpenObjectByPointer(v8, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, Handle) >= 0 )
            break;
        }
      }
      ObCloseHandle(Handle[0], 0);
    }
    v119 = v143 + pulResult;
    v114 = ulAddend;
    v11 = RtlULongAdd(pulResult, ulAddend, &pulResult);
    v12 = v11;
    v109 = v11;
    if ( v11 < 0 )
    {
      v108 = v11;
      goto LABEL_195;
    }
    memset(v150, 0, sizeof(v150));
    if ( pulResult > a2 )
    {
      v108 = -1073741820;
      if ( !v120 )
        goto LABEL_195;
    }
    else
    {
      v16 = ExpCopyProcessInfo(v119, (struct _EX_RUNDOWN_REF *)v8, v113, v150);
      v12 = v16;
      v109 = v16;
      if ( v16 < 0 )
      {
        v108 = v16;
        goto LABEL_195;
      }
      v17 = v119;
      *(_QWORD *)v119 = 0LL;
      *(_DWORD *)(v17 + 100) = SessionId;
      *(_QWORD *)(v17 + 64) = 0LL;
      *(_DWORD *)(v17 + 56) = 0;
      if ( v8 == PsIdleProcess )
        *(_QWORD *)(v17 + 96) = 0LL;
      if ( v12 < 0 )
      {
        v108 = v12;
        goto LABEL_195;
      }
    }
    v18 = (_QWORD *)(v119 + 256);
    v116 = (_QWORD *)(v119 + 256);
    if ( v8 == PsIdleProcess )
    {
      Flink = v8->ThreadListHead.Flink;
      if ( Flink == &v8->ThreadListHead )
      {
        p_Blink = 0LL;
      }
      else
      {
        p_Blink = (char *)&Flink[-48].Blink;
        KeSynchronizeWithDynamicProcessors(v14, v13, v15, v7);
      }
      goto LABEL_38;
    }
    p_Blink = 0LL;
    v141 = 0LL;
    v20 = KeGetCurrentThread();
    v21 = (char *)v112;
    v22 = (_QWORD **)((char *)v112 + 1152);
    v23 = 0;
    --v20->KernelApcDisable;
    v24 = (unsigned __int64 *)(v21 + 728);
    v25 = KeAbPreAcquire((ULONG_PTR)(v21 + 728), 0LL, 0LL, v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v24, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v24, v25, (ULONG_PTR)v24, v26);
    if ( v25 )
      *(_BYTE *)(v25 + 26) |= 1u;
    for ( i = *v22; ; i = (_QWORD *)*i )
    {
      if ( i == v22 )
        goto LABEL_31;
      p_Blink = (char *)(i - 210);
      v141 = i - 210;
      if ( ObReferenceObjectSafeWithTag((__int64)(i - 210)) )
        break;
    }
    v23 = 1;
LABEL_31:
    v28 = (signed __int64 *)v112;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v112 + 91, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v28 + 91);
    KeAbPostRelease((ULONG_PTR)(v28 + 91));
    v29 = v20->KernelApcDisable + 1;
    v20->KernelApcDisable = v29;
    if ( !v29
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v23 )
    {
      p_Blink = 0LL;
      v141 = 0LL;
    }
    v8 = (PEPROCESS)v112;
    v12 = v109;
    v18 = v116;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_38:
        Object = p_Blink;
        if ( !p_Blink )
        {
          v45 = v18;
          v121 = v18;
          v46 = (char *)(v18 + 28);
          v116 = v46;
          if ( v108 < 0 )
            goto LABEL_127;
          v47 = (signed __int64 *)&v8[1].Affinity.Bitmap[5];
          v48 = ObFastReferenceObject(v47);
          v148 = v48;
          if ( !v48 )
          {
            v97 = KeGetCurrentThread();
            --v97->KernelApcDisable;
            v98 = (unsigned __int64 *)((char *)v112 + 728);
            v99 = KeAbPreAcquire((ULONG_PTR)v112 + 728, 0LL, 0LL, v49);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v98, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v98, v99, (ULONG_PTR)v98, v100);
            if ( v99 )
              *(_BYTE *)(v99 + 26) |= 1u;
            v48 = ObFastReferenceObjectLocked(v47);
            v148 = v48;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v98, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v98);
            KeAbPostRelease((ULONG_PTR)v98);
            v101 = v97->KernelApcDisable + 1;
            v97->KernelApcDisable = v101;
            if ( !v101
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v97->ApcState.ApcListHead[0].Flink != &v97->152
              && !v97->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
          }
          v50 = KeGetCurrentThread();
          --v50->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v48 + 48), 1u);
          v51 = AuthzBasepSecurityAttributePresent(*(_QWORD *)(v48 + 776), (const UNICODE_STRING *)&PspSysAppIdClaim);
          ExReleaseResourceLite(*(PERESOURCE *)(v48 + 48));
          v52 = KeGetCurrentThread();
          Handle[8] = v52;
          v53 = v52->KernelApcDisable + 1;
          v52->KernelApcDisable = v53;
          if ( !v53
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v52->ApcState.ApcListHead[0].Flink != &v52->152
            && !v52->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v125 = v51;
          ObFastDereferenceObject(v47, v48);
          v54 = v121;
          *(_QWORD *)((char *)v121 + 52) = 0LL;
          v54[52] = 0;
          v45 = v121;
          *((_QWORD *)v121 + 27) = *((_QWORD *)v112 + 238) << 12;
          v45[5] = v150[3];
          *((_DWORD *)v45 + 12) = 0;
          if ( v51 )
            *((_DWORD *)v45 + 12) = 1;
          v8 = (PEPROCESS)v112;
          v55 = *((_QWORD *)v112 + 222);
          if ( v55 )
          {
            *(_OWORD *)v45 = *(_OWORD *)v55;
            *((_OWORD *)v45 + 1) = *(_OWORD *)(v55 + 16);
            v45[4] = *(_QWORD *)(v55 + 32);
          }
          else
          {
            memset(v45, 0, 0x28uLL);
          }
          if ( !PoEnergyEstimationEnabled() || v8 == PsIdleProcess )
          {
            memset(v45 + 8, 0, 0x90uLL);
          }
          else
          {
            v57 = KeGetCurrentThread();
            --v57->KernelApcDisable;
            v58 = (unsigned __int64 *)((char *)v112 + 1688);
            v59 = KeAbPreAcquire((ULONG_PTR)v112 + 1688, 0LL, 0LL, v56);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v58, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v58, v59, (ULONG_PTR)v58, v60);
            if ( v59 )
              *(_BYTE *)(v59 + 26) |= 1u;
            v61 = *((_QWORD *)v112 + 227);
            v45[16] = *(_QWORD *)(v61 + 64);
            v45[17] = *(_QWORD *)(v61 + 72);
            v45[18] = *(_QWORD *)(v61 + 80);
            v45[19] = *(_QWORD *)(v61 + 88);
            v45[20] = *(_QWORD *)(v61 + 96);
            *((_DWORD *)v45 + 42) = *(_DWORD *)(v61 + 104);
            *((_DWORD *)v45 + 43) = *(_DWORD *)(v61 + 108);
            v45[22] = *(_QWORD *)(v61 + 112);
            v45[23] = *(_QWORD *)(v61 + 120);
            v45[24] = *(_QWORD *)(v61 + 128);
            v45[25] = *(_QWORD *)(v61 + 136);
            v62 = 0;
            v122 = 0;
            while ( v62 < 4 )
            {
              for ( j = 0; ; ++j )
              {
                v126 = j;
                if ( j >= 2 )
                  break;
                v45[2 * v62 + 8 + j] = *(_QWORD *)(v61 + 8 * (j + 2LL * v62));
              }
              v122 = ++v62;
            }
            for ( k = (_QWORD *)*((_QWORD *)v112 + 144); k != (_QWORD *)((char *)v112 + 1152); k = (_QWORD *)*k )
            {
              v65 = k[34];
              v66 = 0;
              v122 = 0;
              while ( v66 < 4 )
              {
                for ( m = 0; ; ++m )
                {
                  v126 = m;
                  if ( m >= 2 )
                    break;
                  v45[2 * v66 + 8 + m] += *(_QWORD *)(v65 + 8 * (m + 2LL * v66));
                }
                v122 = ++v66;
              }
            }
            v68 = (signed __int64 *)v112;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v112 + 211, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v68 + 211);
            KeAbPostRelease((ULONG_PTR)(v68 + 211));
            v69 = v57->KernelApcDisable + 1;
            v57->KernelApcDisable = v69;
            if ( !v69
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v57->ApcState.ApcListHead[0].Flink != &v57->152
              && !v57->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            v8 = (PEPROCESS)v112;
            v45 = v121;
          }
          v12 = v109;
          if ( v109 >= 0 )
          {
            p_Blink = (char *)Object;
            v46 = (char *)v116;
LABEL_127:
            if ( a5 == 148 )
            {
              v90 = PsReferencePrimaryToken(v8);
              Handle[9] = v90;
              SeQueryUserSidToken((__int64)v90, Src, 0x44u, &v123);
              PackageSize = 254LL;
              AppIdSize = 130LL;
              v109 = RtlQueryPackageIdentity(v90, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
              if ( v109 >= 0 )
              {
                v5 = AppIdSize;
                v91 = PackageSize;
              }
              else
              {
                v91 = 0LL;
                PackageSize = 0LL;
                AppIdSize = 0LL;
              }
              ObFastDereferenceObject((signed __int64 *)&v8[1].Affinity.Bitmap[5], (unsigned __int64)v90);
              v118 = (v123 + 7) & 0xFFFFFFF8;
              v117 = v118;
              v92 = RtlULongAdd(pulResult, v118, &pulResult);
              v12 = v92;
              v109 = v92;
              if ( v92 < 0 )
              {
                v108 = v92;
                goto LABEL_280;
              }
              v114 += v93;
              if ( pulResult > a2 )
              {
                v108 = -1073741820;
                if ( !v120 )
                  goto LABEL_280;
              }
              else
              {
                *((_DWORD *)v45 + 13) = 224;
                memmove(v46, Src, v94);
                if ( v12 < 0 )
                {
                  v108 = v12;
                  goto LABEL_280;
                }
                v46 += v118;
                v116 = v46;
              }
              v7 = 0xFFFFFFFFLL;
              if ( v91 )
              {
                if ( v91 > 0xFFFFFFFF )
                {
                  v108 = -1073741820;
                  goto LABEL_280;
                }
                v117 = v91;
                v95 = RtlULongAdd(pulResult, v91, &pulResult);
                v12 = v95;
                v109 = v95;
                if ( v95 < 0 )
                {
                  v108 = v95;
                  goto LABEL_280;
                }
                v114 += v91;
                if ( pulResult > a2 )
                {
                  v108 = -1073741820;
                  if ( !v120 )
                    goto LABEL_280;
                }
                else
                {
                  *((_DWORD *)v45 + 14) = (_DWORD)v46 - (_DWORD)v45;
                  memmove(v46, PackageFullName, (unsigned int)v91);
                  v7 = 0xFFFFFFFFLL;
                  if ( v12 < 0 )
                  {
                    v108 = v12;
                    goto LABEL_280;
                  }
                  v46 += (unsigned int)v91;
                  v116 = v46;
                }
              }
              if ( v5 )
              {
                if ( v5 > v7 )
                {
                  v108 = -1073741820;
                  goto LABEL_280;
                }
                v117 = v5;
                v96 = RtlULongAdd(pulResult, v5, &pulResult);
                v12 = v96;
                v109 = v96;
                if ( v96 < 0 )
                {
                  v108 = v96;
                  goto LABEL_280;
                }
                v114 += v5;
                if ( pulResult > a2 )
                {
                  v108 = -1073741820;
                  if ( !v120 )
                    goto LABEL_280;
                }
                else
                {
                  *((_DWORD *)v45 + 52) = (_DWORD)v46 - (_DWORD)v45;
                  memmove(v46, AppId, (unsigned int)v5);
                  if ( v12 < 0 )
                  {
                    v108 = v12;
                    goto LABEL_280;
                  }
                  v46 += (unsigned int)v5;
                  v116 = v46;
                }
              }
            }
            if ( v8 == PsIdleProcess )
            {
LABEL_146:
              if ( v108 >= 0 )
              {
                *(_DWORD *)v119 = v114;
                if ( v12 < 0 )
                {
                  v108 = v12;
                  goto LABEL_280;
                }
              }
            }
            else
            {
              if ( v8 == PsInitialSystemProcess )
              {
                v70 = (unsigned __int16 *)&ExpSystemProcessName;
              }
              else if ( v8 == (PEPROCESS)PsSecureSystemProcess )
              {
                v70 = (unsigned __int16 *)&ExpSecureSystemProcessName;
              }
              else
              {
                v70 = (unsigned __int16 *)v8[1].ActiveProcessors.Bitmap[14];
              }
              v142 = v70;
              v71 = *v70;
              v117 = v71;
              v72 = v46;
              v135 = v46;
              v123 = v71;
              v73 = (_WORD *)*((_QWORD *)v70 + 1);
              v136 = v73;
              if ( a5 != 148 && v71 )
              {
                v74 = &v73[(unsigned __int64)v71 >> 1];
                v136 = v74;
                while ( v74 != *((_WORD **)v70 + 1) )
                {
                  v136 = --v74;
                  if ( *v74 == 92 )
                  {
                    v136 = ++v74;
                    break;
                  }
                }
                v71 -= 2 * (((__int64)v74 - *((_QWORD *)v70 + 1)) >> 1);
                v123 = v71;
              }
              v75 = v71;
              v76 = (v71 + 9) & 0xFFFFFFF8;
              v117 = v76;
              v77 = RtlULongAdd(pulResult, v76, &pulResult);
              v12 = v77;
              v109 = v77;
              if ( v77 < 0 )
              {
                v108 = v77;
                goto LABEL_280;
              }
              v114 += v76;
              if ( pulResult > a2 )
              {
                v108 = -1073741820;
                if ( !v120 )
                  goto LABEL_280;
              }
              else
              {
                if ( v78 )
                {
                  memmove(v46, (const void *)v7, (unsigned int)v75);
                  v72 = &v46[2 * (v75 >> 1)];
                  v135 = v72;
                }
                *(_WORD *)v72 = 0;
                v72 += 2;
                v135 = v72;
                if ( v12 < 0 )
                {
                  v108 = v12;
                  goto LABEL_280;
                }
              }
              if ( v108 >= 0 )
              {
                v79 = v119;
                *(_WORD *)(v119 + 56) = (_WORD)v72 - (_WORD)v46 - 2;
                *(_WORD *)(v79 + 58) = v76;
                *(_QWORD *)(v79 + 64) = v46;
                if ( v12 < 0 )
                {
                  v108 = v12;
                  goto LABEL_280;
                }
                goto LABEL_146;
              }
            }
            v5 = 0LL;
            goto LABEL_149;
          }
          v108 = v109;
LABEL_195:
          p_Blink = (char *)Object;
LABEL_280:
          if ( v8 && v8 != PsIdleProcess )
            ObfDereferenceObjectWithTag(v8, 0x6E457350u);
          if ( p_Blink && *((PVOID *)p_Blink + 68) != PsIdleProcess )
            ObfDereferenceObjectWithTag(p_Blink, 0x6E457350u);
          if ( CurrentSilo )
            PspDereferenceSiloObject(CurrentSilo);
          return (unsigned int)v108;
        }
        v146 = *((_DWORD *)p_Blink + 1);
        if ( !(_BYTE)v146 )
        {
          v30 = v124;
          v31 = RtlULongAdd(pulResult, v124, &pulResult);
          v12 = v31;
          v109 = v31;
          if ( v31 < 0 )
          {
            v108 = v31;
            goto LABEL_280;
          }
          v114 += v30;
          if ( pulResult > a2 )
          {
            v108 = -1073741820;
            if ( !v120 )
              goto LABEL_280;
          }
          else
          {
            KeQueryValuesThread((__int64)p_Blink, (__int64)&v129);
            v32 = v130;
            if ( v130 == 4 )
            {
              v114 -= v30;
              pulResult -= v30;
            }
            else
            {
              *((_DWORD *)v18 + 6) = v129;
              *((_DWORD *)v18 + 17) = v32;
              *((_DWORD *)v18 + 18) = v131;
              *((_DWORD *)v18 + 14) = v132;
              *((_DWORD *)v18 + 15) = v133;
              *v18 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 163);
              v18[1] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 183);
              v18[2] = *((_QWORD *)p_Blink + 187);
              *((_DWORD *)v18 + 16) = *((_DWORD *)p_Blink + 85);
              *(_OWORD *)(v18 + 5) = *(_OWORD *)(p_Blink + 1576);
              if ( (*((_DWORD *)p_Blink + 29) & 0x400) != 0 )
              {
                v33 = *((_QWORD *)p_Blink + 208);
              }
              else
              {
                if ( (p_Blink[1732] & 8) != 0
                  || (v33 = *((_QWORD *)Object + 192), _InterlockedOr(v107, 0), (p_Blink[1732] & 8) != 0) )
                {
                  v33 = 0LL;
                }
                v8 = (PEPROCESS)v112;
                v12 = v109;
                p_Blink = (char *)Object;
                v18 = v116;
              }
              v137 = v33;
              if ( v110 && v33 > (unsigned __int64)MmHighestUserAddress )
                v18[4] = 0LL;
              else
                v18[4] = v33;
              if ( v113 )
              {
                if ( v110 )
                {
                  v18[10] = 0LL;
                  v18[11] = 0LL;
                }
                else
                {
                  v18[10] = *((_QWORD *)p_Blink + 7);
                  v18 = v116;
                  v116[11] = *((_QWORD *)p_Blink + 6);
                  v8 = (PEPROCESS)v112;
                  v12 = v109;
                  p_Blink = (char *)Object;
                }
                v34 = *((_QWORD *)p_Blink + 208);
                v137 = v34;
                if ( v110 && v34 > (unsigned __int64)MmHighestUserAddress )
                  v18[12] = 0LL;
                else
                  v18[12] = v34;
                v18[13] = *((_QWORD *)p_Blink + 30);
                v18[14] = 0LL;
                v18[15] = 0LL;
                v18[16] = 0LL;
              }
              ++*(_DWORD *)(v119 + 4);
              if ( v12 < 0 )
              {
                v108 = v12;
                goto LABEL_280;
              }
              v18 = (_QWORD *)((char *)v18 + v30);
              v116 = v18;
            }
          }
        }
        if ( v8 == PsIdleProcess )
          break;
        p_Blink = 0LL;
        v138 = 0LL;
        v35 = KeGetCurrentThread();
        v36 = (char *)v112;
        v37 = (char *)v112 + 1152;
        v38 = 0;
        --v35->KernelApcDisable;
        v39 = (unsigned __int64 *)(v36 + 728);
        v40 = KeAbPreAcquire((ULONG_PTR)(v36 + 728), 0LL, 0LL, v7);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v39, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v39, v40, (ULONG_PTR)v39, v41);
        if ( v40 )
          *(_BYTE *)(v40 + 26) |= 1u;
        for ( n = (char *)*((_QWORD *)Object + 210); n != v37; n = *(char **)n )
        {
          p_Blink = n - 1680;
          v138 = n - 1680;
          if ( ObReferenceObjectSafeWithTag((__int64)(n - 1680)) )
          {
            v38 = 1;
            break;
          }
        }
        v43 = (signed __int64 *)v112;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v112 + 91, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v43 + 91);
        KeAbPostRelease((ULONG_PTR)(v43 + 91));
        v44 = v35->KernelApcDisable + 1;
        v35->KernelApcDisable = v44;
        if ( !v44
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
          && !v35->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( Object )
          ObfDereferenceObjectWithTag(Object, 0x6E457350u);
        if ( !v38 )
        {
          p_Blink = 0LL;
          v138 = 0LL;
        }
        v140 = p_Blink;
LABEL_83:
        v8 = (PEPROCESS)v112;
        v12 = v109;
        v18 = v116;
      }
      v87 = (_LIST_ENTRY *)*((_QWORD *)p_Blink + 95);
      if ( v87 == &v8->ThreadListHead )
      {
        p_Blink = 0LL;
        v140 = 0LL;
      }
      else
      {
        p_Blink = (char *)&v87[-48].Blink;
        v140 = p_Blink;
        if ( KeDynamicPartitioningSupported )
        {
          _InterlockedOr(v107, 0);
          if ( (KiDynamicProcessorLock & 1) == 0 )
          {
            v102 = KeAbPreAcquire((ULONG_PTR)&KiDynamicProcessorLock, 0LL, 0LL, v7);
            v103 = v102;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)&KiDynamicProcessorLock, 0) )
              ExpAcquireFastMutexContended((ULONG_PTR)&KiDynamicProcessorLock, v102);
            if ( v103 )
              *(_BYTE *)(v103 + 26) |= 1u;
            dword_140338E70 = CurrentIrql;
            qword_140338E48 = 0LL;
            v105 = _InterlockedCompareExchange((volatile signed __int32 *)&KiDynamicProcessorLock, 1, 0);
            if ( v105 )
              ExpReleaseFastMutexContended((volatile signed __int32 *)&KiDynamicProcessorLock, v105);
            __writecr8(CurrentIrql);
            KeAbPostRelease((ULONG_PTR)&KiDynamicProcessorLock);
          }
          goto LABEL_83;
        }
      }
    }
  }
  return result;
}
