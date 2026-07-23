/*
 * XREFs of IopParseDevice @ 0x14043F7C0
 * Callers:
 *     IopParseFile @ 0x1404AEA28 (IopParseFile.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     IopIncrementVpbRefCount @ 0x1400079F8 (IopIncrementVpbRefCount.c)
 *     RtlGetActiveConsoleId @ 0x140008650 (RtlGetActiveConsoleId.c)
 *     SepPrivilegeCheck @ 0x14000F130 (SepPrivilegeCheck.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     IopCheckDeviceAndDriver @ 0x14002D820 (IopCheckDeviceAndDriver.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     IopDequeueIrpFromThread @ 0x14002D960 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IoGetAttachedDevice @ 0x14002DA40 (IoGetAttachedDevice.c)
 *     IopCheckVpbMounted @ 0x14002DA60 (IopCheckVpbMounted.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x14002DCF0 (IopQueueThreadIrp.c)
 *     IopDecrementDeviceObjectRef @ 0x14002E870 (IopDecrementDeviceObjectRef.c)
 *     IoFreeIrp @ 0x140055950 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     IopSymlinkGetECP @ 0x14007A020 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x14007A034 (IopSymlinkRemoveECP.c)
 *     IopGetSetSpecificExtension @ 0x14007AF10 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400860B0 (PsGetServerSiloServiceSessionId.c)
 *     EtwActivityIdControlKernel @ 0x140086AF0 (EtwActivityIdControlKernel.c)
 *     IopDereferenceVpbAndFree @ 0x140095FB0 (IopDereferenceVpbAndFree.c)
 *     IopDeleteFileObjectExtension @ 0x1400990A0 (IopDeleteFileObjectExtension.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     IopCreateSecurityCheck @ 0x1400A9158 (IopCreateSecurityCheck.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400C7DB8 (IopVerifierExAllocatePool_1.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     IopGetDevicePDO @ 0x1400F9440 (IopGetDevicePDO.c)
 *     PsGetCurrentProcessSessionId @ 0x1400F96A0 (PsGetCurrentProcessSessionId.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14012F2D8 (IopSymlinkGetMostRecentlyUsedName.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x1401C92A8 (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x1401CA20C (IopAllowRemoteDASD.c)
 *     PsAcquireSiloHardReference @ 0x14020F3DC (PsAcquireSiloHardReference.c)
 *     PsReleaseSiloHardReference @ 0x14020F458 (PsReleaseSiloHardReference.c)
 *     SeFastTraverseCheck @ 0x1402196FC (SeFastTraverseCheck.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140413F90 (FsRtlFreeExtraCreateParameter.c)
 *     SePrivilegeCheck @ 0x140414350 (SePrivilegeCheck.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14041CA30 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     IopAllocRealFileObject @ 0x140441980 (IopAllocRealFileObject.c)
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     SeLockSubjectContext @ 0x14044CA80 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14044CAE0 (SeUnlockSubjectContext.c)
 *     IoGetIrpExtraCreateParameter @ 0x14046A400 (IoGetIrpExtraCreateParameter.c)
 *     SeTokenIsAdmin @ 0x140474BB4 (SeTokenIsAdmin.c)
 *     IopRetrieveTransactionParameters @ 0x1404A5D00 (IopRetrieveTransactionParameters.c)
 *     SeAppendPrivileges @ 0x1404ACCCC (SeAppendPrivileges.c)
 *     IopCheckTopDeviceHint @ 0x1404AF04C (IopCheckTopDeviceHint.c)
 *     IopCancelAlertedRequest @ 0x1404D2CCC (IopCancelAlertedRequest.c)
 *     IoQueryFileInformation @ 0x1404ED090 (IoQueryFileInformation.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1405038C0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     IopSymlinkSetFoExtension @ 0x1405340B0 (IopSymlinkSetFoExtension.c)
 *     IopSymlinkRememberJunction @ 0x140541010 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140541110 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x14054124C (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkCreateECP @ 0x14054128C (IopSymlinkCreateECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x140541420 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopGraftName @ 0x140541568 (IopGraftName.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1405807BC (IopSymlinkEnforceEnabledTypes.c)
 *     IopGetNetworkOpenInformation @ 0x14058111C (IopGetNetworkOpenInformation.c)
 *     IoCancelFileOpen @ 0x1406233F0 (IoCancelFileOpen.c)
 *     IopFindMatchingComponentsLengthR @ 0x140624450 (IopFindMatchingComponentsLengthR.c)
 *     VfFastIoCheckState @ 0x1407058F8 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407059A8 (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
        unsigned int *BugCheckParameter2,
        POBJECT_TYPE *a2,
        __int64 a3,
        char a4,
        int a5,
        UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        _WORD *a8,
        __int64 a9,
        __int64 a10,
        struct _FILE_OBJECT **a11)
{
  unsigned int *v11; // rdi
  struct _FILE_OBJECT **v12; // rsi
  unsigned __int8 v13; // bl
  __int64 v14; // rdx
  __int64 i; // r9
  struct _DEVICE_OBJECT *v16; // rsi
  __int64 result; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  bool v20; // al
  __int64 v21; // rax
  int ServerSiloServiceSessionId; // edi
  _DWORD *DevicePDO; // rdi
  POBJECT_TYPE *v24; // rcx
  struct _ACCESS_STATE *v25; // r10
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  POBJECT_TYPE *v30; // rcx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  ACCESS_MASK v35; // edi
  char v36; // r9
  char v37; // r15
  int v38; // edx
  char v39; // r13
  char v40; // r12
  int v41; // ecx
  __int64 v42; // rcx
  char v43; // al
  int v44; // edi
  char v45; // dl
  PCUNICODE_STRING v46; // r12
  __int64 v47; // rcx
  int v48; // r8d
  char v49; // bl
  ULONG ActiveConsoleId; // edi
  int v51; // edi
  bool v52; // di
  struct _KTHREAD *v53; // r12
  struct _ACCESS_STATE *v54; // r13
  char v55; // bl
  void *v56; // rcx
  struct _PRIVILEGE_SET *v57; // r12
  ACCESS_MASK v58; // eax
  __int64 v59; // rcx
  __int16 v60; // ax
  bool v61; // zf
  struct _KTHREAD *v62; // r12
  struct _PRIVILEGE_SET *v63; // rdi
  __int16 v64; // ax
  char v65; // al
  char v66; // bl
  unsigned __int16 Length; // r8
  int v68; // r15d
  ULONG_PTR v69; // r13
  __int64 v70; // rdx
  PDEVICE_OBJECT AttachedDevice; // r12
  __int64 v72; // rax
  ULONG Characteristics; // ecx
  int v74; // edi
  int v75; // eax
  __int64 v76; // rdi
  __int64 Irp; // rax
  __int64 v78; // r15
  ACCESS_MASK v79; // edx
  __int64 v80; // rdi
  int v81; // eax
  char v82; // al
  int v83; // esi
  PVOID v84; // rcx
  struct _FILE_OBJECT *v85; // rsi
  _QWORD *v86; // rdi
  unsigned __int64 DeviceType; // rax
  __int64 v88; // rcx
  int TransactionParameters; // edi
  _DWORD *v90; // r12
  __int64 v91; // r9
  int SetSpecificExtension; // eax
  __int64 v93; // rdi
  unsigned __int16 v94; // ax
  wchar_t *PoolWithTag; // rax
  PDEVICE_OBJECT v96; // rdx
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  void *v98; // rdi
  int v99; // ecx
  void *v100; // rcx
  PVOID v101; // r12
  int v102; // esi
  _QWORD *v103; // rbx
  __int16 *MostRecentlyUsedName; // rax
  int updated; // eax
  KEVENT *p_Event; // r12
  _BYTE *v107; // rax
  unsigned __int8 CurrentIrql; // dl
  struct _ECP_LIST *v110; // r12
  _WORD *v111; // rdi
  int ECP; // eax
  unsigned __int64 v113; // rax
  NTSTATUS v114; // eax
  __int64 v115; // rax
  unsigned __int16 MatchingComponentsLengthR; // ax
  int v117; // eax
  __int64 v118; // rax
  _WORD *v119; // rdi
  __int64 RelatedFileObject; // rcx
  unsigned __int16 *FileObjectExtension; // rax
  FSRTL_ALLOCATE_ECP_FLAGS v122; // r8d
  unsigned int v123; // eax
  NTSTATUS v124; // r12d
  unsigned __int16 *v125; // r12
  NTSTATUS NetworkOpenInformation; // edi
  ULONG_PTR v127; // rax
  unsigned __int16 v128; // ax
  wchar_t *v129; // r15
  PUNICODE_STRING v130; // r12
  wchar_t *Buffer; // rcx
  _QWORD *v132; // rdi
  ULONG_PTR v133; // rdx
  int v134; // ecx
  unsigned __int64 v135; // rax
  __int64 v136; // r11
  unsigned int v137; // ecx
  __int64 v138; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  ULONG_PTR Vpb; // rcx
  struct _FILE_OBJECT *v141; // rax
  unsigned __int64 v142; // rax
  __int64 v143; // rcx
  char v144; // r15
  PFAST_IO_DISPATCH v145; // rcx
  struct _FILE_OBJECT **FastIoQueryBasicInfo; // rbx
  void *v147; // rdi
  PVOID Pool_1; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r13
  void *v150; // rbx
  NTSTATUS v151; // eax
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-1C8h]
  int GenericMapping; // [rsp+30h] [rbp-1B8h]
  int AccessMode; // [rsp+38h] [rbp-1B0h]
  int GrantedAccess; // [rsp+40h] [rbp-1A8h]
  char v157; // [rsp+61h] [rbp-187h]
  char v158; // [rsp+61h] [rbp-187h]
  PVOID EcpContext; // [rsp+70h] [rbp-178h] BYREF
  char v161; // [rsp+78h] [rbp-170h]
  NTSTATUS AccessStatus[2]; // [rsp+80h] [rbp-168h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+88h] [rbp-160h]
  PVOID Object; // [rsp+90h] [rbp-158h]
  int v165; // [rsp+98h] [rbp-150h]
  ACCESS_MASK DesiredAccess[2]; // [rsp+A0h] [rbp-148h] BYREF
  PUNICODE_STRING AbsoluteObjectName; // [rsp+A8h] [rbp-140h]
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp-138h] BYREF
  ACCESS_MASK v169; // [rsp+B8h] [rbp-130h] BYREF
  PPRIVILEGE_SET v170; // [rsp+C0h] [rbp-128h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-120h]
  PVOID v172; // [rsp+D0h] [rbp-118h] BYREF
  char v173; // [rsp+D8h] [rbp-110h]
  PVOID P; // [rsp+E0h] [rbp-108h] BYREF
  int v175[2]; // [rsp+E8h] [rbp-100h] BYREF
  unsigned int v176; // [rsp+F0h] [rbp-F8h]
  ULONG ReturnedLength; // [rsp+F4h] [rbp-F4h] BYREF
  _WORD *v178; // [rsp+F8h] [rbp-F0h]
  struct _FILE_OBJECT **v179; // [rsp+100h] [rbp-E8h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+108h] [rbp-E0h] BYREF
  __int64 v181; // [rsp+110h] [rbp-D8h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+118h] [rbp-D0h] BYREF
  unsigned __int16 *v183; // [rsp+128h] [rbp-C0h] BYREF
  struct _DEVICE_OBJECT *v184; // [rsp+130h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+138h] [rbp-B0h] BYREF
  struct _ECP_LIST *v186; // [rsp+148h] [rbp-A0h]
  unsigned __int16 *v187; // [rsp+150h] [rbp-98h] BYREF
  PVOID v188[3]; // [rsp+158h] [rbp-90h] BYREF
  _QWORD v189[2]; // [rsp+170h] [rbp-78h] BYREF
  ACCESS_MASK v190; // [rsp+180h] [rbp-68h]
  int v191; // [rsp+184h] [rbp-64h]
  struct _PRIVILEGE_SET Privileges; // [rsp+188h] [rbp-60h] BYREF
  __int128 v193; // [rsp+1A0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+1E8h] [rbp+0h]

  v11 = BugCheckParameter2;
  v184 = (struct _DEVICE_OBJECT *)BugCheckParameter2;
  AbsoluteObjectName = a6;
  SourceString = a7;
  v188[2] = a8;
  v181 = a10;
  v12 = a11;
  v179 = a11;
  v176 = 0;
  LOBYTE(v165) = 0;
  v170 = 0LL;
  v178 = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  v13 = v157 & 0xE9 | 4;
  RtlInitUnicodeString(&DestinationString, L"File");
  v14 = 0x1080000084LL;
  for ( i = 0x60010000110040LL; ; i = 0x60010000110040LL )
  {
    *v12 = 0LL;
    v172 = 0LL;
    if ( !a8 || *a8 != 8 || a8[1] != 192 )
      return 3221225508LL;
    v16 = (struct _DEVICE_OBJECT *)v11;
    Object = v11;
    if ( *((_DWORD *)a8 + 8) == 1 )
    {
      *((_DWORD *)a8 + 8) = -1096154543;
      *((_QWORD *)a8 + 5) = v11;
      *((_DWORD *)a8 + 4) = 0;
      ObfReferenceObject(v11);
      return 0LL;
    }
    if ( (*((_DWORD *)a8 + 36) & 0x10) != 0 )
    {
      if ( *((_QWORD *)a8 + 3) == 2684354563LL )
      {
        v18 = v11[18];
        if ( (unsigned int)v18 > 0x24 || !_bittest64(&v14, v18) )
          goto LABEL_12;
      }
      else
      {
        v19 = v11[18];
        LOBYTE(v14) = (unsigned int)v19 <= 0x24 && _bittest64(&v14, v19);
        v20 = (unsigned int)v19 <= 0x36 && _bittest64(&i, v19);
        if ( !(_BYTE)v14 && !v20 )
        {
LABEL_12:
          *((_DWORD *)a8 + 4) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(a8[72] & 8, v14, *((_QWORD *)a8 + 20));
        if ( (int)result < 0 )
          goto LABEL_243;
      }
    }
    v21 = *((_QWORD *)a8 + 5);
    if ( v21 )
    {
      v16 = *(struct _DEVICE_OBJECT **)(v21 + 8);
      Object = v16;
    }
    result = IopCheckDeviceAndDriver((__int64)a8, (ULONG_PTR)v16);
    LODWORD(EcpContext) = result;
    AccessStatus[0] = result;
    if ( (int)result < 0 )
      goto LABEL_243;
    if ( (v16->DeviceObjectExtension->ExtensionFlags & 0x400) != 0 && !*((_QWORD *)a8 + 5) )
    {
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(-1LL);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*((_DWORD *)a8 + 16) & 0x40000) == 0 )
      {
        DevicePDO = IopGetDevicePDO((__int64)v16);
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess() )
          {
            ObfDereferenceObject(DevicePDO);
            IopDecrementDeviceObjectRef((ULONG_PTR)v16, 0);
            *((_DWORD *)a8 + 4) = -1073741790;
            return 3221225506LL;
          }
          ObfDereferenceObject(DevicePDO);
        }
      }
    }
    v24 = IoFileObjectType;
    v25 = (struct _ACCESS_STATE *)a3;
    v26 = *(_DWORD *)(a3 + 16);
    if ( v26 < 0 )
      *(_DWORD *)(a3 + 16) = v26 | *((_DWORD *)IoFileObjectType + 19);
    v27 = *(_DWORD *)(a3 + 16);
    if ( (v27 & 0x40000000) != 0 )
      *(_DWORD *)(a3 + 16) = v27 | *((_DWORD *)v24 + 20);
    v28 = *(_DWORD *)(a3 + 16);
    if ( (v28 & 0x20000000) != 0 )
      *(_DWORD *)(a3 + 16) = v28 | *((_DWORD *)v24 + 21);
    v29 = *(_DWORD *)(a3 + 16);
    if ( (v29 & 0x10000000) != 0 )
      *(_DWORD *)(a3 + 16) = v29 | *((_DWORD *)v24 + 22);
    *(_DWORD *)(a3 + 16) &= 0xFFFFFFFu;
    v30 = IoFileObjectType;
    v31 = *(_DWORD *)(a3 + 24);
    if ( v31 < 0 )
      *(_DWORD *)(a3 + 24) = v31 | *((_DWORD *)IoFileObjectType + 19);
    v32 = *(_DWORD *)(a3 + 24);
    if ( (v32 & 0x40000000) != 0 )
      *(_DWORD *)(a3 + 24) = v32 | *((_DWORD *)v30 + 20);
    v33 = *(_DWORD *)(a3 + 24);
    if ( (v33 & 0x20000000) != 0 )
      *(_DWORD *)(a3 + 24) = v33 | *((_DWORD *)v30 + 21);
    v34 = *(_DWORD *)(a3 + 24);
    if ( (v34 & 0x10000000) != 0 )
      *(_DWORD *)(a3 + 24) = v34 | *((_DWORD *)v30 + 22);
    *(_DWORD *)(a3 + 24) &= 0xFFFFFFFu;
    *(_OWORD *)(*(_QWORD *)(a3 + 72) + 8LL) = *(_OWORD *)((char *)IoFileObjectType + 76);
    v35 = *(_DWORD *)(a3 + 16);
    DesiredAccess[0] = v35;
    v36 = a4;
    v37 = a4 || (*((_DWORD *)a8 + 21) & 1) != 0;
    v38 = *((_DWORD *)a8 + 22);
    v39 = 0;
    v40 = 0;
    v41 = *(_DWORD *)(a3 + 12);
    if ( (v41 & 0x100) == 0 && (*((_DWORD *)a8 + 16) & 0x4000) != 0 )
    {
      *(_DWORD *)(a3 + 12) = v41 | 0x100;
      if ( (v35 & 0x2000000) != 0 )
        v35 |= 0x11F01BFu;
      if ( ((v38 - 1) & 0xFFFFFFF9) != 0 || v38 == 7 )
      {
        v40 = 1;
        goto LABEL_73;
      }
      if ( (v35 & 0x11200A9) != 0 )
      {
        Privileges.PrivilegeCount = 1;
        Privileges.Control = 1;
        Privileges.Privilege[0].Luid = SeBackupPrivilege;
        Privileges.Privilege[0].Attributes = 0;
        if ( !v37 )
          goto LABEL_69;
        v42 = *(_QWORD *)(a3 + 32);
        if ( !v42 )
        {
          v42 = *(_QWORD *)(a3 + 48);
          goto LABEL_68;
        }
        if ( *(int *)(a3 + 40) >= 2 )
        {
LABEL_68:
          v43 = SepPrivilegeCheck(v42, (__int64)Privileges.Privilege, 1u, 1, v37);
          v25 = (struct _ACCESS_STATE *)a3;
          if ( !v43 )
          {
LABEL_72:
            v16 = (struct _DEVICE_OBJECT *)Object;
LABEL_73:
            v44 = v35 & 0x11F0116;
            if ( v44 || v40 )
            {
              Privileges.PrivilegeCount = 1;
              Privileges.Control = 1;
              Privileges.Privilege[0].Luid = SeRestorePrivilege;
              Privileges.Privilege[0].Attributes = 0;
              if ( SePrivilegeCheck(&Privileges, &v25->SubjectSecurityContext, v37) )
              {
                v39 = 1;
                SeAppendPrivileges((PACCESS_STATE)a3, &Privileges);
                v25 = (struct _ACCESS_STATE *)a3;
                *(_DWORD *)(a3 + 20) |= v44;
                *(_DWORD *)(a3 + 16) &= 0xFEE0FEE9;
                *(_DWORD *)(a3 + 12) |= 4u;
              }
              else
              {
                v25 = (struct _ACCESS_STATE *)a3;
              }
            }
            v35 = DesiredAccess[0];
            v36 = a4;
            if ( !v39 )
              *((_DWORD *)a8 + 16) &= ~0x4000u;
            goto LABEL_80;
          }
LABEL_69:
          v39 = 1;
          SeAppendPrivileges(v25, &Privileges);
          v25 = (struct _ACCESS_STATE *)a3;
          *(_DWORD *)(a3 + 20) |= v35 & 0x11200A9;
          *(_DWORD *)(a3 + 16) &= 0xFEEDFF56;
          v35 &= 0xFEEDFF56;
          *(_DWORD *)(a3 + 12) |= 2u;
          goto LABEL_72;
        }
      }
      v16 = (struct _DEVICE_OBJECT *)Object;
      goto LABEL_73;
    }
LABEL_80:
    v45 = *((_BYTE *)a8 + 128);
    v46 = SourceString;
    if ( v45 && !SourceString->Length || (v25->Flags & 0x100) != 0 )
    {
      v35 |= v25->PreviouslyGrantedAccess;
      DesiredAccess[0] = v35;
    }
    v47 = *((_QWORD *)a8 + 5);
    LOBYTE(v48) = v165;
    if ( v47 && (*(_DWORD *)(v47 + 80) & 0x400000) != 0 )
    {
      v48 = (unsigned __int8)v165;
      if ( !SourceString->Length )
        v48 = 1;
      v165 = v48;
    }
    if ( !v36 && (*((_DWORD *)a8 + 21) & 1) == 0 || v47 && !(_BYTE)v48 || v45 )
      goto LABEL_138;
    v49 = v13 & 0xDF;
    if ( !SourceString->Length )
    {
      v52 = 0;
      if ( (v16->Characteristics & 0x40001) != 0 && (v35 & 0xFFEDFF7F) != 0 )
      {
        ActiveConsoleId = RtlGetActiveConsoleId();
        if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
        {
          v51 = PsGetServerSiloServiceSessionId(-1LL);
          if ( v51 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
            v52 = 1;
        }
      }
      v170 = 0LL;
      v53 = CurrentThread;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      v54 = (struct _ACCESS_STATE *)a3;
      SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a3 + 32));
      v55 = v49 | 0x20;
      if ( !v52 )
        goto LABEL_107;
      v56 = *(void **)(a3 + 32);
      if ( !v56 )
        v56 = *(void **)(a3 + 48);
      if ( SeTokenIsAdmin(v56) )
      {
LABEL_107:
        v16 = (struct _DEVICE_OBJECT *)Object;
        v13 = (v55 ^ SeAccessCheck(
                       *((PSECURITY_DESCRIPTOR *)Object + 34),
                       (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
                       (v55 & 0x20) != 0,
                       DesiredAccess[0],
                       0,
                       &v170,
                       (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                       1,
                       &v169,
                       AccessStatus)) & 1 ^ v55;
        v57 = v170;
        if ( v170 )
        {
          SeAppendPrivileges((PACCESS_STATE)a3, v170);
          MiDeleteSubsection(v57);
        }
        v53 = CurrentThread;
        if ( (v13 & 1) != 0 )
        {
          v58 = v169;
          *(_DWORD *)(a3 + 20) |= v169;
          *(_DWORD *)(a3 + 16) &= ~(v58 | 0x2000000);
          *((_BYTE *)a8 + 128) = 1;
        }
        LODWORD(EcpContext) = AccessStatus[0];
      }
      else
      {
        v13 = v55 & 0xFE;
        LODWORD(EcpContext) = -1073741790;
        AccessStatus[0] = -1073741790;
        v16 = (struct _DEVICE_OBJECT *)Object;
      }
      SeOpenObjectAuditAlarmWithTransaction(
        &DestinationString,
        v16,
        AbsoluteObjectName,
        v16->SecurityDescriptor,
        (PACCESS_STATE)a3,
        0,
        v13 & 1,
        1,
        0LL,
        (PBOOLEAN)(a3 + 10));
      ExReleaseResourceLite(&IopSecurityResource);
      v60 = v53->KernelApcDisable + 1;
      v53->KernelApcDisable = v60;
      if ( !v60 && ($2B8565053CDC740D4E4887693DD8AC9E *)v53->ApcState.ApcListHead[0].Flink != &v53->152 )
      {
        v61 = v53->SpecialApcDisable == 0;
LABEL_131:
        if ( v61 )
          KiCheckForKernelApcDelivery(v59);
      }
      goto LABEL_133;
    }
    if ( (v16->Characteristics & 0x20100) != 0x20000 && v36 )
    {
      v161 = 0;
      SeIsAppContainerOrIdentifyLevelContext(&v25->SubjectSecurityContext);
      if ( v161 )
      {
        v13 = (v49 ^ IopCreateSecurityCheck(
                       (__int64)v16,
                       0LL,
                       (struct _ACCESS_STATE *)a3,
                       v35 | 0x20,
                       1,
                       v170,
                       &v169,
                       AbsoluteObjectName,
                       &DestinationString,
                       (__int64)CurrentThread,
                       0)) & 1 ^ v49;
        v25 = (struct _ACCESS_STATE *)a3;
        goto LABEL_134;
      }
      v25 = (struct _ACCESS_STATE *)a3;
    }
    if ( (v25->Flags & 1) == 0 )
    {
      v62 = CurrentThread;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      v54 = (struct _ACCESS_STATE *)a3;
      v13 = (v49 ^ SeFastTraverseCheck((__int64)v16->SecurityDescriptor, a3, 32)) & 1 ^ v49;
      if ( (v13 & 1) == 0 )
      {
        v170 = 0LL;
        SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a3 + 32));
        v13 = ((v13 | 0x20) ^ SeAccessCheck(
                                v16->SecurityDescriptor,
                                (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
                                1u,
                                0x20u,
                                0,
                                &v170,
                                (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                1,
                                &v169,
                                AccessStatus)) & 1 ^ (v13 | 0x20);
        v63 = v170;
        if ( v170 )
        {
          SeAppendPrivileges((PACCESS_STATE)a3, v170);
          MiDeleteSubsection(v63);
        }
        LODWORD(EcpContext) = AccessStatus[0];
      }
      ExReleaseResourceLite(&IopSecurityResource);
      v64 = v62->KernelApcDisable + 1;
      v62->KernelApcDisable = v64;
      if ( !v64 && ($2B8565053CDC740D4E4887693DD8AC9E *)v62->ApcState.ApcListHead[0].Flink != &v62->152 )
      {
        v61 = v62->SpecialApcDisable == 0;
        goto LABEL_131;
      }
LABEL_133:
      v46 = SourceString;
      v25 = v54;
      goto LABEL_134;
    }
    v13 = v49 | 1;
LABEL_134:
    if ( (v13 & 0x20) != 0 )
      SeUnlockSubjectContext(&v25->SubjectSecurityContext);
    if ( (v13 & 1) == 0 )
    {
LABEL_183:
      IopDecrementDeviceObjectRef((ULONG_PTR)v16, 0);
      return 3221225506LL;
    }
    v25 = (struct _ACCESS_STATE *)a3;
    v36 = a4;
LABEL_138:
    v65 = *((_BYTE *)a8 + 129) || *((_BYTE *)a8 + 130);
    v66 = (v13 ^ (v65 << 6)) & 0x40 ^ v13;
    Length = v46->Length;
    v68 = DesiredAccess[0];
    if ( v46->Length || *((_QWORD *)a8 + 5) || (DesiredAccess[0] & 0xFEE1FF7F) != 0 || (v66 & 0x40) != 0 )
      v13 = v66 & 0xF7;
    else
      v13 = v66 | 8;
    v69 = 0LL;
    v70 = *((_QWORD *)a8 + 5);
    if ( !v70 || (*(_DWORD *)(v70 + 80) & 0x800) != 0 )
    {
      AttachedDevice = v16;
      DeviceObject = v16;
      if ( v16->Vpb && (v13 & 8) == 0 )
      {
        if ( (v16->Characteristics & 0x100) != 0
          && (v16->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v36 || (*((_DWORD *)a8 + 21) & 1) != 0)
          && (v70 || Length)
          && !(_BYTE)v165 )
        {
          v170 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v16,
                  v16,
                  v25,
                  DesiredAccess[0],
                  *((_DWORD *)a8 + 22),
                  0LL,
                  &v169,
                  AbsoluteObjectName,
                  &DestinationString,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_183;
        }
        v72 = IopCheckVpbMounted((__int64)a8, (ULONG_PTR)v16, (__int64)SourceString, AccessStatus);
        v69 = v72;
        if ( !v72 )
          return (unsigned int)AccessStatus[0];
        AttachedDevice = *(PDEVICE_OBJECT *)(v72 + 8);
        DeviceObject = AttachedDevice;
        LODWORD(EcpContext) = AccessStatus[0];
      }
      if ( (*((_DWORD *)a8 + 36) & 1) != 0 )
      {
        v13 |= 2u;
      }
      else if ( AttachedDevice->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        DeviceObject = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = v184;
      DeviceObject = v184;
      if ( *(_QWORD *)(v70 + 16) )
      {
        v69 = *(_QWORD *)(v70 + 16);
        if ( (v16->Characteristics & 0x100) != 0
          && (v16->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v36 || (*((_DWORD *)a8 + 21) & 1) != 0)
          && !(_BYTE)v165 )
        {
          v170 = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v16,
                  v16,
                  v25,
                  DesiredAccess[0],
                  *((_DWORD *)a8 + 22),
                  0LL,
                  &v169,
                  AbsoluteObjectName,
                  &DestinationString,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_183;
        }
        IopIncrementVpbRefCount(v69, 1);
      }
      if ( (*((_DWORD *)a8 + 36) & 1) != 0 )
      {
        if ( v69 )
        {
          AttachedDevice = *(PDEVICE_OBJECT *)(v69 + 8);
          DeviceObject = AttachedDevice;
        }
        v13 |= 2u;
      }
    }
    Characteristics = v16->Characteristics;
    if ( (Characteristics & 0x40001) != 0 && (v16->Flags & 0x600100) == 0 && (Characteristics & 0x100) == 0 )
      SeIsAppContainerOrIdentifyLevelContext((PSECURITY_SUBJECT_CONTEXT)(a3 + 32));
    if ( (v13 & 2) != 0 )
    {
      v74 = IopCheckTopDeviceHint(&DeviceObject, a8, (v13 & 8) != 0, SourceString);
      LODWORD(EcpContext) = v74;
      if ( v74 < 0 )
      {
        if ( v69 )
          IopDereferenceVpbAndFree(v69);
        IopDecrementDeviceObjectRef((ULONG_PTR)v16, 0);
        return (unsigned int)v74;
      }
      AttachedDevice = DeviceObject;
    }
    v75 = *((_DWORD *)a8 + 36);
    if ( (v75 & 0x10) != 0 )
      *((_DWORD *)a8 + 36) = v75 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (v16->Characteristics & 0x100000) != 0)
      && (a4 || (*((_DWORD *)a8 + 21) & 1) != 0)
      && (*((_QWORD *)a8 + 5) || SourceString->Length)
      && !(_BYTE)v165 )
    {
      v170 = 0LL;
      v76 = a3;
      if ( !IopCreateSecurityCheck(
              (__int64)v16,
              AttachedDevice,
              (struct _ACCESS_STATE *)a3,
              v68,
              *((_DWORD *)a8 + 22),
              0LL,
              &v169,
              AbsoluteObjectName,
              &DestinationString,
              (__int64)CurrentThread,
              1) )
      {
        IopDecrementDeviceObjectRef((ULONG_PTR)v16, 0);
        if ( v69 )
          IopDereferenceVpbAndFree(v69);
        return 3221225506LL;
      }
    }
    else
    {
      v76 = a3;
    }
    Irp = pIoAllocateIrp(AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL, retaddr);
    v78 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef((ULONG_PTR)v16, 0);
      if ( v69 )
        IopDereferenceVpbAndFree(v69);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = a4;
    *(_DWORD *)(Irp + 16) = 2180;
    v189[0] = a9;
    v189[1] = v76;
    v79 = DesiredAccess[0];
    v190 = DesiredAccess[0];
    v191 = *((_DWORD *)a8 + 16);
    v80 = *(_QWORD *)(Irp + 184) - 72LL;
    *(_QWORD *)AccessStatus = v80;
    *(_BYTE *)(v80 + 3) = 0;
    v81 = *((_DWORD *)a8 + 28);
    if ( v81 )
    {
      if ( v81 == 1 )
        *(_BYTE *)v80 = 1;
      else
        *(_BYTE *)v80 = 19;
      *(_QWORD *)(v80 + 32) = *((_QWORD *)a8 + 15);
    }
    else
    {
      *(_BYTE *)v80 = 0;
      *(_DWORD *)(v80 + 32) = *((_DWORD *)a8 + 20);
      v82 = *((_BYTE *)a8 + 84);
      *(_BYTE *)(v80 + 2) = v82;
      if ( (a5 & 0x40) == 0 )
        *(_BYTE *)(v80 + 2) = v82 | 0x80;
    }
    *(_QWORD *)(v78 + 88) = *((_QWORD *)a8 + 7);
    *(_QWORD *)(v78 + 24) = *((_QWORD *)a8 + 9);
    *(_DWORD *)(v80 + 16) = (*((_DWORD *)a8 + 22) << 24) | *((_DWORD *)a8 + 16) & 0xFFFFFF;
    *(_WORD *)(v80 + 24) = a8[34];
    *(_WORD *)(v80 + 26) = a8[35];
    *(_QWORD *)(v80 + 8) = v189;
    *(_QWORD *)(v78 + 112) = *((_QWORD *)a8 + 20);
    *(_QWORD *)(v78 + 72) = BugCheckParameter4;
    *(_QWORD *)(v78 + 8) = 0LL;
    *(_BYTE *)(v78 + 65) = 0;
    *(_BYTE *)(v78 + 68) = 0;
    *(_QWORD *)(v78 + 80) = 0LL;
    *(_QWORD *)(v78 + 104) = 0LL;
    *(_QWORD *)(v78 + 160) = 0LL;
    if ( *((_BYTE *)a8 + 129) )
    {
      v86 = (_QWORD *)*((_QWORD *)a8 + 17);
      memset(v86, 0, 0x110uLL);
      v85 = (struct _FILE_OBJECT *)(v86 + 6);
      v172 = v86 + 6;
      *((_BYTE *)v86 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v86);
      *v86 = 1LL;
      if ( (a5 & 0x40) == 0 )
        *((_DWORD *)v86 + 32) |= 0x20000u;
      *(_DWORD *)&v85->Type = 14155781;
      v86[14] = *((_QWORD *)a8 + 5);
      v86[7] = Object;
      if ( (*((_DWORD *)a8 + 36) & 0x20) != 0 )
      {
        if ( a4 )
        {
          if ( (AttachedDevice->Flags & 0x40000) != 0
            || (DeviceType = AttachedDevice->DeviceType, (unsigned int)DeviceType <= 0x35)
            && (v88 = 0x20000100100108LL, _bittest64(&v88, DeviceType)) )
          {
            TransactionParameters = IopRetrieveTransactionParameters(AttachedDevice, a8, DesiredAccess[0], v86 + 6);
            LODWORD(EcpContext) = TransactionParameters;
            if ( TransactionParameters < 0 )
            {
              IoFreeIrp((PIRP)v78);
              IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
              if ( v69 )
                IopDereferenceVpbAndFree(v69);
              *((_DWORD *)a8 + 4) = TransactionParameters;
              return (unsigned int)TransactionParameters;
            }
          }
        }
      }
      v90 = *(_DWORD **)(v181 + 8);
      if ( !PsIsHostSilo((__int64)v90) )
      {
        *(_QWORD *)v175 = 0LL;
        LODWORD(EcpContext) = PsAcquireSiloHardReference(v90);
        if ( (int)EcpContext < 0 )
          goto LABEL_240;
        LOBYTE(v91) = 1;
        SetSpecificExtension = IopGetSetSpecificExtension((__int64)v85, 7u, 16LL, v91, v175, 0LL);
        LODWORD(EcpContext) = SetSpecificExtension;
        if ( SetSpecificExtension < 0 )
        {
          PsReleaseSiloHardReference(v90);
          SetSpecificExtension = (int)EcpContext;
        }
        v93 = *(_QWORD *)v175;
        if ( SetSpecificExtension < 0 )
        {
LABEL_240:
          IoFreeIrp((PIRP)v78);
          IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
          if ( v69 )
            IopDereferenceVpbAndFree(v69);
          result = (unsigned int)EcpContext;
LABEL_243:
          *((_DWORD *)a8 + 4) = result;
          return result;
        }
        **(_DWORD **)v175 = 16;
        *(_QWORD *)(v93 + 8) = v90;
        *(_DWORD *)(v93 + 4) |= 1u;
        ObfReferenceObjectWithTag(v90, 0x70536F49u);
      }
      v80 = *(_QWORD *)AccessStatus;
    }
    else
    {
      v83 = IopAllocRealFileObject(
              (unsigned int)&v172,
              (_DWORD)AttachedDevice,
              (_DWORD)v16,
              a5,
              a4,
              (__int64)a8,
              v181,
              0,
              v79);
      LODWORD(EcpContext) = v83;
      if ( v83 < 0 )
      {
        IoFreeIrp((PIRP)v78);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        if ( v69 )
          IopDereferenceVpbAndFree(v69);
        v84 = v172;
        if ( v172 )
        {
          *((_QWORD *)v172 + 1) = 0LL;
          ObfDereferenceObject(v84);
        }
        *((_DWORD *)a8 + 4) = v83;
        return (unsigned int)v83;
      }
      v85 = (struct _FILE_OBJECT *)v172;
    }
    if ( (v13 & 8) != 0 )
      v85->Flags |= 0x800u;
    *(_QWORD *)(v78 + 192) = v85;
    *(_QWORD *)(v80 + 48) = v85;
    v94 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v94 >= 0x38u )
      {
        if ( v94 >= 0x78u )
        {
          if ( v94 < 0xF8u )
            v94 = 248;
        }
        else
        {
          v94 = 120;
        }
      }
      else
      {
        v94 = 56;
      }
      v85->FileName.MaximumLength = v94;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v94, 0x6D4E6F49u);
      v85->FileName.Buffer = PoolWithTag;
      if ( !PoolWithTag )
      {
        IoFreeIrp((PIRP)v78);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        if ( v69 )
          IopDereferenceVpbAndFree(v69);
        v85->DeviceObject = 0LL;
        if ( !*((_BYTE *)a8 + 129) )
        {
          ObfDereferenceObject(v85);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v85->FileName, SourceString);
    if ( *((_BYTE *)a8 + 129) )
    {
      v96 = DeviceObject;
      FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        if ( FastIoDispatch->SizeOfFastIoDispatch > 0xC0 )
        {
          *(_QWORD *)v175 = FastIoDispatch->FastIoQueryOpen;
          if ( *(_QWORD *)v175 )
          {
            --*(_BYTE *)(v78 + 67);
            *(_QWORD *)(v78 + 184) -= 72LL;
            *(_QWORD *)(v80 + 40) = v96;
            if ( (MmVerifierData & 0x10) != 0 )
            {
              v98 = (void *)VfFastIoSnapState();
              v96 = DeviceObject;
            }
            else
            {
              v98 = 0LL;
            }
            v158 = (*(__int64 (__fastcall **)(__int64, _QWORD, PDEVICE_OBJECT))v175)(v78, *((_QWORD *)a8 + 13), v96);
            if ( v98 )
              VfFastIoCheckState(v98, v175[0]);
            *((_QWORD *)a8 + 20) = *(_QWORD *)(v78 + 112);
            if ( v158 )
            {
              v99 = *(_DWORD *)(v78 + 48);
              *((_DWORD *)a8 + 4) = v99;
              *((_QWORD *)a8 + 3) = *(_QWORD *)(v78 + 56);
              if ( v99 == 260 )
              {
                v100 = *(void **)(v78 + 160);
                if ( v100 )
                {
                  ExFreePoolWithTag(v100, 0);
                  *(_QWORD *)(v78 + 160) = 0LL;
                  *((_QWORD *)a8 + 5) = 0LL;
                }
              }
              if ( v85->FileName.Length )
                ExFreePoolWithTag(v85->FileName.Buffer, 0);
              if ( v85->FileObjectExtension )
                IopDeleteFileObjectExtension((__int64)v85);
              IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
              if ( v69 )
                IopDereferenceVpbAndFree(v69);
              IoFreeIrp((PIRP)v78);
              *((_DWORD *)a8 + 8) = -1096154543;
              if ( !*((_BYTE *)a8 + 131) )
                *(_DWORD *)(*((_QWORD *)a8 + 12) + 32LL) = *(_DWORD *)(*((_QWORD *)a8 + 13) + 48LL);
              return 0LL;
            }
            *(_QWORD *)(v78 + 184) += 72LL;
            ++*(_BYTE *)(v78 + 67);
            v80 = *(_QWORD *)AccessStatus;
            LODWORD(v96) = (_DWORD)DeviceObject;
          }
        }
      }
      v101 = Object;
      v102 = IopAllocRealFileObject(
               (unsigned int)&v172,
               (_DWORD)v96,
               (_DWORD)Object,
               a5,
               a4,
               (__int64)a8,
               v181,
               1,
               DesiredAccess[0]);
      LODWORD(EcpContext) = v102;
      if ( v102 < 0 )
      {
        v103 = v172;
        if ( *((_WORD *)v172 + 44) )
          ExFreePoolWithTag(*((PVOID *)v172 + 12), 0);
        if ( v103[26] )
          IopDeleteFileObjectExtension((__int64)v103);
        IopDecrementDeviceObjectRef((ULONG_PTR)v101, 0);
        if ( v69 )
          IopDereferenceVpbAndFree(v69);
        IoFreeIrp((PIRP)v78);
        return (unsigned int)v102;
      }
      v85 = (struct _FILE_OBJECT *)v172;
      *(_QWORD *)(v80 + 48) = v172;
      *(_QWORD *)(v78 + 192) = v85;
    }
    if ( !*((_DWORD *)a8 + 28) )
    {
      if ( (*(_DWORD *)(v78 + 16) & 0x80u) != 0 )
      {
        v186 = *(struct _ECP_LIST **)(v78 + 112);
        LODWORD(EcpContext) = 0;
      }
      else
      {
        LODWORD(EcpContext) = -1073741811;
      }
      if ( v186 )
      {
        if ( IopSymlinkGetECP(v186, &P) != -1073741275 )
        {
          MostRecentlyUsedName = (__int16 *)IopSymlinkGetMostRecentlyUsedName((__int64)P);
          if ( !MostRecentlyUsedName[2] )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v78,
                        MostRecentlyUsedName,
                        AbsoluteObjectName->Length - SourceString->Length,
                        MostRecentlyUsedName[1]);
            LODWORD(EcpContext) = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v78 + 48) = updated;
              *(_QWORD *)(v78 + 56) = 0LL;
              v13 &= ~4u;
            }
          }
        }
      }
    }
    p_Event = &v85->Event;
    KeInitializeEvent(&v85->Event, NotificationEvent, 0);
    *((_QWORD *)a8 + 1) = v85;
    if ( (v13 & 4) != 0 )
    {
      IopQueueThreadIrp(v78);
      if ( *(char *)(v78 + 71) >= 0 && (v107 = *(_BYTE **)(v78 + 200)) != 0LL && (*v107 & 2) != 0 )
      {
        EtwActivityIdControlKernel(1, (PVOID *)&v187);
        v193 = *(_OWORD *)(*(_QWORD *)(v78 + 200) + 24LL);
        *(_QWORD *)DesiredAccess = &v193;
        EtwActivityIdControlKernel(2, (PVOID *)DesiredAccess);
        LODWORD(EcpContext) = IofCallDriver(DeviceObject, (PIRP)v78);
        v183 = v187;
        EtwActivityIdControlKernel(2, (PVOID *)&v183);
      }
      else
      {
        LODWORD(EcpContext) = IofCallDriver(DeviceObject, (PIRP)v78);
      }
    }
    if ( (_DWORD)EcpContext == 259 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
        v13 &= ~0x80u;
      else
        v13 |= 0x80u;
      while ( KeWaitForSingleObject(p_Event, Executive, 0, v13 >> 7, 0LL) == 257 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
          || !v85->Event.Header.SignalState && *(_BYTE *)(v78 + 68) )
        {
          __writecr8(CurrentIrql);
          IopCancelAlertedRequest(p_Event, (PIRP)v78);
          break;
        }
        __writecr8(CurrentIrql);
      }
      v85 = (struct _FILE_OBJECT *)v172;
    }
    if ( (*(_DWORD *)(v78 + 16) & 0x80u) == 0 )
    {
      v110 = ExtraCreateParameter;
    }
    else
    {
      v110 = *(struct _ECP_LIST **)(v78 + 112);
      ExtraCreateParameter = v110;
    }
    if ( *(_DWORD *)(v78 + 48) == 260 )
    {
      v111 = *(_WORD **)(v78 + 160);
      v178 = v111;
      if ( !v110 || IopSymlinkGetECP(v110, &P) == -1073741275 )
      {
        ECP = IopSymlinkCreateECP((PIRP)v78, (__int64)&P);
        if ( ECP >= 0 )
        {
          if ( !v110 )
          {
            IoGetIrpExtraCreateParameter((PIRP)v78, &ExtraCreateParameter);
            v110 = ExtraCreateParameter;
          }
        }
        else
        {
          *(_QWORD *)(v78 + 56) = 0LL;
          *(_DWORD *)(v78 + 48) = ECP;
        }
      }
      if ( *(_DWORD *)(v78 + 48) == 260 )
      {
        v113 = *(_QWORD *)(v78 + 56);
        if ( v113 == 2684354563 || v113 == 2684354572 || v113 == 2147483673 )
        {
          if ( (a8[42] & 8) == 0 )
            IopGraftName((PIRP)v78);
        }
        else if ( v113 > 2 )
        {
          v114 = IopSymlinkGetECP(*(struct _ECP_LIST **)(v78 + 112), v188);
          if ( v114 >= 0 )
          {
            v115 = IopSymlinkGetMostRecentlyUsedName((__int64)v188[0]);
            MatchingComponentsLengthR = IopFindMatchingComponentsLengthR(&v85->FileName, v115 + 16);
            v117 = IopSymlinkRememberJunction(MatchingComponentsLengthR, v85, v78, v188[0]);
            if ( v117 < 0 )
              *(_DWORD *)(v78 + 48) = v117;
          }
          else
          {
            *(_DWORD *)(v78 + 48) = v114;
          }
        }
        v118 = *(_QWORD *)(v78 + 56);
        if ( v118 == 2684354563LL || v118 == 2684354572LL || v118 == 2147483673LL )
        {
          if ( *(int *)(v78 + 48) >= 0 )
            v13 ^= (v13 ^ (16 * (v111[3] == 0))) & 0x10;
          if ( (*((_DWORD *)a8 + 21) & 8) == 0 )
          {
            ExFreePoolWithTag(v111, 0);
            v178 = 0LL;
          }
        }
      }
    }
    if ( !*(_DWORD *)(v78 + 48) && !*((_DWORD *)a8 + 28) )
    {
      v119 = 0LL;
      EcpContext = 0LL;
      if ( !v110 )
        goto LABEL_354;
      IopSymlinkRemoveECP(v110, &EcpContext);
      v119 = EcpContext;
      if ( EcpContext )
      {
        if ( (*((_BYTE *)EcpContext + 2) & 1) != 0 )
        {
LABEL_354:
          if ( !v119 )
            goto LABEL_355;
LABEL_361:
          v124 = IopSymlinkSetFoExtension(v85, v119);
          if ( v124 >= 0 )
          {
            IopSymlinkFreeRelatedMountPointChain(v119);
LABEL_366:
            if ( v124 < 0 )
            {
              IoCancelFileOpen(DeviceObject, v85);
              *(_QWORD *)(v78 + 56) = 0LL;
              *(_DWORD *)(v78 + 48) = v124;
            }
            goto LABEL_368;
          }
LABEL_364:
          if ( v119 )
          {
            IopSymlinkFreeRelatedMountPointChain(v119);
            FsRtlFreeExtraCreateParameter(v119);
          }
          goto LABEL_366;
        }
      }
      else
      {
LABEL_355:
        RelatedFileObject = (__int64)v85->RelatedFileObject;
        if ( RelatedFileObject )
        {
          FileObjectExtension = (unsigned __int16 *)IopGetFileObjectExtension(RelatedFileObject, 5, 0LL);
          v183 = FileObjectExtension;
          if ( FileObjectExtension )
          {
            v123 = AbsoluteObjectName->Length + 2 + FileObjectExtension[8];
            DesiredAccess[0] = v123;
            if ( v123 < 0xFFFF )
            {
              v124 = FsRtlAllocateExtraCreateParameterFromLookasideList(
                       &IopSymlinkECPGuid,
                       (unsigned __int16)v123 + 32,
                       v122,
                       IopSymlinkCleanupECP,
                       &IopSymlinkInfoLookasideList,
                       &EcpContext);
              v119 = EcpContext;
              if ( v124 >= 0 )
              {
                v125 = v183;
                LOWORD(GrantedAccess) = v183[1];
                LOWORD(AccessMode) = v183[2];
                LOWORD(GenericMapping) = v183[8];
                LOWORD(PreviouslyGrantedAccess) = 0;
                IopSymlinkInitializeSymlinkInfo(
                  EcpContext,
                  DesiredAccess[0] + 32,
                  AbsoluteObjectName->Buffer,
                  AbsoluteObjectName->Length,
                  PreviouslyGrantedAccess,
                  *((_QWORD *)v183 + 3),
                  GenericMapping,
                  AccessMode,
                  GrantedAccess,
                  0LL);
                *v119 = *v125 + v119[8] - v125[8];
                goto LABEL_361;
              }
            }
            else
            {
              v124 = -1073741562;
            }
            goto LABEL_364;
          }
        }
      }
      v124 = 0;
      goto LABEL_364;
    }
LABEL_368:
    if ( ExtraCreateParameter )
      *((_QWORD *)a8 + 20) = ExtraCreateParameter;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v78 + 48);
    NetworkOpenInformation = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v85->Event.Header.SignalState = 1;
    if ( (v13 & 4) != 0 )
    {
      *(_QWORD *)(v78 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v78);
    }
    if ( (*(_BYTE *)(v78 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v78 + 24), 0);
    IoFreeIrp((PIRP)v78);
    v127 = BugCheckParameter4[1];
    *((_QWORD *)a8 + 3) = BugCheckParameter4[1];
    if ( NetworkOpenInformation < 0 )
    {
      if ( (v85->Flags & 0x200000) != 0 )
      {
        ObfDereferenceObject(v85);
      }
      else
      {
        if ( v85->FileName.Length )
        {
          ExFreePoolWithTag(v85->FileName.Buffer, 0);
          v85->FileName.Length = 0;
        }
        v85->DeviceObject = 0LL;
        ObfDereferenceObject(v85);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
        if ( v69 )
          IopDereferenceVpbAndFree(v69);
      }
      *((_QWORD *)a8 + 1) = 0LL;
      *((_DWORD *)a8 + 4) = NetworkOpenInformation;
      return (unsigned int)NetworkOpenInformation;
    }
    if ( NetworkOpenInformation != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(v85);
      if ( DeviceObject != RelatedDeviceObject )
      {
        Vpb = (ULONG_PTR)v85->Vpb;
        if ( Vpb != v69 )
        {
          if ( Vpb )
            IopIncrementVpbRefCount(Vpb, 1);
          if ( v69 )
            IopDereferenceVpbAndFree(v69);
        }
      }
      if ( (v13 & 0x40) == 0 )
      {
        *v179 = v85;
        *((_DWORD *)a8 + 8) = -1096154543;
        ObfReferenceObject(v85);
        v141 = v85->RelatedFileObject;
        if ( (!v141 || (v141->Flags & 0x400000) != 0) && !v85->FileName.Length )
        {
          v142 = RelatedDeviceObject->DeviceType;
          if ( (unsigned int)v142 <= 0x20 )
          {
            v143 = 0x100000308LL;
            if ( _bittest64(&v143, v142) )
              v85->Flags |= 0x400000u;
          }
        }
        result = LODWORD(BugCheckParameter4[0]);
        *((_DWORD *)a8 + 4) = BugCheckParameter4[0];
        return result;
      }
      if ( *((_BYTE *)a8 + 129) )
      {
        v144 = 0;
        v145 = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( *((_BYTE *)a8 + 131) )
        {
          if ( v145 )
          {
            if ( v145->SizeOfFastIoDispatch > 0x70 )
            {
              FastIoQueryNetworkOpenInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v145->FastIoQueryNetworkOpenInfo;
              if ( FastIoQueryNetworkOpenInfo )
              {
                v150 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
                LOBYTE(v138) = 1;
                v144 = FastIoQueryNetworkOpenInfo(
                         v85,
                         v138,
                         *((_QWORD *)a8 + 13),
                         BugCheckParameter4,
                         RelatedDeviceObject);
                if ( v150 )
                  VfFastIoCheckState(v150, (int)FastIoQueryNetworkOpenInfo);
              }
            }
          }
          if ( !v144 )
          {
            v151 = IoQueryFileInformation(v85, FileNetworkOpenInformation, 0x38u, *((PVOID *)a8 + 13), &ReturnedLength);
            NetworkOpenInformation = v151;
            if ( v151 == -1073741811 || v151 == -1073741822 )
              NetworkOpenInformation = IopGetNetworkOpenInformation(v85);
          }
          goto LABEL_473;
        }
        P = 0LL;
        if ( v145 )
          FastIoQueryBasicInfo = (struct _FILE_OBJECT **)v145->FastIoQueryBasicInfo;
        else
          FastIoQueryBasicInfo = 0LL;
        v179 = FastIoQueryBasicInfo;
        if ( FastIoQueryBasicInfo )
        {
          v147 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
          v188[1] = v147;
          LOBYTE(v138) = 1;
          v144 = ((__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, _QWORD, ULONG_PTR *, PDEVICE_OBJECT))FastIoQueryBasicInfo)(
                   v85,
                   v138,
                   *((_QWORD *)a8 + 12),
                   BugCheckParameter4,
                   RelatedDeviceObject);
          v173 = v144;
          if ( v147 )
            VfFastIoCheckState(v147, (int)FastIoQueryBasicInfo);
        }
        if ( v144 )
        {
          NetworkOpenInformation = BugCheckParameter4[0];
        }
        else
        {
          Pool_1 = IopVerifierExAllocatePool_1(NonPagedPoolNx, 0x28uLL);
          P = Pool_1;
          if ( Pool_1 )
          {
            NetworkOpenInformation = IoQueryFileInformation(v85, FileBasicInformation, 0x28u, Pool_1, &ReturnedLength);
            AccessStatus[0] = NetworkOpenInformation;
            if ( NetworkOpenInformation >= 0 )
              memmove(*((void **)a8 + 12), Pool_1, ReturnedLength);
            ExFreePoolWithTag(Pool_1, 0);
            goto LABEL_473;
          }
          NetworkOpenInformation = -1073741670;
        }
        AccessStatus[0] = NetworkOpenInformation;
      }
LABEL_473:
      *((_DWORD *)a8 + 8) = -1096154543;
      IopCloseFile(0LL, v85, 1LL, 1LL);
      ObfDereferenceObject(v85);
      *((_QWORD *)a8 + 1) = 0LL;
      *((_DWORD *)a8 + 4) = NetworkOpenInformation;
      return (unsigned int)NetworkOpenInformation;
    }
    if ( (v127 & 0xFFFFFFFFFFFFFFFDuLL) == 0
      || (v127 == 2684354563 || v127 == 2684354572 || v127 == 2147483673) && (*((_DWORD *)a8 + 21) & 8) == 0 )
    {
      v128 = v85->FileName.Length;
      if ( AbsoluteObjectName->MaximumLength >= v128 )
      {
        v130 = AbsoluteObjectName;
      }
      else
      {
        v129 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v128, 0x63466F49u);
        if ( !v129 )
        {
          *((_DWORD *)a8 + 4) = -1073741670;
          return 3221225626LL;
        }
        v130 = AbsoluteObjectName;
        Buffer = AbsoluteObjectName->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        v130->Buffer = v129;
        v130->MaximumLength = v85->FileName.Length;
      }
      RtlCopyUnicodeString(v130, &v85->FileName);
      if ( BugCheckParameter4[1] == 2684354563
        || BugCheckParameter4[1] == 2684354572
        || BugCheckParameter4[1] == 2147483673 )
      {
        *((_QWORD *)a8 + 5) = 0LL;
      }
    }
    else
    {
      v130 = AbsoluteObjectName;
    }
    if ( v85->FileName.Length )
    {
      ExFreePoolWithTag(v85->FileName.Buffer, 0);
      v85->FileName.Length = 0;
    }
    v85->DeviceObject = 0LL;
    ObfDereferenceObject(v85);
    *((_QWORD *)a8 + 1) = 0LL;
    v132 = Object;
    IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0);
    if ( v69 )
      IopDereferenceVpbAndFree(v69);
    v133 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
      break;
    ++v176;
    v11 = (unsigned int *)v184;
    v12 = v179;
    v14 = 0x1080000084LL;
    if ( v176 > 0x20 )
      return 3221225473LL;
  }
  *((_QWORD *)a8 + 5) = 0LL;
  if ( v133 == 2684354563 || v133 == 2684354572 || v133 == 2147483673 )
  {
    *((_DWORD *)a8 + 36) |= 0x10u;
    v134 = *((_DWORD *)a8 + 36);
    v135 = *((unsigned int *)v132 + 18);
    if ( (unsigned int)v135 <= 0x24 && (v136 = 0x1080000084LL, _bittest64(&v136, v135)) )
      v137 = v134 | 8;
    else
      v137 = v134 & 0xFFFFFFF7;
    *((_DWORD *)a8 + 36) = v137;
  }
  if ( *((_BYTE *)a8 + 128) )
    KeBugCheckEx(0xF9u, (ULONG_PTR)v132, (ULONG_PTR)DeviceObject, (ULONG_PTR)v130, v133);
  if ( (*(_DWORD *)(v132[39] + 32LL) & 0x800) == 0 )
  {
    *(_QWORD *)(a3 + 16) = *(unsigned int *)(a3 + 24);
    *(_DWORD *)(a3 + 12) &= ~0x100u;
  }
  if ( v133 == 2684354563 || v133 == 2684354572 || v133 == 2147483673 )
  {
    if ( (*((_DWORD *)a8 + 21) & 8) != 0 )
    {
      *((_QWORD *)a8 + 3) = v178;
      *((_DWORD *)a8 + 4) = -2147483603;
      return 2147483693LL;
    }
    if ( v133 == 2147483673 )
      goto LABEL_427;
  }
  if ( v133 != 2 )
    return 260LL;
LABEL_427:
  *(_QWORD *)(v181 + 8) = xHalTimerWatchdogStop();
  return 872LL;
}
