/*
 * XREFs of IopParseDevice @ 0x140412F10
 * Callers:
 *     IopParseFile @ 0x1404A6638 (IopParseFile.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x140037028 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x14003703C (IopSymlinkRemoveECP.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IopCheckDeviceAndDriver @ 0x140043BB0 (IopCheckDeviceAndDriver.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     PsIsHostSilo @ 0x140079E50 (PsIsHostSilo.c)
 *     IopGetFileObjectExtension @ 0x14007CDA0 (IopGetFileObjectExtension.c)
 *     IopDecrementDeviceObjectRef @ 0x14007E3E0 (IopDecrementDeviceObjectRef.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     IopDequeueIrpFromThread @ 0x14007E560 (IopDequeueIrpFromThread.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     IopDeleteFileObjectExtension @ 0x140091B50 (IopDeleteFileObjectExtension.c)
 *     IoGetAttachedDevice @ 0x140097FE0 (IoGetAttachedDevice.c)
 *     PsGetCurrentProcessSessionId @ 0x140098180 (PsGetCurrentProcessSessionId.c)
 *     IopGetDevicePDO @ 0x1400988E8 (IopGetDevicePDO.c)
 *     SepPrivilegeCheck @ 0x14009DDF0 (SepPrivilegeCheck.c)
 *     IopIncrementVpbRefCount @ 0x1400AFB14 (IopIncrementVpbRefCount.c)
 *     IopGetSetSpecificExtension @ 0x1400CC2E8 (IopGetSetSpecificExtension.c)
 *     IopCheckVpbMounted @ 0x1400CFEA0 (IopCheckVpbMounted.c)
 *     IopDereferenceVpbAndFree @ 0x1400D7CB0 (IopDereferenceVpbAndFree.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     IopCreateSecurityCheck @ 0x1400EA430 (IopCreateSecurityCheck.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x1400F1694 (IopSymlinkGetMostRecentlyUsedName.c)
 *     sub_1400FC4C8 @ 0x1400FC4C8 (sub_1400FC4C8.c)
 *     EtwActivityIdControlKernel @ 0x1400FF658 (EtwActivityIdControlKernel.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x1401BB60C (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x1401BDC74 (IopAllowRemoteDASD.c)
 *     SeFastTraverseCheck @ 0x1402003E8 (SeFastTraverseCheck.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeTokenIsAdmin @ 0x1403BE378 (SeTokenIsAdmin.c)
 *     IoGetIrpExtraCreateParameter @ 0x1403F55B0 (IoGetIrpExtraCreateParameter.c)
 *     IopAllocRealFileObject @ 0x140414F70 (IopAllocRealFileObject.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404232E0 (FsRtlFreeExtraCreateParameter.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140452CA8 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeUnlockSubjectContext @ 0x140470920 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x140470960 (SeLockSubjectContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SePrivilegeCheck @ 0x140472B50 (SePrivilegeCheck.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14047D620 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     IopRetrieveTransactionParameters @ 0x140491000 (IopRetrieveTransactionParameters.c)
 *     IopSymlinkSetFoExtension @ 0x14049118C (IopSymlinkSetFoExtension.c)
 *     SeAppendPrivileges @ 0x1404A3E30 (SeAppendPrivileges.c)
 *     IopCheckTopDeviceHint @ 0x1404A7514 (IopCheckTopDeviceHint.c)
 *     IopSymlinkRememberJunction @ 0x1404C0A58 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x1404C0B58 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1404C0C94 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkCreateECP @ 0x1404C0CD4 (IopSymlinkCreateECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1404C0E68 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopGraftName @ 0x1404C0FB0 (IopGraftName.c)
 *     IopCancelAlertedRequest @ 0x1404C5FBC (IopCancelAlertedRequest.c)
 *     IoQueryFileInformation @ 0x1404DB230 (IoQueryFileInformation.c)
 *     IopGetNetworkOpenInformation @ 0x14054B55C (IopGetNetworkOpenInformation.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x14054F200 (IopSymlinkEnforceEnabledTypes.c)
 *     IoCancelFileOpen @ 0x1405F99D8 (IoCancelFileOpen.c)
 *     IopFindMatchingComponentsLengthR @ 0x1405FF350 (IopFindMatchingComponentsLengthR.c)
 *     VfFastIoCheckState @ 0x1406B9854 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1406B9904 (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
        unsigned int *BugCheckParameter2,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        char a4,
        int a5,
        UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        _WORD *a8,
        __int64 a9,
        struct _FILE_OBJECT **a10)
{
  unsigned int *v10; // rdi
  struct _FILE_OBJECT **v11; // r14
  unsigned __int8 v12; // bl
  __int64 v13; // rdx
  __int64 i; // r9
  PVOID v15; // r14
  __int64 result; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  bool v19; // al
  __int64 v20; // rcx
  __int64 FileObjectExtension; // r8
  int v22; // edi
  _DWORD *DevicePDO; // rax
  void *v24; // rdi
  POBJECT_TYPE *v25; // rcx
  PACCESS_STATE v26; // r10
  signed int RemainingDesiredAccess; // edx
  ACCESS_MASK v28; // edx
  ACCESS_MASK v29; // edx
  ACCESS_MASK v30; // edx
  POBJECT_TYPE *v31; // rcx
  int OriginalDesiredAccess; // edx
  ACCESS_MASK v33; // edx
  ACCESS_MASK v34; // edx
  ACCESS_MASK v35; // edx
  ACCESS_MASK v36; // edi
  char v37; // r9
  char v38; // r15
  int v39; // edx
  char v40; // r13
  char v41; // r12
  ULONG Flags; // ecx
  __int64 ClientToken; // rcx
  char v44; // al
  int v45; // edi
  char v46; // dl
  PCUNICODE_STRING v47; // r12
  __int64 v48; // rcx
  int v49; // r8d
  char v50; // bl
  int v51; // edi
  bool v52; // di
  PACCESS_STATE v53; // r13
  char v54; // bl
  PACCESS_TOKEN PrimaryToken; // rcx
  struct _PRIVILEGE_SET *v56; // r12
  ACCESS_MASK v57; // eax
  PACCESS_STATE v58; // r13
  struct _PRIVILEGE_SET *v59; // rdi
  char v60; // al
  char v61; // bl
  unsigned __int16 Length; // r8
  ACCESS_MASK v63; // r15d
  ULONG_PTR v64; // r13
  __int64 v65; // rdx
  PDEVICE_OBJECT AttachedDevice; // r12
  __int64 v67; // rax
  int v68; // ecx
  int v69; // r12d
  int v70; // eax
  PACCESS_STATE v71; // rdi
  __int64 Irp; // rax
  __int64 v73; // r15
  ACCESS_MASK v74; // edx
  __int64 v75; // rdi
  int v76; // eax
  char v77; // al
  int TransactionParameters; // r12d
  PVOID v79; // rcx
  struct _FILE_OBJECT *v80; // r14
  _QWORD *v81; // rdi
  PVOID v82; // rdi
  unsigned __int64 DeviceType; // rax
  __int64 v84; // rcx
  PVOID v85; // rcx
  void *v86; // rdi
  _DWORD *v87; // rax
  unsigned __int16 v88; // ax
  wchar_t *PoolWithTag; // rax
  PDEVICE_OBJECT v90; // rdx
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  void *v92; // rdi
  int v93; // ecx
  void *v94; // rcx
  PVOID v95; // r12
  int v96; // r14d
  _QWORD *v97; // rbx
  __int16 *MostRecentlyUsedName; // rax
  int updated; // eax
  KEVENT *p_Event; // r12
  __int64 v101; // rdx
  __int64 v102; // r8
  _BYTE *v103; // rax
  unsigned __int8 CurrentIrql; // dl
  struct _ECP_LIST *v106; // r12
  int ECP; // eax
  unsigned __int64 v108; // rax
  NTSTATUS v109; // eax
  __int64 v110; // rax
  unsigned __int16 MatchingComponentsLengthR; // ax
  int v112; // eax
  __int64 v113; // rax
  _WORD *v114; // rdi
  __int64 RelatedFileObject; // rcx
  unsigned __int16 *v116; // rax
  ACCESS_MASK v117; // eax
  NTSTATUS v118; // r12d
  unsigned __int16 *v119; // r12
  NTSTATUS NetworkOpenInformation; // edi
  ULONG_PTR v121; // rax
  unsigned __int16 v122; // ax
  wchar_t *v123; // r15
  PUNICODE_STRING v124; // r12
  wchar_t *Buffer; // rcx
  _QWORD *v126; // rdi
  ULONG_PTR v127; // rdx
  int v128; // ecx
  unsigned __int64 v129; // rax
  __int64 v130; // r11
  unsigned int v131; // ecx
  PACCESS_STATE v132; // rcx
  __int64 v133; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  ULONG_PTR Vpb; // rcx
  struct _FILE_OBJECT *v136; // rax
  unsigned __int64 v137; // rax
  __int64 v138; // rcx
  char v139; // r15
  PFAST_IO_DISPATCH v140; // rcx
  struct _FILE_OBJECT **FastIoQueryBasicInfo; // rbx
  void *v142; // rdi
  PVOID v143; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r13
  void *v145; // rbx
  NTSTATUS v146; // eax
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-1A8h]
  int GenericMapping; // [rsp+30h] [rbp-198h]
  int AccessMode; // [rsp+38h] [rbp-190h]
  int GrantedAccess; // [rsp+40h] [rbp-188h]
  char v152; // [rsp+51h] [rbp-177h]
  char v153; // [rsp+51h] [rbp-177h]
  PVOID EcpContext; // [rsp+58h] [rbp-170h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+60h] [rbp-168h]
  char v156; // [rsp+64h] [rbp-164h]
  PACCESS_STATE AccessState; // [rsp+68h] [rbp-160h]
  NTSTATUS AccessStatus[2]; // [rsp+70h] [rbp-158h] BYREF
  int v159; // [rsp+78h] [rbp-150h]
  PUNICODE_STRING AbsoluteObjectName; // [rsp+80h] [rbp-148h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-140h] BYREF
  PVOID Object; // [rsp+90h] [rbp-138h]
  ACCESS_MASK v163; // [rsp+98h] [rbp-130h] BYREF
  PVOID v164; // [rsp+A0h] [rbp-128h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-120h]
  PCUNICODE_STRING SourceString; // [rsp+B0h] [rbp-118h]
  PPRIVILEGE_SET v167; // [rsp+B8h] [rbp-110h] BYREF
  char v168; // [rsp+C0h] [rbp-108h]
  PVOID v169; // [rsp+C8h] [rbp-100h] BYREF
  unsigned int v170; // [rsp+D0h] [rbp-F8h]
  ULONG ReturnedLength; // [rsp+D4h] [rbp-F4h] BYREF
  struct _FILE_OBJECT **v172; // [rsp+D8h] [rbp-F0h]
  PVOID P; // [rsp+E0h] [rbp-E8h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+E8h] [rbp-E0h] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+F0h] [rbp-D8h] BYREF
  unsigned __int16 *v176; // [rsp+100h] [rbp-C8h] BYREF
  struct _DEVICE_OBJECT *v177; // [rsp+108h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+110h] [rbp-B8h] BYREF
  _DWORD *v179; // [rsp+120h] [rbp-A8h] BYREF
  __int128 *v180; // [rsp+128h] [rbp-A0h] BYREF
  struct _ECP_LIST *v181; // [rsp+130h] [rbp-98h]
  PVOID v182[3]; // [rsp+138h] [rbp-90h] BYREF
  __int64 v183; // [rsp+150h] [rbp-78h] BYREF
  _QWORD v184[2]; // [rsp+158h] [rbp-70h] BYREF
  ACCESS_MASK v185; // [rsp+168h] [rbp-60h]
  int v186; // [rsp+16Ch] [rbp-5Ch]
  struct _PRIVILEGE_SET Privileges; // [rsp+170h] [rbp-58h] BYREF
  __int128 v188; // [rsp+188h] [rbp-40h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+0h]

  AccessState = a3;
  v10 = BugCheckParameter2;
  v177 = (struct _DEVICE_OBJECT *)BugCheckParameter2;
  AbsoluteObjectName = a6;
  SourceString = a7;
  v182[2] = a8;
  v11 = a10;
  v172 = a10;
  v170 = 0;
  LOBYTE(v159) = 0;
  v167 = 0LL;
  P = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  v12 = v152 & 0xE9 | 4;
  RtlInitUnicodeString(&DestinationString, L"File");
  v13 = 0x1080020084LL;
  for ( i = 0x60010000110040LL; ; i = 0x60010000110040LL )
  {
    *v11 = 0LL;
    v164 = 0LL;
    if ( !a8 || *a8 != 8 || a8[1] != 192 )
      return 3221225508LL;
    v15 = v10;
    Object = v10;
    if ( *((_DWORD *)a8 + 8) == 1 )
    {
      *((_DWORD *)a8 + 8) = -1096154543;
      *((_QWORD *)a8 + 5) = v10;
      *((_DWORD *)a8 + 4) = 0;
      ObfReferenceObject(v10);
      return 0LL;
    }
    if ( (*((_DWORD *)a8 + 36) & 0x10) != 0 )
    {
      if ( *((_QWORD *)a8 + 3) == 2684354563LL )
      {
        v17 = v10[18];
        if ( (unsigned int)v17 > 0x24 || !_bittest64(&v13, v17) )
          goto LABEL_12;
      }
      else
      {
        v18 = v10[18];
        LOBYTE(v13) = (unsigned int)v18 <= 0x24 && _bittest64(&v13, v18);
        v19 = (unsigned int)v18 <= 0x36 && _bittest64(&i, v18);
        if ( !(_BYTE)v13 && !v19 )
        {
LABEL_12:
          *((_DWORD *)a8 + 4) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(a8[72] & 8, v13, *((_QWORD *)a8 + 20));
        if ( (int)result < 0 )
          goto LABEL_429;
      }
    }
    v20 = *((_QWORD *)a8 + 5);
    if ( v20 )
    {
      FileObjectExtension = IopGetFileObjectExtension(v20, 7, 0LL);
      if ( FileObjectExtension && *(_QWORD *)(FileObjectExtension + 8) != *((_QWORD *)a8 + 23)
        || !FileObjectExtension && !PsIsHostSilo(*((_QWORD *)a8 + 23)) )
      {
        *((_DWORD *)a8 + 4) = -1073741811;
        return 3221225485LL;
      }
      v15 = *(PVOID *)(*((_QWORD *)a8 + 5) + 8LL);
      Object = v15;
    }
    result = IopCheckDeviceAndDriver((__int64)a8, (ULONG_PTR)v15);
    LODWORD(EcpContext) = result;
    AccessStatus[0] = result;
    if ( (int)result < 0 )
      goto LABEL_429;
    if ( (*(_DWORD *)(*((_QWORD *)v15 + 39) + 32LL) & 0x400) != 0 && !*((_QWORD *)a8 + 5) )
    {
      v22 = *(_DWORD *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL);
      if ( v22 != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*((_DWORD *)a8 + 16) & 0x40000) == 0 )
      {
        DevicePDO = IopGetDevicePDO((__int64)v15);
        v24 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            ObfDereferenceObject(v24);
            IopDecrementDeviceObjectRef((ULONG_PTR)v15, 0, 0);
            *((_DWORD *)a8 + 4) = -1073741790;
            return 3221225506LL;
          }
          ObfDereferenceObject(v24);
        }
      }
    }
    v25 = IoFileObjectType;
    v26 = AccessState;
    RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
    if ( RemainingDesiredAccess < 0 )
      AccessState->RemainingDesiredAccess = RemainingDesiredAccess | *((_DWORD *)IoFileObjectType + 19);
    v28 = v26->RemainingDesiredAccess;
    if ( (v28 & 0x40000000) != 0 )
      v26->RemainingDesiredAccess = v28 | *((_DWORD *)v25 + 20);
    v29 = v26->RemainingDesiredAccess;
    if ( (v29 & 0x20000000) != 0 )
      v26->RemainingDesiredAccess = v29 | *((_DWORD *)v25 + 21);
    v30 = v26->RemainingDesiredAccess;
    if ( (v30 & 0x10000000) != 0 )
      v26->RemainingDesiredAccess = v30 | *((_DWORD *)v25 + 22);
    v26->RemainingDesiredAccess &= 0xFFFFFFFu;
    v31 = IoFileObjectType;
    OriginalDesiredAccess = v26->OriginalDesiredAccess;
    if ( OriginalDesiredAccess < 0 )
      v26->OriginalDesiredAccess = OriginalDesiredAccess | *((_DWORD *)IoFileObjectType + 19);
    v33 = v26->OriginalDesiredAccess;
    if ( (v33 & 0x40000000) != 0 )
      v26->OriginalDesiredAccess = v33 | *((_DWORD *)v31 + 20);
    v34 = v26->OriginalDesiredAccess;
    if ( (v34 & 0x20000000) != 0 )
      v26->OriginalDesiredAccess = v34 | *((_DWORD *)v31 + 21);
    v35 = v26->OriginalDesiredAccess;
    if ( (v35 & 0x10000000) != 0 )
      v26->OriginalDesiredAccess = v35 | *((_DWORD *)v31 + 22);
    v26->OriginalDesiredAccess &= 0xFFFFFFFu;
    *(_OWORD *)((char *)v26->AuxData + 8) = *(_OWORD *)((char *)IoFileObjectType + 76);
    v36 = v26->RemainingDesiredAccess;
    DesiredAccess = v36;
    v37 = a4;
    v38 = a4 || (*((_DWORD *)a8 + 21) & 1) != 0;
    v39 = *((_DWORD *)a8 + 22);
    v40 = 0;
    v41 = 0;
    Flags = v26->Flags;
    if ( (Flags & 0x100) == 0 && (*((_DWORD *)a8 + 16) & 0x4000) != 0 )
    {
      v26->Flags = Flags | 0x100;
      if ( (v36 & 0x2000000) != 0 )
        v36 |= 0x11F01BFu;
      if ( ((v39 - 1) & 0xFFFFFFF9) != 0 || v39 == 7 )
      {
        v41 = 1;
        goto LABEL_78;
      }
      if ( (v36 & 0x11200A9) != 0 )
      {
        Privileges.PrivilegeCount = 1;
        Privileges.Control = 1;
        Privileges.Privilege[0].Luid = SeBackupPrivilege;
        Privileges.Privilege[0].Attributes = 0;
        if ( !v38 )
          goto LABEL_74;
        ClientToken = (__int64)v26->SubjectSecurityContext.ClientToken;
        if ( !ClientToken )
        {
          ClientToken = (__int64)v26->SubjectSecurityContext.PrimaryToken;
          goto LABEL_73;
        }
        if ( v26->SubjectSecurityContext.ImpersonationLevel >= SecurityImpersonation )
        {
LABEL_73:
          v44 = SepPrivilegeCheck(ClientToken, (__int64)Privileges.Privilege, 1u, 1, v38);
          v26 = AccessState;
          if ( !v44 )
          {
LABEL_77:
            v15 = Object;
LABEL_78:
            v45 = v36 & 0x11F0116;
            if ( v45 || v41 )
            {
              Privileges.PrivilegeCount = 1;
              Privileges.Control = 1;
              Privileges.Privilege[0].Luid = SeRestorePrivilege;
              Privileges.Privilege[0].Attributes = 0;
              if ( SePrivilegeCheck(&Privileges, &v26->SubjectSecurityContext, v38) )
              {
                v40 = 1;
                SeAppendPrivileges(AccessState, &Privileges);
                v26 = AccessState;
                AccessState->PreviouslyGrantedAccess |= v45;
                v26->RemainingDesiredAccess &= 0xFEE0FEE9;
                v26->Flags |= 4u;
              }
              else
              {
                v26 = AccessState;
              }
            }
            v36 = DesiredAccess;
            v37 = a4;
            if ( !v40 )
              *((_DWORD *)a8 + 16) &= ~0x4000u;
            goto LABEL_85;
          }
LABEL_74:
          v40 = 1;
          SeAppendPrivileges(v26, &Privileges);
          v26 = AccessState;
          AccessState->PreviouslyGrantedAccess |= v36 & 0x11200A9;
          v26->RemainingDesiredAccess &= 0xFEEDFF56;
          v36 &= 0xFEEDFF56;
          v26->Flags |= 2u;
          goto LABEL_77;
        }
      }
      v15 = Object;
      goto LABEL_78;
    }
LABEL_85:
    v46 = *((_BYTE *)a8 + 128);
    v47 = SourceString;
    if ( v46 && !SourceString->Length || (v26->Flags & 0x100) != 0 )
    {
      v36 |= v26->PreviouslyGrantedAccess;
      DesiredAccess = v36;
    }
    v48 = *((_QWORD *)a8 + 5);
    LOBYTE(v49) = v159;
    if ( v48 && (*(_DWORD *)(v48 + 80) & 0x400000) != 0 )
    {
      v49 = (unsigned __int8)v159;
      if ( !SourceString->Length )
        v49 = 1;
      v159 = v49;
    }
    if ( !v37 && (*((_DWORD *)a8 + 21) & 1) == 0 || v48 && !(_BYTE)v49 || v46 )
      goto LABEL_136;
    v50 = v12 & 0xDF;
    if ( SourceString->Length )
    {
      if ( (*((_DWORD *)v15 + 13) & 0x20100) == 0x20000 || !v37 )
        goto LABEL_124;
      v156 = 0;
      SeIsAppContainerOrIdentifyLevelContext(&v26->SubjectSecurityContext);
      if ( !v156 )
      {
        v26 = AccessState;
LABEL_124:
        if ( (v26->Flags & 1) != 0 )
        {
          v12 = v50 | 1;
        }
        else
        {
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
          v58 = AccessState;
          v12 = (v50 ^ SeFastTraverseCheck(*((_QWORD *)v15 + 34), (__int64)AccessState, 32)) & 1 ^ v50;
          if ( (v12 & 1) == 0 )
          {
            v167 = 0LL;
            SeLockSubjectContext(&v58->SubjectSecurityContext);
            v12 = ((v12 | 0x20) ^ SeAccessCheck(
                                    *((PSECURITY_DESCRIPTOR *)v15 + 34),
                                    &v58->SubjectSecurityContext,
                                    1u,
                                    0x20u,
                                    0,
                                    &v167,
                                    (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                    1,
                                    &v163,
                                    AccessStatus)) & 1 ^ (v12 | 0x20);
            v59 = v167;
            if ( v167 )
            {
              SeAppendPrivileges(v58, v167);
              MiDeleteSubsection(v59);
            }
            LODWORD(EcpContext) = AccessStatus[0];
          }
          ExReleaseResourceLite(&IopSecurityResource);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          v26 = v58;
        }
        goto LABEL_132;
      }
      v12 = (v50 ^ IopCreateSecurityCheck(
                     (__int64)v15,
                     0LL,
                     AccessState,
                     v36 | 0x20,
                     v167,
                     &v163,
                     AbsoluteObjectName,
                     &DestinationString,
                     (__int64)CurrentThread,
                     0)) & 1 ^ v50;
      v26 = AccessState;
    }
    else
    {
      v52 = 0;
      if ( (*((_DWORD *)v15 + 13) & 0x40001) != 0
        && (v36 & 0xFFEDFF7F) != 0
        && MEMORY[0xFFFFF780000002D8] != (unsigned int)PsGetCurrentProcessSessionId() )
      {
        v51 = *(_DWORD *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL);
        if ( v51 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
          v52 = 1;
      }
      v167 = 0LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      v53 = AccessState;
      SeLockSubjectContext(&AccessState->SubjectSecurityContext);
      v54 = v50 | 0x20;
      if ( !v52 )
        goto LABEL_112;
      PrimaryToken = v53->SubjectSecurityContext.ClientToken;
      if ( !PrimaryToken )
        PrimaryToken = v53->SubjectSecurityContext.PrimaryToken;
      if ( SeTokenIsAdmin(PrimaryToken) )
      {
LABEL_112:
        v15 = Object;
        v12 = (v54 ^ SeAccessCheck(
                       *((PSECURITY_DESCRIPTOR *)Object + 34),
                       &v53->SubjectSecurityContext,
                       (v54 & 0x20) != 0,
                       DesiredAccess,
                       0,
                       &v167,
                       (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                       1,
                       &v163,
                       AccessStatus)) & 1 ^ v54;
        v56 = v167;
        if ( v167 )
        {
          SeAppendPrivileges(v53, v167);
          MiDeleteSubsection(v56);
        }
        if ( (v12 & 1) != 0 )
        {
          v57 = v163;
          v53->PreviouslyGrantedAccess |= v163;
          v53->RemainingDesiredAccess &= ~(v57 | 0x2000000);
          *((_BYTE *)a8 + 128) = 1;
        }
        LODWORD(EcpContext) = AccessStatus[0];
      }
      else
      {
        v12 = v54 & 0xFE;
        LODWORD(EcpContext) = -1073741790;
        AccessStatus[0] = -1073741790;
        v15 = Object;
      }
      SeOpenObjectAuditAlarmWithTransaction(
        &DestinationString,
        v15,
        AbsoluteObjectName,
        *((PSECURITY_DESCRIPTOR *)v15 + 34),
        v53,
        0,
        v12 & 1,
        1,
        0LL,
        &v53->GenerateOnClose);
      ExReleaseResourceLite(&IopSecurityResource);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      v26 = v53;
      v47 = SourceString;
    }
LABEL_132:
    if ( (v12 & 0x20) != 0 )
      SeUnlockSubjectContext(&v26->SubjectSecurityContext);
    if ( (v12 & 1) == 0 )
    {
LABEL_181:
      IopDecrementDeviceObjectRef((ULONG_PTR)v15, 0, 0);
      return 3221225506LL;
    }
    v26 = AccessState;
    v37 = a4;
LABEL_136:
    v60 = *((_BYTE *)a8 + 129) || *((_BYTE *)a8 + 130);
    v61 = (v12 ^ (v60 << 6)) & 0x40 ^ v12;
    Length = v47->Length;
    v63 = DesiredAccess;
    if ( v47->Length || *((_QWORD *)a8 + 5) || (DesiredAccess & 0xFEE1FF7F) != 0 || (v61 & 0x40) != 0 )
      v12 = v61 & 0xF7;
    else
      v12 = v61 | 8;
    v64 = 0LL;
    v65 = *((_QWORD *)a8 + 5);
    if ( !v65 || (*(_DWORD *)(v65 + 80) & 0x800) != 0 )
    {
      AttachedDevice = (PDEVICE_OBJECT)v15;
      DeviceObject = (PDEVICE_OBJECT)v15;
      if ( *((_QWORD *)v15 + 7) && (v12 & 8) == 0 )
      {
        if ( (*((_DWORD *)v15 + 13) & 0x100) != 0
          && (*(_DWORD *)(*((_QWORD *)v15 + 39) + 32LL) & 0x800) == 0
          && (v37 || (*((_DWORD *)a8 + 21) & 1) != 0)
          && (v65 || Length)
          && !(_BYTE)v159 )
        {
          v167 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v15,
                  v15,
                  v26,
                  DesiredAccess,
                  0LL,
                  &v163,
                  AbsoluteObjectName,
                  &DestinationString,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_181;
        }
        v67 = IopCheckVpbMounted((__int64)a8, (ULONG_PTR)v15, (__int64)SourceString, AccessStatus);
        v64 = v67;
        if ( !v67 )
          return (unsigned int)AccessStatus[0];
        AttachedDevice = *(PDEVICE_OBJECT *)(v67 + 8);
        DeviceObject = AttachedDevice;
        LODWORD(EcpContext) = AccessStatus[0];
      }
      if ( (*((_DWORD *)a8 + 36) & 1) != 0 )
      {
        v12 |= 2u;
      }
      else if ( AttachedDevice->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        DeviceObject = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = v177;
      DeviceObject = v177;
      if ( *(_QWORD *)(v65 + 16) )
      {
        v64 = *(_QWORD *)(v65 + 16);
        if ( (*((_DWORD *)v15 + 13) & 0x100) != 0
          && (*(_DWORD *)(*((_QWORD *)v15 + 39) + 32LL) & 0x800) == 0
          && (v37 || (*((_DWORD *)a8 + 21) & 1) != 0)
          && !(_BYTE)v159 )
        {
          v167 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v15,
                  v15,
                  v26,
                  DesiredAccess,
                  0LL,
                  &v163,
                  AbsoluteObjectName,
                  &DestinationString,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_181;
        }
        IopIncrementVpbRefCount(v64, 1);
      }
      if ( (*((_DWORD *)a8 + 36) & 1) != 0 )
      {
        if ( v64 )
        {
          AttachedDevice = *(PDEVICE_OBJECT *)(v64 + 8);
          DeviceObject = AttachedDevice;
        }
        v12 |= 2u;
      }
    }
    v68 = *((_DWORD *)v15 + 13);
    if ( (v68 & 0x40001) != 0 && (*((_DWORD *)v15 + 12) & 0x600100) == 0 && (v68 & 0x100) == 0 )
      SeIsAppContainerOrIdentifyLevelContext(&AccessState->SubjectSecurityContext);
    if ( (v12 & 2) != 0 )
    {
      v69 = IopCheckTopDeviceHint(&DeviceObject, a8, (v12 & 8) != 0, SourceString);
      LODWORD(EcpContext) = v69;
      if ( v69 < 0 )
      {
        if ( v64 )
          IopDereferenceVpbAndFree(v64);
        IopDecrementDeviceObjectRef((ULONG_PTR)v15, 0, 0);
        return (unsigned int)v69;
      }
      AttachedDevice = DeviceObject;
    }
    v70 = *((_DWORD *)a8 + 36);
    if ( (v70 & 0x10) != 0 )
      *((_DWORD *)a8 + 36) = v70 & 0xFFFFFFEF;
    if ( (AttachedDevice->Characteristics & 0x100) != 0
      && (a4 || (*((_DWORD *)a8 + 21) & 1) != 0)
      && (*((_QWORD *)a8 + 5) || SourceString->Length)
      && !(_BYTE)v159 )
    {
      v167 = 0LL;
      v71 = AccessState;
      if ( !IopCreateSecurityCheck(
              (__int64)v15,
              AttachedDevice,
              AccessState,
              v63,
              0LL,
              &v163,
              AbsoluteObjectName,
              &DestinationString,
              (__int64)CurrentThread,
              1) )
      {
        IopDecrementDeviceObjectRef((ULONG_PTR)v15, 0, 0);
        if ( v64 )
          IopDereferenceVpbAndFree(v64);
        return 3221225506LL;
      }
    }
    else
    {
      v71 = AccessState;
    }
    Irp = pIoAllocateIrp(AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL, retaddr);
    v73 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef((ULONG_PTR)v15, 0, 0);
      if ( v64 )
        IopDereferenceVpbAndFree(v64);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = a4;
    *(_DWORD *)(Irp + 16) = 2180;
    v184[0] = a9;
    v184[1] = v71;
    v74 = DesiredAccess;
    v185 = DesiredAccess;
    v186 = *((_DWORD *)a8 + 16);
    v75 = *(_QWORD *)(Irp + 184) - 72LL;
    *(_QWORD *)AccessStatus = v75;
    *(_BYTE *)(v75 + 3) = 0;
    v76 = *((_DWORD *)a8 + 28);
    if ( v76 )
    {
      if ( v76 == 1 )
        *(_BYTE *)v75 = 1;
      else
        *(_BYTE *)v75 = 19;
      *(_QWORD *)(v75 + 32) = *((_QWORD *)a8 + 15);
    }
    else
    {
      *(_BYTE *)v75 = 0;
      *(_DWORD *)(v75 + 32) = *((_DWORD *)a8 + 20);
      v77 = *((_BYTE *)a8 + 84);
      *(_BYTE *)(v75 + 2) = v77;
      if ( (a5 & 0x40) == 0 )
        *(_BYTE *)(v75 + 2) = v77 | 0x80;
    }
    *(_QWORD *)(v73 + 88) = *((_QWORD *)a8 + 7);
    *(_QWORD *)(v73 + 24) = *((_QWORD *)a8 + 9);
    *(_DWORD *)(v75 + 16) = (*((_DWORD *)a8 + 22) << 24) | *((_DWORD *)a8 + 16) & 0xFFFFFF;
    *(_WORD *)(v75 + 24) = a8[34];
    *(_WORD *)(v75 + 26) = a8[35];
    *(_QWORD *)(v75 + 8) = v184;
    *(_QWORD *)(v73 + 112) = *((_QWORD *)a8 + 20);
    *(_QWORD *)(v73 + 72) = BugCheckParameter4;
    *(_QWORD *)(v73 + 8) = 0LL;
    *(_BYTE *)(v73 + 65) = 0;
    *(_BYTE *)(v73 + 68) = 0;
    *(_QWORD *)(v73 + 80) = 0LL;
    *(_QWORD *)(v73 + 104) = 0LL;
    *(_QWORD *)(v73 + 160) = 0LL;
    if ( *((_BYTE *)a8 + 129) )
    {
      v81 = (_QWORD *)*((_QWORD *)a8 + 17);
      memset(v81, 0, 0x110uLL);
      v80 = (struct _FILE_OBJECT *)(v81 + 6);
      v164 = v81 + 6;
      *((_BYTE *)v81 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v81);
      *v81 = 1LL;
      if ( (a5 & 0x40) == 0 )
        *((_DWORD *)v81 + 32) |= 0x20000u;
      *(_DWORD *)&v80->Type = 14155781;
      v81[14] = *((_QWORD *)a8 + 5);
      v82 = Object;
      v80->DeviceObject = (PDEVICE_OBJECT)Object;
      if ( (*((_DWORD *)a8 + 36) & 0x20) != 0 )
      {
        if ( a4 )
        {
          if ( (AttachedDevice->Flags & 0x40000) != 0
            || (DeviceType = AttachedDevice->DeviceType, (unsigned int)DeviceType <= 0x35)
            && (v84 = 0x20000100100108LL, _bittest64(&v84, DeviceType)) )
          {
            TransactionParameters = IopRetrieveTransactionParameters(AttachedDevice, a8, DesiredAccess, v80);
            LODWORD(EcpContext) = TransactionParameters;
            if ( TransactionParameters < 0 )
            {
              IoFreeIrp((PIRP)v73);
              v85 = v82;
              goto LABEL_229;
            }
          }
        }
      }
      v86 = (void *)*((_QWORD *)a8 + 23);
      if ( !PsIsHostSilo((__int64)v86) )
      {
        TransactionParameters = IopGetSetSpecificExtension((__int64)v80, 7u, 0x10u, 1, &v179, 0LL);
        LODWORD(EcpContext) = TransactionParameters;
        if ( TransactionParameters < 0 )
        {
          IoFreeIrp((PIRP)v73);
          v85 = Object;
LABEL_229:
          IopDecrementDeviceObjectRef((ULONG_PTR)v85, 0, 0);
          if ( v64 )
          {
            IopDereferenceVpbAndFree(v64);
            *((_DWORD *)a8 + 4) = TransactionParameters;
            return (unsigned int)TransactionParameters;
          }
LABEL_218:
          *((_DWORD *)a8 + 4) = TransactionParameters;
          return (unsigned int)TransactionParameters;
        }
        v87 = v179;
        *v179 = 16;
        *((_QWORD *)v87 + 1) = v86;
        ObfReferenceObject(v86);
      }
      v75 = *(_QWORD *)AccessStatus;
    }
    else
    {
      TransactionParameters = IopAllocRealFileObject(
                                (unsigned int)&v164,
                                (_DWORD)AttachedDevice,
                                (_DWORD)v15,
                                a5,
                                a4,
                                (__int64)a8,
                                0,
                                v74);
      LODWORD(EcpContext) = TransactionParameters;
      if ( TransactionParameters < 0 )
      {
        IoFreeIrp((PIRP)v73);
        IopDecrementDeviceObjectRef((ULONG_PTR)v15, 0, 0);
        if ( v64 )
          IopDereferenceVpbAndFree(v64);
        v79 = v164;
        if ( v164 )
        {
          *((_QWORD *)v164 + 1) = 0LL;
          ObfDereferenceObject(v79);
        }
        goto LABEL_218;
      }
      v80 = (struct _FILE_OBJECT *)v164;
    }
    if ( (v12 & 8) != 0 )
      v80->Flags |= 0x800u;
    *(_QWORD *)(v73 + 192) = v80;
    *(_QWORD *)(v75 + 48) = v80;
    v88 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v88 >= 0x38u )
      {
        if ( v88 >= 0x78u )
        {
          if ( v88 < 0xF8u )
            v88 = 248;
        }
        else
        {
          v88 = 120;
        }
      }
      else
      {
        v88 = 56;
      }
      v80->FileName.MaximumLength = v88;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v88, 0x6D4E6F49u);
      v80->FileName.Buffer = PoolWithTag;
      if ( !PoolWithTag )
      {
        IoFreeIrp((PIRP)v73);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v64 )
          IopDereferenceVpbAndFree(v64);
        v80->DeviceObject = 0LL;
        if ( !*((_BYTE *)a8 + 129) )
        {
          ObfDereferenceObject(v80);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v80->FileName, SourceString);
    if ( *((_BYTE *)a8 + 129) )
    {
      v90 = DeviceObject;
      FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        if ( FastIoDispatch->SizeOfFastIoDispatch > 0xC0 )
        {
          EcpContext = FastIoDispatch->FastIoQueryOpen;
          if ( EcpContext )
          {
            --*(_BYTE *)(v73 + 67);
            *(_QWORD *)(v73 + 184) -= 72LL;
            *(_QWORD *)(v75 + 40) = v90;
            if ( (MmVerifierData & 0x10) != 0 )
            {
              v92 = (void *)VfFastIoSnapState();
              v90 = DeviceObject;
            }
            else
            {
              v92 = 0LL;
            }
            v153 = ((__int64 (__fastcall *)(__int64, _QWORD, PDEVICE_OBJECT))EcpContext)(v73, *((_QWORD *)a8 + 13), v90);
            if ( v92 )
              VfFastIoCheckState(v92, (int)EcpContext);
            *((_QWORD *)a8 + 20) = *(_QWORD *)(v73 + 112);
            if ( v153 )
            {
              v93 = *(_DWORD *)(v73 + 48);
              *((_DWORD *)a8 + 4) = v93;
              *((_QWORD *)a8 + 3) = *(_QWORD *)(v73 + 56);
              if ( v93 == 260 )
              {
                v94 = *(void **)(v73 + 160);
                if ( v94 )
                {
                  ExFreePoolWithTag(v94, 0);
                  *(_QWORD *)(v73 + 160) = 0LL;
                  *((_QWORD *)a8 + 5) = 0LL;
                }
              }
              if ( v80->FileName.Length )
                ExFreePoolWithTag(v80->FileName.Buffer, 0);
              if ( v80->FileObjectExtension )
                IopDeleteFileObjectExtension((__int64)v80);
              IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
              if ( v64 )
                IopDereferenceVpbAndFree(v64);
              IoFreeIrp((PIRP)v73);
              *((_DWORD *)a8 + 8) = -1096154543;
              if ( !*((_BYTE *)a8 + 131) )
                *(_DWORD *)(*((_QWORD *)a8 + 12) + 32LL) = *(_DWORD *)(*((_QWORD *)a8 + 13) + 48LL);
              return 0LL;
            }
            *(_QWORD *)(v73 + 184) += 72LL;
            ++*(_BYTE *)(v73 + 67);
            v75 = *(_QWORD *)AccessStatus;
            LODWORD(v90) = (_DWORD)DeviceObject;
          }
        }
      }
      v95 = Object;
      v96 = IopAllocRealFileObject(
              (unsigned int)&v164,
              (_DWORD)v90,
              (_DWORD)Object,
              a5,
              a4,
              (__int64)a8,
              1,
              DesiredAccess);
      LODWORD(EcpContext) = v96;
      if ( v96 < 0 )
      {
        v97 = v164;
        if ( *((_WORD *)v164 + 44) )
          ExFreePoolWithTag(*((PVOID *)v164 + 12), 0);
        if ( v97[26] )
          IopDeleteFileObjectExtension((__int64)v97);
        IopDecrementDeviceObjectRef((ULONG_PTR)v95, 0, 0);
        if ( v64 )
          IopDereferenceVpbAndFree(v64);
        IoFreeIrp((PIRP)v73);
        return (unsigned int)v96;
      }
      v80 = (struct _FILE_OBJECT *)v164;
      *(_QWORD *)(v75 + 48) = v164;
      *(_QWORD *)(v73 + 192) = v80;
    }
    if ( !*((_DWORD *)a8 + 28) )
    {
      if ( (*(_DWORD *)(v73 + 16) & 0x80u) != 0 )
      {
        v181 = *(struct _ECP_LIST **)(v73 + 112);
        LODWORD(EcpContext) = 0;
      }
      else
      {
        LODWORD(EcpContext) = -1073741811;
      }
      if ( v181 )
      {
        if ( IopSymlinkGetECP(v181, &v169) != -1073741275 )
        {
          MostRecentlyUsedName = (__int16 *)IopSymlinkGetMostRecentlyUsedName((__int64)v169);
          if ( !MostRecentlyUsedName[2] )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v73,
                        MostRecentlyUsedName,
                        AbsoluteObjectName->Length - SourceString->Length,
                        MostRecentlyUsedName[1]);
            LODWORD(EcpContext) = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v73 + 48) = updated;
              *(_QWORD *)(v73 + 56) = 0LL;
              v12 &= ~4u;
            }
          }
        }
      }
    }
    p_Event = &v80->Event;
    KeInitializeEvent(&v80->Event, NotificationEvent, 0);
    *((_QWORD *)a8 + 1) = v80;
    if ( (v12 & 4) != 0 )
    {
      IopQueueThreadIrp(v73, v101, v102);
      if ( *(char *)(v73 + 71) >= 0 && (v103 = *(_BYTE **)(v73 + 200)) != 0LL && (*v103 & 2) != 0 )
      {
        EtwActivityIdControlKernel(1, v182);
        v188 = *(_OWORD *)(*(_QWORD *)(v73 + 200) + 16LL);
        v180 = &v188;
        EtwActivityIdControlKernel(2, (PVOID *)&v180);
        LODWORD(EcpContext) = IofCallDriver(DeviceObject, (PIRP)v73);
        v176 = (unsigned __int16 *)v182[0];
        EtwActivityIdControlKernel(2, (PVOID *)&v176);
      }
      else
      {
        LODWORD(EcpContext) = IofCallDriver(DeviceObject, (PIRP)v73);
      }
    }
    if ( (_DWORD)EcpContext == 259 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
        v12 &= ~0x80u;
      else
        v12 |= 0x80u;
      while ( KeWaitForSingleObject(p_Event, Executive, 0, v12 >> 7, 0LL) == 257 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) != 0
          || !v80->Event.Header.SignalState && *(_BYTE *)(v73 + 68) )
        {
          __writecr8(CurrentIrql);
          IopCancelAlertedRequest(p_Event, (PIRP)v73);
          break;
        }
        __writecr8(CurrentIrql);
      }
      v80 = (struct _FILE_OBJECT *)v164;
    }
    if ( (*(_DWORD *)(v73 + 16) & 0x80u) == 0 )
    {
      v106 = ExtraCreateParameter;
    }
    else
    {
      v106 = *(struct _ECP_LIST **)(v73 + 112);
      ExtraCreateParameter = v106;
    }
    if ( *(_DWORD *)(v73 + 48) == 260 )
    {
      P = *(PVOID *)(v73 + 160);
      if ( !v106 || IopSymlinkGetECP(v106, &v169) == -1073741275 )
      {
        ECP = IopSymlinkCreateECP((PIRP)v73, (__int64)&v169);
        if ( ECP >= 0 )
        {
          if ( !v106 )
          {
            IoGetIrpExtraCreateParameter((PIRP)v73, &ExtraCreateParameter);
            v106 = ExtraCreateParameter;
          }
        }
        else
        {
          *(_QWORD *)(v73 + 56) = 0LL;
          *(_DWORD *)(v73 + 48) = ECP;
        }
      }
      if ( *(_DWORD *)(v73 + 48) == 260 )
      {
        v108 = *(_QWORD *)(v73 + 56);
        v101 = 2684354563LL;
        if ( v108 == 2684354563
          || (v101 = 2684354572LL, v108 == 2684354572)
          || (v101 = 2147483673LL, v108 == 2147483673) )
        {
          if ( (a8[42] & 8) == 0 )
            IopGraftName((PIRP)v73);
        }
        else if ( v108 > 1 )
        {
          v109 = IopSymlinkGetECP(*(struct _ECP_LIST **)(v73 + 112), (PVOID *)&v183);
          if ( v109 >= 0 )
          {
            v110 = IopSymlinkGetMostRecentlyUsedName(v183);
            MatchingComponentsLengthR = IopFindMatchingComponentsLengthR(&v80->FileName, v110 + 16);
            v112 = IopSymlinkRememberJunction(MatchingComponentsLengthR, v80, v73, v183);
            if ( v112 < 0 )
              *(_DWORD *)(v73 + 48) = v112;
          }
          else
          {
            *(_DWORD *)(v73 + 48) = v109;
          }
        }
        v113 = *(_QWORD *)(v73 + 56);
        if ( v113 == 2684354563LL || v113 == 2684354572LL || v113 == 2147483673LL )
        {
          v12 ^= (v12 ^ (16 * (*((_WORD *)P + 3) == 0))) & 0x10;
          if ( (*((_DWORD *)a8 + 21) & 8) == 0 )
          {
            ExFreePoolWithTag(P, 0);
            P = 0LL;
          }
        }
      }
    }
    if ( !*(_DWORD *)(v73 + 48) && !*((_DWORD *)a8 + 28) )
    {
      v114 = 0LL;
      EcpContext = 0LL;
      if ( !v106 )
        goto LABEL_342;
      IopSymlinkRemoveECP(v106, &EcpContext);
      v114 = EcpContext;
      if ( EcpContext )
      {
        if ( (*((_BYTE *)EcpContext + 2) & 1) != 0 )
        {
LABEL_342:
          if ( !v114 )
            goto LABEL_343;
LABEL_349:
          v118 = IopSymlinkSetFoExtension(v80, v114);
          if ( v118 >= 0 )
          {
            IopSymlinkFreeRelatedMountPointChain(v114);
LABEL_354:
            if ( v118 < 0 )
            {
              IoCancelFileOpen(DeviceObject, v80);
              *(_QWORD *)(v73 + 56) = 0LL;
              *(_DWORD *)(v73 + 48) = v118;
            }
            goto LABEL_356;
          }
LABEL_352:
          if ( v114 )
          {
            IopSymlinkFreeRelatedMountPointChain(v114);
            FsRtlFreeExtraCreateParameter(v114);
          }
          goto LABEL_354;
        }
      }
      else
      {
LABEL_343:
        RelatedFileObject = (__int64)v80->RelatedFileObject;
        if ( RelatedFileObject )
        {
          v116 = (unsigned __int16 *)IopGetFileObjectExtension(RelatedFileObject, 5, 0LL);
          v176 = v116;
          if ( v116 )
          {
            v117 = v116[8] + AbsoluteObjectName->Length + 2;
            DesiredAccess = v117;
            if ( v117 < 0xFFFF )
            {
              v118 = FsRtlAllocateExtraCreateParameterFromLookasideList(
                       &IopSymlinkECPGuid,
                       (unsigned __int16)v117 + 32,
                       v102,
                       IopSymlinkCleanupECP,
                       &IopSymlinkInfoLookasideList,
                       &EcpContext);
              v114 = EcpContext;
              if ( v118 >= 0 )
              {
                v119 = v176;
                LOWORD(GrantedAccess) = v176[1];
                LOWORD(AccessMode) = v176[2];
                LOWORD(GenericMapping) = v176[8];
                LOWORD(PreviouslyGrantedAccess) = 0;
                IopSymlinkInitializeSymlinkInfo(
                  EcpContext,
                  DesiredAccess + 32,
                  AbsoluteObjectName->Buffer,
                  AbsoluteObjectName->Length,
                  PreviouslyGrantedAccess,
                  *((_QWORD *)v176 + 3),
                  GenericMapping,
                  AccessMode,
                  GrantedAccess,
                  0LL);
                *v114 = *v119 + v114[8] - v119[8];
                goto LABEL_349;
              }
            }
            else
            {
              v118 = -1073741562;
            }
            goto LABEL_352;
          }
        }
      }
      v118 = 0;
      goto LABEL_352;
    }
LABEL_356:
    if ( ExtraCreateParameter )
      *((_QWORD *)a8 + 20) = ExtraCreateParameter;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v73 + 48);
    NetworkOpenInformation = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v80->Event.Header.SignalState = 1;
    if ( (v12 & 4) != 0 )
    {
      *(_QWORD *)(v73 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v73, v101, v102);
    }
    if ( (*(_BYTE *)(v73 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v73 + 24), 0);
    IoFreeIrp((PIRP)v73);
    v121 = BugCheckParameter4[1];
    *((_QWORD *)a8 + 3) = BugCheckParameter4[1];
    if ( NetworkOpenInformation < 0 )
    {
      if ( (v80->Flags & 0x200000) != 0 )
      {
        ObfDereferenceObject(v80);
      }
      else
      {
        if ( v80->FileName.Length )
        {
          ExFreePoolWithTag(v80->FileName.Buffer, 0);
          v80->FileName.Length = 0;
        }
        v80->DeviceObject = 0LL;
        ObfDereferenceObject(v80);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v64 )
          IopDereferenceVpbAndFree(v64);
      }
      *((_QWORD *)a8 + 1) = 0LL;
      *((_DWORD *)a8 + 4) = NetworkOpenInformation;
      return (unsigned int)NetworkOpenInformation;
    }
    if ( NetworkOpenInformation != 260 )
      break;
    if ( !v121 || (v121 == 2684354563 || v121 == 2684354572 || v121 == 2147483673) && (*((_DWORD *)a8 + 21) & 8) == 0 )
    {
      v122 = v80->FileName.Length;
      if ( AbsoluteObjectName->MaximumLength >= v122 )
      {
        v124 = AbsoluteObjectName;
      }
      else
      {
        v123 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v122, 0x63466F49u);
        if ( !v123 )
        {
          *((_DWORD *)a8 + 4) = -1073741670;
          return 3221225626LL;
        }
        v124 = AbsoluteObjectName;
        Buffer = AbsoluteObjectName->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        v124->Buffer = v123;
        v124->MaximumLength = v80->FileName.Length;
      }
      RtlCopyUnicodeString(v124, &v80->FileName);
      if ( BugCheckParameter4[1] == 2684354563
        || BugCheckParameter4[1] == 2684354572
        || BugCheckParameter4[1] == 2147483673 )
      {
        *((_QWORD *)a8 + 5) = 0LL;
      }
    }
    else
    {
      v124 = AbsoluteObjectName;
    }
    if ( v80->FileName.Length )
    {
      ExFreePoolWithTag(v80->FileName.Buffer, 0);
      v80->FileName.Length = 0;
    }
    v80->DeviceObject = 0LL;
    ObfDereferenceObject(v80);
    *((_QWORD *)a8 + 1) = 0LL;
    v126 = Object;
    IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
    if ( v64 )
      IopDereferenceVpbAndFree(v64);
    v127 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *((_QWORD *)a8 + 5) = 0LL;
      if ( v127 == 2684354563 || v127 == 2684354572 || v127 == 2147483673 )
      {
        *((_DWORD *)a8 + 36) |= 0x10u;
        v128 = *((_DWORD *)a8 + 36);
        v129 = *((unsigned int *)v126 + 18);
        if ( (unsigned int)v129 <= 0x24 && (v130 = 0x1080020084LL, _bittest64(&v130, v129)) )
          v131 = v128 | 8;
        else
          v131 = v128 & 0xFFFFFFF7;
        *((_DWORD *)a8 + 36) = v131;
      }
      if ( *((_BYTE *)a8 + 128) )
        KeBugCheckEx(0xF9u, (ULONG_PTR)v126, (ULONG_PTR)DeviceObject, (ULONG_PTR)v124, v127);
      if ( (*(_DWORD *)(v126[39] + 32LL) & 0x800) == 0 )
      {
        v132 = AccessState;
        *(_QWORD *)&AccessState->RemainingDesiredAccess = AccessState->OriginalDesiredAccess;
        v132->Flags &= ~0x100u;
      }
      if ( (v127 == 2684354563 || v127 == 2684354572 || v127 == 2147483673) && (*((_DWORD *)a8 + 21) & 8) != 0 )
      {
        *((_QWORD *)a8 + 3) = P;
        *((_DWORD *)a8 + 4) = -2147483603;
        return 2147483693LL;
      }
      else
      {
        result = 260LL;
        if ( v127 == 2147483673 )
          return 872LL;
      }
      return result;
    }
    ++v170;
    v10 = (unsigned int *)v177;
    v11 = v172;
    v13 = 0x1080020084LL;
    if ( v170 > 0x20 )
      return 3221225473LL;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(v80);
  if ( DeviceObject != RelatedDeviceObject )
  {
    Vpb = (ULONG_PTR)v80->Vpb;
    if ( Vpb != v64 )
    {
      if ( Vpb )
        IopIncrementVpbRefCount(Vpb, 1);
      if ( v64 )
        IopDereferenceVpbAndFree(v64);
    }
  }
  if ( (v12 & 0x40) != 0 )
  {
    if ( *((_BYTE *)a8 + 129) )
    {
      v139 = 0;
      v140 = RelatedDeviceObject->DriverObject->FastIoDispatch;
      if ( *((_BYTE *)a8 + 131) )
      {
        if ( v140 )
        {
          if ( v140->SizeOfFastIoDispatch > 0x70 )
          {
            FastIoQueryNetworkOpenInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v140->FastIoQueryNetworkOpenInfo;
            if ( FastIoQueryNetworkOpenInfo )
            {
              v145 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
              LOBYTE(v133) = 1;
              v139 = FastIoQueryNetworkOpenInfo(
                       v80,
                       v133,
                       *((_QWORD *)a8 + 13),
                       BugCheckParameter4,
                       RelatedDeviceObject);
              if ( v145 )
                VfFastIoCheckState(v145, (int)FastIoQueryNetworkOpenInfo);
            }
          }
        }
        if ( !v139 )
        {
          v146 = IoQueryFileInformation(v80, FileNetworkOpenInformation, 0x38u, *((PVOID *)a8 + 13), &ReturnedLength);
          NetworkOpenInformation = v146;
          if ( v146 == -1073741811 || v146 == -1073741822 )
            NetworkOpenInformation = IopGetNetworkOpenInformation(v80);
        }
        goto LABEL_461;
      }
      v169 = 0LL;
      if ( v140 )
        FastIoQueryBasicInfo = (struct _FILE_OBJECT **)v140->FastIoQueryBasicInfo;
      else
        FastIoQueryBasicInfo = 0LL;
      v172 = FastIoQueryBasicInfo;
      if ( FastIoQueryBasicInfo )
      {
        v142 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
        v182[1] = v142;
        LOBYTE(v133) = 1;
        v139 = ((__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, _QWORD, ULONG_PTR *, PDEVICE_OBJECT))FastIoQueryBasicInfo)(
                 v80,
                 v133,
                 *((_QWORD *)a8 + 12),
                 BugCheckParameter4,
                 RelatedDeviceObject);
        v168 = v139;
        if ( v142 )
          VfFastIoCheckState(v142, (int)FastIoQueryBasicInfo);
      }
      if ( v139 )
      {
        NetworkOpenInformation = BugCheckParameter4[0];
      }
      else
      {
        v143 = sub_1400FC4C8(NonPagedPoolNx, 0x28uLL);
        v169 = v143;
        if ( v143 )
        {
          NetworkOpenInformation = IoQueryFileInformation(v80, FileBasicInformation, 0x28u, v143, &ReturnedLength);
          AccessStatus[0] = NetworkOpenInformation;
          if ( NetworkOpenInformation >= 0 )
            memmove(*((void **)a8 + 12), v143, ReturnedLength);
          ExFreePoolWithTag(v143, 0);
          goto LABEL_461;
        }
        NetworkOpenInformation = -1073741670;
      }
      AccessStatus[0] = NetworkOpenInformation;
    }
LABEL_461:
    *((_DWORD *)a8 + 8) = -1096154543;
    IopCloseFile(0LL, v80, 1LL, 1LL);
    ObfDereferenceObject(v80);
    *((_QWORD *)a8 + 1) = 0LL;
    *((_DWORD *)a8 + 4) = NetworkOpenInformation;
    return (unsigned int)NetworkOpenInformation;
  }
  *v172 = v80;
  *((_DWORD *)a8 + 8) = -1096154543;
  ObfReferenceObject(v80);
  v136 = v80->RelatedFileObject;
  if ( (!v136 || (v136->Flags & 0x400000) != 0) && !v80->FileName.Length )
  {
    v137 = RelatedDeviceObject->DeviceType;
    if ( (unsigned int)v137 <= 0x20 )
    {
      v138 = 0x100000308LL;
      if ( _bittest64(&v138, v137) )
        v80->Flags |= 0x400000u;
    }
  }
  result = LODWORD(BugCheckParameter4[0]);
LABEL_429:
  *((_DWORD *)a8 + 4) = result;
  return result;
}
