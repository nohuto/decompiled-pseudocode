/*
 * XREFs of PiProcessNewDeviceNode @ 0x140487BC4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1403F41E0 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14000962C (PipSetDevNodeState.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1400B0660 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpIrpDeviceEnumerated @ 0x1400B4A94 (PnpIrpDeviceEnumerated.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B3B4 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     wcschr @ 0x14014EF44 (wcschr.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     Template_p @ 0x1401CE864 (Template_p.c)
 *     Template_pz @ 0x1401D0F40 (Template_pz.c)
 *     PpvUtilFailDriver @ 0x1401D10B8 (PpvUtilFailDriver.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpSetPlugPlayEvent @ 0x1403F01EC (PnpSetPlugPlayEvent.c)
 *     PipClearDevNodeUserFlags @ 0x1403F14F4 (PipClearDevNodeUserFlags.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1403F23C8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipSetDevNodeFlags @ 0x1403F33A0 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1403F3414 (PipClearDevNodeFlags.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F4A34 (PnpDeviceObjectFromDeviceInstance.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140485DB8 (PiDcUpdateDeviceContainerMembership.c)
 *     PpIrpQueryCapabilities @ 0x140486BB0 (PpIrpQueryCapabilities.c)
 *     _PnpSetObjectProperty @ 0x140488D1C (_PnpSetObjectProperty.c)
 *     PnpQueryID @ 0x140488E8C (PnpQueryID.c)
 *     PnpIrpQueryID @ 0x140488F88 (PnpIrpQueryID.c)
 *     PnpCheckDeviceIdsChanged @ 0x140489604 (PnpCheckDeviceIdsChanged.c)
 *     PnpSaveDeviceCapabilities @ 0x14048990C (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x140489A34 (_CmSetDeviceRegProp.c)
 *     PnpQueryDeviceText @ 0x140489BE0 (PnpQueryDeviceText.c)
 *     PipSetDevNodeProblem @ 0x1404C5BDC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404C5E0C (PipClearDevNodeProblem.c)
 *     PpDeviceRegistration @ 0x1404C7C74 (PpDeviceRegistration.c)
 *     PiQueryAndAllocateBootResources @ 0x1404C881C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1404C90AC (PiQueryResourceRequirements.c)
 *     PnpGetDeviceLocationStrings @ 0x1404CD7D0 (PnpGetDeviceLocationStrings.c)
 *     PiQueryRemovableDeviceOverride @ 0x1404D4418 (PiQueryRemovableDeviceOverride.c)
 *     PnpFindAlternateStringData @ 0x1404E1C4C (PnpFindAlternateStringData.c)
 *     KseAddHardwareId @ 0x1404E3884 (KseAddHardwareId.c)
 *     PnpGenerateDeviceIdsHash @ 0x1404E63C8 (PnpGenerateDeviceIdsHash.c)
 *     PiCreateDeviceInstanceKey @ 0x1404E6D94 (PiCreateDeviceInstanceKey.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1404E7734 (PnpIsDeviceInstanceEnabled.c)
 *     PnpQueryBusInformation @ 0x1404E8ED8 (PnpQueryBusInformation.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1404E9064 (PpDevCfgProcessDeviceOperations.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1404E9B2C (PiBuildDeviceNodeInstancePath.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1404EAC1C (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x1404EB3C4 (PipGenerateContainerID.c)
 *     PnpInitializeSessionId @ 0x1404EC988 (PnpInitializeSessionId.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404EDDBC (PnpMapDeviceObjectToDeviceInstance.c)
 *     RtlGUIDFromString @ 0x1404FB370 (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1404FCE4C (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1404FE7B0 (_PnpGetObjectProperty.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x14050173C (PiPnpRtlBeginOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140506874 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeUserFlags @ 0x140545890 (PipSetDevNodeUserFlags.c)
 *     PipMakeGloballyUniqueId @ 0x14056F5C4 (PipMakeGloballyUniqueId.c)
 *     PnpDisableDevice @ 0x14062D740 (PnpDisableDevice.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1406390C4 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1406412DC (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDevice @ 0x14064134C (PpDevCfgProcessDevice.c)
 *     PpProfileCancelTransitioningDock @ 0x14064234C (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x140642EC8 (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x140649138 (PnpTraceDockDeviceEnumeration.c)
 *     PnpLogDuplicateDevice @ 0x140649C38 (PnpLogDuplicateDevice.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(__int64 a1)
{
  int v2; // r13d
  HANDLE v3; // r12
  ULONG_PTR v4; // r15
  int v5; // eax
  wchar_t *v6; // rax
  int v7; // ebx
  __int64 v8; // r8
  bool v9; // r14
  __int64 v10; // r8
  int v11; // eax
  int GloballyUniqueId; // ebx
  WCHAR *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  _QWORD *v20; // rax
  ULONG_PTR v21; // rbx
  BOOL v22; // r14d
  struct _KTHREAD *v23; // rax
  __int64 v24; // r8
  HANDLE v25; // rbx
  __int64 v26; // rdx
  unsigned int v27; // eax
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  PVOID v33; // rsi
  WCHAR *v34; // rbx
  __int64 v35; // r8
  HANDLE v36; // rdx
  struct _KTHREAD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _KTHREAD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  struct _KTHREAD *v45; // rax
  HANDLE v46; // rbx
  PVOID v47; // r12
  unsigned int v48; // r13d
  PVOID v49; // r14
  int v50; // eax
  char v51; // si
  int v52; // eax
  int v53; // r14d
  char v54; // r13
  int v55; // r12d
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  HANDLE v59; // rsi
  unsigned int v60; // ebx
  PVOID v61; // r14
  PVOID v62; // rbx
  __int64 v63; // r8
  struct _KTHREAD *v64; // rax
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rcx
  PVOID v73; // rcx
  unsigned int v74; // ebx
  __int64 v76; // rcx
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // esi
  bool v81; // zf
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rcx
  _WORD *v85; // rcx
  __int64 v86; // rcx
  unsigned __int16 *v87; // rdi
  _WORD *v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rcx
  _WORD *v92; // rcx
  __int64 v93; // rcx
  unsigned __int16 *v94; // rdi
  _WORD *v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 FailedInstallProblemStatus; // r8
  int v106; // eax
  int v107; // edx
  char v108; // al
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int BugCheckParameter4a; // [rsp+28h] [rbp-E0h]
  int v111; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v112; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v113; // [rsp+70h] [rbp-98h]
  int v114; // [rsp+74h] [rbp-94h] BYREF
  BOOL v115; // [rsp+78h] [rbp-90h]
  char v116[4]; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v117; // [rsp+80h] [rbp-88h]
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  int v119; // [rsp+90h] [rbp-78h] BYREF
  int v120; // [rsp+94h] [rbp-74h]
  int v121; // [rsp+98h] [rbp-70h] BYREF
  int v122; // [rsp+9Ch] [rbp-6Ch] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v124; // [rsp+A8h] [rbp-60h] BYREF
  PVOID P; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v126; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR *v127; // [rsp+C0h] [rbp-48h] BYREF
  PVOID v128; // [rsp+C8h] [rbp-40h] BYREF
  PVOID v129; // [rsp+D0h] [rbp-38h] BYREF
  PVOID v130; // [rsp+D8h] [rbp-30h]
  int v131; // [rsp+E0h] [rbp-28h] BYREF
  int v132; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v133; // [rsp+E8h] [rbp-20h] BYREF
  PVOID v134; // [rsp+F0h] [rbp-18h] BYREF
  PVOID v135; // [rsp+F8h] [rbp-10h] BYREF
  PVOID v136; // [rsp+100h] [rbp-8h] BYREF
  char v137[4]; // [rsp+108h] [rbp+0h] BYREF
  char v138[4]; // [rsp+10Ch] [rbp+4h] BYREF
  wchar_t *Str; // [rsp+110h] [rbp+8h] BYREF
  __int64 v140; // [rsp+118h] [rbp+10h] BYREF
  const WCHAR *v141; // [rsp+120h] [rbp+18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+128h] [rbp+20h] BYREF
  int v143; // [rsp+138h] [rbp+30h] BYREF
  int v144; // [rsp+13Ch] [rbp+34h]
  GUID Guid; // [rsp+178h] [rbp+70h] BYREF

  v136 = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    Template_p(a1, &KMPnPEvt_ProcessNewDevice_Start, 0LL, a1);
  LOBYTE(v120) = 0;
  LOBYTE(v115) = 0;
  v2 = 0;
  v117 = 0;
  v3 = 0LL;
  v113 = 0;
  v4 = *(_QWORD *)(a1 + 32);
  v140 = MEMORY[0xFFFFF78000000014];
  v112 = 0;
  v121 = 0;
  v114 = 0;
  LOBYTE(v111) = 0;
  Handle = 0LL;
  PiPnpRtlBeginOperation(&v136);
  PipClearDevNodeFlags(a1, 0x2000000);
  v130 = 0LL;
  P = 0LL;
  v5 = PnpQueryID(a1, 0LL, &Str, v137);
  if ( v5 < 0 )
  {
    v80 = v5;
    if ( v5 == -1073479624 )
      v80 = -1073741823;
    v117 = v80;
  }
  else
  {
    v130 = Str;
    v6 = wcschr(Str, 0x5Cu);
    *v6 = 0;
    P = v6 + 1;
  }
  v7 = PpIrpQueryCapabilities(v4, &v143);
  PipClearDevNodeUserFlags(a1, 2);
  v9 = 0;
  if ( v7 >= 0 )
  {
    if ( (v144 & 0x20000) != 0 )
      PipSetDevNodeUserFlags(a1);
    v9 = (v144 & 0x40) != 0;
  }
  if ( (v144 & 0x20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 568) == 4 )
      PpProfileCancelTransitioningDock(a1);
    *(_DWORD *)(a1 + 568) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 568) = 0;
  }
  PnpQueryDeviceText(*(_QWORD *)(a1 + 32), 0LL, v8, &v128);
  PnpQueryDeviceText(*(_QWORD *)(a1 + 32), 1LL, v10, &v135);
  v11 = PnpQueryID(a1, 3LL, &v124, v138);
  GloballyUniqueId = v11;
  if ( v9 )
  {
    if ( v11 == -1073741637 )
    {
      PipSetDevNodeProblem(a1, 9LL, 3221225659LL);
      PipSetDevNodeFlags(*(_QWORD *)(a1 + 16), 0x200000);
      PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
    }
  }
  else if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9 )
  {
    v76 = *(_QWORD *)(a1 + 16);
    if ( v76 != IopRootDeviceNode )
    {
      v127 = 0LL;
      v13 = (WCHAR *)v124;
      goto LABEL_129;
    }
  }
  v13 = (WCHAR *)v124;
  while ( 1 )
  {
    if ( GloballyUniqueId < 0 )
    {
      v81 = (*(_DWORD *)(a1 + 396) & 0x2000) == 0;
      v117 = GloballyUniqueId;
      if ( v81 || *(_DWORD *)(a1 + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v82 = 3LL;
          v83 = 3221225626LL;
        }
        else
        {
          v83 = (unsigned int)GloballyUniqueId;
          v82 = 19LL;
        }
        PipSetDevNodeProblem(a1, v82, v83);
      }
    }
    v16 = PiBuildDeviceNodeInstancePath(a1, v130, P, v13);
    if ( v16 < 0 )
      goto LABEL_161;
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
      Template_pz(v15, v14, v17, a1, *(_QWORD *)(a1 + 48));
    v18 = PiCreateDeviceInstanceKey(a1, &Handle, &v114);
    v2 = v114;
    v16 = v18;
    if ( v18 < 0 )
    {
      PipSetDevNodeProblem(a1, 19LL, (unsigned int)v18);
    }
    else
    {
      v19 = 0;
      if ( v114 == 1 )
        v19 = 0x20000;
      v113 = v19;
    }
    v3 = Handle;
    if ( v16 < 0 )
LABEL_161:
      v117 = v16;
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
      if ( Handle && v128 )
      {
        v99 = -1LL;
        do
          ++v99;
        while ( *((_WORD *)v128 + v99) );
        CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 1, 1, (__int64)v128, 2 * v99 + 2, v113);
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v100, v101, v102);
      v3 = Handle;
      v2 = v114;
      goto LABEL_28;
    }
    v20 = PnpDeviceObjectFromDeviceInstance(a1 + 40);
    v21 = (ULONG_PTR)v20;
    if ( !v20 )
      goto LABEL_28;
    if ( v20 == (_QWORD *)v4 )
    {
      ObfDereferenceObject(v20);
LABEL_28:
      if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 42 )
        PipClearDevNodeProblem(a1);
      break;
    }
    if ( !v9 )
    {
      PpvUtilFailDriver(0);
      IoAddTriageDumpDataBlock(v4, *(unsigned __int16 *)(v4 + 2));
      v84 = *(_QWORD *)(v4 + 8);
      if ( v84 )
      {
        IoAddTriageDumpDataBlock(v84, *(__int16 *)(v84 + 2));
        v85 = (_WORD *)(*(_QWORD *)(v4 + 8) + 56LL);
        if ( *v85 )
        {
          IoAddTriageDumpDataBlock((int)v85, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(v4 + 8) + 56LL));
        }
      }
      v86 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
      if ( v86 )
      {
        v87 = (unsigned __int16 *)(v86 + 40);
        IoAddTriageDumpDataBlock(v86, 720);
        if ( *v87 )
        {
          IoAddTriageDumpDataBlock((int)v87, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v87 + 1), *v87);
        }
        v88 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 56LL);
        if ( *v88 )
        {
          IoAddTriageDumpDataBlock((int)v88, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 56LL));
        }
        v89 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 16LL);
        if ( v89 && *(_WORD *)(v89 + 56) )
        {
          IoAddTriageDumpDataBlock(v89 + 56, 2);
          v90 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v90 + 64), *(unsigned __int16 *)(v90 + 56));
        }
      }
      IoAddTriageDumpDataBlock(v21, *(unsigned __int16 *)(v21 + 2));
      v91 = *(_QWORD *)(v21 + 8);
      if ( v91 )
      {
        IoAddTriageDumpDataBlock(v91, *(__int16 *)(v91 + 2));
        v92 = (_WORD *)(*(_QWORD *)(v21 + 8) + 56LL);
        if ( *v92 )
        {
          IoAddTriageDumpDataBlock((int)v92, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v21 + 8) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(v21 + 8) + 56LL));
        }
      }
      v93 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
      if ( v93 )
      {
        v94 = (unsigned __int16 *)(v93 + 40);
        IoAddTriageDumpDataBlock(v93, 720);
        if ( *v94 )
        {
          IoAddTriageDumpDataBlock((int)v94, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v94 + 1), *v94);
        }
        v95 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 56LL);
        if ( *v95 )
        {
          IoAddTriageDumpDataBlock((int)v95, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 56LL));
        }
        v96 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 16LL);
        if ( v96 && *(_WORD *)(v96 + 56) )
        {
          IoAddTriageDumpDataBlock(v96 + 56, 2);
          v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v97 + 64), *(unsigned __int16 *)(v97 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, v4, v21, 0LL);
    }
    ZwClose(v3);
    v144 &= ~0x40u;
    Handle = 0LL;
    v3 = 0LL;
    v9 = 0;
    PipSetDevNodeProblem(a1, 42LL, 0LL);
    PnpLogDuplicateDevice((PCWSTR)v130, v13);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 16LL) == *(_QWORD *)(a1 + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObject((PVOID)v21);
    v76 = *(_QWORD *)(a1 + 16);
LABEL_129:
    GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(v76 + 32), v13, &v127);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    v13 = v127;
    v124 = v127;
  }
  v22 = v113;
  if ( v3 )
  {
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastKnownParent,
      18,
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 40LL) + 2,
      v113);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v140,
      8,
      v113);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v113);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v113);
  }
  if ( (v144 & 0x4000) != 0
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 1)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 14) )
  {
    PnpDisableDevice(a1, 29LL);
  }
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v25 = Handle;
    if ( Handle && v135 )
    {
      v79 = -1LL;
      do
        ++v79;
      while ( *((_WORD *)v135 + v79) );
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 14, 1, (__int64)v135, 2 * v79 + 2, v22);
    }
    LOBYTE(v24) = v114 == 1;
    PnpSaveDeviceCapabilities(a1, &v143, v24);
    v26 = *(_QWORD *)(a1 + 48);
    LOBYTE(v22) = v114 == 1;
    v115 = v22;
    v119 = 4;
    if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v26, (_DWORD)v25, 11, (__int64)&v131, (__int64)&v112, (__int64)&v119, 0) >= 0
      && v131 == 4
      && v119 == 4 )
    {
      v27 = v112;
      if ( (v112 & 0x20) == 0 )
      {
        if ( (v112 & 0x40) == 0 )
        {
LABEL_41:
          v28 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), a1 + 40);
          v29 = v117;
          if ( v28 < 0 )
            v29 = v28;
          v117 = v29;
          if ( PnpBootMode )
          {
            *(_DWORD *)(a1 + 704) |= 0x1000u;
          }
          else
          {
            v77 = (unsigned __int8)v120;
            if ( (v112 & 0x40000) != 0 )
              v77 = 1;
            v120 = v77;
          }
          if ( !v22
            && (unsigned int)PnpGetObjectProperty(
                               PiPnpRtlCtx,
                               *(_QWORD *)(a1 + 48),
                               1,
                               (_DWORD)v25,
                               0LL,
                               (__int64)&DEVPKEY_Device_FirmwareDependencies,
                               (__int64)&v132,
                               0LL,
                               0,
                               (__int64)&v119,
                               0) == -1073741789 )
          {
            v115 = v132 == 8210;
          }
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v30, v31, v32);
          v3 = Handle;
          v2 = v114;
          goto LABEL_49;
        }
        v103 = 28LL;
LABEL_219:
        if ( (v144 & 0x100) != 0 )
        {
          v104 = *(_QWORD *)(a1 + 48);
          v112 = v27 | 0x400;
          CmSetDeviceRegProp(PiPnpRtlCtx, v104, (_DWORD)v25, 11, 4, (__int64)&v112, 4, v113);
        }
        else
        {
          if ( (_DWORD)v103 == 28 )
          {
            FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(*(_QWORD *)(a1 + 48), v25);
            v103 = 28LL;
          }
          else
          {
            FailedInstallProblemStatus = 0LL;
          }
          PipSetDevNodeProblem(a1, v103, FailedInstallProblemStatus);
        }
        goto LABEL_41;
      }
      v103 = 18LL;
      if ( (v112 & 1) != 0 )
        goto LABEL_219;
    }
    else
    {
      v27 = 0;
      v103 = 1LL;
      v112 = 0;
    }
    LOBYTE(v22) = 1;
    v115 = v22;
    goto LABEL_219;
  }
LABEL_49:
  PnpQueryID(a1, 1LL, &v134, &v133);
  v33 = v134;
  KseAddHardwareId((PCWSTR)v134);
  PnpQueryID(a1, 2LL, &v129, &v126);
  PnpGenerateDeviceIdsHash(v33, v129, a1 + 684);
  PnpIrpQueryID(*(_QWORD *)(a1 + 32), 5LL, &SourceString);
  v34 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v34, 0);
      v34 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(a1, v33, v129, v116) >= 0 )
  {
    LOBYTE(v35) = v116[0];
  }
  else
  {
    LOBYTE(v35) = (v144 & 0x20) == 0 && (v144 & 0x40000) == 0 && (v144 & 0x10) != 0;
    if ( v34 )
      goto LABEL_62;
  }
  v36 = 0LL;
  if ( v2 != 1 )
    v36 = v3;
  if ( (int)PipGenerateContainerID(a1, v36, v35, v34, &v141) >= 0 )
  {
    if ( v34 )
      ExFreePoolWithTag(v34, 0);
    v34 = (WCHAR *)v141;
    SourceString = v141;
  }
  if ( !v34 )
  {
    *(_QWORD *)(a1 + 664) = 0LL;
    *(_QWORD *)(a1 + 672) = 0LL;
    goto LABEL_64;
  }
LABEL_62:
  RtlInitUnicodeString(&DestinationString, v34);
  if ( RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664)) < 0 )
  {
    *(_QWORD *)(a1 + 664) = 0LL;
    *(_QWORD *)(a1 + 672) = 0LL;
  }
LABEL_64:
  v37 = KeGetCurrentThread();
  --v37->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(a1, 32);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v38, v39, v40);
  if ( Handle && SourceString )
  {
    v41 = KeGetCurrentThread();
    --v41->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), (int)Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v42, v43, v44);
  }
  v45 = KeGetCurrentThread();
  --v45->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v46 = Handle;
  if ( !Handle )
    goto LABEL_81;
  v47 = v129;
  v48 = v133;
  v49 = v134;
  if ( v115 || v114 == 1 )
  {
    v51 = v111;
  }
  else
  {
    LOBYTE(BugCheckParameter4) = 1;
    v50 = PnpCheckDeviceIdsChanged(a1, Handle, v134, v133, BugCheckParameter4, &v111);
    v51 = v111;
    if ( v50 < 0 )
      v51 = 0;
    LOBYTE(v111) = v51;
    if ( !v51 )
    {
      LOBYTE(BugCheckParameter4a) = 0;
      v52 = PnpCheckDeviceIdsChanged(a1, v46, v47, v126, BugCheckParameter4a, &v111);
      v51 = v111;
      if ( v52 < 0 )
        v51 = 0;
    }
  }
  if ( v49 )
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)v46, 2, 7, (__int64)v49, v48, v113);
  v53 = v113;
  if ( v47 )
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)v46, 3, 7, (__int64)v47, v126, v113);
  if ( v51 || (_BYTE)v120 )
  {
    v54 = v115;
    if ( v115 )
    {
      v107 = v112;
      v108 = v121;
    }
    else
    {
      v106 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(a1 + 48), v46, &v121);
      v107 = v112;
      if ( v106 < 0 )
      {
        v108 = 0;
      }
      else
      {
        v108 = v121;
        v107 = v121 | v112;
        v112 |= v121;
      }
    }
    if ( (v108 & 0x20) != 0 || (v107 & 0x40000) != 0 )
    {
      v112 = v107 & 0xFFFBFFFF;
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)v46, 11, 4, (__int64)&v112, 4, v53);
      LOBYTE(v107) = v112;
    }
    v55 = 18;
    if ( (v107 & 0x20) != 0 )
    {
      v54 = 1;
      PipSetDevNodeProblem(a1, 18LL, 0LL);
    }
  }
  else
  {
LABEL_81:
    v54 = v115;
    v55 = 18;
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v56, v57, v58);
  v59 = Handle;
  v60 = 0;
  v61 = v128;
  if ( Handle )
  {
    P = 0LL;
    v122 = 0;
    if ( v128 )
    {
      v78 = -1LL;
      do
        ++v78;
      while ( *((_WORD *)v128 + v78) );
      v60 = 2 * v78 + 2;
      if ( (unsigned int)PnpFindAlternateStringData(v128, v60, &P, &v122) )
        v55 = 25;
    }
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      v55,
      (__int64)v61,
      v60,
      v113);
    if ( (int)PnpGetDeviceLocationStrings(a1, &P, &v122) >= 0 )
    {
      v62 = P;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)P,
        2 * v122,
        v113);
      ExFreePoolWithTag(v62, 0);
    }
  }
  PnpQueryBusInformation(a1);
  if ( (v144 & 0x4000) == 0 && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 14) )
  {
    if ( v54 )
      PpDevCfgProcessDevice(a1, v59, v114 == 1);
    else
      PpDevCfgProcessDeviceOperations(a1, v59);
  }
  PiQueryResourceRequirements(a1);
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 22)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0
     || *(_DWORD *)(a1 + 404) != 29
     && *(_DWORD *)(a1 + 404) != 14
     && *(_DWORD *)(a1 + 404) != 9
     && *(_DWORD *)(a1 + 404) != 3
     && *(_DWORD *)(a1 + 404) != 19) )
  {
    PnpIsDeviceInstanceEnabled(v59, a1 + 40, 1LL);
  }
  if ( v59 )
  {
    LOBYTE(v63) = v114 == 1;
    PnpInitializeSessionId(a1, v59, v63);
  }
  PiQueryAndAllocateBootResources(a1);
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    v64 = KeGetCurrentThread();
    --v64->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    LOBYTE(v65) = v114 == 1;
    PnpSaveDeviceCapabilities(a1, &v143, v65);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v66, v67, v68);
    PpHotSwapUpdateRemovalPolicy(a1);
    LOBYTE(v69) = 1;
    v70 = PpDeviceRegistration(a1 + 40, v69, a1 + 56, 0LL);
    if ( v70 < 0 )
      PipSetDevNodeProblem(a1, 19LL, (unsigned int)v70);
    v61 = v128;
    v59 = Handle;
  }
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    PnpIrpDeviceEnumerated(v4);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v71, *(_QWORD *)(a1 + 48), 1LL);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v72, *(_QWORD *)(a1 + 48), 14LL);
    PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, (_QWORD *)v4);
    PnpNewDeviceNodeDependencyCheck(a1);
  }
  if ( v134 )
    ExFreePoolWithTag(v134, 0);
  if ( v129 )
    ExFreePoolWithTag(v129, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v59 )
    ZwClose(v59);
  if ( v124 )
    ExFreePoolWithTag(v124, 0);
  if ( v135 )
    ExFreePoolWithTag(v135, 0);
  if ( v61 )
    ExFreePoolWithTag(v61, 0);
  if ( v130 )
    ExFreePoolWithTag(v130, 0);
  v73 = v136;
  if ( v136 )
    PiPnpRtlEndOperation(v136);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    Template_p((__int64)v73, &KMPnPEvt_ProcessNewDevice_Stop, 0LL, a1);
  v74 = v117;
  if ( *(_DWORD *)(a1 + 568) )
    PnpTraceDockDeviceEnumeration(a1, v117);
  return v74;
}
