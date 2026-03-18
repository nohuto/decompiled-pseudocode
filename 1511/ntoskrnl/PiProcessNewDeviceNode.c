/*
 * XREFs of PiProcessNewDeviceNode @ 0x1404ED460
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     PnpIrpDeviceEnumerated @ 0x1401076E8 (PnpIrpDeviceEnumerated.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x140107730 (PpMarkDeviceStackExtensionFlag.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     wcschr @ 0x140145B68 (wcschr.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     Template_p @ 0x1401C0018 (Template_p.c)
 *     Template_pz @ 0x1401C19FC (Template_pz.c)
 *     PpvUtilFailDriver @ 0x1401C1AA8 (PpvUtilFailDriver.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PpDeviceRegistration @ 0x1403B91E8 (PpDeviceRegistration.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeFlags @ 0x1404574A4 (PipClearDevNodeFlags.c)
 *     PipSetDevNodeFlags @ 0x140457CF8 (PipSetDevNodeFlags.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140459EF0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpSetObjectProperty @ 0x14045C530 (_PnpSetObjectProperty.c)
 *     PipSetDevNodeProblem @ 0x1404A0BE4 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404A0DFC (PipClearDevNodeProblem.c)
 *     PnpFindAlternateStringData @ 0x1404B7284 (PnpFindAlternateStringData.c)
 *     PipGenerateContainerID @ 0x1404EC9C4 (PipGenerateContainerID.c)
 *     PipClearDevNodeUserFlags @ 0x1404ECD04 (PipClearDevNodeUserFlags.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1404ECDAC (PiDcUpdateDeviceContainerMembership.c)
 *     PnpQueryID @ 0x1404EE304 (PnpQueryID.c)
 *     PnpIrpQueryID @ 0x1404EE3FC (PnpIrpQueryID.c)
 *     PnpSaveDeviceCapabilities @ 0x1404EE568 (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x1404EE690 (_CmSetDeviceRegProp.c)
 *     PnpQueryDeviceText @ 0x1404EE83C (PnpQueryDeviceText.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404EE910 (PnpCheckDeviceIdsChanged.c)
 *     PnpSetPlugPlayEvent @ 0x1404EEE18 (PnpSetPlugPlayEvent.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404EEF24 (PnpNewDeviceNodeDependencyCheck.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1404EF088 (PpHotSwapUpdateRemovalPolicy.c)
 *     PiQueryAndAllocateBootResources @ 0x1404EF1A4 (PiQueryAndAllocateBootResources.c)
 *     PnpInitializeSessionId @ 0x1404EF974 (PnpInitializeSessionId.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1404EFA28 (PnpIsDeviceInstanceEnabled.c)
 *     PiQueryResourceRequirements @ 0x1404EFC24 (PiQueryResourceRequirements.c)
 *     PnpQueryBusInformation @ 0x1404EFE74 (PnpQueryBusInformation.c)
 *     PnpGetDeviceLocationStrings @ 0x1404EFF38 (PnpGetDeviceLocationStrings.c)
 *     PiQueryRemovableDeviceOverride @ 0x1404F066C (PiQueryRemovableDeviceOverride.c)
 *     PnpGenerateDeviceIdsHash @ 0x1404F0B04 (PnpGenerateDeviceIdsHash.c)
 *     KseAddHardwareId @ 0x1404F0BC8 (KseAddHardwareId.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404F0CA0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiCreateDeviceInstanceKey @ 0x1404F0CF8 (PiCreateDeviceInstanceKey.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1404F0FA8 (PiBuildDeviceNodeInstancePath.c)
 *     PpIrpQueryCapabilities @ 0x1404F10C0 (PpIrpQueryCapabilities.c)
 *     PipSetDevNodeUserFlags @ 0x14050AAD0 (PipSetDevNodeUserFlags.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14050DFF4 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgProcessDevice @ 0x140510468 (PpDevCfgProcessDevice.c)
 *     PipMakeGloballyUniqueId @ 0x14053AE10 (PipMakeGloballyUniqueId.c)
 *     PnpDisableDevice @ 0x1406033A8 (PnpDisableDevice.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14060CEF4 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x14060DF40 (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x14060EABC (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x1406146DC (PnpTraceDockDeviceEnumeration.c)
 *     PnpLogDuplicateDevice @ 0x1406151E0 (PnpLogDuplicateDevice.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(__int64 a1)
{
  int v2; // r13d
  HANDLE v3; // r12
  ULONG_PTR v4; // r15
  int v5; // eax
  wchar_t *v6; // rax
  int Capabilities; // ebx
  __int64 v8; // r8
  bool v9; // r14
  __int64 v10; // r8
  int v11; // eax
  int GloballyUniqueId; // ebx
  __int64 v13; // rcx
  void *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // eax
  _QWORD *v21; // rax
  ULONG_PTR v22; // rbx
  unsigned int v23; // r14d
  struct _KTHREAD *v24; // rax
  __int64 v25; // r8
  HANDLE v26; // rbx
  __int64 v27; // rdx
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  PVOID v31; // rsi
  WCHAR *v32; // rbx
  char v33; // r8
  __int64 v34; // rdx
  struct _KTHREAD *v35; // rax
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *v37; // rax
  HANDLE v38; // rbx
  PVOID v39; // r12
  unsigned int v40; // r13d
  PVOID v41; // r14
  int v42; // eax
  char v43; // si
  int v44; // eax
  unsigned int v45; // r14d
  int v46; // r12d
  char v47; // r13
  HANDLE v48; // rsi
  PVOID v49; // r14
  unsigned int v50; // ebx
  __int64 v51; // rax
  PVOID v52; // rbx
  __int64 v53; // r8
  struct _KTHREAD *v54; // rax
  __int64 v55; // r8
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rcx
  PVOID v60; // rcx
  unsigned int v61; // ebx
  __int64 v63; // rax
  int v64; // edx
  int FailedInstallProblemStatus; // r8d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  int v69; // esi
  bool v70; // zf
  int v71; // edx
  int v72; // r8d
  __int64 v73; // rcx
  _WORD *v74; // rcx
  __int64 v75; // rcx
  unsigned __int16 *v76; // rdi
  _WORD *v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  _WORD *v81; // rcx
  __int64 v82; // rcx
  unsigned __int16 *v83; // rdi
  _WORD *v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  int v87; // esi
  __int64 v88; // rdx
  int v89; // eax
  __int64 v90; // rdx
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int BugCheckParameter4a; // [rsp+28h] [rbp-E0h]
  int v93; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v94; // [rsp+6Ch] [rbp-9Ch]
  int v95; // [rsp+70h] [rbp-98h] BYREF
  BOOL v96; // [rsp+74h] [rbp-94h]
  int v97; // [rsp+78h] [rbp-90h] BYREF
  char v98[4]; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v99; // [rsp+80h] [rbp-88h]
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  int v101; // [rsp+90h] [rbp-78h] BYREF
  int v102; // [rsp+94h] [rbp-74h] BYREF
  int v103; // [rsp+98h] [rbp-70h] BYREF
  PVOID v104; // [rsp+A0h] [rbp-68h] BYREF
  PVOID P; // [rsp+A8h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v107; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v108; // [rsp+C0h] [rbp-48h] BYREF
  PCWSTR v109; // [rsp+C8h] [rbp-40h] BYREF
  PVOID v110; // [rsp+D0h] [rbp-38h]
  PVOID v111; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v112; // [rsp+E0h] [rbp-28h] BYREF
  int v113; // [rsp+E8h] [rbp-20h] BYREF
  int v114; // [rsp+ECh] [rbp-1Ch] BYREF
  unsigned int v115; // [rsp+F0h] [rbp-18h] BYREF
  PVOID v116; // [rsp+F8h] [rbp-10h] BYREF
  PVOID v117; // [rsp+100h] [rbp-8h] BYREF
  __int64 v118; // [rsp+108h] [rbp+0h] BYREF
  const WCHAR *v119; // [rsp+110h] [rbp+8h] BYREF
  char v120[8]; // [rsp+118h] [rbp+10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp+18h] BYREF
  char v122[8]; // [rsp+130h] [rbp+28h] BYREF
  wchar_t *Str; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v124[4]; // [rsp+148h] [rbp+40h] BYREF
  int v125; // [rsp+14Ch] [rbp+44h]
  GUID Guid; // [rsp+188h] [rbp+80h] BYREF

  v116 = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    Template_p(a1, &KMPnPEvt_ProcessNewDevice_Start, 0LL, a1);
  LOBYTE(v96) = 0;
  v99 = 0;
  v2 = 0;
  v94 = 0;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v118 = MEMORY[0xFFFFF78000000014];
  v95 = 0;
  LOBYTE(v93) = 0;
  Handle = 0LL;
  PiPnpRtlBeginOperation((__int64 **)&v116);
  PipClearDevNodeFlags(a1, 0x2000000);
  v110 = 0LL;
  v104 = 0LL;
  v5 = PnpQueryID(a1, 0LL, &Str, v120);
  if ( v5 < 0 )
  {
    v69 = v5;
    if ( v5 == -1073479624 )
      v69 = -1073741823;
    v99 = v69;
  }
  else
  {
    v110 = Str;
    v6 = wcschr(Str, 0x5Cu);
    *v6 = 0;
    v104 = v6 + 1;
  }
  Capabilities = PpIrpQueryCapabilities(v4, v124);
  PipClearDevNodeUserFlags(a1, 2);
  v9 = 0;
  if ( Capabilities >= 0 )
  {
    if ( (v125 & 0x20000) != 0 )
      PipSetDevNodeUserFlags(a1);
    v9 = (v125 & 0x40) != 0;
  }
  if ( (v125 & 0x20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 568) == 4 )
      PpProfileCancelTransitioningDock(a1);
    *(_DWORD *)(a1 + 568) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 568) = 0;
  }
  PnpQueryDeviceText(*(_QWORD *)(a1 + 32), 0LL, v8, &v108);
  PnpQueryDeviceText(*(_QWORD *)(a1 + 32), 1LL, v10, &v117);
  v11 = PnpQueryID(a1, 3LL, &P, v122);
  GloballyUniqueId = v11;
  if ( v9 )
  {
    if ( v11 == -1073741637 )
    {
      PipSetDevNodeProblem(a1, 9, -1073741637);
      PipSetDevNodeFlags(*(_QWORD *)(a1 + 16), 0x200000);
      PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
    }
    goto LABEL_133;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9
    || (v13 = *(_QWORD *)(a1 + 16), v13 == IopRootDeviceNode) )
  {
LABEL_133:
    v14 = P;
    goto LABEL_18;
  }
  v109 = 0LL;
  v14 = P;
  while ( 1 )
  {
    GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(v13 + 32), v14, &v109);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    v14 = (void *)v109;
    P = (PVOID)v109;
LABEL_18:
    if ( GloballyUniqueId < 0 )
    {
      v70 = (*(_DWORD *)(a1 + 396) & 0x2000) == 0;
      v99 = GloballyUniqueId;
      if ( v70 || *(_DWORD *)(a1 + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v71 = 3;
          v72 = -1073741670;
        }
        else
        {
          v72 = GloballyUniqueId;
          v71 = 19;
        }
        PipSetDevNodeProblem(a1, v71, v72);
      }
    }
    v17 = PiBuildDeviceNodeInstancePath(a1, v110, v104, v14);
    if ( v17 < 0 )
      goto LABEL_191;
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
      Template_pz(v16, v15, v18, a1, *(_QWORD *)(a1 + 48));
    v19 = PiCreateDeviceInstanceKey(a1, &Handle, &v95);
    v2 = v95;
    v17 = v19;
    if ( v19 < 0 )
    {
      PipSetDevNodeProblem(a1, 19, v19);
    }
    else
    {
      v20 = 0;
      if ( v95 == 1 )
        v20 = 0x20000;
      v94 = v20;
    }
    v3 = Handle;
    if ( v17 < 0 )
LABEL_191:
      v99 = v17;
    PpMarkDeviceStackExtensionFlag(v4, 16, 1);
    PipSetDevNodeState(a1, 770);
    if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9 )
      break;
    if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && (*(_DWORD *)(a1 + 404) == 3 || *(_DWORD *)(a1 + 404) == 19) )
      break;
    if ( v2 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      if ( Handle && v108 )
      {
        v67 = -1LL;
        do
          ++v67;
        while ( *((_WORD *)v108 + v67) );
        CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 1, 1, (__int64)v108, 2 * v67 + 2, v94);
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v3 = Handle;
      v2 = v95;
      goto LABEL_31;
    }
    v21 = PnpDeviceObjectFromDeviceInstance(a1 + 40);
    v22 = (ULONG_PTR)v21;
    if ( !v21 )
      goto LABEL_31;
    if ( v21 == (_QWORD *)v4 )
    {
      ObfDereferenceObject(v21);
LABEL_31:
      if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 42 )
        PipClearDevNodeProblem(a1);
      break;
    }
    if ( !v9 )
    {
      PpvUtilFailDriver(0);
      IoAddTriageDumpDataBlock(v4, *(unsigned __int16 *)(v4 + 2));
      v73 = *(_QWORD *)(v4 + 8);
      if ( v73 )
      {
        IoAddTriageDumpDataBlock(v73, *(__int16 *)(v73 + 2));
        v74 = (_WORD *)(*(_QWORD *)(v4 + 8) + 56LL);
        if ( *v74 )
        {
          IoAddTriageDumpDataBlock((int)v74, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(v4 + 8) + 56LL));
        }
      }
      v75 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
      if ( v75 )
      {
        v76 = (unsigned __int16 *)(v75 + 40);
        IoAddTriageDumpDataBlock(v75, 712);
        if ( *v76 )
        {
          IoAddTriageDumpDataBlock((int)v76, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v76 + 1), *v76);
        }
        v77 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 56LL);
        if ( *v77 )
        {
          IoAddTriageDumpDataBlock((int)v77, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 56LL));
        }
        v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 16LL);
        if ( v78 && *(_WORD *)(v78 + 56) )
        {
          IoAddTriageDumpDataBlock(v78 + 56, 2);
          v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v79 + 64), *(unsigned __int16 *)(v79 + 56));
        }
      }
      IoAddTriageDumpDataBlock(v22, *(unsigned __int16 *)(v22 + 2));
      v80 = *(_QWORD *)(v22 + 8);
      if ( v80 )
      {
        IoAddTriageDumpDataBlock(v80, *(__int16 *)(v80 + 2));
        v81 = (_WORD *)(*(_QWORD *)(v22 + 8) + 56LL);
        if ( *v81 )
        {
          IoAddTriageDumpDataBlock((int)v81, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v22 + 8) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(v22 + 8) + 56LL));
        }
      }
      v82 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
      if ( v82 )
      {
        v83 = (unsigned __int16 *)(v82 + 40);
        IoAddTriageDumpDataBlock(v82, 712);
        if ( *v83 )
        {
          IoAddTriageDumpDataBlock((int)v83, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v83 + 1), *v83);
        }
        v84 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 56LL);
        if ( *v84 )
        {
          IoAddTriageDumpDataBlock((int)v84, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 56LL));
        }
        v85 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL);
        if ( v85 && *(_WORD *)(v85 + 56) )
        {
          IoAddTriageDumpDataBlock(v85 + 56, 2);
          v86 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v86 + 64), *(unsigned __int16 *)(v86 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, v4, v22, 0LL);
    }
    ZwClose(v3);
    v125 &= ~0x40u;
    Handle = 0LL;
    v3 = 0LL;
    v9 = 0;
    PipSetDevNodeProblem(a1, 42, 0);
    PnpLogDuplicateDevice((PCWSTR)v110, (PCWSTR)v14);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL) == *(_QWORD *)(a1 + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObject((PVOID)v22);
    v13 = *(_QWORD *)(a1 + 16);
  }
  v23 = v94;
  if ( v3 )
  {
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1u,
      (__int64)v3,
      0LL,
      (__int64)&DEVPKEY_Device_LastKnownParent,
      18,
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 40LL) + 2,
      v94);
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1u,
      (__int64)v3,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v118,
      8u,
      v94);
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1u,
      (__int64)v3,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v94);
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1u,
      (__int64)v3,
      0LL,
      (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4u,
      v94);
  }
  if ( (v125 & 0x4000) != 0
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 1)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 14) )
  {
    PnpDisableDevice(a1, 29LL);
  }
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v26 = Handle;
    if ( Handle && v117 )
    {
      v63 = -1LL;
      do
        ++v63;
      while ( *((_WORD *)v117 + v63) );
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 14, 1, (__int64)v117, 2 * v63 + 2, v23);
    }
    LOBYTE(v25) = v95 == 1;
    PnpSaveDeviceCapabilities(a1, v124, v25);
    v27 = *(_QWORD *)(a1 + 48);
    LOBYTE(v23) = v95 == 1;
    v96 = v23;
    v101 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v27,
                (__int64)v26,
                11,
                (__int64)&v102,
                (__int64)&v97,
                (__int64)&v101) >= 0
      && v102 == 4
      && v101 == 4 )
    {
      v28 = v97;
      if ( (v97 & 0x20) == 0 )
      {
        if ( (v97 & 0x40) == 0 )
        {
LABEL_44:
          v29 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), a1 + 40);
          v30 = v99;
          if ( v29 < 0 )
            v30 = v29;
          v99 = v30;
          if ( !(_BYTE)v23
            && (unsigned int)PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               *(_QWORD *)(a1 + 48),
                               1u,
                               (__int64)v26,
                               0LL,
                               (__int64)&DEVPKEY_Device_FirmwareDependencies,
                               (__int64)&v114,
                               0LL,
                               0,
                               (__int64)&v101,
                               0) == -1073741789 )
          {
            v96 = v114 == 8210;
          }
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v3 = Handle;
          v2 = v95;
          goto LABEL_50;
        }
        v64 = 28;
LABEL_135:
        if ( (v125 & 0x100) != 0 )
        {
          v68 = *(_QWORD *)(a1 + 48);
          v97 = v28 | 0x400;
          CmSetDeviceRegProp(PiPnpRtlCtx, v68, (_DWORD)v26, 11, 4, (__int64)&v97, 4, v94);
        }
        else
        {
          if ( v64 == 28 )
          {
            FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(*(_QWORD *)(a1 + 48), v26);
            v64 = 28;
          }
          else
          {
            FailedInstallProblemStatus = 0;
          }
          PipSetDevNodeProblem(a1, v64, FailedInstallProblemStatus);
        }
        goto LABEL_44;
      }
      v64 = 18;
      if ( (v97 & 1) != 0 )
        goto LABEL_135;
    }
    else
    {
      v28 = 0;
      v64 = 1;
      v97 = 0;
    }
    LOBYTE(v23) = 1;
    v96 = v23;
    goto LABEL_135;
  }
LABEL_50:
  PnpQueryID(a1, 1LL, &v112, &v115);
  v31 = v112;
  KseAddHardwareId((PCWSTR)v112);
  PnpQueryID(a1, 2LL, &v111, &v107);
  PnpGenerateDeviceIdsHash(v31, v111, a1 + 684);
  PnpIrpQueryID(*(_QWORD *)(a1 + 32), 5LL, &SourceString);
  v32 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v32, 0);
      v32 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(a1, v31, v111, v98) >= 0 )
  {
    v33 = v98[0];
  }
  else
  {
    v33 = (v125 & 0x20) == 0 && (v125 & 0x40000) == 0 && (v125 & 0x10) != 0;
    if ( v32 )
      goto LABEL_63;
  }
  v34 = 0LL;
  if ( v2 != 1 )
    v34 = (__int64)v3;
  if ( (int)PipGenerateContainerID(a1, v34, v33, v32, &v119) >= 0 )
  {
    if ( v32 )
      ExFreePoolWithTag(v32, 0);
    v32 = (WCHAR *)v119;
    SourceString = v119;
  }
  if ( !v32 )
  {
    *(_QWORD *)(a1 + 664) = 0LL;
    *(_QWORD *)(a1 + 672) = 0LL;
    goto LABEL_65;
  }
LABEL_63:
  RtlInitUnicodeString(&DestinationString, v32);
  if ( RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664)) < 0 )
  {
    *(_QWORD *)(a1 + 664) = 0LL;
    *(_QWORD *)(a1 + 672) = 0LL;
  }
LABEL_65:
  v35 = KeGetCurrentThread();
  --v35->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(a1, 32);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( Handle && SourceString )
  {
    v36 = KeGetCurrentThread();
    --v36->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), (__int64)Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v37 = KeGetCurrentThread();
  --v37->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v38 = Handle;
  if ( !Handle )
    goto LABEL_81;
  v39 = v111;
  v40 = v115;
  v41 = v112;
  if ( v96 || v95 == 1 )
  {
    v43 = v93;
  }
  else
  {
    LOBYTE(BugCheckParameter4) = 1;
    v42 = PnpCheckDeviceIdsChanged(a1, Handle, v112, v115, BugCheckParameter4, &v93);
    v43 = v93;
    if ( v42 < 0 )
      v43 = 0;
    LOBYTE(v93) = v43;
    if ( !v43 )
    {
      LOBYTE(BugCheckParameter4a) = 0;
      v44 = PnpCheckDeviceIdsChanged(a1, v38, v39, v107, BugCheckParameter4a, &v93);
      v43 = v93;
      if ( v44 < 0 )
        v43 = 0;
    }
  }
  if ( v41 )
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)v38, 2, 7, (__int64)v41, v40, v94);
  v45 = v94;
  if ( v39 )
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)v38, 3, 7, (__int64)v39, v107, v94);
  if ( !v43 || (int)PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(a1 + 48), v38, &v113) < 0 || (v87 = v113) == 0 )
  {
LABEL_81:
    v46 = 18;
LABEL_82:
    v47 = v96;
    goto LABEL_83;
  }
  v88 = *(_QWORD *)(a1 + 48);
  v101 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v88,
              (__int64)v38,
              11,
              (__int64)&v102,
              (__int64)&v97,
              (__int64)&v101) < 0
    || v102 != 4
    || (v89 = v97, v101 != 4) )
  {
    v89 = 0;
  }
  v90 = *(_QWORD *)(a1 + 48);
  v97 = v87 | v89;
  CmSetDeviceRegProp(PiPnpRtlCtx, v90, (_DWORD)v38, 11, 4, (__int64)&v97, 4, v45);
  v46 = 18;
  if ( (v87 & 0x20) == 0 )
    goto LABEL_82;
  v47 = 1;
  PipSetDevNodeProblem(a1, 18, 0);
LABEL_83:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v48 = Handle;
  v49 = v108;
  if ( Handle )
  {
    v104 = 0LL;
    v50 = 0;
    v103 = 0;
    if ( v108 )
    {
      v51 = -1LL;
      do
        ++v51;
      while ( *((_WORD *)v108 + v51) );
      v50 = 2 * v51 + 2;
      if ( (unsigned int)PnpFindAlternateStringData(v108, v50, &v104, &v103) )
        v46 = 25;
    }
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1u,
      (__int64)v48,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      v46,
      (__int64)v49,
      v50,
      v94);
    if ( (int)PnpGetDeviceLocationStrings(a1, &v104, &v103) >= 0 )
    {
      v52 = v104;
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1u,
        (__int64)v48,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)v104,
        2 * v103,
        v94);
      ExFreePoolWithTag(v52, 0);
    }
  }
  PnpQueryBusInformation(a1);
  if ( v47 && (v125 & 0x4000) == 0 && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 14) )
    PpDevCfgProcessDevice(a1, v48, v95 == 1);
  PiQueryResourceRequirements(a1);
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 22)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0
     || *(_DWORD *)(a1 + 404) != 29
     && *(_DWORD *)(a1 + 404) != 14
     && *(_DWORD *)(a1 + 404) != 9
     && *(_DWORD *)(a1 + 404) != 3
     && *(_DWORD *)(a1 + 404) != 19) )
  {
    PnpIsDeviceInstanceEnabled(v48, a1 + 40, 1LL);
  }
  if ( v48 )
  {
    LOBYTE(v53) = v95 == 1;
    PnpInitializeSessionId(a1, v48, v53);
  }
  PiQueryAndAllocateBootResources(a1);
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    v54 = KeGetCurrentThread();
    --v54->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    LOBYTE(v55) = v95 == 1;
    PnpSaveDeviceCapabilities(a1, v124, v55);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PpHotSwapUpdateRemovalPolicy(a1);
    LOBYTE(v56) = 1;
    v57 = PpDeviceRegistration(a1 + 40, v56, a1 + 56, 0);
    if ( v57 < 0 )
      PipSetDevNodeProblem(a1, 19, v57);
    v49 = v108;
    v48 = Handle;
  }
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    PnpIrpDeviceEnumerated(v4);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v58, *(_QWORD *)(a1 + 48), 1);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v59, *(_QWORD *)(a1 + 48), 14);
    PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, v4);
    PnpNewDeviceNodeDependencyCheck(a1);
  }
  if ( v112 )
    ExFreePoolWithTag(v112, 0);
  if ( v111 )
    ExFreePoolWithTag(v111, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v48 )
    ZwClose(v48);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v117 )
    ExFreePoolWithTag(v117, 0);
  if ( v49 )
    ExFreePoolWithTag(v49, 0);
  if ( v110 )
    ExFreePoolWithTag(v110, 0);
  v60 = v116;
  if ( v116 )
    PiPnpRtlEndOperation((char *)v116);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    Template_p((__int64)v60, &KMPnPEvt_ProcessNewDevice_Stop, 0LL, a1);
  v61 = v99;
  if ( *(_DWORD *)(a1 + 568) )
    PnpTraceDockDeviceEnumeration(a1, v99);
  return v61;
}
