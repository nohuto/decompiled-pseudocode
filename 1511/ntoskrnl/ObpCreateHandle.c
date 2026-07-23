/*
 * XREFs of ObpCreateHandle @ 0x14040CFA0
 * Callers:
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x140476F10 (NtOpenProcessTokenEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x14000383C (SepSidInTokenSidHash.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     PsGetCurrentThreadProcessId @ 0x14003D380 (PsGetCurrentThreadProcessId.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     SeComputeCreatorDeniedRights @ 0x1400426B0 (SeComputeCreatorDeniedRights.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x140079F60 (ExfAcquireRundownProtection.c)
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     ObReferenceObjectExWithTag @ 0x1400D5D80 (ObReferenceObjectExWithTag.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwDuplicateObject @ 0x140150DA0 (ZwDuplicateObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpFreeHandleTableEntry @ 0x1403F21B0 (ExpFreeHandleTableEntry.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14040BFB0 (ObpIncrementHandleCountEx.c)
 *     ObDereferenceSecurityDescriptor @ 0x140420D30 (ObDereferenceSecurityDescriptor.c)
 *     ObpInsertOrLocateNamedObject @ 0x14046FBC0 (ObpInsertOrLocateNamedObject.c)
 *     ObpDecrementHandleCount @ 0x140470084 (ObpDecrementHandleCount.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     RtlMapGenericMask @ 0x140472860 (RtlMapGenericMask.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140472A30 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x140472B50 (SePrivilegeCheck.c)
 *     SePrivilegeObjectAuditAlarm @ 0x14047896C (SePrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404789C0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1404956FC (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     SeAppendPrivileges @ 0x1404A3E30 (SeAppendPrivileges.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404B5E6C (ExpAllocateHandleTableEntrySlow.c)
 *     ObHandleRevocationBlockAddObject @ 0x14062D98C (ObHandleRevocationBlockAddObject.c)
 *     ObpSetObjectAuditInfo @ 0x14062E334 (ObpSetObjectAuditInfo.c)
 *     ObpCallPostOperationCallbacks @ 0x14062EEC0 (ObpCallPostOperationCallbacks.c)
 *     ObpPostInterceptHandleCreate @ 0x14062EF58 (ObpPostInterceptHandleCreate.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14064FF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140650CA8 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140651738 (SepAdtClassifyObjectIntoSubCategory.c)
 *     EtwpTraceHandle @ 0x140662228 (EtwpTraceHandle.c)
 *     ExpSetHandleExtraInfo @ 0x14066CA18 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14066CC94 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObpCreateHandle(
        unsigned int a1,
        char *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 a7,
        char *a8,
        PVOID *a9,
        __int64 *a10)
{
  unsigned int v10; // r12d
  int v11; // ebx
  char *v12; // rdi
  unsigned __int64 v15; // r15
  PEPROCESS Process; // rcx
  ULONG_PTR v17; // rax
  bool v18; // al
  char *v19; // rdi
  __int64 v20; // r15
  KPROCESSOR_MODE AccessMode; // r12
  int v22; // eax
  signed __int64 v23; // rdx
  signed __int64 v24; // r14
  int v25; // edx
  unsigned __int64 v26; // r14
  bool v27; // zf
  __int64 v28; // rax
  __int64 result; // rax
  PVOID v30; // r8
  unsigned __int64 v31; // rcx
  char *v32; // r14
  __int64 v33; // rdi
  int v34; // edx
  signed __int64 v35; // rdx
  signed __int64 v36; // rbx
  int v37; // edx
  unsigned __int64 v38; // rbx
  bool v39; // zf
  int v40; // edi
  __int64 v41; // rax
  int v42; // edx
  int v43; // eax
  unsigned int v44; // edx
  unsigned __int64 v45; // r13
  __int64 v46; // r12
  unsigned int Number; // r14d
  unsigned int v48; // ecx
  unsigned int v49; // r14d
  unsigned int v50; // eax
  ULONG_PTR v51; // rdi
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // r15
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rbx
  struct _KTHREAD *v60; // rdi
  char *v61; // rbx
  __int64 v62; // r14
  void *v63; // r13
  __int64 v64; // rax
  char v65; // bl
  PVOID v66; // rdi
  __int64 v67; // r15
  unsigned int v68; // ebx
  _DWORD *v69; // r9
  POBJECT_TYPE *v70; // r14
  int v71; // edi
  unsigned __int64 v72; // rbx
  PVOID v73; // rax
  int v74; // ebx
  bool v75; // cl
  __int64 *v76; // rdi
  unsigned int v77; // edx
  unsigned __int64 v78; // r14
  __int64 v79; // rax
  signed __int8 v80; // cf
  _QWORD *v81; // rcx
  char HandleTableEntrySlow; // r14
  _QWORD *v83; // rbx
  signed __int64 v84; // rax
  signed __int64 v85; // rtt
  signed __int64 v86; // rax
  unsigned __int64 v87; // rcx
  __int64 v88; // r15
  signed __int64 v89; // rdx
  signed __int64 v90; // rax
  signed __int64 v91; // r14
  int v92; // edx
  volatile signed __int64 *v93; // r14
  bool v94; // zf
  char v95; // r13
  int v96; // edi
  struct _KTHREAD *v97; // rax
  BOOLEAN v98; // al
  struct _PRIVILEGE_SET *v99; // r12
  BOOLEAN v100; // r15
  ACCESS_MASK v101; // eax
  __int64 v102; // rcx
  volatile signed __int64 *v103; // r14
  signed __int64 v104; // rax
  signed __int64 v105; // rtt
  int v106; // r12d
  __int64 v107; // rdi
  int v108; // eax
  struct _EX_RUNDOWN_REF *v109; // r13
  struct _KTHREAD *v110; // rax
  struct _KTHREAD *v111; // rax
  unsigned __int64 *v112; // r15
  __int64 v113; // rdi
  struct _EX_RUNDOWN_REF *v114; // rdi
  unsigned __int64 v115; // rtt
  signed __int64 v116; // rax
  signed __int64 v117; // rcx
  unsigned __int64 v118; // rtt
  __int64 v119; // rcx
  struct _KTHREAD *v120; // rdx
  __int16 v121; // ax
  _QWORD *v122; // r13
  void (__fastcall *Count)(_QWORD, __int64 *); // rax
  struct _KTHREAD *v124; // rax
  __int64 v125; // r13
  signed __int64 v126; // rax
  signed __int64 v127; // rcx
  unsigned __int64 v128; // rtt
  struct _KTHREAD *v129; // rcx
  __int16 v130; // ax
  int v131; // r12d
  struct _KTHREAD *v132; // rax
  unsigned __int64 v133; // rsi
  struct _KTHREAD *v134; // rax
  struct _ERESOURCE *v135; // rcx
  signed __int64 v136; // rax
  signed __int64 v137; // rax
  signed __int64 v138; // rtt
  signed __int64 v139; // rax
  signed __int64 v140; // rtt
  struct _KTHREAD *v141; // rax
  volatile signed __int64 *PoolWithTag; // rax
  __int64 (__fastcall *v143)(PVOID, __int64, int *, volatile signed __int64 *, SIZE_T *, char *, int, __int64, KPROCESSOR_MODE); // r10
  PVOID v144; // rdi
  struct _KTHREAD *v145; // rax
  struct _KTHREAD *v146; // rax
  __int64 v147; // r14
  struct _KTHREAD *v148; // rax
  __int64 v149; // rbx
  volatile signed __int64 *v150; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v152; // r14
  signed __int64 v153; // rax
  signed __int64 v154; // rtt
  struct _KTHREAD *v155; // r12
  unsigned int v156; // ecx
  unsigned __int64 *v157; // rdi
  __int64 v158; // rax
  __int64 v159; // r13
  signed __int64 v160; // rax
  bool v161; // cc
  signed __int64 v162; // rax
  volatile signed __int64 v163; // rcx
  volatile signed __int64 **v164; // rax
  unsigned __int64 *v165; // r12
  __int64 v166; // rax
  __int64 v167; // r13
  signed __int64 v168; // rax
  signed __int64 v169; // rax
  __int64 v170; // rcx
  _QWORD *v171; // rax
  _QWORD *v172; // rax
  _QWORD **v173; // rcx
  char *v174; // rax
  __int64 *v175; // rcx
  int v176; // eax
  __int64 v177; // r8
  __int64 CurrentThreadProcessId; // rax
  __int64 v179; // rax
  __int64 v180; // rdx
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-100h]
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-F8h]
  int GenericMapping; // [rsp+30h] [rbp-F0h]
  int GrantedAccess; // [rsp+40h] [rbp-E0h]
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  bool v186; // [rsp+A0h] [rbp-80h]
  int v187; // [rsp+A4h] [rbp-7Ch] BYREF
  char v188; // [rsp+A8h] [rbp-78h]
  unsigned int v189; // [rsp+ACh] [rbp-74h]
  PVOID Object; // [rsp+B0h] [rbp-70h]
  int v191; // [rsp+B8h] [rbp-68h]
  struct _KTHREAD *v192; // [rsp+C0h] [rbp-60h]
  ACCESS_MASK AccessMask; // [rsp+C8h] [rbp-58h] BYREF
  NTSTATUS v194; // [rsp+D0h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF **v195; // [rsp+D8h] [rbp-48h]
  SIZE_T NumberOfBytes; // [rsp+E0h] [rbp-40h] BYREF
  char *v197; // [rsp+E8h] [rbp-38h]
  int v198; // [rsp+F0h] [rbp-30h]
  unsigned __int64 v199; // [rsp+F8h] [rbp-28h]
  _QWORD *v200; // [rsp+100h] [rbp-20h] BYREF
  _QWORD **v201; // [rsp+108h] [rbp-18h]
  __int64 v202; // [rsp+110h] [rbp-10h]
  POBJECT_TYPE *v203; // [rsp+118h] [rbp-8h]
  PVOID v204; // [rsp+120h] [rbp+0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+128h] [rbp+8h]
  int v206; // [rsp+130h] [rbp+10h] BYREF
  unsigned int v207; // [rsp+134h] [rbp+14h]
  __int64 v208; // [rsp+138h] [rbp+18h]
  ACCESS_MASK v209; // [rsp+140h] [rbp+20h] BYREF
  HANDLE TargetHandle; // [rsp+148h] [rbp+28h] BYREF
  void *v211; // [rsp+150h] [rbp+30h] BYREF
  __int64 v212; // [rsp+158h] [rbp+38h] BYREF
  PVOID v213; // [rsp+160h] [rbp+40h]
  __int64 v214; // [rsp+168h] [rbp+48h]
  __int64 v215; // [rsp+170h] [rbp+50h]
  _DWORD *v216; // [rsp+178h] [rbp+58h]
  __int64 *v217; // [rsp+180h] [rbp+60h]
  __int64 v218; // [rsp+188h] [rbp+68h] BYREF
  PPRIVILEGE_SET v219; // [rsp+190h] [rbp+70h] BYREF
  __int64 v220; // [rsp+1A0h] [rbp+80h]
  _QWORD *v221; // [rsp+1A8h] [rbp+88h]
  _DWORD v222[2]; // [rsp+1B0h] [rbp+90h] BYREF
  __int64 v223; // [rsp+1B8h] [rbp+98h]
  __int64 v224; // [rsp+1C0h] [rbp+A0h]
  PVOID v225; // [rsp+1C8h] [rbp+A8h] BYREF
  PVOID *v226; // [rsp+1D0h] [rbp+B0h]
  _QWORD v227[6]; // [rsp+1D8h] [rbp+B8h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+208h] [rbp+E8h] BYREF

  v10 = a6;
  v11 = 0;
  v12 = a8;
  v226 = a9;
  v217 = a10;
  Object = a2;
  v207 = a1;
  AccessMask = a3;
  v189 = a6;
  v197 = a8;
  v204 = 0LL;
  v188 = 0;
  if ( (a6 & 0x200) != 0 )
  {
    v17 = ObpKernelHandleTable;
    Process = PsInitialSystemProcess;
    v15 = ObpKernelHandleTable;
  }
  else
  {
    a3 = AccessMask;
    v15 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5];
    Process = KeGetCurrentThread()->ApcState.Process;
    v17 = ObpKernelHandleTable;
  }
  BugCheckParameter1 = (ULONG_PTR)Process;
  v199 = v15;
  v18 = v15 == v17;
  v186 = v18;
  if ( a4 && (!v18 || *(_DWORD *)(a4 + 24)) )
  {
    v19 = a2 - 48;
    v20 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v19[24] ^ (unsigned __int64)BYTE1(v19)];
    if ( (a6 & 0x400) != 0 )
      AccessMode = 1;
    else
      AccessMode = a7;
    LOBYTE(v191) = AccessMode;
    if ( a1 - 1 > 1 )
    {
      v22 = *(_DWORD *)(a4 + 16);
      if ( (v22 & 0x2000000) != 0 )
        *(_DWORD *)(a4 + 16) = v22 & 0xEDFFFFFF | 0x10000000;
      if ( (*(_DWORD *)(a4 + 16) & 0xF0000000) != 0 )
        RtlMapGenericMask((PACCESS_MASK)(a4 + 16), (PGENERIC_MAPPING)(v20 + 76));
      if ( (*(_DWORD *)(a4 + 16) & 0x1000000) == 0 )
      {
LABEL_13:
        *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
        *(_DWORD *)(a4 + 16) = 0;
        *(_DWORD *)(a4 + 20) &= *(_DWORD *)(v20 + 92) | 0x1000000;
        _m_prefetchw(v19 + 40);
        v23 = *((_QWORD *)v19 + 5);
        if ( (v23 & 0xF) != 0 )
        {
          do
          {
            v136 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 5, v23 - 1, v23);
            if ( v23 == v136 )
              break;
            v23 = v136;
          }
          while ( (v136 & 0xF) != 0 );
        }
        v24 = v23;
        v25 = v23 & 0xF;
        v26 = v24 & 0xFFFFFFFFFFFFFFF0uLL;
        v27 = v25 == 1;
        if ( !v25 )
        {
          if ( v26 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v152 = KeAbPreAcquire((ULONG_PTR)(v19 + 16), 0LL, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 2, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx((unsigned __int64 *)v19 + 2, v152, (ULONG_PTR)(v19 + 16));
            if ( v152 )
              *(_BYTE *)(v152 + 26) |= 1u;
            v26 = *((_QWORD *)v19 + 5) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 - 16), 0x10uLL) <= 0 )
              __fastfail(0xEu);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v19 + 2);
            KeAbPostRelease((ULONG_PTR)(v19 + 16));
            KeLeaveCriticalRegion();
            goto LABEL_292;
          }
          v27 = 0;
        }
        if ( !v27 )
        {
LABEL_18:
          *(_DWORD *)(a4 + 20) &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                   (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
                                                   a4,
                                                   *(_DWORD *)(a4 + 20),
                                                   v26);
          if ( v26 )
            ObDereferenceSecurityDescriptor(v26, 1LL);
          v194 = 0;
          goto LABEL_21;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 - 16), 0xFuLL) <= 0 )
          __fastfail(0xEu);
LABEL_292:
        _m_prefetchw(v19 + 40);
        v153 = *((_QWORD *)v19 + 5);
        while ( (v153 & 0xF) == 0 )
        {
          if ( v26 != (v153 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v154 = v153;
          v153 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 5, v153 + 15, v153);
          if ( v154 == v153 )
            goto LABEL_18;
        }
        ObDereferenceSecurityDescriptor(v26, 15LL);
        goto LABEL_18;
      }
      RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Control = 1;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      if ( SePrivilegeCheck(&RequiredPrivileges, (PSECURITY_SUBJECT_CONTEXT)(a4 + 32), AccessMode) )
      {
        *(_DWORD *)(a4 + 16) &= ~0x1000000u;
        *(_DWORD *)(a4 + 20) |= 0x1000000u;
        SeAppendPrivileges((PACCESS_STATE)a4, &RequiredPrivileges);
        goto LABEL_13;
      }
      SePrivilegedServiceAuditAlarm(0LL, a4 + 32, &RequiredPrivileges, 0LL);
      return (unsigned int)-1073741727;
    }
    v209 = 0;
    v87 = (unsigned __int8)v19[24] ^ (unsigned __int64)BYTE1(v19);
    v219 = 0LL;
    v202 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v87];
    v88 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v19[24] ^ (unsigned __int64)BYTE1(v19)];
    if ( *(_UNKNOWN **)(v88 + 152) == &SeDefaultObjectMethod )
    {
      _m_prefetchw(v19 + 40);
      v89 = *((_QWORD *)v19 + 5);
      if ( (v89 & 0xF) != 0 )
      {
        do
        {
          v90 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 5, v89 - 1, v89);
          if ( v89 == v90 )
            break;
          v89 = v90;
        }
        while ( (v90 & 0xF) != 0 );
      }
      v91 = v89;
      v92 = v89 & 0xF;
      v93 = (volatile signed __int64 *)(v91 & 0xFFFFFFFFFFFFFFF0uLL);
      v94 = v92 == 1;
      if ( !v92 )
      {
        if ( v93 )
        {
          v146 = KeGetCurrentThread();
          --v146->KernelApcDisable;
          v147 = KeAbPreAcquire((ULONG_PTR)(v19 + 16), 0LL, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 2, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)v19 + 2, v147, (ULONG_PTR)(v19 + 16));
          if ( v147 )
            *(_BYTE *)(v147 + 26) |= 1u;
          v93 = (volatile signed __int64 *)(*((_QWORD *)v19 + 5) & 0xFFFFFFFFFFFFFFF0uLL);
          if ( _InterlockedExchangeAdd64(v93 - 2, 0x10uLL) <= 0 )
            __fastfail(0xEu);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v19 + 2);
          KeAbPostRelease((ULONG_PTR)(v19 + 16));
          KeLeaveCriticalRegion();
          goto LABEL_218;
        }
        v94 = 0;
      }
      if ( !v94 )
      {
LABEL_125:
        v95 = 0;
        v96 = 0;
LABEL_126:
        if ( !v93 )
        {
          *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
          *(_DWORD *)(a4 + 16) = 0;
          v194 = v96;
LABEL_21:
          v187 = *(_DWORD *)(a4 + 20);
LABEL_22:
          v10 = v189;
          v12 = v197;
          v15 = v199;
          goto LABEL_23;
        }
        v97 = KeGetCurrentThread();
        --v97->KernelApcDisable;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL), 1u);
        if ( *(_QWORD *)(a4 + 32) )
        {
          v145 = KeGetCurrentThread();
          --v145->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 32) + 48LL), 1u);
        }
        v98 = SeAccessCheck(
                (PSECURITY_DESCRIPTOR)v93,
                (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
                1u,
                *(_DWORD *)(a4 + 16),
                *(_DWORD *)(a4 + 20),
                &v219,
                (PGENERIC_MAPPING)(v202 + 76),
                AccessMode,
                &v209,
                &v194);
        v99 = v219;
        v100 = v98;
        if ( v219 )
        {
          SeAppendPrivileges((PACCESS_STATE)a4, v219);
          MiDeleteSubsection(v99);
        }
        if ( v100 )
        {
          v101 = v209;
          *(_DWORD *)(a4 + 20) |= v209;
          *(_DWORD *)(a4 + 16) &= ~(v101 | 0x2000000);
        }
        if ( (_BYTE)v191 )
          SeOpenObjectAuditAlarmWithTransaction(
            (PUNICODE_STRING)(v202 + 16),
            Object,
            0LL,
            (PSECURITY_DESCRIPTOR)v93,
            (PACCESS_STATE)a4,
            0,
            v100,
            v191,
            0LL,
            (PBOOLEAN)(a4 + 10));
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL));
        KeLeaveCriticalRegion();
        v102 = *(_QWORD *)(a4 + 32);
        if ( v102 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v102 + 48));
          KeLeaveCriticalRegion();
        }
        if ( v95 )
        {
          ExFreePoolWithTag((PVOID)v93, 0);
        }
        else
        {
          v103 = v93 - 4;
          _m_prefetchw((const void *)(v103 + 2));
          v104 = *((_QWORD *)v103 + 2);
          while ( v104 - 1 > 0 )
          {
            v105 = v104;
            v104 = _InterlockedCompareExchange64(v103 + 2, v104 - 1, v104);
            if ( v105 == v104 )
              goto LABEL_141;
          }
          if ( v104 != 1 )
            __fastfail(0xEu);
          v155 = KeGetCurrentThread();
          v156 = *((_QWORD *)v103 + 3) % 0x101uLL;
          --v155->KernelApcDisable;
          v157 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * v156);
          v158 = KeAbPreAcquire((ULONG_PTR)v157, 0LL, 0LL);
          v159 = v158;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v157, 0LL) )
            ExfAcquirePushLockExclusiveEx(v157, v158, (ULONG_PTR)v157);
          if ( v159 )
            *(_BYTE *)(v159 + 26) |= 1u;
          v160 = _InterlockedExchangeAdd64(v103 + 2, 0xFFFFFFFFFFFFFFFFuLL);
          v161 = v160 <= 1;
          v162 = v160 - 1;
          if ( v161 )
          {
            if ( v162 )
              __fastfail(0xEu);
            v163 = *v103;
            v164 = (volatile signed __int64 **)*((_QWORD *)v103 + 1);
            if ( *(volatile signed __int64 **)(*v103 + 8) != v103 || *v164 != v103 )
              __fastfail(3u);
            *v164 = (volatile signed __int64 *)v163;
            *(_QWORD *)(v163 + 8) = v164;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v157, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v157);
            KeAbPostRelease((ULONG_PTR)v157);
            KeLeaveCriticalRegionThread((__int64)v155);
            ExFreePoolWithTag((PVOID)v103, 0);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v157, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v157);
            KeAbPostRelease((ULONG_PTR)v157);
            KeLeaveCriticalRegionThread((__int64)v155);
          }
        }
LABEL_141:
        if ( v100 )
          goto LABEL_21;
        v96 = v194;
        goto LABEL_241;
      }
      if ( _InterlockedExchangeAdd64(v93 - 2, 0xFuLL) <= 0 )
        __fastfail(0xEu);
LABEL_218:
      _m_prefetchw(v19 + 40);
      v139 = *((_QWORD *)v19 + 5);
      while ( (v139 & 0xF) == 0 )
      {
        if ( v93 != (volatile signed __int64 *)(v139 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v140 = v139;
        v139 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 5, v139 + 15, v139);
        if ( v140 == v139 )
          goto LABEL_125;
      }
      ObDereferenceSecurityDescriptor(v93, 15LL);
      goto LABEL_125;
    }
    v206 = 31;
    LODWORD(NumberOfBytes) = ObpDefaultSecurityDescriptorLength;
    PoolWithTag = (volatile signed __int64 *)ExAllocatePoolWithTag(
                                               PagedPool,
                                               (unsigned int)ObpDefaultSecurityDescriptorLength,
                                               0x7153624Fu);
    v93 = PoolWithTag;
    if ( PoolWithTag )
    {
      v143 = *(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, SIZE_T *, char *, int, __int64, KPROCESSOR_MODE))(v88 + 152);
      GenericMapping = *(_DWORD *)(v88 + 100);
      v195 = (struct _EX_RUNDOWN_REF **)(v19 + 40);
      v95 = 1;
      v96 = v143(Object, 1LL, &v206, PoolWithTag, &NumberOfBytes, v19 + 40, GenericMapping, v88 + 76, AccessMode);
      if ( v96 == -1073741789 )
      {
        ExFreePoolWithTag((PVOID)v93, 0);
        LODWORD(ObpDefaultSecurityDescriptorLength) = NumberOfBytes;
        v150 = (volatile signed __int64 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x7153624Fu);
        v93 = v150;
        if ( !v150 )
        {
          v96 = -1073741670;
          goto LABEL_302;
        }
        LOBYTE(GrantedAccess) = AccessMode;
        v95 = 1;
        v96 = (*(__int64 (__fastcall **)(PVOID, __int64, int *, volatile signed __int64 *, SIZE_T *, struct _EX_RUNDOWN_REF **, _DWORD, __int64, int))(v88 + 152))(
                Object,
                1LL,
                &v206,
                v150,
                &NumberOfBytes,
                v195,
                *(_DWORD *)(v88 + 100),
                v88 + 76,
                GrantedAccess);
      }
      if ( v96 >= 0 )
        goto LABEL_126;
      ExFreePoolWithTag((PVOID)v93, 0);
    }
    else
    {
      v96 = -1073741670;
    }
LABEL_302:
    v194 = v96;
LABEL_241:
    if ( v96 >= 0 )
      goto LABEL_22;
    return (unsigned int)v96;
  }
  if ( (a3 & 0x2000000) != 0 )
  {
    a3 = a3 & 0xEDFFFFFF | 0x10000000;
    AccessMask = a3;
  }
  if ( (a3 & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(
      &AccessMask,
      (PGENERIC_MAPPING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)]
                       + 76));
    a3 = AccessMask;
  }
  v187 = a3;
LABEL_23:
  v28 = 0LL;
  v202 = 0LL;
  if ( v12 )
  {
    v28 = *((_QWORD *)v12 + 4);
    v202 = v28;
  }
  result = ObpIncrementHandleCountEx(v207, (__int64)&v187, BugCheckParameter1, (__int64)Object, a7, v10, v28);
  if ( (int)result < 0 )
    return result;
  if ( a4 )
  {
    if ( v12 )
    {
      Privileges = (PPRIVILEGE_SET *)v12;
      v144 = Object;
      LOBYTE(PreviouslyGrantedAccess) = a7;
      result = ObpInsertOrLocateNamedObject(
                 BugCheckParameter1,
                 Object,
                 &v187,
                 a4,
                 PreviouslyGrantedAccess,
                 Privileges,
                 &v204);
      if ( (int)result < 0 )
        return result;
      if ( v204 == v144 )
      {
        v204 = 0LL;
      }
      else
      {
        Object = v204;
        v188 = 1;
      }
    }
    if ( *(_BYTE *)(a4 + 10) )
    {
      v10 |= 4u;
      v189 = v10;
    }
  }
  v30 = Object;
  v31 = (unsigned __int8)*((char *)Object - 24);
  v32 = (char *)Object - 48;
  v197 = (char *)Object - 48;
  v208 = (unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v33 = ObTypeIndexTable[v208 ^ (unsigned __int8)ObHeaderCookie ^ v31];
  v203 = (POBJECT_TYPE *)v33;
  v34 = (*(_DWORD *)(v33 + 92) | 0x1000000) & v187;
  v187 = v34;
  if ( !a4 )
    goto LABEL_38;
  _m_prefetchw(v32 + 40);
  v35 = *((_QWORD *)v32 + 5);
  if ( (v35 & 0xF) != 0 )
  {
    do
    {
      v86 = _InterlockedCompareExchange64((volatile signed __int64 *)v32 + 5, v35 - 1, v35);
      if ( v35 == v86 )
        break;
      v35 = v86;
    }
    while ( (v86 & 0xF) != 0 );
  }
  v36 = v35;
  v37 = v35 & 0xF;
  v38 = v36 & 0xFFFFFFFFFFFFFFF0uLL;
  v39 = v37 == 1;
  if ( !v37 )
  {
    if ( v38 )
    {
      v148 = KeGetCurrentThread();
      --v148->KernelApcDisable;
      v149 = KeAbPreAcquire((ULONG_PTR)(v32 + 16), 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v32 + 2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)v32 + 2, v149, (ULONG_PTR)(v32 + 16));
      if ( v149 )
        *(_BYTE *)(v149 + 26) |= 1u;
      v38 = *((_QWORD *)v32 + 5) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 - 16), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v32 + 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v32 + 2);
      KeAbPostRelease((ULONG_PTR)(v32 + 16));
      KeLeaveCriticalRegion();
      goto LABEL_213;
    }
    v39 = 0;
  }
  if ( v39 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 - 16), 0xFuLL) <= 0 )
      __fastfail(0xEu);
LABEL_213:
    _m_prefetchw(v32 + 40);
    v137 = *((_QWORD *)v32 + 5);
    while ( (v137 & 0xF) == 0 )
    {
      if ( v38 != (v137 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v138 = v137;
      v137 = _InterlockedCompareExchange64((volatile signed __int64 *)v32 + 5, v137 + 15, v137);
      if ( v138 == v137 )
        goto LABEL_36;
    }
    ObDereferenceSecurityDescriptor(v38, 15LL);
  }
LABEL_36:
  v40 = SeComputeCreatorDeniedRights((PSECURITY_SUBJECT_CONTEXT)(a4 + 32), a4, v187, v38);
  if ( v38 )
  {
    v83 = (_QWORD *)(v38 - 32);
    _m_prefetchw(v83 + 2);
    v84 = v83[2];
    while ( v84 - 1 > 0 )
    {
      v85 = v84;
      v84 = _InterlockedCompareExchange64(v83 + 2, v84 - 1, v84);
      if ( v85 == v84 )
        goto LABEL_37;
    }
    if ( v84 != 1 )
      __fastfail(0xEu);
    v165 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * (v83[3] % 0x101uLL));
    v192 = KeGetCurrentThread();
    --v192->KernelApcDisable;
    v166 = KeAbPreAcquire((ULONG_PTR)v165, 0LL, 0LL);
    v167 = v166;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v165, 0LL) )
      ExfAcquirePushLockExclusiveEx(v165, v166, (ULONG_PTR)v165);
    if ( v167 )
      *(_BYTE *)(v167 + 26) |= 1u;
    v168 = _InterlockedExchangeAdd64(v83 + 2, 0xFFFFFFFFFFFFFFFFuLL);
    v161 = v168 <= 1;
    v169 = v168 - 1;
    if ( v161 )
    {
      if ( v169 )
        __fastfail(0xEu);
      v170 = *v83;
      v171 = (_QWORD *)v83[1];
      if ( *(_QWORD **)(*v83 + 8LL) != v83 || (_QWORD *)*v171 != v83 )
        __fastfail(3u);
      *v171 = v170;
      *(_QWORD *)(v170 + 8) = v171;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v165, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v165);
      KeAbPostRelease((ULONG_PTR)v165);
      KeLeaveCriticalRegionThread((__int64)v192);
      ExFreePoolWithTag(v83, 0);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v165, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v165);
      KeAbPostRelease((ULONG_PTR)v165);
      KeLeaveCriticalRegionThread((__int64)v192);
    }
    LOBYTE(v10) = v189;
  }
LABEL_37:
  v41 = *(_QWORD *)(a4 + 72);
  v34 = ~v40 & v187;
  v33 = (__int64)v203;
  v30 = Object;
  v187 = v34;
  *(_DWORD *)(a4 + 20) = v34;
  v11 = *(_DWORD *)(v41 + 28);
LABEL_38:
  if ( a5 )
  {
    ObReferenceObjectExWithTag((__int64)v30, a5);
    v34 = v187;
  }
  if ( v204 )
  {
    ObfDereferenceObject(v204);
    v34 = v187;
  }
  v201 = &v200;
  v200 = &v200;
  if ( (*(_BYTE *)(v33 + 66) & 0x40) != 0 && *(_QWORD *)(v33 + 200) != v33 + 200 )
  {
    v191 = v34;
    v106 = v34;
    v107 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v32[24] ^ (unsigned __int64)BYTE1(v32)];
    v108 = v34 & *(_DWORD *)(v107 + 96);
    LODWORD(v212) = 1;
    v198 = v108;
    v223 = 0LL;
    v224 = 0LL;
    v216 = v222;
    v214 = v107;
    HIDWORD(v212) = v186;
    v213 = Object;
    v215 = 0LL;
    v109 = 0LL;
    v221 = 0LL;
    v192 = 0LL;
    v222[1] = v34;
    v222[0] = v34;
    v195 = (struct _EX_RUNDOWN_REF **)(v107 + 200);
    v110 = KeGetCurrentThread();
    --v110->KernelApcDisable;
    ObfReferenceObjectWithTag(v213, 0x6243624Fu);
    v111 = KeGetCurrentThread();
    --v111->SpecialApcDisable;
    v112 = (unsigned __int64 *)(v107 + 184);
    v113 = KeAbPreAcquire(v107 + 184, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v112, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v112, v113, (ULONG_PTR)v112);
    if ( v113 )
      *(_BYTE *)(v113 + 26) |= 1u;
    v114 = *v195;
    if ( *v195 != (struct _EX_RUNDOWN_REF *)v195 )
    {
      do
      {
        if ( (HIDWORD(v114[2].Ptr) & 1) != 0 && (v114[2].Count & (unsigned int)v212) != 0 )
        {
          _m_prefetchw(&v114[7]);
          v115 = v114[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v115 == _InterlockedCompareExchange64((volatile signed __int64 *)&v114[7], v115 + 2, v115)
            || ExfAcquireRundownProtection(v114 + 7) )
          {
            _m_prefetchw(v112);
            v116 = *v112;
            if ( (*v112 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
              v117 = v116 - 16;
            else
              v117 = 0LL;
            if ( (v116 & 2) != 0
              || (v118 = *v112, v118 != _InterlockedCompareExchange64((volatile signed __int64 *)v112, v117, v116)) )
            {
              ExfReleasePushLock(v112);
            }
            KeAbPostRelease((ULONG_PTR)v112);
            v120 = KeGetCurrentThread();
            v121 = v120->SpecialApcDisable + 1;
            v120->SpecialApcDisable = v121;
            if ( !v121 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v120->ApcState.ApcListHead[0].Flink != &v120->152 )
              KiCheckForKernelApcDelivery(v119);
            if ( v109 )
            {
              ExReleaseRundownProtection_0(v109);
              v192 = 0LL;
            }
            if ( v114[6].Count )
            {
              v172 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C46624Fu);
              v221 = v172;
              v122 = v172;
              if ( !v172 )
              {
                ExReleaseRundownProtection_0(v114 + 7);
                if ( v200 == &v200 )
                {
                  KeLeaveCriticalRegion();
                  ObfDereferenceObjectWithTag(v213, 0x6243624Fu);
                }
                else
                {
                  memset(v227, 0, sizeof(v227));
                  v227[0] = v212;
                  v227[2] = v214;
                  v227[1] = v213;
                  LODWORD(v227[4]) = -1073741670;
                  ObpCallPostOperationCallbacks(v227, &v200);
                }
                ObpDecrementHandleCount(BugCheckParameter1);
                if ( a5 )
                {
                  if ( a5 > 1 )
                    _InterlockedExchangeAdd64((volatile signed __int64 *)v32, (int)(1 - a5));
                  ObfDereferenceObject(Object);
                }
                return 3221225626LL;
              }
              v172[2] = v114;
              v172[3] = 0LL;
              v173 = v201;
              *v172 = &v200;
              v172[1] = v173;
              if ( *v173 != &v200 )
                __fastfail(3u);
              *v173 = v172;
              v201 = (_QWORD **)v172;
            }
            else
            {
              v122 = v221;
            }
            Count = (void (__fastcall *)(_QWORD, __int64 *))v114[5].Count;
            if ( Count )
            {
              Count(*(_QWORD *)(v114[3].Count + 8), &v212);
              if ( v114[6].Count )
                v122[3] = v215;
              else
                v192 = (struct _KTHREAD *)&v114[7];
              v215 = 0LL;
            }
            v124 = KeGetCurrentThread();
            --v124->SpecialApcDisable;
            v125 = KeAbPreAcquire((ULONG_PTR)v112, 0LL, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v112, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v112, v125, (ULONG_PTR)v112);
            if ( v125 )
              *(_BYTE *)(v125 + 26) |= 1u;
            v109 = (struct _EX_RUNDOWN_REF *)v192;
          }
        }
        v114 = (struct _EX_RUNDOWN_REF *)v114->Count;
      }
      while ( v114 != (struct _EX_RUNDOWN_REF *)v195 );
      v106 = v191;
    }
    _m_prefetchw(v112);
    v126 = *v112;
    if ( (*v112 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v127 = v126 - 16;
    else
      v127 = 0LL;
    if ( (v126 & 2) != 0
      || (v128 = *v112, v128 != _InterlockedCompareExchange64((volatile signed __int64 *)v112, v127, v126)) )
    {
      ExfReleasePushLock(v112);
    }
    KeAbPostRelease((ULONG_PTR)v112);
    v129 = KeGetCurrentThread();
    v130 = v129->SpecialApcDisable + 1;
    v129->SpecialApcDisable = v130;
    if ( !v130 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v129->ApcState.ApcListHead[0].Flink != &v129->152 )
      KiCheckForKernelApcDelivery((__int64)v129);
    if ( v109 )
      ExReleaseRundownProtection_0(v109);
    if ( v200 == &v200 )
    {
      ObfDereferenceObjectWithTag(v213, 0x6243624Fu);
      KeLeaveCriticalRegion();
    }
    if ( v186 )
    {
      v34 = v187;
    }
    else
    {
      v131 = (v198 | v222[0]) & v106;
      v34 = v131;
      v187 = v131;
      if ( a4 )
        *(_DWORD *)(a4 + 20) = v131;
    }
    v15 = v199;
    LOBYTE(v10) = v189;
  }
  v42 = v34 & 0x1FFFFFF;
  v220 = 0LL;
  v43 = v42 | 0x2000000;
  v44 = v42 & 0xFDFFFFFF;
  if ( (v10 & 8) != 0 )
    v44 = v43;
  v45 = ((_QWORD)v32 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v10 & 7) << 17) | 1;
  LODWORD(v220) = v44;
  v192 = KeGetCurrentThread();
  --v192->KernelApcDisable;
  v46 = 0LL;
  if ( (*(_BYTE *)(v15 + 44) & 4) != 0 )
  {
LABEL_360:
    v60 = v192;
    goto LABEL_68;
  }
  while ( 1 )
  {
    v27 = (*(_BYTE *)(v15 + 44) & 1) == 0;
    v198 = *(_DWORD *)v15;
    if ( v27 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v48 = dword_1406FB03C;
      v49 = dword_1406FB03C == 8 ? Number & 7 : Number % dword_1406FB03C;
    }
    else
    {
      v48 = dword_1406FB03C;
      v49 = 0;
    }
    v50 = 0;
    v189 = 0;
    if ( v48 )
      break;
LABEL_101:
    v27 = (*(_BYTE *)(v15 + 44) & 1) == 0;
    LOBYTE(v191) = 1;
    if ( v27 )
      v77 = KeGetPcr()->Prcb.Number % dword_1406FB03C;
    else
      v77 = 0;
    v78 = v15 + ((v77 + 1LL) << 6);
    v79 = KeAbPreAcquire(v15 + 56, 0LL, 0LL);
    v80 = _interlockedbittestandset64((volatile signed __int32 *)(v15 + 56), 0LL);
    v81 = (_QWORD *)v79;
    v195 = (struct _EX_RUNDOWN_REF **)v79;
    if ( v80 )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v15 + 56), v79, v15 + 56);
      v81 = v195;
    }
    if ( v81 )
      *((_BYTE *)v81 + 26) |= 1u;
    if ( v198 == *(_DWORD *)v15 )
      HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v15, v78);
    else
      HandleTableEntrySlow = v191;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 56));
    KeAbPostRelease(v15 + 56);
    if ( !HandleTableEntrySlow )
    {
      v32 = v197;
      goto LABEL_360;
    }
  }
  while ( 1 )
  {
    v51 = v15 + ((v49 + 1LL) << 6);
    if ( *(_QWORD *)(v51 + 8) )
      break;
LABEL_98:
    if ( ++v49 >= v48 )
      v49 = 0;
    v189 = ++v50;
    if ( v50 >= v48 )
      goto LABEL_101;
  }
  v52 = KeAbPreAcquire(v15 + ((v49 + 1LL) << 6), 0LL, 0LL);
  v53 = v52;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v51, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v51, v52, v51);
  if ( v53 )
    *(_BYTE *)(v53 + 26) |= 1u;
  v54 = *(_QWORD *)(v51 + 8);
  if ( v54 )
  {
    v55 = *(_QWORD *)(v54 + 8);
    *(_QWORD *)(v51 + 8) = v55;
    if ( !v55 )
      *(_QWORD *)(v51 + 16) = 0LL;
    v56 = ++*(_DWORD *)(v51 + 24);
    if ( v56 > *(_DWORD *)(v51 + 28) )
      *(_DWORD *)(v51 + 28) = v56;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v51, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v51);
  KeAbPostRelease(v51);
  if ( !v54 )
  {
    v48 = dword_1406FB03C;
    v50 = v189;
    v15 = v199;
    goto LABEL_98;
  }
  v57 = (__int64)(v54 - (v54 & 0xFFFFFFFFFFFFF000uLL)) >> 4;
  v58 = *(_QWORD *)((v54 & 0xFFFFFFFFFFFFF000uLL) + 8);
  v46 = v58 + 4 * v57;
  if ( !v11 )
  {
    v59 = v199;
    goto LABEL_65;
  }
  v59 = v199;
  if ( (unsigned int)ExpSetHandleExtraInfo(v199, v58 + 4 * v57) )
  {
    ExpFreeHandleTableEntry(v59, v46, v54);
    v32 = v197;
    v46 = 0LL;
    goto LABEL_360;
  }
LABEL_65:
  v60 = v192;
  if ( *(_QWORD *)(v59 + 96) )
    ExpUpdateDebugInfo(v59, v192, v46, 1LL);
  v32 = v197;
  *(_QWORD *)(v54 + 8) = v220;
  *(_QWORD *)v54 = v45;
LABEL_68:
  KeLeaveCriticalRegionThread((__int64)v60);
  if ( !v46 )
  {
    ObpDecrementHandleCount(BugCheckParameter1);
    if ( a5 )
    {
      if ( a5 > 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v32, (int)(1 - a5));
      ObfDereferenceObject(Object);
    }
    v70 = v203;
    v74 = -1073741670;
    v73 = Object;
    v75 = v186;
    v76 = v217;
    goto LABEL_92;
  }
  if ( !a4 )
  {
    v70 = v203;
    goto LABEL_86;
  }
  v61 = v197;
  v62 = 0LL;
  v63 = 0LL;
  v211 = 0LL;
  if ( (v197[26] & 0x20) == 0
    || (v174 = (char *)ObpInfoMaskToOffset[v197[26] & 0x3F], v175 = (__int64 *)(v197 - v174), v197 == v174) )
  {
    v64 = v202;
    if ( !v202 )
      goto LABEL_72;
LABEL_236:
    v62 = v64;
    goto LABEL_72;
  }
  v64 = *v175;
  if ( *v175 )
    goto LABEL_236;
  if ( v202 )
  {
    ObpSetObjectAuditInfo(v197, v202);
  }
  else if ( (POBJECT_TYPE *)ObTypeIndexTable[v208 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v197[24]] != IoFileObjectType
         || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
  {
    v176 = ObpAllocateAndQuerySecurityDescriptorInfo(Object, 32LL, &v211);
    v63 = v211;
    if ( v211 )
    {
      if ( v176 >= 0 )
      {
        v62 = (__int64)v211;
        ObpSetObjectAuditInfo(v61, v211);
      }
    }
  }
LABEL_72:
  v65 = 0;
  TargetHandle = 0LL;
  v218 = v46;
  v66 = 0LL;
  v67 = *(_QWORD *)(a4 + 72);
  if ( !v62 )
  {
    v62 = *(_QWORD *)(v67 + 56);
    if ( !v62 )
      v62 = *(_QWORD *)(a4 + 64);
  }
  if ( *(_BYTE *)(a4 + 9) )
  {
    if ( *(_BYTE *)(a4 + 124) )
    {
      SepAdtPrivilegeObjectAuditAlarm(
        (unsigned int)&SeSubsystemName,
        a4 + 144,
        a4 + 128,
        v46,
        *(_QWORD *)(a4 + 32),
        *(_QWORD *)(a4 + 48),
        *(_QWORD *)(a4 + 56),
        *(_DWORD *)(a4 + 20),
        *(_QWORD *)v67,
        1);
      goto LABEL_77;
    }
  }
  else if ( !*(_BYTE *)(v67 + 216) )
  {
    goto LABEL_77;
  }
  if ( ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (HANDLE)v46,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0x200u,
         2u) >= 0 )
  {
    ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v225, 0LL);
    v66 = v225;
  }
  LOBYTE(v177) = 1;
  LOWORD(v191) = SepAdtClassifyObjectIntoSubCategory(v66, a4 + 144, v177, 0LL);
  if ( v66 )
    ObfDereferenceObject(v66);
  if ( TargetHandle )
  {
    ZwClose(TargetHandle);
    TargetHandle = 0LL;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v65 = SepAdtOpenObjectAuditAlarm(
          (unsigned __int16)v191,
          (unsigned int)&SeSubsystemName,
          (unsigned int)&v218,
          (int)a4 + 144,
          a4 + 128,
          v62,
          *(_QWORD *)(a4 + 32),
          *(_QWORD *)(a4 + 48),
          *(_DWORD *)(a4 + 24),
          *(_DWORD *)(a4 + 20),
          *(_QWORD *)v67,
          1,
          CurrentThreadProcessId,
          2,
          0LL,
          0,
          0LL,
          v67 + 32,
          a4);
  v179 = PsGetCurrentThreadProcessId();
  LOBYTE(AccessStatus) = 1;
  SepAdtStagingEvent(
    (unsigned __int16)v191,
    v180,
    &v218,
    a4 + 144,
    a4 + 128,
    *(_QWORD *)(a4 + 32),
    *(_QWORD *)(a4 + 48),
    *(_DWORD *)(a4 + 24),
    *(_DWORD *)(a4 + 20),
    AccessStatus,
    v179,
    a4);
LABEL_77:
  *(_BYTE *)(a4 + 10) = v65;
  v68 = v207;
  if ( !v207 )
  {
    v69 = **(_DWORD ***)(a4 + 72);
    if ( v69 )
    {
      if ( *v69 )
      {
        SePrivilegeObjectAuditAlarm(
          v46,
          a4 + 32,
          *(_DWORD *)(a4 + 20),
          (_DWORD)v69,
          1,
          KeGetCurrentThread()->PreviousMode);
        v63 = v211;
      }
    }
  }
  if ( v63 )
    ExFreePoolWithTag(v63, 0);
  v70 = v203;
  if ( !v68 )
  {
    v71 = 0;
    if ( v203 == CmKeyObjectType || v203 == IoFileObjectType )
    {
      v72 = *(_QWORD *)(a4 + 32);
      if ( v72 )
      {
        v132 = KeGetCurrentThread();
        v133 = *(_QWORD *)(a4 + 48);
        --v132->KernelApcDisable;
        if ( v133 >= v72 )
        {
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v72 + 48), 1u);
          v141 = KeGetCurrentThread();
          --v141->KernelApcDisable;
          v135 = *(struct _ERESOURCE **)(v133 + 48);
        }
        else
        {
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v133 + 48), 1u);
          v134 = KeGetCurrentThread();
          --v134->KernelApcDisable;
          v135 = *(struct _ERESOURCE **)(v72 + 48);
        }
        ExAcquireResourceSharedLite(v135, 1u);
        if ( (*(_DWORD *)(v72 + 200) & 0x4000) != 0
          && *(int *)(v72 + 196) >= 2
          && !RtlEqualSid(**(PSID **)(v133 + 152), **(PSID **)(v72 + 152))
          && SepSidInTokenSidHash(
               (PSID_AND_ATTRIBUTES_HASH)(v133 + 808),
               0LL,
               (void *)SeConstrainedImpersonationCapabilitySid,
               0,
               1,
               0) )
        {
          v71 = ObHandleRevocationBlockAddObject(*(_QWORD *)(v72 + 216) + 128LL, Object);
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v133 + 48));
        KeLeaveCriticalRegion();
        ExReleaseResourceLite(*(PERESOURCE *)(v72 + 48));
        KeLeaveCriticalRegion();
        if ( v71 < 0 )
          return (unsigned int)v71;
      }
    }
  }
LABEL_86:
  v73 = Object;
  if ( a5 && v226 )
    *v226 = Object;
  v74 = 0;
  if ( v188 )
    v74 = 0x40000000;
  v75 = v186;
  if ( v186 )
    v46 |= 0xFFFFFFFF80000000uLL;
  v76 = v217;
  *v217 = v46;
LABEL_92:
  if ( v200 != &v200 )
  {
    ObpPostInterceptHandleCreate((_DWORD)v73, v75, v74, v187, (__int64)&v200);
    v73 = Object;
  }
  if ( (xmmword_140382290 & 0x40) != 0 && v74 >= 0 )
    EtwpTraceHandle(4384LL, *v76, v73, v70);
  return (unsigned int)v74;
}
