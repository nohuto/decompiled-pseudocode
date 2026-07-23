/*
 * XREFs of ObpCreateHandle @ 0x140418AE0
 * Callers:
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400098C0 (PsAttachSiloToCurrentThread.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     SeComputeCreatorDeniedRights @ 0x14000F500 (SeComputeCreatorDeniedRights.c)
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     SepSidInTokenSidHash @ 0x140060D70 (SepSidInTokenSidHash.c)
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     SepAcquireOrderedReadLocks @ 0x14007F890 (SepAcquireOrderedReadLocks.c)
 *     PsGetCurrentThreadProcessId @ 0x1400870D0 (PsGetCurrentThreadProcessId.c)
 *     ObReferenceObjectExWithTag @ 0x140095D40 (ObReferenceObjectExWithTag.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeStackAttachProcess @ 0x1400CAFB0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400CB05C (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x14015A970 (ZwDuplicateObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlMapGenericMask @ 0x1403FF7D0 (RtlMapGenericMask.c)
 *     ObpInsertOrLocateNamedObject @ 0x140404DA0 (ObpInsertOrLocateNamedObject.c)
 *     ObpDecrementHandleCount @ 0x1404052E0 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x1404054E0 (ObpDeleteNameCheck.c)
 *     ObpGetObjectSecurity @ 0x140405BA0 (ObpGetObjectSecurity.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SePrivilegeObjectAuditAlarm @ 0x1404139C4 (SePrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140413A18 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14041423C (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x140414350 (SePrivilegeCheck.c)
 *     ObDereferenceSecurityDescriptor @ 0x14041EF90 (ObDereferenceSecurityDescriptor.c)
 *     ObpIncrementHandleCountEx @ 0x14044CB20 (ObpIncrementHandleCountEx.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObpCreateSymbolicLinkName @ 0x1404A33C8 (ObpCreateSymbolicLinkName.c)
 *     ObpReleaseHandleInfo @ 0x1404A5780 (ObpReleaseHandleInfo.c)
 *     SeAppendPrivileges @ 0x1404ACCCC (SeAppendPrivileges.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404ACFE4 (ExpAllocateHandleTableEntrySlow.c)
 *     ObpCallPreOperationCallbacks @ 0x1404F4C10 (ObpCallPreOperationCallbacks.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140504198 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ExpFreeHandleTableEntry @ 0x14051C094 (ExpFreeHandleTableEntry.c)
 *     ObHandleRevocationBlockAddObject @ 0x140665B7C (ObHandleRevocationBlockAddObject.c)
 *     ObpSetObjectAuditInfo @ 0x140666460 (ObpSetObjectAuditInfo.c)
 *     ObpPostInterceptHandleCreate @ 0x140667084 (ObpPostInterceptHandleCreate.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F610 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14069037C (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140690AA4 (SepAdtClassifyObjectIntoSubCategory.c)
 *     EtwpTraceHandle @ 0x1406A2CC0 (EtwpTraceHandle.c)
 *     ExpSetHandleExtraInfo @ 0x1406AD6CC (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1406AD94C (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ObpCreateHandle(
        int a1,
        char *a2,
        ACCESS_MASK a3,
        struct _ACCESS_STATE *a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        struct _KTHREAD *a8,
        int a9,
        PVOID *a10,
        unsigned __int64 *a11)
{
  __int64 p_ObjectTypeName; // r12
  unsigned int v12; // edi
  PACCESS_STATE v13; // rsi
  struct _KTHREAD *v14; // rbx
  char *v15; // r15
  ULONG_PTR v16; // rax
  unsigned __int64 v17; // r14
  bool v18; // al
  char *v19; // rdi
  KPROCESSOR_MODE AccessMode; // r14
  __int64 v21; // r15
  ACCESS_MASK RemainingDesiredAccess; // eax
  ACCESS_MASK *p_RemainingDesiredAccess; // rbx
  __int64 result; // rax
  signed __int64 v25; // rdx
  signed __int64 v26; // rax
  signed __int64 v27; // rbx
  int v28; // edx
  unsigned __int64 v29; // rbx
  bool v30; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // rbx
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  __int64 v35; // rax
  __int64 v36; // rsi
  NTSTATUS ObjectSecurity; // eax
  NTSTATUS v38; // ecx
  PACCESS_STATE v39; // rdi
  struct _KTHREAD *v40; // rax
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rbx
  struct _KTHREAD *v42; // rax
  BOOLEAN v43; // al
  struct _PRIVILEGE_SET *v44; // rdi
  BOOLEAN v45; // r15
  PACCESS_STATE v46; // rdx
  ACCESS_MASK v47; // eax
  char *v48; // rbx
  signed __int64 v49; // rax
  signed __int64 v50; // rtt
  struct _KTHREAD *v51; // r14
  unsigned int v52; // ecx
  unsigned __int64 *v53; // rdi
  _BYTE *v54; // rax
  _BYTE *v55; // rsi
  signed __int64 v56; // rax
  bool v57; // cc
  signed __int64 v58; // rax
  __int64 v59; // rcx
  char **v60; // rax
  __int64 QuantumTarget; // rax
  __int64 v62; // r13
  unsigned __int64 v63; // rcx
  struct _OBJECT_TYPE *v64; // rdi
  ACCESS_MASK v65; // r8d
  signed __int64 v66; // rdx
  signed __int64 v67; // rax
  signed __int64 v68; // rbx
  int v69; // edx
  unsigned __int64 v70; // rbx
  bool v71; // zf
  struct _KTHREAD *v72; // rax
  __int64 v73; // rbx
  signed __int64 v74; // rax
  signed __int64 v75; // rtt
  int v76; // r15d
  _QWORD *v77; // rbx
  signed __int64 v78; // rax
  signed __int64 v79; // rtt
  struct _KTHREAD *v80; // r14
  unsigned int v81; // ecx
  unsigned __int64 *v82; // rdi
  _BYTE *v83; // rax
  _BYTE *v84; // rsi
  signed __int64 v85; // rax
  signed __int64 v86; // rax
  _DWORD *AuxData; // rax
  unsigned int v88; // r14d
  ACCESS_MASK v89; // ebx
  __int64 v90; // rcx
  int v91; // edi
  int v92; // r15d
  int v93; // ebx
  int v94; // r8d
  int v95; // eax
  unsigned int v96; // r8d
  _DWORD *v97; // rcx
  unsigned __int64 v98; // rdi
  char v99; // al
  unsigned int v100; // r15d
  int v101; // r14d
  ULONG_PTR v102; // rbx
  _BYTE *v103; // rax
  _BYTE *v104; // rsi
  unsigned __int64 *v105; // rsi
  unsigned __int64 v106; // rax
  int v107; // eax
  unsigned __int64 *v108; // rbx
  char HandleTableEntrySlow; // r15
  _DWORD *v110; // r14
  _BYTE *v111; // rax
  _BYTE *v112; // rsi
  __int64 v113; // rcx
  _QWORD *v114; // rax
  unsigned __int64 v115; // rcx
  __int64 v116; // rdi
  signed __int64 v117; // rsi
  struct _KTHREAD *v118; // rax
  signed __int64 *v119; // rbx
  _BYTE *v120; // rax
  _BYTE *v121; // rsi
  signed __int64 v122; // rax
  signed __int64 v123; // rcx
  signed __int64 v124; // rtt
  char v125; // bl
  PRKPROCESS v126; // rcx
  __int64 ProcessServerSilo; // rax
  __int64 v128; // rax
  unsigned __int64 v129; // r14
  __int64 v130; // rbx
  POBJECT_TYPE *v131; // rsi
  int v132; // ebx
  bool v133; // al
  unsigned __int64 *v134; // r14
  char v135; // al
  PSECURITY_DESCRIPTOR v136; // rsi
  void *v137; // r14
  __int64 v138; // rax
  PSECURITY_DESCRIPTOR *v139; // rdx
  int v140; // eax
  BOOLEAN v141; // r13
  PACCESS_STATE v142; // rdi
  PVOID v143; // rbx
  _QWORD *v144; // r15
  PACCESS_STATE v145; // rbx
  __int64 v146; // r8
  unsigned __int16 v147; // r13
  __int64 p_ObjectName; // rdi
  __int64 CurrentThreadProcessId; // rax
  __int64 v150; // rax
  __int64 v151; // rdx
  int v152; // esi
  _DWORD *v153; // r9
  unsigned __int64 ClientToken; // rbx
  char *PrimaryToken; // rdi
  PVOID v156; // rdi
  int AccessStatus; // [rsp+48h] [rbp-D8h]
  char v158; // [rsp+A0h] [rbp-80h]
  bool v159; // [rsp+A1h] [rbp-7Fh]
  ACCESS_MASK PreviouslyGrantedAccess; // [rsp+A4h] [rbp-7Ch] BYREF
  PACCESS_STATE AccessState; // [rsp+A8h] [rbp-78h]
  unsigned int v162; // [rsp+B0h] [rbp-70h]
  unsigned __int16 v163; // [rsp+B4h] [rbp-6Ch] BYREF
  PVOID Object; // [rsp+B8h] [rbp-68h]
  struct _KTHREAD *v165; // [rsp+C0h] [rbp-60h]
  NTSTATUS v166; // [rsp+C8h] [rbp-58h] BYREF
  ACCESS_MASK AccessMask; // [rsp+D0h] [rbp-50h] BYREF
  PRKPROCESS PROCESS; // [rsp+D8h] [rbp-48h]
  HANDLE SourceHandle; // [rsp+E0h] [rbp-40h]
  unsigned __int64 v170; // [rsp+E8h] [rbp-38h]
  ACCESS_MASK GrantedAccess; // [rsp+F0h] [rbp-30h] BYREF
  unsigned int v172; // [rsp+F4h] [rbp-2Ch] BYREF
  int v173; // [rsp+F8h] [rbp-28h]
  unsigned __int64 v174; // [rsp+100h] [rbp-20h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+108h] [rbp-18h] BYREF
  PVOID v176; // [rsp+110h] [rbp-10h] BYREF
  _DWORD v177[2]; // [rsp+118h] [rbp-8h] BYREF
  POBJECT_TYPE *v178; // [rsp+120h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+128h] [rbp+8h] BYREF
  int v180; // [rsp+130h] [rbp+10h]
  void *v181; // [rsp+138h] [rbp+18h]
  void *v182; // [rsp+140h] [rbp+20h] BYREF
  int v183; // [rsp+148h] [rbp+28h]
  _QWORD v184[2]; // [rsp+150h] [rbp+30h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+160h] [rbp+40h] BYREF
  __int64 v186; // [rsp+168h] [rbp+48h]
  int v187[2]; // [rsp+170h] [rbp+50h] BYREF
  unsigned __int64 *v188; // [rsp+178h] [rbp+58h]
  _DWORD v189[2]; // [rsp+180h] [rbp+60h] BYREF
  char *v190; // [rsp+188h] [rbp+68h]
  __int64 v191; // [rsp+190h] [rbp+70h]
  __int64 v192; // [rsp+198h] [rbp+78h]
  _DWORD *v193; // [rsp+1A0h] [rbp+80h]
  _DWORD v194[2]; // [rsp+1A8h] [rbp+88h] BYREF
  __int64 v195; // [rsp+1B0h] [rbp+90h]
  __int64 v196; // [rsp+1B8h] [rbp+98h]
  PVOID v197; // [rsp+1C0h] [rbp+A0h] BYREF
  PVOID *v198; // [rsp+1C8h] [rbp+A8h]
  unsigned __int64 v199; // [rsp+1D8h] [rbp+B8h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1E0h] [rbp+C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1F8h] [rbp+D8h] BYREF

  p_ObjectTypeName = 0LL;
  v12 = a6;
  v13 = a4;
  v14 = a8;
  v15 = a2;
  v198 = a10;
  v188 = a11;
  v177[0] = 0;
  v177[1] = a9;
  AccessState = a4;
  Object = a2;
  v173 = a1;
  AccessMask = a3;
  v162 = a6;
  v165 = a8;
  v176 = 0LL;
  v158 = 0;
  if ( (a6 & 0x200) != 0 )
  {
    v16 = ObpKernelHandleTable;
    v17 = ObpKernelHandleTable;
    PROCESS = PsInitialSystemProcess;
  }
  else
  {
    a3 = AccessMask;
    v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5];
    PROCESS = KeGetCurrentThread()->ApcState.Process;
    v16 = ObpKernelHandleTable;
  }
  v170 = v17;
  v18 = v17 == v16;
  v159 = v18;
  if ( a4 && (!v18 || a4->OriginalDesiredAccess) )
  {
    v19 = a2 - 48;
    AccessMode = a7;
    if ( (v162 & 0x400) != 0 )
      AccessMode = 1;
    v21 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v19[24] ^ (unsigned __int64)BYTE1(v19)];
    if ( (unsigned int)(a1 - 1) > 1 )
    {
      RemainingDesiredAccess = a4->RemainingDesiredAccess;
      p_RemainingDesiredAccess = &a4->RemainingDesiredAccess;
      if ( (RemainingDesiredAccess & 0x2000000) != 0 )
        *p_RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
      if ( (*p_RemainingDesiredAccess & 0xF0000000) != 0 )
        RtlMapGenericMask(&a4->RemainingDesiredAccess, (PGENERIC_MAPPING)(v21 + 76));
      if ( (*p_RemainingDesiredAccess & 0x1000000) != 0 )
      {
        RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
        RequiredPrivileges.PrivilegeCount = 1;
        RequiredPrivileges.Control = 1;
        RequiredPrivileges.Privilege[0].Attributes = 0;
        if ( !SePrivilegeCheck(&RequiredPrivileges, &v13->SubjectSecurityContext, AccessMode) )
        {
          SePrivilegedServiceAuditAlarm(0LL, (__int64 *)&v13->SubjectSecurityContext, (int *)&RequiredPrivileges, 0);
          return 3221225569LL;
        }
        *p_RemainingDesiredAccess &= ~0x1000000u;
        v13->PreviouslyGrantedAccess |= 0x1000000u;
        SeAppendPrivileges(v13, &RequiredPrivileges);
      }
      v13->PreviouslyGrantedAccess |= *p_RemainingDesiredAccess;
      *p_RemainingDesiredAccess = 0;
      v13->PreviouslyGrantedAccess &= *(_DWORD *)(v21 + 92) | 0x1000000;
      _m_prefetchw(v19 + 40);
      v25 = *((_QWORD *)v19 + 5);
      if ( (v25 & 0xF) != 0 )
      {
        do
        {
          v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 5, v25 - 1, v25);
          if ( v25 == v26 )
            break;
          v25 = v26;
        }
        while ( (v26 & 0xF) != 0 );
      }
      v27 = v25;
      v28 = v25 & 0xF;
      v29 = v27 & 0xFFFFFFFFFFFFFFF0uLL;
      v30 = v28 == 1;
      if ( !v28 )
      {
        if ( v29 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v32 = KeAbPreAcquire((ULONG_PTR)(v19 + 16), 0LL, 0);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 2, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((unsigned __int64 *)v19 + 2, v32, (ULONG_PTR)(v19 + 16));
          if ( v32 )
            *(_BYTE *)(v32 + 26) |= 1u;
          v29 = *((_QWORD *)v19 + 5) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 - 16), 0x10uLL) <= 0 )
            __fastfail(0xEu);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v19 + 2);
          KeAbPostRelease((ULONG_PTR)(v19 + 16));
          KeLeaveCriticalRegion();
          v13 = AccessState;
          goto LABEL_36;
        }
        v30 = 0;
      }
      if ( !v30 )
      {
LABEL_41:
        v13->PreviouslyGrantedAccess &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                         &v13->SubjectSecurityContext,
                                                         (__int64)v13,
                                                         v13->PreviouslyGrantedAccess,
                                                         v29);
        if ( v29 )
          ObDereferenceSecurityDescriptor(v29, 1LL);
        v15 = (char *)Object;
        v14 = v165;
        PreviouslyGrantedAccess = v13->PreviouslyGrantedAccess;
        v166 = 0;
        goto LABEL_94;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 - 16), 0xFuLL) <= 0 )
        __fastfail(0xEu);
LABEL_36:
      _m_prefetchw(v19 + 40);
      v33 = *((_QWORD *)v19 + 5);
      while ( (v33 & 0xF) == 0 )
      {
        if ( v29 != (v33 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v34 = v33;
        v33 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 5, v33 + 15, v33);
        if ( v34 == v33 )
          goto LABEL_41;
      }
      ObDereferenceSecurityDescriptor(v29, 15LL);
      goto LABEL_41;
    }
    v15 = (char *)Object;
    v35 = (unsigned __int8)v19[24];
    GrantedAccess = 0;
    Privileges = 0LL;
    SecurityDescriptor = 0LL;
    v36 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v35 ^ BYTE1(v19)];
    ObjectSecurity = ObpGetObjectSecurity((__int64)Object, &SecurityDescriptor, &v163, AccessMode);
    v38 = ObjectSecurity;
    if ( ObjectSecurity < 0 )
    {
      v166 = ObjectSecurity;
LABEL_79:
      if ( v38 < 0 )
        return (unsigned int)v38;
      v13 = AccessState;
      goto LABEL_94;
    }
    if ( SecurityDescriptor )
    {
      v39 = AccessState;
      v40 = KeGetCurrentThread();
      p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
      --v40->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)p_SubjectSecurityContext->PrimaryToken + 6), 1u);
      if ( p_SubjectSecurityContext->ClientToken )
      {
        v42 = KeGetCurrentThread();
        --v42->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)p_SubjectSecurityContext->ClientToken + 6), 1u);
      }
      v43 = SeAccessCheck(
              SecurityDescriptor,
              p_SubjectSecurityContext,
              1u,
              v39->RemainingDesiredAccess,
              v39->PreviouslyGrantedAccess,
              &Privileges,
              (PGENERIC_MAPPING)(v36 + 76),
              AccessMode,
              &GrantedAccess,
              &v166);
      v44 = Privileges;
      v45 = v43;
      if ( Privileges )
      {
        SeAppendPrivileges(AccessState, Privileges);
        MiDeleteSubsection(v44);
      }
      v46 = AccessState;
      if ( v45 )
      {
        v47 = GrantedAccess;
        AccessState->PreviouslyGrantedAccess |= GrantedAccess;
        v46->RemainingDesiredAccess &= ~(v47 | 0x2000000);
      }
      if ( AccessMode )
        SeOpenObjectAuditAlarmWithTransaction(
          (PUNICODE_STRING)(v36 + 16),
          Object,
          0LL,
          SecurityDescriptor,
          v46,
          0,
          v45,
          AccessMode,
          0LL,
          &v46->GenerateOnClose);
      ExReleaseResourceLite(*((PERESOURCE *)p_SubjectSecurityContext->PrimaryToken + 6));
      KeLeaveCriticalRegion();
      if ( p_SubjectSecurityContext->ClientToken )
      {
        ExReleaseResourceLite(*((PERESOURCE *)p_SubjectSecurityContext->ClientToken + 6));
        KeLeaveCriticalRegion();
      }
      if ( SecurityDescriptor )
      {
        if ( (_BYTE)v163 )
        {
          ExFreePoolWithTag(SecurityDescriptor, 0);
        }
        else
        {
          v48 = (char *)SecurityDescriptor - 32;
          _m_prefetchw((char *)SecurityDescriptor - 16);
          v49 = *((_QWORD *)v48 + 2);
          while ( v49 - 1 > 0 )
          {
            v50 = v49;
            v49 = _InterlockedCompareExchange64((volatile signed __int64 *)v48 + 2, v49 - 1, v49);
            if ( v50 == v49 )
              goto LABEL_77;
          }
          if ( v49 != 1 )
            __fastfail(0xEu);
          v51 = KeGetCurrentThread();
          v52 = *((_QWORD *)v48 + 3) % 0x101uLL;
          --v51->KernelApcDisable;
          v53 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * v52);
          v54 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v53, 0LL, 0);
          v55 = v54;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v53, 0LL) )
            ExfAcquirePushLockExclusiveEx(v53, v54, (ULONG_PTR)v53);
          if ( v55 )
            v55[26] |= 1u;
          v56 = _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 2, 0xFFFFFFFFFFFFFFFFuLL);
          v57 = v56 <= 1;
          v58 = v56 - 1;
          if ( v57 )
          {
            if ( v58 )
              __fastfail(0xEu);
            v59 = *(_QWORD *)v48;
            v60 = (char **)*((_QWORD *)v48 + 1);
            if ( *(char **)(*(_QWORD *)v48 + 8LL) != v48 || *v60 != v48 )
              __fastfail(3u);
            *v60 = (char *)v59;
            *(_QWORD *)(v59 + 8) = v60;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v53, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v53);
            KeAbPostRelease((ULONG_PTR)v53);
            KeLeaveCriticalRegionThread((__int64)v51);
            ExFreePoolWithTag(v48, 0);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v53, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v53);
            KeAbPostRelease((ULONG_PTR)v53);
            KeLeaveCriticalRegionThread((__int64)v51);
          }
        }
      }
LABEL_77:
      if ( !v45 )
      {
        v38 = v166;
        v14 = v165;
        v15 = (char *)Object;
        goto LABEL_79;
      }
      v13 = AccessState;
      v15 = (char *)Object;
      v14 = v165;
      PreviouslyGrantedAccess = AccessState->PreviouslyGrantedAccess;
    }
    else
    {
      v13 = AccessState;
      v166 = ObjectSecurity;
      AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
      PreviouslyGrantedAccess = v13->PreviouslyGrantedAccess;
      v13->RemainingDesiredAccess = 0;
    }
LABEL_94:
    v12 = v162;
    goto LABEL_95;
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
  PreviouslyGrantedAccess = a3;
LABEL_95:
  QuantumTarget = 0LL;
  v181 = 0LL;
  if ( v14 )
  {
    QuantumTarget = v14->QuantumTarget;
    v181 = (void *)QuantumTarget;
  }
  result = ObpIncrementHandleCountEx(
             v173,
             (unsigned int)&PreviouslyGrantedAccess,
             (_DWORD)PROCESS,
             (_DWORD)v15,
             a7,
             v12,
             QuantumTarget);
  if ( (int)result < 0 )
    return result;
  if ( v13 )
  {
    if ( v14 )
    {
      result = ObpInsertOrLocateNamedObject(
                 (ULONG_PTR)PROCESS,
                 v15,
                 &PreviouslyGrantedAccess,
                 (__int64)v13,
                 a7,
                 v14,
                 (char **)&v176);
      if ( (int)result < 0 )
        return result;
      if ( v176 == v15 )
      {
        v176 = 0LL;
      }
      else
      {
        v15 = (char *)v176;
        Object = v176;
        v158 = 1;
      }
    }
    if ( v13->GenerateOnClose )
      v162 = v12 | 4;
  }
  v62 = (__int64)(v15 - 48);
  v63 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)*(v15 - 24);
  v186 = (unsigned __int8)((unsigned __int16)((_WORD)v15 - 48) >> 8);
  v64 = (struct _OBJECT_TYPE *)ObTypeIndexTable[v186 ^ v63];
  v178 = (POBJECT_TYPE *)v64;
  v65 = (v64->TypeInfo.ValidAccessMask | 0x1000000) & PreviouslyGrantedAccess;
  PreviouslyGrantedAccess = v65;
  if ( v13 )
  {
    _m_prefetchw((const void *)(v62 + 40));
    v66 = *(_QWORD *)(v62 + 40);
    if ( (v66 & 0xF) != 0 )
    {
      do
      {
        v67 = _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 40), v66 - 1, v66);
        if ( v66 == v67 )
          break;
        v66 = v67;
      }
      while ( (v67 & 0xF) != 0 );
    }
    v68 = v66;
    v69 = v66 & 0xF;
    v70 = v68 & 0xFFFFFFFFFFFFFFF0uLL;
    v71 = v69 == 1;
    if ( !v69 )
    {
      if ( v70 )
      {
        v72 = KeGetCurrentThread();
        --v72->KernelApcDisable;
        v73 = KeAbPreAcquire(v62 + 16, 0LL, 0);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 16), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((unsigned __int64 *)(v62 + 16), v73, v62 + 16);
        if ( v73 )
          *(_BYTE *)(v73 + 26) |= 1u;
        v70 = *(_QWORD *)(v62 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v70 - 16), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v62 + 16));
        KeAbPostRelease(v62 + 16);
        KeLeaveCriticalRegion();
        goto LABEL_125;
      }
      v71 = 0;
    }
    if ( !v71 )
    {
LABEL_130:
      v76 = SeComputeCreatorDeniedRights(&v13->SubjectSecurityContext, (__int64)v13, PreviouslyGrantedAccess, v70);
      if ( v70 )
      {
        v77 = (_QWORD *)(v70 - 32);
        _m_prefetchw(v77 + 2);
        v78 = v77[2];
        while ( v78 - 1 > 0 )
        {
          v79 = v78;
          v78 = _InterlockedCompareExchange64(v77 + 2, v78 - 1, v78);
          if ( v79 == v78 )
            goto LABEL_148;
        }
        if ( v78 != 1 )
          __fastfail(0xEu);
        v80 = KeGetCurrentThread();
        v81 = v77[3] % 0x101uLL;
        --v80->KernelApcDisable;
        v82 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * v81);
        v83 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v82, 0LL, 0);
        v84 = v83;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v82, 0LL) )
          ExfAcquirePushLockExclusiveEx(v82, v83, (ULONG_PTR)v82);
        if ( v84 )
          v84[26] |= 1u;
        v85 = _InterlockedExchangeAdd64(v77 + 2, 0xFFFFFFFFFFFFFFFFuLL);
        v57 = v85 <= 1;
        v86 = v85 - 1;
        if ( v57 )
        {
          if ( v86 )
            __fastfail(0xEu);
          v113 = *v77;
          v114 = (_QWORD *)v77[1];
          if ( *(_QWORD **)(*v77 + 8LL) != v77 || (_QWORD *)*v114 != v77 )
            __fastfail(3u);
          *v114 = v113;
          *(_QWORD *)(v113 + 8) = v114;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v82, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v82);
          KeAbPostRelease((ULONG_PTR)v82);
          KeLeaveCriticalRegionThread((__int64)v80);
          ExFreePoolWithTag(v77, 0);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v82, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v82);
          KeAbPostRelease((ULONG_PTR)v82);
          KeLeaveCriticalRegionThread((__int64)v80);
        }
        v13 = AccessState;
      }
LABEL_148:
      AuxData = v13->AuxData;
      v65 = ~v76 & PreviouslyGrantedAccess;
      v14 = v165;
      v64 = (struct _OBJECT_TYPE *)v178;
      v15 = (char *)Object;
      PreviouslyGrantedAccess = v65;
      v13->PreviouslyGrantedAccess = v65;
      v177[0] = AuxData[7];
      goto LABEL_149;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v70 - 16), 0xFuLL) <= 0 )
      __fastfail(0xEu);
LABEL_125:
    _m_prefetchw((const void *)(v62 + 40));
    v74 = *(_QWORD *)(v62 + 40);
    while ( (v74 & 0xF) == 0 )
    {
      if ( v70 != (v74 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v75 = v74;
      v74 = _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 40), v74 + 15, v74);
      if ( v75 == v74 )
        goto LABEL_130;
    }
    ObDereferenceSecurityDescriptor(v70, 15LL);
    goto LABEL_130;
  }
LABEL_149:
  v88 = a5;
  if ( a5 )
  {
    ObReferenceObjectExWithTag((__int64)v15, a5);
    v65 = PreviouslyGrantedAccess;
  }
  if ( v176 )
  {
    ObfDereferenceObject(v176);
    v65 = PreviouslyGrantedAccess;
  }
  if ( v14 && !v158 && v64 == ObpSymbolicLinkObjectType )
  {
    ObpCreateSymbolicLinkName(v15);
    v65 = PreviouslyGrantedAccess;
  }
  v184[1] = v184;
  v184[0] = v184;
  if ( (v64->TypeInfo.ObjectTypeFlags & 0x40) != 0 && v64->CallbackList.Flink != &v64->CallbackList )
  {
    v89 = v65;
    v90 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v62 + 24) ^ (unsigned __int64)BYTE1(v62)];
    v91 = v65 & *(_DWORD *)(v90 + 96);
    v195 = 0LL;
    v196 = 0LL;
    v193 = v194;
    v194[1] = v65;
    v194[0] = v65;
    v189[1] = v159;
    v189[0] = 1;
    v190 = v15;
    v192 = 0LL;
    v191 = v90;
    v92 = ObpCallPreOperationCallbacks(v90, v189, v184);
    if ( v92 < 0 )
    {
      v115 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v62 + 24);
      v172 = 0;
      v116 = ObTypeIndexTable[v186 ^ v115];
      if ( (*(_BYTE *)(v116 + 66) & 0x10) != 0 || (*(_BYTE *)(v62 + 27) & 8) != 0 )
      {
        v118 = KeGetCurrentThread();
        --v118->KernelApcDisable;
        v119 = (signed __int64 *)(v62 + 16);
        v120 = (_BYTE *)KeAbPreAcquire(v62 + 16, 0LL, 0);
        v121 = v120;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v62 + 16), v120, v62 + 16);
        if ( v121 )
          v121[26] |= 1u;
        v117 = *(_QWORD *)(v62 + 8);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v62 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
          && (*(_BYTE *)(v62 + 27) & 8) != 0 )
        {
          *(_QWORD *)(v62 - ObpInfoMaskToOffset[*(_BYTE *)(v62 + 26) & 0x1F]) = 0LL;
        }
        if ( (*(_BYTE *)(v116 + 66) & 0x10) != 0 )
          ObpReleaseHandleInfo(v62, PROCESS, &v172);
        _m_prefetchw(v119);
        v122 = *v119;
        v123 = *v119 - 16;
        if ( (*v119 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v123 = 0LL;
        if ( (v122 & 2) != 0 || (v124 = *v119, v124 != _InterlockedCompareExchange64(v119, v123, v122)) )
          ExfReleasePushLock((_QWORD *)(v62 + 16));
        KeAbPostRelease(v62 + 16);
        KeLeaveCriticalRegion();
      }
      else
      {
        v117 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v62 + 8), 0xFFFFFFFFFFFFFFFFuLL);
      }
      if ( *(_QWORD *)(v116 + 128) )
      {
        v125 = 0;
        v126 = PROCESS;
        if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
        {
          v125 = 1;
          ProcessServerSilo = PsGetProcessServerSilo((__int64)PROCESS);
          p_ObjectTypeName = PsAttachSiloToCurrentThread(ProcessServerSilo);
          KeStackAttachProcess(PROCESS, &ApcState);
          v126 = PROCESS;
        }
        (*(void (__fastcall **)(PRKPROCESS, __int64, _QWORD, signed __int64))(v116 + 128))(v126, v62 + 48, v172, v117);
        if ( v125 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsDetachSiloFromCurrentThread(p_ObjectTypeName);
        }
      }
      if ( v117 == 1 )
        ObpDeleteNameCheck(v62);
      _InterlockedDecrement((volatile signed __int32 *)(v116 + 48));
      if ( a5 )
      {
        if ( a5 > 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)v62, (int)(1 - a5));
        ObfDereferenceObject(Object);
      }
      return (unsigned int)v92;
    }
    if ( v159 )
    {
      v65 = PreviouslyGrantedAccess;
    }
    else
    {
      v93 = (v91 | v194[0]) & v89;
      PreviouslyGrantedAccess = v93;
      v65 = v93;
      if ( v13 )
        v13->PreviouslyGrantedAccess = v93;
    }
  }
  v94 = v65 & 0x1FFFFFF;
  v199 = 0LL;
  v95 = v94 | 0x2000000;
  v96 = v94 & 0xFDFFFFFF;
  if ( (v162 & 8) != 0 )
    v96 = v95;
  LODWORD(v199) = v96;
  v174 = (v62 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v162 & 7) << 17) | 1;
  v165 = KeGetCurrentThread();
  --v165->KernelApcDisable;
  v97 = (_DWORD *)v170;
  v98 = 0LL;
  SourceHandle = 0LL;
  v99 = *(_BYTE *)(v170 + 44);
  if ( (v99 & 4) != 0 )
  {
LABEL_239:
    v130 = (__int64)v165;
    goto LABEL_240;
  }
  if ( (v99 & 1) == 0 )
    LODWORD(v98) = KeGetPcr()->Prcb.Number;
  v100 = dword_140757700;
  v183 = dword_140757700;
  v162 = v98;
LABEL_169:
  v101 = 0;
  v180 = *v97;
  while ( 1 )
  {
    v102 = (ULONG_PTR)&v97[16 * (unsigned int)v98 + 16];
    if ( *(_QWORD *)(v102 + 8) )
      break;
LABEL_184:
    LODWORD(v98) = v98 + 1;
    if ( (_DWORD)v98 == v100 )
      LODWORD(v98) = 0;
    if ( ++v101 >= v100 )
    {
      v108 = (unsigned __int64 *)(v97 + 14);
      HandleTableEntrySlow = 1;
      LODWORD(v98) = v162;
      v110 = &v97[16 * v162 + 16];
      v111 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v97 + 14), 0LL, 0);
      v112 = v111;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v108, 0LL) )
        ExfAcquirePushLockExclusiveEx(v108, v111, (ULONG_PTR)v108);
      if ( v112 )
        v112[26] |= 1u;
      if ( v180 == *(_DWORD *)v170 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v170, v110);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v108, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v108);
      KeAbPostRelease((ULONG_PTR)v108);
      if ( HandleTableEntrySlow )
      {
        v100 = v183;
        v97 = (_DWORD *)v170;
        goto LABEL_169;
      }
      goto LABEL_238;
    }
  }
  v103 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&v97[16 * (unsigned int)v98 + 16], 0LL, 0);
  v104 = v103;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v102, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v102, v103, v102);
  if ( v104 )
    v104[26] |= 1u;
  v105 = *(unsigned __int64 **)(v102 + 8);
  if ( v105 )
  {
    v106 = v105[1];
    *(_QWORD *)(v102 + 8) = v106;
    if ( !v106 )
      *(_QWORD *)(v102 + 16) = 0LL;
    v107 = ++*(_DWORD *)(v102 + 24);
    if ( v107 > *(_DWORD *)(v102 + 28) )
      *(_DWORD *)(v102 + 28) = v107;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v102, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v102);
  KeAbPostRelease(v102);
  if ( !v105 )
  {
    v97 = (_DWORD *)v170;
    goto LABEL_184;
  }
  v128 = *(_QWORD *)(((unsigned __int64)v105 & 0xFFFFFFFFFFFFF000uLL) + 8);
  v98 = v128 + 4 * ((__int64)((__int64)v105 - ((unsigned __int64)v105 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  SourceHandle = (HANDLE)v98;
  if ( v177[0] || a9 )
  {
    v129 = v170;
    if ( (unsigned int)ExpSetHandleExtraInfo(
                         v170,
                         v128 + 4 * ((__int64)((__int64)v105 - ((unsigned __int64)v105 & 0xFFFFFFFFFFFFF000uLL)) >> 4),
                         v177) )
    {
      ExpFreeHandleTableEntry(v129, v98, v105);
      SourceHandle = 0LL;
LABEL_238:
      v88 = a5;
      v98 = 0LL;
      v13 = AccessState;
      goto LABEL_239;
    }
  }
  else
  {
    v129 = v170;
  }
  v130 = (__int64)v165;
  if ( *(_QWORD *)(v129 + 96) )
    ExpUpdateDebugInfo(v129, v165, v98, 1LL);
  v88 = a5;
  v105[1] = v199;
  *v105 = v174;
  v13 = AccessState;
LABEL_240:
  KeLeaveCriticalRegionThread(v130);
  if ( !v98 )
  {
    ObpDecrementHandleCount(PROCESS, v62);
    if ( v88 )
    {
      if ( v88 > 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v62, (int)(1 - v88));
      ObfDereferenceObject(Object);
    }
    v131 = v178;
    v132 = -1073741670;
    v133 = v159;
    v134 = v188;
    goto LABEL_306;
  }
  if ( !v13 )
  {
    v131 = v178;
    goto LABEL_300;
  }
  v135 = *(_BYTE *)(v62 + 26);
  v136 = 0LL;
  v182 = 0LL;
  v137 = 0LL;
  if ( (v135 & 0x20) == 0
    || (v138 = ObpInfoMaskToOffset[v135 & 0x3F], v139 = (PSECURITY_DESCRIPTOR *)(v62 - v138), v62 == v138) )
  {
    if ( v181 )
      v136 = v181;
  }
  else if ( *v139 )
  {
    v136 = *v139;
  }
  else if ( v181 )
  {
    ObpSetObjectAuditInfo(v62, v181);
  }
  else if ( (POBJECT_TYPE *)ObTypeIndexTable[v186 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v62 + 24)] != IoFileObjectType
         || (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) == 0 )
  {
    v140 = ObpAllocateAndQuerySecurityDescriptorInfo(Object, 32LL, &v182);
    v137 = v182;
    if ( v182 )
    {
      if ( v140 >= 0 )
      {
        v136 = v182;
        ObpSetObjectAuditInfo(v62, v182);
      }
    }
  }
  *(_QWORD *)v187 = v98;
  v141 = 0;
  v142 = AccessState;
  v143 = 0LL;
  TargetHandle = 0LL;
  v144 = AccessState->AuxData;
  if ( !v136 )
  {
    v136 = (PSECURITY_DESCRIPTOR)v144[7];
    if ( !v136 )
      v136 = AccessState->SecurityDescriptor;
  }
  if ( !AccessState->GenerateAudit )
  {
    if ( !*((_BYTE *)v144 + 216) )
    {
      v145 = AccessState;
LABEL_280:
      v98 = (unsigned __int64)SourceHandle;
      goto LABEL_281;
    }
LABEL_272:
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           SourceHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &TargetHandle,
           0,
           0x200u,
           2u) >= 0 )
    {
      ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v197, 0LL);
      v143 = v197;
    }
    p_ObjectTypeName = (__int64)&v142->ObjectTypeName;
    LOBYTE(v146) = 1;
    v163 = SepAdtClassifyObjectIntoSubCategory(v143, &v142->ObjectTypeName, v146, 0LL);
    v147 = v163;
    if ( v143 )
      ObfDereferenceObject(v143);
    if ( TargetHandle )
    {
      ZwClose(TargetHandle);
      TargetHandle = 0LL;
    }
    p_ObjectName = (__int64)&v142->ObjectName;
    CurrentThreadProcessId = PsGetCurrentThreadProcessId();
    v145 = AccessState;
    v141 = SepAdtOpenObjectAuditAlarm(
             v147,
             (int)&SeSubsystemName,
             (int)v187,
             p_ObjectTypeName,
             p_ObjectName,
             v136,
             (__int64)AccessState->SubjectSecurityContext.ClientToken,
             (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
             AccessState->OriginalDesiredAccess,
             AccessState->PreviouslyGrantedAccess,
             *v144,
             1,
             CurrentThreadProcessId,
             2,
             0LL,
             0,
             0LL,
             (__int64)(v144 + 4),
             (__int64)AccessState);
    v150 = PsGetCurrentThreadProcessId();
    LOBYTE(AccessStatus) = 1;
    SepAdtStagingEvent(
      v163,
      v151,
      v187,
      p_ObjectTypeName,
      p_ObjectName,
      v145->SubjectSecurityContext.ClientToken,
      v145->SubjectSecurityContext.PrimaryToken,
      v145->OriginalDesiredAccess,
      v145->PreviouslyGrantedAccess,
      AccessStatus,
      v150,
      v145);
    LODWORD(p_ObjectTypeName) = 0;
    goto LABEL_280;
  }
  if ( !AccessState->AuditPrivileges )
    goto LABEL_272;
  v145 = AccessState;
  v98 = (unsigned __int64)SourceHandle;
  SepAdtPrivilegeObjectAuditAlarm(
    &SeSubsystemName,
    &AccessState->ObjectTypeName.Length,
    &AccessState->ObjectName.Length,
    (__int64)SourceHandle,
    (__int64)AccessState->SubjectSecurityContext.ClientToken,
    (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
    (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
    AccessState->PreviouslyGrantedAccess,
    (int *)*v144,
    1);
LABEL_281:
  v152 = v173;
  v145->GenerateOnClose = v141;
  if ( !v152 )
  {
    v153 = *(_DWORD **)v145->AuxData;
    if ( v153 )
    {
      if ( *v153 )
      {
        SePrivilegeObjectAuditAlarm(
          v98,
          (__int64 *)&v145->SubjectSecurityContext,
          v145->PreviouslyGrantedAccess,
          (__int64)v153,
          1,
          KeGetCurrentThread()->PreviousMode);
        v137 = v182;
      }
    }
  }
  if ( v137 )
    ExFreePoolWithTag(v137, 0);
  v30 = v152 == 0;
  v131 = v178;
  if ( v30 && (v178 == CmKeyObjectType || v178 == IoFileObjectType) )
  {
    ClientToken = (unsigned __int64)v145->SubjectSecurityContext.ClientToken;
    if ( ClientToken )
    {
      PrimaryToken = (char *)AccessState->SubjectSecurityContext.PrimaryToken;
      SepAcquireOrderedReadLocks((unsigned __int64)PrimaryToken, ClientToken);
      if ( (*(_DWORD *)(ClientToken + 200) & 0x4000) != 0
        && *(int *)(ClientToken + 196) >= 2
        && !RtlEqualSid(**((PSID **)PrimaryToken + 19), **(PSID **)(ClientToken + 152))
        && SepSidInTokenSidHash(
             (PSID_AND_ATTRIBUTES_HASH)(PrimaryToken + 808),
             0LL,
             (void *)SeConstrainedImpersonationCapabilitySid,
             0,
             1,
             0) )
      {
        LODWORD(p_ObjectTypeName) = ObHandleRevocationBlockAddObject(*(_QWORD *)(ClientToken + 216) + 128LL, Object);
      }
      ExReleaseResourceLite(*((PERESOURCE *)PrimaryToken + 6));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(ClientToken + 48));
      KeLeaveCriticalRegion();
      if ( (int)p_ObjectTypeName < 0 )
        return (unsigned int)p_ObjectTypeName;
      v98 = (unsigned __int64)SourceHandle;
    }
  }
LABEL_300:
  if ( a5 && v198 )
    *v198 = Object;
  v133 = v159;
  v132 = v158 != 0 ? 0x40000000 : 0;
  if ( v159 )
    v98 |= 0xFFFFFFFF80000000uLL;
  v134 = v188;
  *v188 = v98;
LABEL_306:
  v156 = Object;
  if ( (_QWORD *)v184[0] != v184 )
    ObpPostInterceptHandleCreate((_DWORD)Object, v133, v132, PreviouslyGrantedAccess, (__int64)v184);
  if ( (xmmword_1403AA2D0 & 0x40) != 0 && v132 >= 0 )
    EtwpTraceHandle(4384LL, *v134, v156, v131);
  return (unsigned int)v132;
}
