/*
 * XREFs of IopParseDevice @ 0x14048B640
 * Callers:
 *     IopParseFile @ 0x14052F910 (IopParseFile.c)
 * Callees:
 *     IopCheckVpbMounted @ 0x140006570 (IopCheckVpbMounted.c)
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     SepPrivilegeCheck @ 0x140014C60 (SepPrivilegeCheck.c)
 *     EtwActivityIdControlKernel @ 0x140026D54 (EtwActivityIdControlKernel.c)
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     IopDeleteFileObjectExtension @ 0x140033110 (IopDeleteFileObjectExtension.c)
 *     IopIncrementVpbRefCount @ 0x14003F7B4 (IopIncrementVpbRefCount.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140045A10 (IopDecrementDeviceObjectRef.c)
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     IopCheckDeviceAndDriver @ 0x140047EC0 (IopCheckDeviceAndDriver.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     IopDequeueIrpFromThread @ 0x1400485C0 (IopDequeueIrpFromThread.c)
 *     IoFreeIrp @ 0x14004BC70 (IoFreeIrp.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IopSymlinkGetECP @ 0x140070050 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x140070B34 (IopSymlinkRemoveECP.c)
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     PsGetCurrentProcessSessionId @ 0x1400D09F0 (PsGetCurrentProcessSessionId.c)
 *     IopGetDevicePDO @ 0x1400D0E98 (IopGetDevicePDO.c)
 *     IoGetAttachedDevice @ 0x1400D1B70 (IoGetAttachedDevice.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopDereferenceVpbAndFree @ 0x14010C250 (IopDereferenceVpbAndFree.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IopCheckSessionDeviceAccess @ 0x1401F6948 (IopCheckSessionDeviceAccess.c)
 *     IopAllowRemoteDASD @ 0x1401F7B88 (IopAllowRemoteDASD.c)
 *     SeFastTraverseCheck @ 0x14024F300 (SeFastTraverseCheck.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeTokenIsAdmin @ 0x14040FEA8 (SeTokenIsAdmin.c)
 *     IoQueryFileInformation @ 0x14042A8B0 (IoQueryFileInformation.c)
 *     SePrivilegeCheck @ 0x140432040 (SePrivilegeCheck.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140472540 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140476654 (FsRtlFreeExtraCreateParameter.c)
 *     IopRetrieveTransactionParameters @ 0x140488530 (IopRetrieveTransactionParameters.c)
 *     IopAllocRealFileObject @ 0x140488940 (IopAllocRealFileObject.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     IoGetIrpExtraCreateParameter @ 0x1404A5730 (IoGetIrpExtraCreateParameter.c)
 *     SeUnlockSubjectContext @ 0x1404C52E0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1404C5390 (SeLockSubjectContext.c)
 *     SeOpenObjectAuditAlarm @ 0x1404D3F28 (SeOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404E9DC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     IopCheckTopDeviceHint @ 0x14052D3D4 (IopCheckTopDeviceHint.c)
 *     SeAppendPrivileges @ 0x14052D500 (SeAppendPrivileges.c)
 *     IopSymlinkUpdateECP @ 0x140548AC0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x140548C04 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkCreateECP @ 0x140548C44 (IopSymlinkCreateECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x140548DD8 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkProcessReparse @ 0x140548F44 (IopSymlinkProcessReparse.c)
 *     IopSymlinkSetFoExtension @ 0x140559B88 (IopSymlinkSetFoExtension.c)
 *     IopCancelAlertedRequest @ 0x14058EC70 (IopCancelAlertedRequest.c)
 *     IopGetNetworkOpenInformation @ 0x1405C2A08 (IopGetNetworkOpenInformation.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1405C6F88 (IopSymlinkEnforceEnabledTypes.c)
 *     IoCancelFileOpen @ 0x140673C54 (IoCancelFileOpen.c)
 *     VfFastIoCheckState @ 0x140739E88 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140739F38 (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
        unsigned int *BugCheckParameter2,
        POBJECT_TYPE *a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        void **a8,
        __int64 a9,
        struct _FILE_OBJECT **a10)
{
  unsigned int *v10; // r14
  struct _FILE_OBJECT **v11; // rsi
  unsigned __int8 v12; // bl
  __int64 v13; // rdx
  __int64 i; // r9
  ULONG_PTR v15; // rsi
  __int64 result; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  bool v19; // al
  _QWORD *v20; // rax
  int v21; // edi
  _DWORD *DevicePDO; // rax
  void *v23; // rdi
  POBJECT_TYPE *v24; // rcx
  struct _ACCESS_STATE *v25; // r8
  int v26; // eax
  int v27; // edx
  int v28; // edx
  int v29; // edx
  POBJECT_TYPE *v30; // rcx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  ACCESS_MASK v35; // edi
  unsigned __int8 v36; // r10
  char v37; // r14
  int v38; // edx
  char v39; // r13
  char v40; // r12
  int v41; // ecx
  __int64 v42; // rcx
  char v43; // al
  int v44; // edi
  char v45; // dl
  PCUNICODE_STRING v46; // r14
  _DWORD *v47; // rcx
  int v48; // r9d
  char v49; // bl
  int v50; // edi
  bool v51; // di
  char v52; // bl
  void *v53; // rcx
  NTSTATUS v54; // r12d
  ULONG_PTR v55; // rdi
  struct _PRIVILEGE_SET *v56; // rsi
  ACCESS_MASK v57; // eax
  struct _KTHREAD *v58; // r13
  __int16 v59; // ax
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rsi
  struct _KTHREAD *v61; // r13
  BOOLEAN v62; // di
  struct _PRIVILEGE_SET *v63; // r14
  __int16 v64; // ax
  struct _KTHREAD *v65; // r13
  struct _PRIVILEGE_SET *v66; // rsi
  __int16 v67; // ax
  char v68; // al
  char v69; // bl
  unsigned __int16 Length; // r9
  __int64 v71; // r13
  _QWORD *v72; // rdx
  struct _DEVICE_OBJECT *AttachedDevice; // r12
  ULONG v74; // edx
  int v75; // edi
  BOOLEAN v76; // r12
  struct _PRIVILEGE_SET *v77; // rsi
  struct _KTHREAD *v78; // rcx
  __int16 v79; // ax
  ULONG Characteristics; // r8d
  int v81; // edi
  BOOLEAN v82; // r12
  struct _PRIVILEGE_SET *v83; // rsi
  struct _KTHREAD *v84; // rcx
  __int16 v85; // ax
  __int64 v86; // rax
  int v87; // ecx
  struct _SECURITY_SUBJECT_CONTEXT *v88; // r14
  int v89; // r12d
  int v90; // eax
  int v91; // edi
  struct _SECURITY_SUBJECT_CONTEXT *v92; // r12
  BOOLEAN v93; // r14
  struct _PRIVILEGE_SET *v94; // rsi
  ACCESS_MASK v95; // eax
  __int64 v96; // rsi
  struct _KTHREAD *v97; // rcx
  __int16 v98; // ax
  __int64 Irp; // rax
  __int64 v100; // r14
  __int64 v101; // rdi
  int v102; // eax
  char v103; // al
  int TransactionParameters; // r12d
  PVOID v105; // rcx
  struct _FILE_OBJECT *v106; // rsi
  _QWORD *v107; // rdi
  unsigned __int64 DeviceType; // rax
  __int64 v109; // rcx
  unsigned __int16 v110; // ax
  wchar_t *PoolWithTag; // rax
  PCUNICODE_STRING v112; // r13
  PVOID v113; // rdx
  __int64 v114; // rcx
  struct _PRIVILEGE_SET *v115; // r13
  void *v116; // rdi
  char v117; // r13
  int v118; // ecx
  void *v119; // rcx
  int v120; // r12d
  _QWORD *v121; // rbx
  __int16 *v122; // rdx
  __int64 j; // rax
  int updated; // eax
  _BYTE *v125; // rax
  NTSTATUS v127; // r12d
  unsigned __int8 CurrentIrql; // dl
  struct _ECP_LIST *v129; // r13
  int ECP; // eax
  _WORD *v131; // rdi
  __int64 v132; // rax
  _WORD *v133; // rdi
  __int64 RelatedFileObject; // rcx
  __int64 FileObjectExtension; // rax
  FSRTL_ALLOCATE_ECP_FLAGS v136; // r8d
  __int64 v137; // r13
  unsigned int v138; // eax
  PVOID v139; // r13
  NTSTATUS NetworkOpenInformation; // edi
  ULONG_PTR v141; // rax
  unsigned int v142; // r14d
  unsigned __int16 v143; // ax
  wchar_t *v144; // r14
  PUNICODE_STRING v145; // r12
  wchar_t *Buffer; // rcx
  ULONG_PTR v147; // rdx
  int v148; // ecx
  unsigned __int64 v149; // rax
  __int64 v150; // r11
  unsigned int v151; // ecx
  __int64 v152; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  ULONG_PTR Vpb; // rcx
  __int64 v155; // r12
  struct _FILE_OBJECT *v156; // rax
  unsigned __int64 v157; // rax
  __int64 v158; // rcx
  char v159; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  struct _FILE_OBJECT **FastIoQueryBasicInfo; // rbx
  void *v162; // rdi
  PVOID PoolWithTagPriority; // rax
  void *v164; // rbx
  __int64 (__fastcall *FastIoQueryNetworkOpenInfo)(struct _FILE_OBJECT *, __int64, void *, ULONG_PTR *, PDEVICE_OBJECT); // r12
  void *v166; // rbx
  NTSTATUS v167; // eax
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-1D8h]
  int GenericMapping; // [rsp+30h] [rbp-1C8h]
  KPROCESSOR_MODE AccessMode[4]; // [rsp+38h] [rbp-1C0h]
  int GrantedAccess; // [rsp+40h] [rbp-1B8h]
  struct _DEVICE_OBJECT *Object; // [rsp+60h] [rbp-198h]
  char v175; // [rsp+68h] [rbp-190h]
  ACCESS_MASK DesiredAccess; // [rsp+6Ch] [rbp-18Ch]
  ACCESS_MASK v177; // [rsp+70h] [rbp-188h] BYREF
  char v178; // [rsp+74h] [rbp-184h]
  NTSTATUS AccessStatus[2]; // [rsp+78h] [rbp-180h] BYREF
  PVOID v180; // [rsp+80h] [rbp-178h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+88h] [rbp-170h]
  PPRIVILEGE_SET v182; // [rsp+90h] [rbp-168h] BYREF
  int v183; // [rsp+98h] [rbp-160h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-158h]
  PUNICODE_STRING AbsoluteObjectName; // [rsp+A8h] [rbp-150h]
  PPRIVILEGE_SET v186; // [rsp+B0h] [rbp-148h] BYREF
  PVOID v187; // [rsp+B8h] [rbp-140h] BYREF
  char v188; // [rsp+C0h] [rbp-138h]
  __int64 v189; // [rsp+C8h] [rbp-130h]
  PVOID v190; // [rsp+D0h] [rbp-128h] BYREF
  PVOID EcpContext; // [rsp+D8h] [rbp-120h] BYREF
  ULONG ReturnedLength; // [rsp+E0h] [rbp-118h] BYREF
  struct _FILE_OBJECT **v193; // [rsp+E8h] [rbp-110h]
  unsigned int v194; // [rsp+F0h] [rbp-108h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+F8h] [rbp-100h] BYREF
  PPRIVILEGE_SET v196; // [rsp+100h] [rbp-F8h] BYREF
  PVOID P; // [rsp+108h] [rbp-F0h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+110h] [rbp-E8h] BYREF
  PPRIVILEGE_SET v199; // [rsp+120h] [rbp-D8h] BYREF
  struct _DEVICE_OBJECT *v200; // [rsp+128h] [rbp-D0h]
  PPRIVILEGE_SET v201; // [rsp+130h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+138h] [rbp-C0h] BYREF
  PVOID v203[3]; // [rsp+148h] [rbp-B0h] BYREF
  struct _ECP_LIST *v204; // [rsp+160h] [rbp-98h]
  NTSTATUS v205; // [rsp+168h] [rbp-90h] BYREF
  NTSTATUS v206; // [rsp+16Ch] [rbp-8Ch] BYREF
  NTSTATUS v207; // [rsp+170h] [rbp-88h] BYREF
  NTSTATUS v208; // [rsp+174h] [rbp-84h] BYREF
  __int128 *v209; // [rsp+178h] [rbp-80h] BYREF
  PVOID v210; // [rsp+180h] [rbp-78h] BYREF
  _QWORD v211[2]; // [rsp+188h] [rbp-70h] BYREF
  ACCESS_MASK v212; // [rsp+198h] [rbp-60h]
  int v213; // [rsp+19Ch] [rbp-5Ch]
  struct _PRIVILEGE_SET Privileges; // [rsp+1A0h] [rbp-58h] BYREF
  __int128 v215; // [rsp+1B8h] [rbp-40h] BYREF
  void *retaddr; // [rsp+1F8h] [rbp+0h]

  v10 = BugCheckParameter2;
  v200 = (struct _DEVICE_OBJECT *)BugCheckParameter2;
  AbsoluteObjectName = a6;
  SourceString = a7;
  v203[2] = a8;
  v11 = a10;
  v193 = a10;
  v194 = 0;
  LOBYTE(v183) = 0;
  v186 = 0LL;
  P = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  v12 = v175 & 0xE9 | 4;
  RtlInitUnicodeString(&DestinationString, L"File");
  v13 = 0x1080020084LL;
  for ( i = 0x60010000110040LL; ; i = 0x60010000110040LL )
  {
    *v11 = 0LL;
    v187 = 0LL;
    if ( !a8 || *(_WORD *)a8 != 8 || *((_WORD *)a8 + 1) != 184 )
      return 3221225508LL;
    v15 = (ULONG_PTR)v10;
    Object = (struct _DEVICE_OBJECT *)v10;
    if ( *((_DWORD *)a8 + 8) == 1 )
    {
      *((_DWORD *)a8 + 8) = -1096154543;
      a8[5] = v10;
      *((_DWORD *)a8 + 4) = 0;
      ObfReferenceObject(v10);
      return 0LL;
    }
    if ( ((_DWORD)a8[18] & 0x10) != 0 )
    {
      if ( a8[3] == (void *)2684354563LL )
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
        result = IopSymlinkEnforceEnabledTypes((_BYTE)a8[18] & 8, v13, a8[20]);
        if ( (int)result < 0 )
          goto LABEL_478;
      }
    }
    v20 = a8[5];
    if ( v20 )
    {
      v15 = v20[1];
      Object = (struct _DEVICE_OBJECT *)v15;
    }
    result = IopCheckDeviceAndDriver((__int64)a8, v15);
    LODWORD(v182) = result;
    AccessStatus[0] = result;
    if ( (int)result < 0 )
      goto LABEL_478;
    if ( (*(_DWORD *)(*(_QWORD *)(v15 + 312) + 32LL) & 0x400) != 0 && !a8[5] )
    {
      v21 = *(_DWORD *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL);
      if ( v21 != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && ((_DWORD)a8[8] & 0x40000) == 0 )
      {
        DevicePDO = IopGetDevicePDO(v15);
        v23 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            ObfDereferenceObject(v23);
            IopDecrementDeviceObjectRef(v15, 0, 0);
            *((_DWORD *)a8 + 4) = -1073741790;
            return 3221225506LL;
          }
          ObfDereferenceObject(v23);
        }
      }
    }
    v24 = IoFileObjectType;
    v25 = (struct _ACCESS_STATE *)a3;
    v26 = *(_DWORD *)(a3 + 16);
    if ( v26 < 0 )
      *(_DWORD *)(a3 + 16) = *((_DWORD *)IoFileObjectType + 19) | v26;
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
    DesiredAccess = v35;
    v36 = a4;
    v37 = a4 || (*((_DWORD *)a8 + 21) & 1) != 0;
    v38 = *((_DWORD *)a8 + 22);
    v39 = 0;
    v40 = 0;
    v41 = *(_DWORD *)(a3 + 12);
    if ( (v41 & 0x100) == 0 && ((_DWORD)a8[8] & 0x4000) != 0 )
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
            v15 = (ULONG_PTR)Object;
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
            v35 = DesiredAccess;
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
      v15 = (ULONG_PTR)Object;
      goto LABEL_73;
    }
LABEL_80:
    v45 = *((_BYTE *)a8 + 128);
    v46 = SourceString;
    if ( v45 && !SourceString->Length || (v25->Flags & 0x100) != 0 )
    {
      v35 |= v25->PreviouslyGrantedAccess;
      DesiredAccess = v35;
    }
    v47 = a8[5];
    LOBYTE(v48) = v183;
    if ( v47 && (v47[20] & 0x400000) != 0 )
    {
      v48 = (unsigned __int8)v183;
      if ( !SourceString->Length )
        v48 = 1;
      v183 = v48;
    }
    if ( !v36 && (*((_DWORD *)a8 + 21) & 1) == 0 || v47 && !(_BYTE)v48 || v45 )
      goto LABEL_144;
    v49 = v12 & 0xDF;
    if ( !SourceString->Length )
    {
      v51 = 0;
      if ( (*(_DWORD *)(v15 + 52) & 0x40001) != 0
        && (v35 & 0xFFEDFF7F) != 0
        && MEMORY[0xFFFFF780000002D8] != (unsigned int)PsGetCurrentProcessSessionId() )
      {
        v50 = *(_DWORD *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL);
        if ( v50 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
          v51 = 1;
      }
      v186 = 0LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a3 + 32));
      v52 = v49 | 0x20;
      if ( !v51 )
        goto LABEL_107;
      v53 = *(void **)(a3 + 32);
      if ( !v53 )
        v53 = *(void **)(a3 + 48);
      if ( SeTokenIsAdmin(v53) )
      {
LABEL_107:
        v55 = (ULONG_PTR)Object;
        v12 = (v52 ^ SeAccessCheck(
                       Object->SecurityDescriptor,
                       (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
                       (v52 & 0x20) != 0,
                       DesiredAccess,
                       0,
                       &v186,
                       (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                       1,
                       &v177,
                       AccessStatus)) & 1 ^ v52;
        v56 = v186;
        if ( v186 )
        {
          SeAppendPrivileges((PACCESS_STATE)a3, v186);
          ExFreePoolEx(v56);
        }
        v54 = AccessStatus[0];
        if ( (v12 & 1) != 0 )
        {
          v57 = v177;
          *(_DWORD *)(a3 + 20) |= v177;
          *(_DWORD *)(a3 + 16) &= ~(v57 | 0x2000000);
          *((_BYTE *)a8 + 128) = 1;
        }
      }
      else
      {
        v12 = v52 & 0xFE;
        v54 = -1073741790;
        AccessStatus[0] = -1073741790;
        v55 = (ULONG_PTR)Object;
      }
      LODWORD(v182) = v54;
      SeOpenObjectAuditAlarmWithTransaction(
        &DestinationString,
        (PVOID)v55,
        AbsoluteObjectName,
        *(PSECURITY_DESCRIPTOR *)(v55 + 272),
        (PACCESS_STATE)a3,
        0,
        v12 & 1,
        1,
        0LL,
        (PBOOLEAN)(a3 + 10));
      ExReleaseResourceLite(&IopSecurityResource);
      v58 = CurrentThread;
      v59 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v59;
      if ( !v59
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v58->ApcState.ApcListHead[0].Flink != &v58->152
        && !v58->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
LABEL_138:
      v25 = (struct _ACCESS_STATE *)a3;
LABEL_139:
      v46 = SourceString;
      goto LABEL_140;
    }
    if ( (*(_DWORD *)(v15 + 52) & 0x20100) != 0x20000 && v36 )
    {
      v178 = 0;
      p_SubjectSecurityContext = &v25->SubjectSecurityContext;
      SeIsAppContainerOrIdentifyLevelContext(&v25->SubjectSecurityContext);
      if ( v178 )
      {
        v201 = v186;
        v61 = CurrentThread;
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SeLockSubjectContext(p_SubjectSecurityContext);
        v62 = SeAccessCheck(
                Object->SecurityDescriptor,
                p_SubjectSecurityContext,
                1u,
                v35 | 0x20,
                0,
                &v201,
                (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                1,
                &v177,
                &v208);
        v63 = v201;
        if ( v201 )
        {
          SeAppendPrivileges((PACCESS_STATE)a3, v201);
          ExFreePoolEx(v63);
        }
        SeUnlockSubjectContext(p_SubjectSecurityContext);
        ExReleaseResourceLite(&IopSecurityResource);
        v64 = v61->KernelApcDisable + 1;
        v61->KernelApcDisable = v64;
        if ( !v64
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v61->ApcState.ApcListHead[0].Flink != &v61->152
          && !v61->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v12 = (v49 ^ v62) & 1 ^ v49;
        v55 = (ULONG_PTR)Object;
        goto LABEL_138;
      }
      v15 = (ULONG_PTR)Object;
      v25 = (struct _ACCESS_STATE *)a3;
    }
    if ( (v25->Flags & 1) == 0 )
    {
      v65 = CurrentThread;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      v12 = (v49 ^ SeFastTraverseCheck(*(_QWORD *)(v15 + 272), a3, 32)) & 1 ^ v49;
      if ( (v12 & 1) != 0 )
      {
        v55 = (ULONG_PTR)Object;
      }
      else
      {
        v186 = 0LL;
        SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a3 + 32));
        v55 = (ULONG_PTR)Object;
        v12 = ((v12 | 0x20) ^ SeAccessCheck(
                                Object->SecurityDescriptor,
                                (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
                                1u,
                                0x20u,
                                0,
                                &v186,
                                (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                1,
                                &v177,
                                AccessStatus)) & 1 ^ (v12 | 0x20);
        v66 = v186;
        if ( v186 )
        {
          SeAppendPrivileges((PACCESS_STATE)a3, v186);
          ExFreePoolEx(v66);
        }
        LODWORD(v182) = AccessStatus[0];
      }
      ExReleaseResourceLite(&IopSecurityResource);
      v67 = v65->KernelApcDisable + 1;
      v65->KernelApcDisable = v67;
      if ( !v67
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v65->ApcState.ApcListHead[0].Flink != &v65->152
        && !v65->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v25 = (struct _ACCESS_STATE *)a3;
      goto LABEL_139;
    }
    v12 = v49 | 1;
    v55 = (ULONG_PTR)Object;
LABEL_140:
    if ( (v12 & 0x20) != 0 )
      SeUnlockSubjectContext(&v25->SubjectSecurityContext);
    if ( (v12 & 1) == 0 )
    {
LABEL_218:
      IopDecrementDeviceObjectRef(v55, 0, 0);
      return 3221225506LL;
    }
    v36 = a4;
LABEL_144:
    v68 = *((_BYTE *)a8 + 129) || *((_BYTE *)a8 + 130);
    v69 = (v12 ^ (v68 << 6)) & 0x40 ^ v12;
    Length = v46->Length;
    if ( v46->Length || a8[5] || (DesiredAccess & 0xFEE1FF7F) != 0 || (v69 & 0x40) != 0 )
      v12 = v69 & 0xF7;
    else
      v12 = v69 | 8;
    v71 = 0LL;
    v189 = 0LL;
    v72 = a8[5];
    if ( !v72 || (v72[10] & 0x800) != 0 )
    {
      v55 = (ULONG_PTR)Object;
      AttachedDevice = Object;
      v180 = Object;
      if ( Object->Vpb && (v12 & 8) == 0 )
      {
        Characteristics = Object->Characteristics;
        if ( (Characteristics & 0x100) != 0
          && (Object->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v36 || (*((_DWORD *)a8 + 21) & 1) != 0)
          && (v72 || Length)
          && !(_BYTE)v183 )
        {
          v186 = 0LL;
          v182 = 0LL;
          v81 = 0;
          if ( *((_DWORD *)a8 + 22) != 1 && IopRequireDeviceAccessCheck && (Characteristics & 0x100000) != 0 )
            v81 = 2;
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
          SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a3 + 32));
          v82 = SeAccessCheck(
                  Object->SecurityDescriptor,
                  (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
                  1u,
                  DesiredAccess | v81,
                  0,
                  &v182,
                  (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                  1,
                  &v177,
                  &v207);
          v83 = v182;
          if ( v182 )
          {
            SeAppendPrivileges((PACCESS_STATE)a3, v182);
            ExFreePoolEx(v83);
          }
          if ( v81 && (v81 & DesiredAccess) == 0 )
            v177 &= ~v81;
          v55 = (ULONG_PTR)Object;
          SeOpenObjectAuditAlarm(
            &DestinationString,
            Object,
            AbsoluteObjectName,
            Object->SecurityDescriptor,
            (PACCESS_STATE)a3,
            0,
            v82,
            1,
            (PBOOLEAN)(a3 + 10));
          SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a3 + 32));
          ExReleaseResourceLite(&IopSecurityResource);
          v84 = CurrentThread;
          v85 = CurrentThread->KernelApcDisable + 1;
          CurrentThread->KernelApcDisable = v85;
          if ( !v85
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v84->ApcState.ApcListHead[0].Flink != &v84->152
            && !v84->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          if ( !v82 )
            goto LABEL_218;
          v46 = SourceString;
        }
        v86 = IopCheckVpbMounted((__int64)a8, v55, (__int64)v46, AccessStatus);
        v71 = v86;
        v189 = v86;
        if ( !v86 )
          return (unsigned int)AccessStatus[0];
        v180 = *(PVOID *)(v86 + 8);
        LODWORD(v182) = AccessStatus[0];
        AttachedDevice = (struct _DEVICE_OBJECT *)v180;
      }
      if ( ((_DWORD)a8[18] & 1) != 0 )
      {
        v12 |= 2u;
      }
      else if ( AttachedDevice->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        v180 = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = v200;
      v180 = v200;
      if ( v72[2] )
      {
        v71 = v72[2];
        v189 = v71;
        v74 = Object->Characteristics;
        if ( (v74 & 0x100) != 0
          && (Object->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v36 || (*((_DWORD *)a8 + 21) & 1) != 0)
          && !(_BYTE)v183 )
        {
          v186 = 0LL;
          v199 = 0LL;
          v75 = 0;
          if ( *((_DWORD *)a8 + 22) != 1 && IopRequireDeviceAccessCheck && (v74 & 0x100000) != 0 )
            v75 = 2;
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
          SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a3 + 32));
          v76 = SeAccessCheck(
                  Object->SecurityDescriptor,
                  (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
                  1u,
                  DesiredAccess | v75,
                  0,
                  &v199,
                  (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                  1,
                  &v177,
                  &v205);
          v77 = v199;
          if ( v199 )
          {
            SeAppendPrivileges((PACCESS_STATE)a3, v199);
            ExFreePoolEx(v77);
          }
          if ( v75 && (v75 & DesiredAccess) == 0 )
            v177 &= ~v75;
          v55 = (ULONG_PTR)Object;
          SeOpenObjectAuditAlarm(
            &DestinationString,
            Object,
            AbsoluteObjectName,
            Object->SecurityDescriptor,
            (PACCESS_STATE)a3,
            0,
            v76,
            1,
            (PBOOLEAN)(a3 + 10));
          SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a3 + 32));
          ExReleaseResourceLite(&IopSecurityResource);
          v78 = CurrentThread;
          v79 = CurrentThread->KernelApcDisable + 1;
          CurrentThread->KernelApcDisable = v79;
          if ( !v79
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v78->ApcState.ApcListHead[0].Flink != &v78->152
            && !v78->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          if ( !v76 )
            goto LABEL_218;
          AttachedDevice = (struct _DEVICE_OBJECT *)v180;
        }
        IopIncrementVpbRefCount(v71, 1);
      }
      if ( ((_DWORD)a8[18] & 1) != 0 )
      {
        if ( v71 )
        {
          AttachedDevice = *(struct _DEVICE_OBJECT **)(v71 + 8);
          v180 = AttachedDevice;
        }
        v12 |= 2u;
      }
      v55 = (ULONG_PTR)Object;
    }
    v87 = *(_DWORD *)(v55 + 52);
    if ( (v87 & 0x40001) == 0 || (*(_DWORD *)(v55 + 48) & 0x600100) != 0 )
    {
      v88 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
    }
    else
    {
      v88 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
      if ( (v87 & 0x100) == 0 )
        SeIsAppContainerOrIdentifyLevelContext((PSECURITY_SUBJECT_CONTEXT)(a3 + 32));
    }
    if ( (v12 & 2) != 0 )
    {
      v89 = IopCheckTopDeviceHint(&v180, a8, (v12 & 8) != 0, SourceString);
      LODWORD(v182) = v89;
      if ( v89 < 0 )
      {
        if ( v71 )
          IopDereferenceVpbAndFree(v71);
        IopDecrementDeviceObjectRef(v55, 0, 0);
        return (unsigned int)v89;
      }
      AttachedDevice = (struct _DEVICE_OBJECT *)v180;
    }
    v90 = *((_DWORD *)a8 + 36);
    if ( (v90 & 0x10) != 0 )
      *((_DWORD *)a8 + 36) = v90 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (*(_DWORD *)(v55 + 52) & 0x100000) != 0)
      && (a4 || (*((_DWORD *)a8 + 21) & 1) != 0)
      && (a8[5] || SourceString->Length)
      && !(_BYTE)v183 )
    {
      v186 = 0LL;
      v196 = 0LL;
      v91 = 0;
      if ( *((_DWORD *)a8 + 22) != 1 && IopRequireDeviceAccessCheck && (Object->Characteristics & 0x100000) != 0 )
        v91 = 2;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      v92 = v88 + 1;
      SeLockSubjectContext(v88 + 1);
      v93 = SeAccessCheck(
              Object->SecurityDescriptor,
              v88 + 1,
              1u,
              DesiredAccess | v91,
              0,
              &v196,
              (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
              1,
              &v177,
              &v206);
      v94 = v196;
      if ( v196 )
      {
        SeAppendPrivileges((PACCESS_STATE)a3, v196);
        ExFreePoolEx(v94);
      }
      if ( !v91 || (v91 & DesiredAccess) != 0 )
      {
        v95 = v177;
      }
      else
      {
        v95 = ~v91 & v177;
        v177 = v95;
      }
      v96 = a3;
      if ( v93 )
      {
        *(_DWORD *)(a3 + 20) |= v95;
        *(_DWORD *)(a3 + 16) &= ~(v95 | 0x2000000);
      }
      v55 = (ULONG_PTR)Object;
      SeOpenObjectAuditAlarm(
        &DestinationString,
        v180,
        AbsoluteObjectName,
        Object->SecurityDescriptor,
        (PACCESS_STATE)a3,
        0,
        v93,
        1,
        (PBOOLEAN)(a3 + 10));
      SeUnlockSubjectContext(v92);
      ExReleaseResourceLite(&IopSecurityResource);
      v97 = CurrentThread;
      v98 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v98;
      if ( !v98
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v97->ApcState.ApcListHead[0].Flink != &v97->152
        && !v97->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( !v93 )
      {
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v71 )
          IopDereferenceVpbAndFree(v71);
        return 3221225506LL;
      }
      AttachedDevice = (struct _DEVICE_OBJECT *)v180;
    }
    else
    {
      v96 = a3;
    }
    Irp = pIoAllocateIrp(AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL, retaddr);
    v100 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef(v55, 0, 0);
      if ( v71 )
        IopDereferenceVpbAndFree(v71);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = a4;
    *(_DWORD *)(Irp + 16) = 2180;
    v211[0] = a9;
    v211[1] = v96;
    v212 = DesiredAccess;
    v213 = *((_DWORD *)a8 + 16);
    v101 = *(_QWORD *)(Irp + 184) - 72LL;
    *(_QWORD *)AccessStatus = v101;
    *(_BYTE *)(v101 + 3) = 0;
    v102 = *((_DWORD *)a8 + 28);
    if ( v102 )
    {
      if ( v102 == 1 )
        *(_BYTE *)v101 = 1;
      else
        *(_BYTE *)v101 = 19;
      *(_QWORD *)(v101 + 32) = a8[15];
    }
    else
    {
      *(_BYTE *)v101 = 0;
      *(_DWORD *)(v101 + 32) = *((_DWORD *)a8 + 20);
      v103 = *((_BYTE *)a8 + 84);
      *(_BYTE *)(v101 + 2) = v103;
      if ( (a5 & 0x40) == 0 )
        *(_BYTE *)(v101 + 2) = v103 | 0x80;
    }
    *(_QWORD *)(v100 + 88) = a8[7];
    *(_QWORD *)(v100 + 24) = a8[9];
    *(_DWORD *)(v101 + 16) = (*((_DWORD *)a8 + 22) << 24) | (_DWORD)a8[8] & 0xFFFFFF;
    *(_WORD *)(v101 + 24) = *((_WORD *)a8 + 34);
    *(_WORD *)(v101 + 26) = *((_WORD *)a8 + 35);
    *(_QWORD *)(v101 + 8) = v211;
    *(_QWORD *)(v100 + 112) = a8[20];
    *(_QWORD *)(v100 + 72) = BugCheckParameter4;
    *(_QWORD *)(v100 + 8) = 0LL;
    *(_BYTE *)(v100 + 65) = 0;
    *(_BYTE *)(v100 + 68) = 0;
    *(_QWORD *)(v100 + 80) = 0LL;
    *(_QWORD *)(v100 + 104) = 0LL;
    *(_QWORD *)(v100 + 160) = 0LL;
    if ( *((_BYTE *)a8 + 129) )
    {
      v107 = a8[17];
      memset(v107, 0, 0x110uLL);
      v106 = (struct _FILE_OBJECT *)(v107 + 6);
      v187 = v107 + 6;
      *((_BYTE *)v107 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v107);
      *v107 = 1LL;
      if ( (a5 & 0x40) == 0 )
        *((_DWORD *)v107 + 32) |= 0x20000u;
      *(_DWORD *)&v106->Type = 14155781;
      v107[14] = a8[5];
      v107[7] = Object;
      if ( ((_DWORD)a8[18] & 0x20) != 0 )
      {
        if ( a4 )
        {
          if ( (AttachedDevice->Flags & 0x40000) != 0
            || (DeviceType = AttachedDevice->DeviceType, (unsigned int)DeviceType <= 0x35)
            && (v109 = 0x20000100100108LL, _bittest64(&v109, DeviceType)) )
          {
            TransactionParameters = IopRetrieveTransactionParameters();
            LODWORD(v182) = TransactionParameters;
            if ( TransactionParameters < 0 )
            {
              IoFreeIrp((PIRP)v100);
              IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
              if ( v71 )
              {
                IopDereferenceVpbAndFree(v71);
                *((_DWORD *)a8 + 4) = TransactionParameters;
                return (unsigned int)TransactionParameters;
              }
LABEL_275:
              *((_DWORD *)a8 + 4) = TransactionParameters;
              return (unsigned int)TransactionParameters;
            }
          }
        }
      }
      v101 = *(_QWORD *)AccessStatus;
    }
    else
    {
      TransactionParameters = IopAllocRealFileObject(
                                (__int64)&v187,
                                (__int64)AttachedDevice,
                                (__int64)Object,
                                a5,
                                a4,
                                (__int64)a8,
                                0,
                                DesiredAccess);
      LODWORD(v182) = TransactionParameters;
      if ( TransactionParameters < 0 )
      {
        IoFreeIrp((PIRP)v100);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v71 )
          IopDereferenceVpbAndFree(v71);
        v105 = v187;
        if ( v187 )
        {
          *((_QWORD *)v187 + 1) = 0LL;
          ObfDereferenceObject(v105);
        }
        goto LABEL_275;
      }
      v106 = (struct _FILE_OBJECT *)v187;
    }
    if ( (v12 & 8) != 0 )
      v106->Flags |= 0x800u;
    *(_QWORD *)(v100 + 192) = v106;
    *(_QWORD *)(v101 + 48) = v106;
    v110 = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( v110 >= 0x38u )
      {
        if ( v110 >= 0x78u )
        {
          if ( v110 < 0xF8u )
            v110 = 248;
        }
        else
        {
          v110 = 120;
        }
      }
      else
      {
        v110 = 56;
      }
      v106->FileName.MaximumLength = v110;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v110, 0x6D4E6F49u);
      v106->FileName.Buffer = PoolWithTag;
      if ( !PoolWithTag )
      {
        IoFreeIrp((PIRP)v100);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v71 )
          IopDereferenceVpbAndFree(v71);
        v106->DeviceObject = 0LL;
        if ( !*((_BYTE *)a8 + 129) )
        {
          ObfDereferenceObject(v106);
          return 3221225626LL;
        }
        return 3221225626LL;
      }
    }
    v112 = SourceString;
    RtlCopyUnicodeString(&v106->FileName, SourceString);
    if ( *((_BYTE *)a8 + 129) )
    {
      v113 = v180;
      v114 = *(_QWORD *)(*((_QWORD *)v180 + 1) + 80LL);
      if ( v114 && *(_DWORD *)v114 > 0xC0u )
      {
        v115 = *(struct _PRIVILEGE_SET **)(v114 + 192);
        v196 = v115;
        if ( v115 )
        {
          --*(_BYTE *)(v100 + 67);
          *(_QWORD *)(v100 + 184) -= 72LL;
          *(_QWORD *)(v101 + 40) = v113;
          if ( (MmVerifierData & 0x10) != 0 )
          {
            v116 = (void *)VfFastIoSnapState();
            v113 = v180;
          }
          else
          {
            v116 = 0LL;
          }
          v117 = ((__int64 (__fastcall *)(__int64, void *, PVOID))v115)(v100, a8[13], v113);
          if ( v116 )
            VfFastIoCheckState(v116, (int)v196);
          a8[20] = *(void **)(v100 + 112);
          if ( v117 )
          {
            v118 = *(_DWORD *)(v100 + 48);
            *((_DWORD *)a8 + 4) = v118;
            a8[3] = *(void **)(v100 + 56);
            if ( v118 == 260 )
            {
              v119 = *(void **)(v100 + 160);
              if ( v119 )
              {
                ExFreePoolWithTag(v119, 0);
                *(_QWORD *)(v100 + 160) = 0LL;
                a8[5] = 0LL;
              }
            }
            if ( v106->FileName.Length )
              ExFreePoolWithTag(v106->FileName.Buffer, 0);
            if ( v106->FileObjectExtension )
              IopDeleteFileObjectExtension((__int64)v106);
            IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
            if ( v189 )
              IopDereferenceVpbAndFree(v189);
            IoFreeIrp((PIRP)v100);
            *((_DWORD *)a8 + 8) = -1096154543;
            if ( !*((_BYTE *)a8 + 131) )
              *((_DWORD *)a8[12] + 8) = *((_DWORD *)a8[13] + 12);
            return 0LL;
          }
          *(_QWORD *)(v100 + 184) += 72LL;
          ++*(_BYTE *)(v100 + 67);
          v101 = *(_QWORD *)AccessStatus;
          v113 = v180;
        }
        v112 = SourceString;
      }
      v120 = IopAllocRealFileObject(
               (__int64)&v187,
               (__int64)v113,
               (__int64)Object,
               a5,
               a4,
               (__int64)a8,
               1,
               DesiredAccess);
      LODWORD(v182) = v120;
      if ( v120 < 0 )
      {
        v121 = v187;
        if ( *((_WORD *)v187 + 44) )
          ExFreePoolWithTag(*((PVOID *)v187 + 12), 0);
        if ( v121[26] )
          IopDeleteFileObjectExtension((__int64)v121);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v189 )
          IopDereferenceVpbAndFree(v189);
        IoFreeIrp((PIRP)v100);
        return (unsigned int)v182;
      }
      v106 = (struct _FILE_OBJECT *)v187;
      *(_QWORD *)(v101 + 48) = v187;
      *(_QWORD *)(v100 + 192) = v106;
    }
    else
    {
      v120 = (int)v182;
    }
    if ( !*((_DWORD *)a8 + 28) )
    {
      if ( (*(_DWORD *)(v100 + 16) & 0x80u) != 0 )
      {
        v204 = *(struct _ECP_LIST **)(v100 + 112);
        v120 = 0;
      }
      else
      {
        v120 = -1073741811;
      }
      if ( v204 && IopSymlinkGetECP(v204, &v190) != -1073741275 )
      {
        v122 = (__int16 *)v190;
        for ( j = *((_QWORD *)v190 + 1); j; j = *(_QWORD *)(j + 8) )
          v122 = (__int16 *)j;
        if ( !v122[2] )
        {
          updated = IopSymlinkUpdateECP((PIRP)v100, v122, AbsoluteObjectName->Length - v112->Length, v122[1]);
          v120 = updated;
          if ( updated < 0 )
          {
            *(_DWORD *)(v100 + 48) = updated;
            *(_QWORD *)(v100 + 56) = 0LL;
            v12 &= ~4u;
          }
        }
      }
    }
    KeInitializeEvent(&v106->Event, NotificationEvent, 0);
    a8[1] = v106;
    if ( (v12 & 4) != 0 )
    {
      IopQueueThreadIrp(v100);
      if ( *(char *)(v100 + 71) >= 0 && (v125 = *(_BYTE **)(v100 + 200)) != 0LL && (*v125 & 2) != 0 )
      {
        EtwActivityIdControlKernel(1, v203);
        v215 = *(_OWORD *)(*(_QWORD *)(v100 + 200) + 16LL);
        v209 = &v215;
        EtwActivityIdControlKernel(2, (PVOID *)&v209);
        v120 = IofCallDriver((PDEVICE_OBJECT)v180, (PIRP)v100);
        v210 = v203[0];
        EtwActivityIdControlKernel(2, &v210);
      }
      else
      {
        v120 = IofCallDriver((PDEVICE_OBJECT)v180, (PIRP)v100);
      }
    }
    if ( v120 == 259 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
        v12 &= ~0x80u;
      else
        v12 |= 0x80u;
      v127 = 0;
      while ( KeWaitForSingleObject(&v106->Event, Executive, 0, v12 >> 7, 0LL) == 257 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) != 0
          || !v106->Event.Header.SignalState && *(_BYTE *)(v100 + 68) )
        {
          __writecr8(CurrentIrql);
          IopCancelAlertedRequest(&v106->Event, (PIRP)v100);
          break;
        }
        __writecr8(CurrentIrql);
      }
      v106 = (struct _FILE_OBJECT *)v187;
    }
    else
    {
      v127 = 0;
    }
    if ( (*(_DWORD *)(v100 + 16) & 0x80u) == 0 )
    {
      v129 = ExtraCreateParameter;
    }
    else
    {
      v129 = *(struct _ECP_LIST **)(v100 + 112);
      ExtraCreateParameter = v129;
    }
    if ( *(_DWORD *)(v100 + 48) == 260 )
    {
      P = *(PVOID *)(v100 + 160);
      if ( !v129 || IopSymlinkGetECP(v129, &v190) == -1073741275 )
      {
        ECP = IopSymlinkCreateECP((PIRP)v100, (__int64)&v190);
        if ( ECP >= 0 )
        {
          if ( !v129 )
          {
            IoGetIrpExtraCreateParameter((PIRP)v100, &ExtraCreateParameter);
            v129 = ExtraCreateParameter;
          }
        }
        else
        {
          *(_QWORD *)(v100 + 56) = 0LL;
          *(_DWORD *)(v100 + 48) = ECP;
        }
      }
      if ( *(_DWORD *)(v100 + 48) == 260 )
      {
        v131 = P;
        IopSymlinkProcessReparse((PIRP)v100);
        v132 = *(_QWORD *)(v100 + 56);
        if ( v132 == 2684354563LL || v132 == 2684354572LL || v132 == 2147483673LL )
        {
          if ( *(int *)(v100 + 48) >= 0 )
            v12 ^= (v12 ^ (16 * (v131[3] == 0))) & 0x10;
          if ( (*((_DWORD *)a8 + 21) & 8) == 0 )
          {
            ExFreePoolWithTag(v131, 0);
            P = 0LL;
          }
        }
      }
    }
    if ( *(_DWORD *)(v100 + 48) || *((_DWORD *)a8 + 28) )
    {
      v139 = v180;
      goto LABEL_406;
    }
    v133 = 0LL;
    EcpContext = 0LL;
    if ( !v129 )
      goto LABEL_392;
    IopSymlinkRemoveECP(v129, &EcpContext);
    v133 = EcpContext;
    if ( EcpContext )
    {
      if ( (*((_BYTE *)EcpContext + 2) & 1) == 0 )
        goto LABEL_401;
LABEL_392:
      if ( v133 )
        goto LABEL_399;
    }
    RelatedFileObject = (__int64)v106->RelatedFileObject;
    if ( !RelatedFileObject )
      goto LABEL_401;
    FileObjectExtension = IopGetFileObjectExtension(RelatedFileObject, 5, 0LL);
    v137 = FileObjectExtension;
    if ( !FileObjectExtension )
      goto LABEL_401;
    v138 = AbsoluteObjectName->Length + 2 + *(unsigned __int16 *)(FileObjectExtension + 16);
    LODWORD(v182) = v138;
    if ( v138 >= 0xFFFF )
    {
      v127 = -1073741562;
LABEL_401:
      if ( v133 )
      {
        IopSymlinkFreeRelatedMountPointChain(v133);
        FsRtlFreeExtraCreateParameter(v133);
      }
      goto LABEL_403;
    }
    v127 = FsRtlAllocateExtraCreateParameterFromLookasideList(
             &IopSymlinkECPGuid,
             (unsigned __int16)v138 + 32,
             v136,
             IopSymlinkCleanupECP,
             &IopSymlinkInfoLookasideList,
             &EcpContext);
    v133 = EcpContext;
    if ( v127 < 0 )
      goto LABEL_401;
    LOWORD(GrantedAccess) = *(_WORD *)(v137 + 2);
    *(_WORD *)AccessMode = *(_WORD *)(v137 + 4);
    LOWORD(GenericMapping) = *(_WORD *)(v137 + 16);
    LOWORD(PreviouslyGrantedAccess) = 0;
    IopSymlinkInitializeSymlinkInfo(
      EcpContext,
      (unsigned int)((_DWORD)v182 + 32),
      AbsoluteObjectName->Buffer,
      AbsoluteObjectName->Length,
      PreviouslyGrantedAccess,
      *(_QWORD *)(v137 + 24),
      GenericMapping,
      *(_DWORD *)AccessMode,
      GrantedAccess,
      0LL);
    *v133 = *(_WORD *)v137 + v133[8] - *(_WORD *)(v137 + 16);
LABEL_399:
    v127 = IopSymlinkSetFoExtension(v106, v133);
    if ( v127 < 0 )
      goto LABEL_401;
    IopSymlinkFreeRelatedMountPointChain(v133);
LABEL_403:
    v139 = v180;
    if ( v127 < 0 )
    {
      IoCancelFileOpen((PDEVICE_OBJECT)v180, v106);
      *(_QWORD *)(v100 + 56) = 0LL;
      *(_DWORD *)(v100 + 48) = v127;
    }
LABEL_406:
    if ( ExtraCreateParameter )
      a8[20] = ExtraCreateParameter;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v100 + 48);
    NetworkOpenInformation = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v106->Event.Header.SignalState = 1;
    if ( (v12 & 4) != 0 )
    {
      *(_QWORD *)(v100 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v100);
    }
    if ( (*(_BYTE *)(v100 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v100 + 24), 0);
    IoFreeIrp((PIRP)v100);
    v141 = BugCheckParameter4[1];
    a8[3] = (void *)BugCheckParameter4[1];
    if ( NetworkOpenInformation < 0 )
    {
      if ( (v106->Flags & 0x200000) != 0 )
      {
        ObfDereferenceObject(v106);
      }
      else
      {
        if ( v106->FileName.Length )
        {
          ExFreePoolWithTag(v106->FileName.Buffer, 0);
          v106->FileName.Length = 0;
        }
        v106->DeviceObject = 0LL;
        ObfDereferenceObject(v106);
        IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
        if ( v189 )
          IopDereferenceVpbAndFree(v189);
      }
      a8[1] = 0LL;
      *((_DWORD *)a8 + 4) = NetworkOpenInformation;
      return (unsigned int)NetworkOpenInformation;
    }
    v142 = 260;
    if ( NetworkOpenInformation != 260 )
      break;
    if ( !v141 || (v141 == 2684354563 || v141 == 2684354572 || v141 == 2147483673) && (*((_DWORD *)a8 + 21) & 8) == 0 )
    {
      v143 = v106->FileName.Length;
      if ( AbsoluteObjectName->MaximumLength >= v143 )
      {
        v145 = AbsoluteObjectName;
      }
      else
      {
        v144 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v143, 0x63466F49u);
        if ( !v144 )
        {
          *((_DWORD *)a8 + 4) = -1073741670;
          return 3221225626LL;
        }
        v145 = AbsoluteObjectName;
        Buffer = AbsoluteObjectName->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        v145->Buffer = v144;
        v145->MaximumLength = v106->FileName.Length;
        v142 = 260;
      }
      RtlCopyUnicodeString(v145, &v106->FileName);
      if ( BugCheckParameter4[1] == 2684354563
        || BugCheckParameter4[1] == 2684354572
        || BugCheckParameter4[1] == 2147483673 )
      {
        a8[5] = 0LL;
      }
    }
    if ( v106->FileName.Length )
    {
      ExFreePoolWithTag(v106->FileName.Buffer, 0);
      v106->FileName.Length = 0;
    }
    v106->DeviceObject = 0LL;
    ObfDereferenceObject(v106);
    a8[1] = 0LL;
    IopDecrementDeviceObjectRef((ULONG_PTR)Object, 0, 0);
    if ( v189 )
      IopDereferenceVpbAndFree(v189);
    v147 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      a8[5] = 0LL;
      if ( v147 == 2684354563 || v147 == 2684354572 || v147 == 2147483673 )
      {
        *((_DWORD *)a8 + 36) |= 0x10u;
        v148 = *((_DWORD *)a8 + 36);
        v149 = Object->DeviceType;
        if ( (unsigned int)v149 <= 0x24 && (v150 = 0x1080020084LL, _bittest64(&v150, v149)) )
          v151 = v148 | 8;
        else
          v151 = v148 & 0xFFFFFFF7;
        *((_DWORD *)a8 + 36) = v151;
      }
      if ( *((_BYTE *)a8 + 128) )
        KeBugCheckEx(0xF9u, (ULONG_PTR)Object, (ULONG_PTR)v139, (ULONG_PTR)AbsoluteObjectName, v147);
      if ( (Object->DeviceObjectExtension->ExtensionFlags & 0x800) == 0 )
      {
        *(_QWORD *)(a3 + 16) = *(unsigned int *)(a3 + 24);
        *(_DWORD *)(a3 + 12) &= ~0x100u;
      }
      if ( (v147 == 2684354563 || v147 == 2684354572 || v147 == 2147483673) && (*((_DWORD *)a8 + 21) & 8) != 0 )
      {
        a8[3] = P;
        *((_DWORD *)a8 + 4) = -2147483603;
        return 2147483693LL;
      }
      else
      {
        if ( v147 == 2147483673 )
          return 872;
        return v142;
      }
    }
    ++v194;
    v10 = (unsigned int *)v200;
    v11 = v193;
    v13 = 0x1080020084LL;
    if ( v194 > 0x20 )
      return 3221225473LL;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(v106);
  if ( v180 != RelatedDeviceObject )
  {
    Vpb = (ULONG_PTR)v106->Vpb;
    v155 = v189;
    if ( Vpb != v189 )
    {
      if ( Vpb )
        IopIncrementVpbRefCount(Vpb, 1);
      if ( v155 )
        IopDereferenceVpbAndFree(v155);
    }
  }
  if ( (v12 & 0x40) != 0 )
  {
    if ( *((_BYTE *)a8 + 129) )
    {
      v159 = 0;
      FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
      if ( *((_BYTE *)a8 + 131) )
      {
        if ( FastIoDispatch )
        {
          if ( FastIoDispatch->SizeOfFastIoDispatch > 0x70 )
          {
            FastIoQueryNetworkOpenInfo = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, void *, ULONG_PTR *, PDEVICE_OBJECT))FastIoDispatch->FastIoQueryNetworkOpenInfo;
            if ( FastIoQueryNetworkOpenInfo )
            {
              v166 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
              LOBYTE(v152) = 1;
              v159 = FastIoQueryNetworkOpenInfo(v106, v152, a8[13], BugCheckParameter4, RelatedDeviceObject);
              if ( v166 )
                VfFastIoCheckState(v166, (int)FastIoQueryNetworkOpenInfo);
            }
          }
        }
        if ( !v159 )
        {
          v167 = IoQueryFileInformation(v106, FileNetworkOpenInformation, 0x38u, a8[13], &ReturnedLength);
          NetworkOpenInformation = v167;
          if ( v167 == -1073741811 || v167 == -1073741822 )
            NetworkOpenInformation = IopGetNetworkOpenInformation(v106);
        }
        goto LABEL_513;
      }
      v190 = 0LL;
      if ( FastIoDispatch )
        FastIoQueryBasicInfo = (struct _FILE_OBJECT **)FastIoDispatch->FastIoQueryBasicInfo;
      else
        FastIoQueryBasicInfo = 0LL;
      v193 = FastIoQueryBasicInfo;
      if ( FastIoQueryBasicInfo )
      {
        v162 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
        v203[1] = v162;
        LOBYTE(v152) = 1;
        v159 = ((__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, void *, ULONG_PTR *, PDEVICE_OBJECT))FastIoQueryBasicInfo)(
                 v106,
                 v152,
                 a8[12],
                 BugCheckParameter4,
                 RelatedDeviceObject);
        v188 = v159;
        if ( v162 )
          VfFastIoCheckState(v162, (int)FastIoQueryBasicInfo);
      }
      if ( v159 )
      {
        NetworkOpenInformation = BugCheckParameter4[0];
      }
      else
      {
        if ( ViVerifierDriverAddedThunkListHead )
          PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                                  NonPagedPoolNx,
                                  0x28uLL,
                                  0x20206F49u,
                                  (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        else
          PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x20206F49u);
        v164 = PoolWithTagPriority;
        v190 = PoolWithTagPriority;
        if ( PoolWithTagPriority )
        {
          NetworkOpenInformation = IoQueryFileInformation(
                                     v106,
                                     FileBasicInformation,
                                     0x28u,
                                     PoolWithTagPriority,
                                     &ReturnedLength);
          AccessStatus[0] = NetworkOpenInformation;
          if ( NetworkOpenInformation >= 0 )
            memmove(a8[12], v164, ReturnedLength);
          ExFreePoolWithTag(v164, 0);
          goto LABEL_513;
        }
        NetworkOpenInformation = -1073741670;
      }
      AccessStatus[0] = NetworkOpenInformation;
    }
LABEL_513:
    *((_DWORD *)a8 + 8) = -1096154543;
    IopCloseFile(0LL, v106, 1LL);
    ObfDereferenceObject(v106);
    a8[1] = 0LL;
    *((_DWORD *)a8 + 4) = NetworkOpenInformation;
    return (unsigned int)NetworkOpenInformation;
  }
  *v193 = v106;
  *((_DWORD *)a8 + 8) = -1096154543;
  ObfReferenceObject(v106);
  v156 = v106->RelatedFileObject;
  if ( (!v156 || (v156->Flags & 0x400000) != 0) && !v106->FileName.Length )
  {
    v157 = RelatedDeviceObject->DeviceType;
    if ( (unsigned int)v157 <= 0x20 )
    {
      v158 = 0x100000308LL;
      if ( _bittest64(&v158, v157) )
        v106->Flags |= 0x400000u;
    }
  }
  result = LODWORD(BugCheckParameter4[0]);
LABEL_478:
  *((_DWORD *)a8 + 4) = result;
  return result;
}
