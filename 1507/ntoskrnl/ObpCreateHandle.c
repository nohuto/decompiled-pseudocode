/*
 * XREFs of ObpCreateHandle @ 0x140492D10
 * Callers:
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     SeComputeCreatorDeniedRights @ 0x14004EE30 (SeComputeCreatorDeniedRights.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     SepSidInTokenSidHash @ 0x1400CD250 (SepSidInTokenSidHash.c)
 *     PsGetCurrentThreadProcessId @ 0x1400CD4B0 (PsGetCurrentThreadProcessId.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectExWithTag @ 0x14010B640 (ObReferenceObjectExWithTag.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x14017F770 (ZwDuplicateObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SePrivilegeCheck @ 0x140432040 (SePrivilegeCheck.c)
 *     RtlMapGenericMask @ 0x140435530 (RtlMapGenericMask.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404358A0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SePrivilegeObjectAuditAlarm @ 0x140435954 (SePrivilegeObjectAuditAlarm.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1404359A8 (SePrivilegedServiceAuditAlarm.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 *     ObpIncrementHandleCountEx @ 0x1404952B0 (ObpIncrementHandleCountEx.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObpCallPreOperationCallbacks @ 0x1404BE7F0 (ObpCallPreOperationCallbacks.c)
 *     ObpGetObjectSecurity @ 0x1404CFBCC (ObpGetObjectSecurity.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D0FD4 (ObpInsertOrLocateNamedObject.c)
 *     ObpDecrementHandleCount @ 0x1404D3564 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x1404D3780 (ObpDeleteNameCheck.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1404D49E4 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ExpFreeHandleTableEntry @ 0x140505270 (ExpFreeHandleTableEntry.c)
 *     ObpReleaseHandleInfo @ 0x140521FA0 (ObpReleaseHandleInfo.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140523718 (ExpAllocateHandleTableEntrySlow.c)
 *     SeAppendPrivileges @ 0x14052D500 (SeAppendPrivileges.c)
 *     ObpCreateSymbolicLinkName @ 0x140551904 (ObpCreateSymbolicLinkName.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1405867E8 (SepAdtOpenObjectAuditAlarm.c)
 *     ObHandleRevocationBlockAddObject @ 0x1406AB480 (ObHandleRevocationBlockAddObject.c)
 *     ObpSetObjectAuditInfo @ 0x1406AC044 (ObpSetObjectAuditInfo.c)
 *     ObpPostInterceptHandleCreate @ 0x1406ACDB8 (ObpPostInterceptHandleCreate.c)
 *     SepAdtStagingEvent @ 0x1406D3618 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1406D3E38 (SepAdtClassifyObjectIntoSubCategory.c)
 *     EtwpTraceHandle @ 0x1406E52FC (EtwpTraceHandle.c)
 *     ExpSetHandleExtraInfo @ 0x1406F0234 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1406F051C (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObpCreateHandle(
        int a1,
        char *a2,
        __int64 a3,
        struct _ACCESS_STATE *a4,
        unsigned int a5,
        int a6,
        char a7,
        __int64 a8,
        PVOID *a9,
        __int64 *a10)
{
  signed __int64 v10; // rbx
  int v11; // r13d
  PACCESS_STATE v12; // r15
  __int64 v13; // r12
  int v14; // edi
  ULONG_PTR v15; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // r9
  unsigned __int8 AccessMode; // r12
  char *v19; // r14
  __int64 v20; // r13
  ACCESS_MASK RemainingDesiredAccess; // eax
  ACCESS_MASK *p_RemainingDesiredAccess; // rsi
  __int64 result; // rax
  signed __int64 v24; // rdx
  signed __int64 v25; // rax
  signed __int64 v26; // rsi
  int v27; // edx
  unsigned __int64 v28; // rsi
  bool v29; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v31; // rsi
  __int64 v32; // r9
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // r15
  NTSTATUS ObjectSecurity; // eax
  NTSTATUS v42; // ecx
  struct _KTHREAD *v43; // rax
  PACCESS_STATE v44; // r13
  struct _KTHREAD *v45; // rax
  BOOLEAN v46; // al
  struct _PRIVILEGE_SET *v47; // r14
  BOOLEAN v48; // dl
  ACCESS_MASK v49; // eax
  __int64 v50; // r9
  struct _KTHREAD *v51; // rcx
  __int16 v52; // ax
  PERESOURCE *ClientToken; // rcx
  struct _KTHREAD *v54; // rcx
  __int16 v55; // ax
  char *v56; // rsi
  signed __int64 v57; // rax
  signed __int64 v58; // rtt
  struct _KTHREAD *v59; // r15
  unsigned int v60; // ecx
  unsigned __int64 *v61; // r14
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // r13
  signed __int64 v65; // rax
  bool v66; // cc
  signed __int64 v67; // rax
  __int16 v68; // ax
  __int64 v69; // rcx
  char **v70; // rax
  __int16 v71; // ax
  __int64 v72; // rax
  __int64 v73; // r9
  PVOID v74; // rsi
  PVOID v75; // r8
  char *v76; // r13
  unsigned __int64 v77; // rcx
  struct _OBJECT_TYPE *v78; // rsi
  int v79; // edx
  signed __int64 v80; // rdx
  signed __int64 v81; // rax
  signed __int64 v82; // rdi
  int v83; // edx
  unsigned __int64 v84; // rdi
  bool v85; // zf
  struct _KTHREAD *v86; // rax
  __int64 v87; // rdi
  __int64 v88; // r9
  struct _KTHREAD *v89; // rcx
  __int16 v90; // ax
  signed __int64 v91; // rax
  signed __int64 v92; // rtt
  int v93; // r12d
  _QWORD *v94; // rdi
  signed __int64 v95; // rax
  signed __int64 v96; // rtt
  struct _KTHREAD *v97; // r14
  unsigned int v98; // ecx
  unsigned __int64 *v99; // rsi
  __int64 v100; // rax
  __int64 v101; // r9
  __int64 v102; // r15
  signed __int64 v103; // rax
  signed __int64 v104; // rax
  __int16 v105; // ax
  _DWORD *AuxData; // rax
  PVOID v107; // r12
  int v108; // esi
  __int64 v109; // rcx
  int v110; // r14d
  int v111; // r12d
  int v112; // esi
  int v113; // edx
  int v114; // eax
  unsigned int v115; // edx
  struct _KTHREAD *v116; // rcx
  unsigned __int64 v117; // r8
  __int64 v118; // r12
  unsigned int v119; // ecx
  unsigned int v120; // r14d
  __int64 v121; // rcx
  _QWORD *v122; // rax
  __int16 v123; // ax
  unsigned __int64 v124; // rcx
  __int64 v125; // rsi
  signed __int64 v126; // r14
  struct _KTHREAD *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // r9
  __int64 v131; // r14
  signed __int64 v132; // rax
  __int64 v133; // rtt
  struct _KTHREAD *v134; // rcx
  __int16 v135; // ax
  char v136; // bl
  ULONG_PTR v137; // rdi
  int v138; // r12d
  ULONG_PTR v139; // rsi
  __int64 v140; // rax
  __int64 v141; // r9
  __int64 v142; // r15
  unsigned __int64 *v143; // r15
  unsigned __int64 v144; // rax
  int v145; // eax
  char v146; // al
  char HandleTableEntrySlow; // r12
  unsigned int v148; // edx
  unsigned __int64 *v149; // rsi
  unsigned __int64 v150; // r15
  __int64 v151; // rax
  __int64 v152; // r9
  __int64 v153; // r14
  unsigned __int64 v154; // r14
  char v155; // dl
  unsigned __int64 v156; // r14
  __int64 v157; // rdx
  __int64 v158; // rax
  __int16 v159; // ax
  POBJECT_TYPE *v160; // r14
  bool v161; // al
  __int64 *v162; // rsi
  char v163; // al
  unsigned int *v164; // r14
  void *v165; // r15
  char *v166; // rax
  PSECURITY_DESCRIPTOR *v167; // rdx
  int v168; // eax
  PACCESS_STATE v169; // r13
  BOOLEAN v170; // si
  PVOID v171; // rdi
  unsigned int **v172; // r12
  unsigned int *v173; // rax
  __int64 v174; // r8
  UNICODE_STRING *p_ObjectTypeName; // r13
  UNICODE_STRING *p_ObjectName; // rsi
  __int64 CurrentThreadProcessId; // rax
  unsigned __int16 v178; // di
  __int64 v179; // rax
  PACCESS_STATE v180; // r12
  __int64 v181; // rax
  __int64 v182; // rdx
  int v183; // edi
  unsigned int *v184; // r9
  PACCESS_TOKEN v185; // rdi
  struct _KTHREAD *v186; // rax
  PACCESS_TOKEN PrimaryToken; // rsi
  struct _KTHREAD *v188; // rax
  struct _ERESOURCE *v189; // rcx
  struct _KTHREAD *v190; // rax
  struct _KTHREAD *v191; // rcx
  __int16 v192; // ax
  struct _KTHREAD *v193; // rcx
  __int16 v194; // ax
  PVOID v195; // rdi
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  __int64 v197; // [rsp+60h] [rbp-C0h]
  __int64 v198; // [rsp+88h] [rbp-98h]
  bool v199; // [rsp+A0h] [rbp-80h]
  char v200; // [rsp+A1h] [rbp-7Fh]
  ACCESS_MASK PreviouslyGrantedAccess; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned __int16 v202; // [rsp+A8h] [rbp-78h] BYREF
  BOOLEAN v203; // [rsp+AAh] [rbp-76h]
  PACCESS_STATE AccessState; // [rsp+B0h] [rbp-70h]
  PVOID Object; // [rsp+B8h] [rbp-68h]
  int v206; // [rsp+C0h] [rbp-60h]
  NTSTATUS v207; // [rsp+C4h] [rbp-5Ch] BYREF
  ACCESS_MASK AccessMask; // [rsp+C8h] [rbp-58h] BYREF
  struct _KTHREAD *v209; // [rsp+D0h] [rbp-50h]
  HANDLE SourceHandle; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v211; // [rsp+E0h] [rbp-40h]
  ULONG_PTR BugCheckParameter1; // [rsp+E8h] [rbp-38h]
  PVOID v213; // [rsp+F0h] [rbp-30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+F8h] [rbp-28h] BYREF
  POBJECT_TYPE *v215; // [rsp+100h] [rbp-20h]
  unsigned __int64 v216; // [rsp+108h] [rbp-18h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+110h] [rbp-10h] BYREF
  int v218; // [rsp+118h] [rbp-8h]
  unsigned int v219; // [rsp+11Ch] [rbp-4h] BYREF
  HANDLE TargetHandle; // [rsp+120h] [rbp+0h] BYREF
  _QWORD v221[2]; // [rsp+128h] [rbp+8h] BYREF
  void *v222; // [rsp+138h] [rbp+18h] BYREF
  unsigned int *v223; // [rsp+140h] [rbp+20h]
  __int64 v224; // [rsp+148h] [rbp+28h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+150h] [rbp+30h] BYREF
  __int64 *v226; // [rsp+158h] [rbp+38h]
  __int64 v227; // [rsp+160h] [rbp+40h]
  _DWORD v228[2]; // [rsp+168h] [rbp+48h] BYREF
  __int64 v229; // [rsp+170h] [rbp+50h]
  __int64 v230; // [rsp+178h] [rbp+58h]
  PVOID *v231; // [rsp+180h] [rbp+60h]
  PVOID v232; // [rsp+188h] [rbp+68h] BYREF
  unsigned __int64 v233; // [rsp+198h] [rbp+78h]
  _DWORD v234[2]; // [rsp+1A0h] [rbp+80h] BYREF
  PVOID v235; // [rsp+1A8h] [rbp+88h]
  __int64 v236; // [rsp+1B0h] [rbp+90h]
  __int64 v237; // [rsp+1B8h] [rbp+98h]
  _DWORD *v238; // [rsp+1C0h] [rbp+A0h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1C8h] [rbp+A8h] BYREF
  _BYTE v240[48]; // [rsp+1E0h] [rbp+C0h] BYREF

  v10 = 0LL;
  v11 = a6;
  v12 = a4;
  v13 = a8;
  v231 = a9;
  v14 = 0;
  v226 = a10;
  AccessState = a4;
  Object = a2;
  v218 = a1;
  AccessMask = a3;
  v206 = a6;
  v209 = (struct _KTHREAD *)a8;
  v213 = 0LL;
  v200 = 0;
  if ( (a6 & 0x200) != 0 )
  {
    v15 = ObpKernelHandleTable;
    v16 = ObpKernelHandleTable;
    BugCheckParameter1 = (ULONG_PTR)PsInitialSystemProcess;
  }
  else
  {
    a3 = AccessMask;
    v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5];
    BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
    v15 = ObpKernelHandleTable;
  }
  v211 = v16;
  v199 = v16 == v15;
  v17 = 1LL;
  if ( v12 && (v16 != v15 || v12->OriginalDesiredAccess) )
  {
    AccessMode = a7;
    v19 = a2 - 48;
    if ( (v206 & 0x400) != 0 )
      AccessMode = 1;
    v20 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v19[24] ^ (unsigned __int64)BYTE1(v19)];
    if ( (unsigned int)(a1 - 1) > 1 )
    {
      RemainingDesiredAccess = v12->RemainingDesiredAccess;
      p_RemainingDesiredAccess = &v12->RemainingDesiredAccess;
      if ( (RemainingDesiredAccess & 0x2000000) != 0 )
        *p_RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
      if ( (*p_RemainingDesiredAccess & 0xF0000000) != 0 )
      {
        RtlMapGenericMask(&v12->RemainingDesiredAccess, (PGENERIC_MAPPING)(v20 + 76));
        v17 = 1LL;
      }
      if ( (*p_RemainingDesiredAccess & 0x1000000) != 0 )
      {
        RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
        RequiredPrivileges.PrivilegeCount = 1;
        RequiredPrivileges.Control = 1;
        RequiredPrivileges.Privilege[0].Attributes = 0;
        if ( !SePrivilegeCheck(&RequiredPrivileges, &v12->SubjectSecurityContext, AccessMode) )
        {
          SePrivilegedServiceAuditAlarm(
            0LL,
            (__int64 *)&v12->SubjectSecurityContext,
            &RequiredPrivileges.PrivilegeCount,
            0);
          return 3221225569LL;
        }
        *p_RemainingDesiredAccess &= ~0x1000000u;
        v12->PreviouslyGrantedAccess |= 0x1000000u;
        SeAppendPrivileges(v12, &RequiredPrivileges);
      }
      v12->PreviouslyGrantedAccess |= *p_RemainingDesiredAccess;
      *p_RemainingDesiredAccess = 0;
      v12->PreviouslyGrantedAccess &= *(_DWORD *)(v20 + 92) | 0x1000000;
      _m_prefetchw(v19 + 40);
      v24 = *((_QWORD *)v19 + 5);
      if ( (v24 & 0xF) != 0 )
      {
        do
        {
          v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 5, v24 - 1, v24);
          if ( v24 == v25 )
            break;
          v24 = v25;
        }
        while ( (v25 & 0xF) != 0 );
      }
      v26 = v24;
      v27 = v24 & 0xF;
      v28 = v26 & 0xFFFFFFFFFFFFFFF0uLL;
      v29 = v27 == 1;
      if ( !v27 )
      {
        if ( v28 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v31 = KeAbPreAcquire((ULONG_PTR)(v19 + 16), 0LL, 0LL, v17);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 2, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)v19 + 2, v31, (ULONG_PTR)(v19 + 16), v32);
          if ( v31 )
            *(_BYTE *)(v31 + 26) |= 1u;
          v28 = *((_QWORD *)v19 + 5) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 - 16), 0x10uLL) <= 0 )
            __fastfail(0xEu);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v19 + 2);
          KeAbPostRelease((ULONG_PTR)(v19 + 16));
          v33 = KeGetCurrentThread();
          v34 = v33->KernelApcDisable + 1;
          v33->KernelApcDisable = v34;
          if ( !v34
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
            && !v33->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v12 = AccessState;
          goto LABEL_36;
        }
        v29 = 0;
      }
      if ( !v29 )
      {
LABEL_41:
        v12->PreviouslyGrantedAccess &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                         &v12->SubjectSecurityContext,
                                                         (__int64)v12,
                                                         v12->PreviouslyGrantedAccess,
                                                         v28);
        if ( v28 )
          ObDereferenceSecurityDescriptor(v28, 1u, v37, v38);
        PreviouslyGrantedAccess = v12->PreviouslyGrantedAccess;
        v207 = 0;
        goto LABEL_112;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 - 16), 0xFuLL) <= 0 )
        __fastfail(0xEu);
LABEL_36:
      _m_prefetchw(v19 + 40);
      v35 = *((_QWORD *)v19 + 5);
      while ( (v35 & 0xF) == 0 )
      {
        if ( v28 != (v35 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v36 = v35;
        v35 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 5, v35 + 15, v35);
        if ( v36 == v35 )
          goto LABEL_41;
      }
      ObDereferenceSecurityDescriptor(v28, 0xFu, a3, v17);
      goto LABEL_41;
    }
    GrantedAccess = 0;
    v39 = (unsigned __int8)v19[24];
    Privileges = 0LL;
    SecurityDescriptor = 0LL;
    v40 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v39 ^ BYTE1(v19)];
    ObjectSecurity = ObpGetObjectSecurity(a2, &SecurityDescriptor, &v202, AccessMode);
    v42 = ObjectSecurity;
    if ( ObjectSecurity < 0 )
    {
      v207 = ObjectSecurity;
LABEL_93:
      if ( v42 < 0 )
        return (unsigned int)v42;
      v12 = AccessState;
      goto LABEL_112;
    }
    if ( SecurityDescriptor )
    {
      v43 = KeGetCurrentThread();
      v44 = AccessState;
      --v43->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)v44->SubjectSecurityContext.PrimaryToken + 6), 1u);
      if ( v44->SubjectSecurityContext.ClientToken )
      {
        v45 = KeGetCurrentThread();
        --v45->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)v44->SubjectSecurityContext.ClientToken + 6), 1u);
      }
      v46 = SeAccessCheck(
              SecurityDescriptor,
              &v44->SubjectSecurityContext,
              1u,
              v44->RemainingDesiredAccess,
              v44->PreviouslyGrantedAccess,
              &Privileges,
              (PGENERIC_MAPPING)(v40 + 76),
              AccessMode,
              &GrantedAccess,
              &v207);
      v47 = Privileges;
      v48 = v46;
      v203 = v46;
      if ( Privileges )
      {
        SeAppendPrivileges(v44, Privileges);
        ExFreePoolEx(v47);
        v48 = v203;
      }
      if ( v48 )
      {
        v49 = GrantedAccess;
        v44->PreviouslyGrantedAccess |= GrantedAccess;
        v44->RemainingDesiredAccess &= ~(v49 | 0x2000000);
      }
      if ( AccessMode )
        SeOpenObjectAuditAlarmWithTransaction(
          (PUNICODE_STRING)(v40 + 16),
          Object,
          0LL,
          SecurityDescriptor,
          v44,
          0,
          v48,
          AccessMode,
          0LL,
          &v44->GenerateOnClose);
      ExReleaseResourceLite(*((PERESOURCE *)v44->SubjectSecurityContext.PrimaryToken + 6));
      v51 = KeGetCurrentThread();
      v52 = v51->KernelApcDisable + 1;
      v51->KernelApcDisable = v52;
      if ( !v52
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v51->ApcState.ApcListHead[0].Flink != &v51->152
        && !v51->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      ClientToken = (PERESOURCE *)v44->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        ExReleaseResourceLite(ClientToken[6]);
        v54 = KeGetCurrentThread();
        v55 = v54->KernelApcDisable + 1;
        v54->KernelApcDisable = v55;
        if ( !v55
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v54->ApcState.ApcListHead[0].Flink != &v54->152
          && !v54->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      if ( SecurityDescriptor )
      {
        if ( (_BYTE)v202 )
        {
          ExFreePoolWithTag(SecurityDescriptor, 0);
        }
        else
        {
          v56 = (char *)SecurityDescriptor - 32;
          _m_prefetchw((char *)SecurityDescriptor - 16);
          v57 = *((_QWORD *)v56 + 2);
          while ( v57 - 1 > 0 )
          {
            v58 = v57;
            v57 = _InterlockedCompareExchange64((volatile signed __int64 *)v56 + 2, v57 - 1, v57);
            if ( v58 == v57 )
              goto LABEL_91;
          }
          if ( v57 != 1 )
            __fastfail(0xEu);
          v59 = KeGetCurrentThread();
          v60 = *((_QWORD *)v56 + 3) % 0x101uLL;
          --v59->KernelApcDisable;
          v61 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * v60);
          v62 = KeAbPreAcquire((ULONG_PTR)v61, 0LL, 0LL, v50);
          v64 = v62;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v61, 0LL) )
            ExfAcquirePushLockExclusiveEx(v61, v62, (ULONG_PTR)v61, v63);
          if ( v64 )
            *(_BYTE *)(v64 + 26) |= 1u;
          v65 = _InterlockedExchangeAdd64((volatile signed __int64 *)v56 + 2, 0xFFFFFFFFFFFFFFFFuLL);
          v66 = v65 <= 1;
          v67 = v65 - 1;
          if ( v66 )
          {
            if ( v67 )
              __fastfail(0xEu);
            v69 = *(_QWORD *)v56;
            v70 = (char **)*((_QWORD *)v56 + 1);
            if ( *(char **)(*(_QWORD *)v56 + 8LL) != v56 || *v70 != v56 )
              __fastfail(3u);
            *v70 = (char *)v69;
            *(_QWORD *)(v69 + 8) = v70;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v61, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v61);
            KeAbPostRelease((ULONG_PTR)v61);
            v71 = v59->KernelApcDisable + 1;
            v59->KernelApcDisable = v71;
            if ( !v71
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v59->ApcState.ApcListHead[0].Flink != &v59->152
              && !v59->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            ExFreePoolWithTag(v56, 0);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v61, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v61);
            KeAbPostRelease((ULONG_PTR)v61);
            v68 = v59->KernelApcDisable + 1;
            v59->KernelApcDisable = v68;
            if ( !v68
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v59->ApcState.ApcListHead[0].Flink != &v59->152
              && !v59->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
          }
        }
      }
LABEL_91:
      if ( !v203 )
      {
        v42 = v207;
        goto LABEL_93;
      }
      v12 = AccessState;
      PreviouslyGrantedAccess = AccessState->PreviouslyGrantedAccess;
    }
    else
    {
      v12 = AccessState;
      v207 = ObjectSecurity;
      AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
      PreviouslyGrantedAccess = v12->PreviouslyGrantedAccess;
      v12->RemainingDesiredAccess = 0;
    }
LABEL_112:
    v11 = v206;
    v13 = (__int64)v209;
    goto LABEL_113;
  }
  if ( (a3 & 0x2000000) != 0 )
  {
    LODWORD(a3) = a3 & 0xEDFFFFFF | 0x10000000;
    AccessMask = a3;
  }
  if ( (a3 & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(
      &AccessMask,
      (PGENERIC_MAPPING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)]
                       + 76));
    LODWORD(a3) = AccessMask;
  }
  PreviouslyGrantedAccess = a3;
LABEL_113:
  v223 = 0LL;
  v72 = 0LL;
  if ( v13 )
  {
    v72 = *(_QWORD *)(v13 + 32);
    v223 = (unsigned int *)v72;
  }
  result = ObpIncrementHandleCountEx(
             v218,
             (unsigned int)&PreviouslyGrantedAccess,
             BugCheckParameter1,
             (_DWORD)Object,
             a7,
             v11,
             v72);
  if ( (int)result < 0 )
    return result;
  if ( v12 )
  {
    if ( v13 )
    {
      v74 = Object;
      result = ObpInsertOrLocateNamedObject(BugCheckParameter1, Object, a7, v13, (__int64)&v213);
      if ( (int)result < 0 )
        return result;
      if ( v213 == v74 )
      {
        v213 = 0LL;
      }
      else
      {
        Object = v213;
        v200 = 1;
      }
    }
    if ( v12->GenerateOnClose )
      v206 = v11 | 4;
  }
  v75 = Object;
  v76 = (char *)Object - 48;
  v77 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)ObHeaderCookie;
  v227 = (unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v78 = (struct _OBJECT_TYPE *)ObTypeIndexTable[v227 ^ v77];
  v215 = (POBJECT_TYPE *)v78;
  v79 = (v78->TypeInfo.ValidAccessMask | 0x1000000) & PreviouslyGrantedAccess;
  PreviouslyGrantedAccess = v79;
  if ( v12 )
  {
    _m_prefetchw(v76 + 40);
    v80 = *((_QWORD *)v76 + 5);
    if ( (v80 & 0xF) != 0 )
    {
      do
      {
        v81 = _InterlockedCompareExchange64((volatile signed __int64 *)v76 + 5, v80 - 1, v80);
        if ( v80 == v81 )
          break;
        v80 = v81;
      }
      while ( (v81 & 0xF) != 0 );
    }
    v82 = v80;
    v83 = v80 & 0xF;
    v84 = v82 & 0xFFFFFFFFFFFFFFF0uLL;
    v85 = v83 == 1;
    if ( !v83 )
    {
      if ( v84 )
      {
        v86 = KeGetCurrentThread();
        --v86->KernelApcDisable;
        v87 = KeAbPreAcquire((ULONG_PTR)(v76 + 16), 0LL, 0LL, v73);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v76 + 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((unsigned __int64 *)v76 + 2, v87, (ULONG_PTR)(v76 + 16), v88);
        if ( v87 )
          *(_BYTE *)(v87 + 26) |= 1u;
        v84 = *((_QWORD *)v76 + 5) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v84 - 16), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v76 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v76 + 2);
        KeAbPostRelease((ULONG_PTR)(v76 + 16));
        v89 = KeGetCurrentThread();
        v90 = v89->KernelApcDisable + 1;
        v89->KernelApcDisable = v90;
        if ( !v90
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v89->ApcState.ApcListHead[0].Flink != &v89->152
          && !v89->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        goto LABEL_146;
      }
      v85 = 0;
    }
    if ( !v85 )
    {
LABEL_151:
      v93 = SeComputeCreatorDeniedRights(&v12->SubjectSecurityContext, (__int64)v12, PreviouslyGrantedAccess, v84);
      if ( v84 )
      {
        v94 = (_QWORD *)(v84 - 32);
        _m_prefetchw(v94 + 2);
        v95 = v94[2];
        while ( v95 - 1 > 0 )
        {
          v96 = v95;
          v95 = _InterlockedCompareExchange64(v94 + 2, v95 - 1, v95);
          if ( v96 == v95 )
            goto LABEL_172;
        }
        if ( v95 != 1 )
          __fastfail(0xEu);
        v97 = KeGetCurrentThread();
        v98 = v94[3] % 0x101uLL;
        --v97->KernelApcDisable;
        v99 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * v98);
        v100 = KeAbPreAcquire((ULONG_PTR)v99, 0LL, 0LL, v73);
        v102 = v100;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v99, 0LL) )
          ExfAcquirePushLockExclusiveEx(v99, v100, (ULONG_PTR)v99, v101);
        if ( v102 )
          *(_BYTE *)(v102 + 26) |= 1u;
        v103 = _InterlockedExchangeAdd64(v94 + 2, 0xFFFFFFFFFFFFFFFFuLL);
        v66 = v103 <= 1;
        v104 = v103 - 1;
        if ( v66 )
        {
          if ( v104 )
            __fastfail(0xEu);
          v121 = *v94;
          v122 = (_QWORD *)v94[1];
          if ( *(_QWORD **)(*v94 + 8LL) != v94 || (_QWORD *)*v122 != v94 )
            __fastfail(3u);
          *v122 = v121;
          *(_QWORD *)(v121 + 8) = v122;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v99, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v99);
          KeAbPostRelease((ULONG_PTR)v99);
          v123 = v97->KernelApcDisable + 1;
          v97->KernelApcDisable = v123;
          if ( !v123
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v97->ApcState.ApcListHead[0].Flink != &v97->152
            && !v97->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          ExFreePoolWithTag(v94, 0);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v99, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v99);
          KeAbPostRelease((ULONG_PTR)v99);
          v105 = v97->KernelApcDisable + 1;
          v97->KernelApcDisable = v105;
          if ( !v105
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v97->ApcState.ApcListHead[0].Flink != &v97->152
            && !v97->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        v12 = AccessState;
      }
LABEL_172:
      AuxData = v12->AuxData;
      v79 = ~v93 & PreviouslyGrantedAccess;
      v13 = (__int64)v209;
      v78 = (struct _OBJECT_TYPE *)v215;
      v75 = Object;
      PreviouslyGrantedAccess = v79;
      v12->PreviouslyGrantedAccess = v79;
      v14 = AuxData[7];
      goto LABEL_173;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v84 - 16), 0xFuLL) <= 0 )
      __fastfail(0xEu);
LABEL_146:
    _m_prefetchw(v76 + 40);
    v91 = *((_QWORD *)v76 + 5);
    while ( (v91 & 0xF) == 0 )
    {
      if ( v84 != (v91 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v92 = v91;
      v91 = _InterlockedCompareExchange64((volatile signed __int64 *)v76 + 5, v91 + 15, v91);
      if ( v92 == v91 )
        goto LABEL_151;
    }
    ObDereferenceSecurityDescriptor(v84, 0xFu, (__int64)v75, v73);
    goto LABEL_151;
  }
LABEL_173:
  if ( a5 )
  {
    ObReferenceObjectExWithTag((__int64)v75, a5);
    v79 = PreviouslyGrantedAccess;
  }
  if ( v213 )
  {
    ObfDereferenceObject(v213);
    v79 = PreviouslyGrantedAccess;
  }
  v29 = v13 == 0;
  v107 = Object;
  if ( !v29 && !v200 && v78 == ObpSymbolicLinkObjectType )
  {
    ObpCreateSymbolicLinkName(Object);
    v79 = PreviouslyGrantedAccess;
  }
  v221[1] = v221;
  v221[0] = v221;
  if ( (v78->TypeInfo.ObjectTypeFlags & 0x40) == 0 || v78->CallbackList.Flink == &v78->CallbackList )
    goto LABEL_187;
  v108 = v79;
  v109 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v76[24] ^ (unsigned __int64)BYTE1(v76)];
  v110 = v79 & *(_DWORD *)(v109 + 96);
  v229 = 0LL;
  v230 = 0LL;
  v238 = v228;
  v228[1] = v79;
  v228[0] = v79;
  v234[1] = v199;
  v234[0] = 1;
  v235 = v107;
  v237 = 0LL;
  v236 = v109;
  v111 = ObpCallPreOperationCallbacks(v109, v234, v221);
  if ( v111 >= 0 )
  {
    if ( v199 )
    {
      v79 = PreviouslyGrantedAccess;
    }
    else
    {
      v112 = (v110 | v228[0]) & v108;
      v79 = v112;
      PreviouslyGrantedAccess = v112;
      if ( v12 )
        v12->PreviouslyGrantedAccess = v112;
    }
LABEL_187:
    v113 = v79 & 0x1FFFFFF;
    v233 = 0LL;
    v114 = v113 | 0x2000000;
    v115 = v113 & 0xFDFFFFFF;
    v116 = KeGetCurrentThread();
    v209 = v116;
    if ( (v206 & 8) != 0 )
      v115 = v114;
    v216 = ((_QWORD)v76 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v206 & 7) << 17) | 1;
    --v116->KernelApcDisable;
    LODWORD(v233) = v115;
    v117 = v211;
    v118 = 0LL;
    SourceHandle = 0LL;
    if ( (*(_BYTE *)(v211 + 44) & 4) != 0 )
      goto LABEL_275;
    while ( 1 )
    {
      v29 = (*(_BYTE *)(v117 + 44) & 1) == 0;
      v206 = *(_DWORD *)v117;
      v119 = dword_14077E03C;
      v120 = v29 ? KeGetPcr()->Prcb.Number % dword_14077E03C : 0;
      v138 = 0;
      if ( dword_14077E03C )
        break;
LABEL_256:
      HandleTableEntrySlow = 1;
      if ( (*(_BYTE *)(v117 + 44) & 1) != 0 )
        v148 = 0;
      else
        v148 = KeGetPcr()->Prcb.Number % dword_14077E03C;
      v149 = (unsigned __int64 *)(v117 + 56);
      v150 = v117 + ((v148 + 1LL) << 6);
      v151 = KeAbPreAcquire(v117 + 56, 0LL, 0LL, v73);
      v153 = v151;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v149, 0LL) )
        ExfAcquirePushLockExclusiveEx(v149, v151, (ULONG_PTR)v149, v152);
      if ( v153 )
        *(_BYTE *)(v153 + 26) |= 1u;
      v154 = v211;
      if ( v206 == *(_DWORD *)v211 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v211, v150);
      v155 = _InterlockedExchangeAdd64((volatile signed __int64 *)v149, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v155 & 2) != 0 && (v155 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v149);
      KeAbPostRelease((ULONG_PTR)v149);
      if ( !HandleTableEntrySlow )
      {
LABEL_273:
        v118 = 0LL;
        goto LABEL_274;
      }
      v117 = v154;
    }
    while ( 1 )
    {
      v139 = v117 + ((v120 + 1LL) << 6);
      if ( *(_QWORD *)(v139 + 8) )
      {
        v140 = KeAbPreAcquire(v139, 0LL, 0LL, v73);
        v142 = v140;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v139, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v139, v140, v139, v141);
        if ( v142 )
          *(_BYTE *)(v142 + 26) |= 1u;
        v143 = *(unsigned __int64 **)(v139 + 8);
        if ( v143 )
        {
          v144 = v143[1];
          *(_QWORD *)(v139 + 8) = v144;
          if ( !v144 )
            *(_QWORD *)(v139 + 16) = 0LL;
          v145 = ++*(_DWORD *)(v139 + 24);
          if ( v145 > *(_DWORD *)(v139 + 28) )
            *(_DWORD *)(v139 + 28) = v145;
        }
        v146 = _InterlockedExchangeAdd64((volatile signed __int64 *)v139, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v146 & 2) != 0 && (v146 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)v139);
        KeAbPostRelease(v139);
        if ( v143 )
        {
          v156 = v211;
          v157 = (__int64)((__int64)v143 - ((unsigned __int64)v143 & 0xFFFFFFFFFFFFF000uLL)) >> 4;
          v158 = *(_QWORD *)(((unsigned __int64)v143 & 0xFFFFFFFFFFFFF000uLL) + 8);
          v118 = v158 + 4 * v157;
          SourceHandle = (HANDLE)v118;
          if ( v14 && (unsigned int)ExpSetHandleExtraInfo(v211, v158 + 4 * v157) )
          {
            ExpFreeHandleTableEntry(v156, v118, v143);
            SourceHandle = 0LL;
            goto LABEL_273;
          }
          if ( *(_QWORD *)(v156 + 96) )
            ExpUpdateDebugInfo(v156, v209, v118, 1LL);
          v143[1] = v233;
          *v143 = v216;
LABEL_274:
          v12 = AccessState;
          v116 = v209;
LABEL_275:
          v159 = v116->KernelApcDisable + 1;
          v116->KernelApcDisable = v159;
          if ( !v159
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v116->ApcState.ApcListHead[0].Flink != &v116->152
            && !v116->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          if ( !v118 )
          {
            ObpDecrementHandleCount(BugCheckParameter1);
            if ( a5 )
            {
              if ( a5 > 1 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)v76, (int)(1 - a5));
              ObfDereferenceObject(Object);
            }
            v160 = v215;
            LODWORD(v10) = -1073741670;
            v161 = v199;
            v162 = v226;
            goto LABEL_353;
          }
          if ( !v12 )
          {
            v160 = v215;
            goto LABEL_347;
          }
          v163 = v76[26];
          v164 = 0LL;
          v222 = 0LL;
          v165 = 0LL;
          if ( (v163 & 0x20) == 0
            || (v166 = (char *)ObpInfoMaskToOffset[v163 & 0x3F], v167 = (PSECURITY_DESCRIPTOR *)(v76 - v166),
                                                                 v76 == v166) )
          {
            if ( v223 )
              v164 = v223;
          }
          else if ( *v167 )
          {
            v164 = (unsigned int *)*v167;
          }
          else if ( v223 )
          {
            ObpSetObjectAuditInfo(v76, v223);
          }
          else if ( (POBJECT_TYPE *)ObTypeIndexTable[v227 ^ (unsigned __int8)v76[24] ^ (unsigned __int64)(unsigned __int8)ObHeaderCookie] != IoFileObjectType
                 || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
          {
            v168 = ObpAllocateAndQuerySecurityDescriptorInfo(Object, 32LL, &v222);
            v165 = v222;
            if ( v222 )
            {
              if ( v168 >= 0 )
              {
                v164 = (unsigned int *)v222;
                ObpSetObjectAuditInfo(v76, v222);
              }
            }
          }
          v169 = AccessState;
          v170 = 0;
          v224 = v118;
          v171 = 0LL;
          TargetHandle = 0LL;
          v172 = (unsigned int **)AccessState->AuxData;
          if ( !v164 )
          {
            v164 = v172[7];
            if ( !v164 )
              v164 = (unsigned int *)AccessState->SecurityDescriptor;
          }
          if ( AccessState->GenerateAudit )
          {
            if ( AccessState->AuditPrivileges )
            {
              v173 = *v172;
              v118 = (__int64)SourceHandle;
              SepAdtPrivilegeObjectAuditAlarm(
                SeSubsystemName,
                &AccessState->ObjectTypeName.Length,
                &AccessState->ObjectName.Length,
                (__int64)SourceHandle,
                (__int64)AccessState->SubjectSecurityContext.ClientToken,
                (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
                (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
                AccessState->PreviouslyGrantedAccess,
                v173,
                1u);
LABEL_318:
              v183 = v218;
              v169->GenerateOnClose = v170;
              if ( !v183 )
              {
                v184 = *(unsigned int **)v169->AuxData;
                if ( v184 )
                {
                  if ( *v184 )
                  {
                    SePrivilegeObjectAuditAlarm(
                      v118,
                      (__int64 *)&v169->SubjectSecurityContext,
                      v169->PreviouslyGrantedAccess,
                      v184,
                      1u,
                      KeGetCurrentThread()->PreviousMode);
                    v165 = v222;
                  }
                }
              }
              if ( v165 )
                ExFreePoolWithTag(v165, 0);
              v160 = v215;
              if ( !v183 && (v215 == CmKeyObjectType || v215 == IoFileObjectType) )
              {
                v185 = v169->SubjectSecurityContext.ClientToken;
                if ( v185 )
                {
                  v186 = KeGetCurrentThread();
                  PrimaryToken = v169->SubjectSecurityContext.PrimaryToken;
                  --v186->KernelApcDisable;
                  if ( PrimaryToken >= v185 )
                  {
                    ExAcquireResourceSharedLite(*((PERESOURCE *)v185 + 6), 1u);
                    v190 = KeGetCurrentThread();
                    --v190->KernelApcDisable;
                    v189 = (struct _ERESOURCE *)*((_QWORD *)PrimaryToken + 6);
                  }
                  else
                  {
                    ExAcquireResourceSharedLite(*((PERESOURCE *)PrimaryToken + 6), 1u);
                    v188 = KeGetCurrentThread();
                    --v188->KernelApcDisable;
                    v189 = (struct _ERESOURCE *)*((_QWORD *)v185 + 6);
                  }
                  ExAcquireResourceSharedLite(v189, 1u);
                  if ( (*((_DWORD *)v185 + 50) & 0x4000) != 0
                    && *((int *)v185 + 49) >= 2
                    && !RtlEqualSid(**((PSID **)PrimaryToken + 19), **((PSID **)v185 + 19))
                    && SepSidInTokenSidHash(
                         (__int64)PrimaryToken + 808,
                         0LL,
                         (unsigned __int8 *)SeConstrainedImpersonationCapabilitySid,
                         0,
                         1,
                         0) )
                  {
                    LODWORD(v10) = ObHandleRevocationBlockAddObject(*((_QWORD *)v185 + 27) + 128LL, Object);
                  }
                  ExReleaseResourceLite(*((PERESOURCE *)PrimaryToken + 6));
                  v191 = KeGetCurrentThread();
                  v192 = v191->KernelApcDisable + 1;
                  v191->KernelApcDisable = v192;
                  if ( !v192
                    && ($CD287064E7C9F7953DE243E927CFCB99 *)v191->ApcState.ApcListHead[0].Flink != &v191->152
                    && !v191->SpecialApcDisable )
                  {
                    KiCheckForKernelApcDelivery();
                  }
                  ExReleaseResourceLite(*((PERESOURCE *)v185 + 6));
                  v193 = KeGetCurrentThread();
                  v194 = v193->KernelApcDisable + 1;
                  v193->KernelApcDisable = v194;
                  if ( !v194
                    && ($CD287064E7C9F7953DE243E927CFCB99 *)v193->ApcState.ApcListHead[0].Flink != &v193->152
                    && !v193->SpecialApcDisable )
                  {
                    KiCheckForKernelApcDelivery();
                  }
                  if ( (int)v10 < 0 )
                    return (unsigned int)v10;
                }
              }
LABEL_347:
              if ( a5 && v231 )
                *v231 = Object;
              v161 = v199;
              LODWORD(v10) = v200 != 0 ? 0x40000000 : 0;
              if ( v199 )
                v118 |= 0xFFFFFFFF80000000uLL;
              v162 = v226;
              *v226 = v118;
LABEL_353:
              v195 = Object;
              if ( (_QWORD *)v221[0] != v221 )
                ObpPostInterceptHandleCreate((_DWORD)Object, v161, v10, PreviouslyGrantedAccess, (__int64)v221);
              if ( (xmmword_1403D1290 & 0x40) != 0 && (int)v10 >= 0 )
                EtwpTraceHandle(4384LL, *v162, v195, v160);
              return (unsigned int)v10;
            }
LABEL_310:
            if ( ZwDuplicateObject(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   SourceHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &TargetHandle,
                   0,
                   0x200u,
                   2u) >= 0 )
            {
              ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v232, 0LL);
              v171 = v232;
            }
            p_ObjectTypeName = &v169->ObjectTypeName;
            LOBYTE(v174) = 1;
            v202 = SepAdtClassifyObjectIntoSubCategory(v171, p_ObjectTypeName, v174, 0LL);
            if ( v171 )
              ObfDereferenceObject(v171);
            if ( TargetHandle )
            {
              ZwClose(TargetHandle);
              TargetHandle = 0LL;
            }
            p_ObjectName = &AccessState->ObjectName;
            CurrentThreadProcessId = PsGetCurrentThreadProcessId();
            v198 = (__int64)(v172 + 4);
            v178 = v202;
            v197 = CurrentThreadProcessId;
            v179 = (__int64)*v172;
            v180 = AccessState;
            LOBYTE(v202) = SepAdtOpenObjectAuditAlarm(
                             v202,
                             (unsigned int)SeSubsystemName,
                             (unsigned int)&v224,
                             (_DWORD)p_ObjectTypeName,
                             (__int64)p_ObjectName,
                             (__int64)v164,
                             (__int64)AccessState->SubjectSecurityContext.ClientToken,
                             (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
                             AccessState->OriginalDesiredAccess,
                             AccessState->PreviouslyGrantedAccess,
                             v179,
                             1,
                             v197,
                             2,
                             0LL,
                             0,
                             0LL,
                             v198,
                             (__int64)AccessState);
            v181 = PsGetCurrentThreadProcessId();
            LOBYTE(AccessStatus) = 1;
            SepAdtStagingEvent(
              v178,
              v182,
              &v224,
              p_ObjectTypeName,
              p_ObjectName,
              v180->SubjectSecurityContext.ClientToken,
              v180->SubjectSecurityContext.PrimaryToken,
              v180->OriginalDesiredAccess,
              v180->PreviouslyGrantedAccess,
              AccessStatus,
              v181,
              v180);
            v170 = v202;
            v169 = v180;
          }
          else if ( *((_BYTE *)v172 + 216) )
          {
            goto LABEL_310;
          }
          v118 = (__int64)SourceHandle;
          goto LABEL_318;
        }
        v119 = dword_14077E03C;
        v117 = v211;
      }
      if ( ++v120 >= v119 )
        v120 = 0;
      if ( ++v138 >= v119 )
        goto LABEL_256;
    }
  }
  v124 = (unsigned __int8)v76[24] ^ (unsigned __int64)(unsigned __int8)ObHeaderCookie;
  v219 = 0;
  v125 = ObTypeIndexTable[v227 ^ v124];
  if ( (*(_BYTE *)(v125 + 66) & 0x10) != 0 || (v76[27] & 8) != 0 )
  {
    v127 = KeGetCurrentThread();
    --v127->KernelApcDisable;
    v128 = KeAbPreAcquire((ULONG_PTR)(v76 + 16), 0LL, 0LL, v73);
    v131 = v128;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v76 + 4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v76 + 2, v128, (ULONG_PTR)(v76 + 16), v130);
    if ( v131 )
      *(_BYTE *)(v131 + 26) |= 1u;
    v126 = *((_QWORD *)v76 + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 && (v76[27] & 8) != 0 )
    {
      v129 = 0x140000000uLL;
      *(_QWORD *)&v76[-ObpInfoMaskToOffset[v76[26] & 0x1F]] = 0LL;
    }
    if ( (*(_BYTE *)(v125 + 66) & 0x10) != 0 )
      ObpReleaseHandleInfo(v76, BugCheckParameter1, &v219);
    _m_prefetchw(v76 + 16);
    v132 = *((_QWORD *)v76 + 2);
    if ( (v132 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v10 = v132 - 16;
    if ( (v132 & 2) != 0
      || (v133 = *((_QWORD *)v76 + 2),
          v133 != _InterlockedCompareExchange64((volatile signed __int64 *)v76 + 2, v10, v132)) )
    {
      ExfReleasePushLock((_QWORD *)v76 + 2, v129);
    }
    KeAbPostRelease((ULONG_PTR)(v76 + 16));
    v134 = KeGetCurrentThread();
    v135 = v134->KernelApcDisable + 1;
    v134->KernelApcDisable = v135;
    if ( !v135
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v134->ApcState.ApcListHead[0].Flink != &v134->152
      && !v134->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    v126 = _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  }
  if ( *(_QWORD *)(v125 + 128) )
  {
    v136 = 0;
    v137 = BugCheckParameter1;
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
    {
      v136 = 1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v240);
    }
    (*(void (__fastcall **)(ULONG_PTR, char *, _QWORD, signed __int64))(v125 + 128))(v137, v76 + 48, v219, v126);
    if ( v136 )
      KiUnstackDetachProcess((struct _KTHREAD *)v240, 0);
  }
  if ( v126 == 1 )
    ObpDeleteNameCheck(v76);
  _InterlockedDecrement((volatile signed __int32 *)(v125 + 48));
  if ( a5 )
  {
    if ( a5 > 1 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v76, (int)(1 - a5));
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v111;
}
