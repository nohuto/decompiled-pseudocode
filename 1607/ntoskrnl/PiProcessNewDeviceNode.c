/*
 * XREFs of PiProcessNewDeviceNode @ 0x140510338
 * Callers:
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14010AE28 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpIrpDeviceEnumerated @ 0x14010B080 (PnpIrpDeviceEnumerated.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     Template_p @ 0x1401CE5F8 (Template_p.c)
 *     Template_pz @ 0x1401D0D6C (Template_pz.c)
 *     PpvUtilFailDriver @ 0x1401D0EE4 (PpvUtilFailDriver.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PipClearDevNodeUserFlags @ 0x1403F03B8 (PipClearDevNodeUserFlags.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1403F128C (PnpNewDeviceNodeDependencyCheck.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1403F22D8 (PipClearDevNodeFlags.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404844A0 (PipClearDevNodeProblem.c)
 *     PnpSetPlugPlayEvent @ 0x14048A464 (PnpSetPlugPlayEvent.c)
 *     PnpFindAlternateStringData @ 0x1404C5250 (PnpFindAlternateStringData.c)
 *     PipGenerateContainerID @ 0x1404CD548 (PipGenerateContainerID.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404E9804 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14050D31C (PiBuildDeviceNodeInstancePath.c)
 *     PiCreateDeviceInstanceKey @ 0x14050D484 (PiCreateDeviceInstanceKey.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14050D7D8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     KseAddHardwareId @ 0x14050D830 (KseAddHardwareId.c)
 *     PnpGenerateDeviceIdsHash @ 0x14050D908 (PnpGenerateDeviceIdsHash.c)
 *     PiQueryRemovableDeviceOverride @ 0x14050D9CC (PiQueryRemovableDeviceOverride.c)
 *     PnpGetDeviceLocationStrings @ 0x14050DE68 (PnpGetDeviceLocationStrings.c)
 *     PnpQueryBusInformation @ 0x14050E634 (PnpQueryBusInformation.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14050E6F8 (PpDevCfgProcessDeviceOperations.c)
 *     PiQueryResourceRequirements @ 0x14050E808 (PiQueryResourceRequirements.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14050EA28 (PnpIsDeviceInstanceEnabled.c)
 *     PiQueryAndAllocateBootResources @ 0x14050EC10 (PiQueryAndAllocateBootResources.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x14050F3A0 (PpHotSwapUpdateRemovalPolicy.c)
 *     PpDeviceRegistration @ 0x14050F4A8 (PpDeviceRegistration.c)
 *     PnpInitializeSessionId @ 0x14050F95C (PnpInitializeSessionId.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14050FABC (PiDcUpdateDeviceContainerMembership.c)
 *     _PnpSetObjectProperty @ 0x140511490 (_PnpSetObjectProperty.c)
 *     PnpQueryID @ 0x140511600 (PnpQueryID.c)
 *     PnpIrpQueryID @ 0x1405116FC (PnpIrpQueryID.c)
 *     PnpCheckDeviceIdsChanged @ 0x140511D78 (PnpCheckDeviceIdsChanged.c)
 *     PnpSaveDeviceCapabilities @ 0x14051208C (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x1405121B4 (_CmSetDeviceRegProp.c)
 *     PnpQueryDeviceText @ 0x140512360 (PnpQueryDeviceText.c)
 *     PpIrpQueryCapabilities @ 0x140512E24 (PpIrpQueryCapabilities.c)
 *     PipSetDevNodeUserFlags @ 0x140545DD0 (PipSetDevNodeUserFlags.c)
 *     PipMakeGloballyUniqueId @ 0x14056FB04 (PipMakeGloballyUniqueId.c)
 *     PnpDisableDevice @ 0x14062D7F4 (PnpDisableDevice.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x140639178 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1406413C0 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDevice @ 0x140641430 (PpDevCfgProcessDevice.c)
 *     PpProfileCancelTransitioningDock @ 0x140642430 (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x140642FAC (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x14064921C (PnpTraceDockDeviceEnumeration.c)
 *     PnpLogDuplicateDevice @ 0x140649D1C (PnpLogDuplicateDevice.c)
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
  char v35; // r8
  __int64 v36; // rdx
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
  struct _KTHREAD *v63; // rax
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rcx
  PVOID v72; // rcx
  unsigned int v73; // ebx
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // esi
  bool v80; // zf
  int v81; // edx
  int v82; // r8d
  __int64 v83; // rcx
  _WORD *v84; // rcx
  __int64 v85; // rcx
  unsigned __int16 *v86; // rdi
  _WORD *v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rcx
  _WORD *v91; // rcx
  __int64 v92; // rcx
  unsigned __int16 *v93; // rdi
  _WORD *v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  int v102; // edx
  __int64 v103; // rdx
  int FailedInstallProblemStatus; // r8d
  int v105; // eax
  int v106; // edx
  char v107; // al
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int BugCheckParameter4a; // [rsp+28h] [rbp-E0h]
  int v110; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v111; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v112; // [rsp+70h] [rbp-98h]
  int v113; // [rsp+74h] [rbp-94h] BYREF
  BOOL v114; // [rsp+78h] [rbp-90h]
  char v115; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v116; // [rsp+80h] [rbp-88h]
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  int v118; // [rsp+90h] [rbp-78h] BYREF
  int v119; // [rsp+94h] [rbp-74h]
  int v120; // [rsp+98h] [rbp-70h] BYREF
  int v121; // [rsp+9Ch] [rbp-6Ch] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v123; // [rsp+A8h] [rbp-60h] BYREF
  PVOID P; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v125; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR *v126; // [rsp+C0h] [rbp-48h] BYREF
  PVOID v127; // [rsp+C8h] [rbp-40h] BYREF
  PVOID v128; // [rsp+D0h] [rbp-38h] BYREF
  PVOID v129; // [rsp+D8h] [rbp-30h]
  int v130; // [rsp+E0h] [rbp-28h] BYREF
  int v131; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v132; // [rsp+E8h] [rbp-20h] BYREF
  PVOID v133; // [rsp+F0h] [rbp-18h] BYREF
  PVOID v134; // [rsp+F8h] [rbp-10h] BYREF
  PVOID v135; // [rsp+100h] [rbp-8h] BYREF
  char v136[4]; // [rsp+108h] [rbp+0h] BYREF
  char v137[4]; // [rsp+10Ch] [rbp+4h] BYREF
  wchar_t *Str; // [rsp+110h] [rbp+8h] BYREF
  __int64 v139; // [rsp+118h] [rbp+10h] BYREF
  const WCHAR *v140; // [rsp+120h] [rbp+18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v142[4]; // [rsp+138h] [rbp+30h] BYREF
  int v143; // [rsp+13Ch] [rbp+34h]
  GUID Guid; // [rsp+178h] [rbp+70h] BYREF

  v135 = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    Template_p(a1, &KMPnPEvt_ProcessNewDevice_Start, 0LL, a1);
  LOBYTE(v119) = 0;
  LOBYTE(v114) = 0;
  v2 = 0;
  v116 = 0;
  v3 = 0LL;
  v112 = 0;
  v4 = *(_QWORD *)(a1 + 32);
  v139 = MEMORY[0xFFFFF78000000014];
  v111 = 0;
  v120 = 0;
  v113 = 0;
  LOBYTE(v110) = 0;
  Handle = 0LL;
  PiPnpRtlBeginOperation((__int64 **)&v135);
  PipClearDevNodeFlags(a1, 0x2000000);
  v129 = 0LL;
  P = 0LL;
  v5 = PnpQueryID(a1, 0LL, &Str, v136);
  if ( v5 < 0 )
  {
    v79 = v5;
    if ( v5 == -1073479624 )
      v79 = -1073741823;
    v116 = v79;
  }
  else
  {
    v129 = Str;
    v6 = wcschr(Str, 0x5Cu);
    *v6 = 0;
    P = v6 + 1;
  }
  Capabilities = PpIrpQueryCapabilities(v4, v142);
  PipClearDevNodeUserFlags(a1, 2);
  v9 = 0;
  if ( Capabilities >= 0 )
  {
    if ( (v143 & 0x20000) != 0 )
      PipSetDevNodeUserFlags(a1);
    v9 = (v143 & 0x40) != 0;
  }
  if ( (v143 & 0x20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 568) == 4 )
      PpProfileCancelTransitioningDock(a1);
    *(_DWORD *)(a1 + 568) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 568) = 0;
  }
  PnpQueryDeviceText(*(_QWORD *)(a1 + 32), 0LL, v8, &v127);
  PnpQueryDeviceText(*(_QWORD *)(a1 + 32), 1LL, v10, &v134);
  v11 = PnpQueryID(a1, 3LL, &v123, v137);
  GloballyUniqueId = v11;
  if ( v9 )
  {
    if ( v11 == -1073741637 )
    {
      PipSetDevNodeProblem(a1, 9, -1073741637);
      PipSetDevNodeFlags(*(_QWORD *)(a1 + 16), 0x200000);
      PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
    }
  }
  else if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9 )
  {
    v75 = *(_QWORD *)(a1 + 16);
    if ( v75 != IopRootDeviceNode )
    {
      v126 = 0LL;
      v13 = (WCHAR *)v123;
      goto LABEL_129;
    }
  }
  v13 = (WCHAR *)v123;
  while ( 1 )
  {
    if ( GloballyUniqueId < 0 )
    {
      v80 = (*(_DWORD *)(a1 + 396) & 0x2000) == 0;
      v116 = GloballyUniqueId;
      if ( v80 || *(_DWORD *)(a1 + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v81 = 3;
          v82 = -1073741670;
        }
        else
        {
          v82 = GloballyUniqueId;
          v81 = 19;
        }
        PipSetDevNodeProblem(a1, v81, v82);
      }
    }
    v16 = PiBuildDeviceNodeInstancePath(a1, (__int64)v129, (__int64)P, (__int64)v13);
    if ( v16 < 0 )
      goto LABEL_161;
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
      Template_pz(v15, v14, v17, a1, *(_QWORD *)(a1 + 48));
    v18 = PiCreateDeviceInstanceKey(a1, &Handle, &v113);
    v2 = v113;
    v16 = v18;
    if ( v18 < 0 )
    {
      PipSetDevNodeProblem(a1, 19, v18);
    }
    else
    {
      v19 = 0;
      if ( v113 == 1 )
        v19 = 0x20000;
      v112 = v19;
    }
    v3 = Handle;
    if ( v16 < 0 )
LABEL_161:
      v116 = v16;
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
      if ( Handle && v127 )
      {
        v98 = -1LL;
        do
          ++v98;
        while ( *((_WORD *)v127 + v98) );
        CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 1, 1, (__int64)v127, 2 * v98 + 2, v112);
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v99, v100, v101);
      v3 = Handle;
      v2 = v113;
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
      v83 = *(_QWORD *)(v4 + 8);
      if ( v83 )
      {
        IoAddTriageDumpDataBlock(v83, *(__int16 *)(v83 + 2));
        v84 = (_WORD *)(*(_QWORD *)(v4 + 8) + 56LL);
        if ( *v84 )
        {
          IoAddTriageDumpDataBlock((int)v84, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(v4 + 8) + 56LL));
        }
      }
      v85 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
      if ( v85 )
      {
        v86 = (unsigned __int16 *)(v85 + 40);
        IoAddTriageDumpDataBlock(v85, 720);
        if ( *v86 )
        {
          IoAddTriageDumpDataBlock((int)v86, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v86 + 1), *v86);
        }
        v87 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 56LL);
        if ( *v87 )
        {
          IoAddTriageDumpDataBlock((int)v87, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 56LL));
        }
        v88 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 16LL);
        if ( v88 && *(_WORD *)(v88 + 56) )
        {
          IoAddTriageDumpDataBlock(v88 + 56, 2);
          v89 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v89 + 64), *(unsigned __int16 *)(v89 + 56));
        }
      }
      IoAddTriageDumpDataBlock(v21, *(unsigned __int16 *)(v21 + 2));
      v90 = *(_QWORD *)(v21 + 8);
      if ( v90 )
      {
        IoAddTriageDumpDataBlock(v90, *(__int16 *)(v90 + 2));
        v91 = (_WORD *)(*(_QWORD *)(v21 + 8) + 56LL);
        if ( *v91 )
        {
          IoAddTriageDumpDataBlock((int)v91, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v21 + 8) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(v21 + 8) + 56LL));
        }
      }
      v92 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
      if ( v92 )
      {
        v93 = (unsigned __int16 *)(v92 + 40);
        IoAddTriageDumpDataBlock(v92, 720);
        if ( *v93 )
        {
          IoAddTriageDumpDataBlock((int)v93, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v93 + 1), *v93);
        }
        v94 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 56LL);
        if ( *v94 )
        {
          IoAddTriageDumpDataBlock((int)v94, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 56LL));
        }
        v95 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 16LL);
        if ( v95 && *(_WORD *)(v95 + 56) )
        {
          IoAddTriageDumpDataBlock(v95 + 56, 2);
          v96 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v96 + 64), *(unsigned __int16 *)(v96 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, v4, v21, 0LL);
    }
    ZwClose(v3);
    v143 &= ~0x40u;
    Handle = 0LL;
    v3 = 0LL;
    v9 = 0;
    PipSetDevNodeProblem(a1, 42, 0);
    PnpLogDuplicateDevice((PCWSTR)v129, v13);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) + 16LL) == *(_QWORD *)(a1 + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObject((PVOID)v21);
    v75 = *(_QWORD *)(a1 + 16);
LABEL_129:
    GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(v75 + 32), v13, &v126);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    v13 = v126;
    v123 = v126;
  }
  v22 = v112;
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
      v112);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v139,
      8,
      v112);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v112);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v112);
  }
  if ( (v143 & 0x4000) != 0
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
    if ( Handle && v134 )
    {
      v78 = -1LL;
      do
        ++v78;
      while ( *((_WORD *)v134 + v78) );
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 14, 1, (__int64)v134, 2 * v78 + 2, v22);
    }
    LOBYTE(v24) = v113 == 1;
    PnpSaveDeviceCapabilities(a1, v142, v24);
    v26 = *(_QWORD *)(a1 + 48);
    LOBYTE(v22) = v113 == 1;
    v114 = v22;
    v118 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v26,
                (__int64)v25,
                11,
                (__int64)&v130,
                (__int64)&v111,
                (__int64)&v118,
                0) >= 0
      && v130 == 4
      && v118 == 4 )
    {
      v27 = v111;
      if ( (v111 & 0x20) == 0 )
      {
        if ( (v111 & 0x40) == 0 )
        {
LABEL_41:
          v28 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), a1 + 40);
          v29 = v116;
          if ( v28 < 0 )
            v29 = v28;
          v116 = v29;
          if ( PnpBootMode )
          {
            *(_DWORD *)(a1 + 704) |= 0x1000u;
          }
          else
          {
            v76 = (unsigned __int8)v119;
            if ( (v111 & 0x40000) != 0 )
              v76 = 1;
            v119 = v76;
          }
          if ( !v22
            && (unsigned int)PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               *(_QWORD *)(a1 + 48),
                               1u,
                               (__int64)v25,
                               0LL,
                               (__int64)&DEVPKEY_Device_FirmwareDependencies,
                               (__int64)&v131,
                               0LL,
                               0,
                               (__int64)&v118,
                               0) == -1073741789 )
          {
            v114 = v131 == 8210;
          }
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v30, v31, v32);
          v3 = Handle;
          v2 = v113;
          goto LABEL_49;
        }
        v102 = 28;
LABEL_219:
        if ( (v143 & 0x100) != 0 )
        {
          v103 = *(_QWORD *)(a1 + 48);
          v111 = v27 | 0x400;
          CmSetDeviceRegProp(PiPnpRtlCtx, v103, (_DWORD)v25, 11, 4, (__int64)&v111, 4, v112);
        }
        else
        {
          if ( v102 == 28 )
          {
            FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(*(_QWORD *)(a1 + 48), v25);
            v102 = 28;
          }
          else
          {
            FailedInstallProblemStatus = 0;
          }
          PipSetDevNodeProblem(a1, v102, FailedInstallProblemStatus);
        }
        goto LABEL_41;
      }
      v102 = 18;
      if ( (v111 & 1) != 0 )
        goto LABEL_219;
    }
    else
    {
      v27 = 0;
      v102 = 1;
      v111 = 0;
    }
    LOBYTE(v22) = 1;
    v114 = v22;
    goto LABEL_219;
  }
LABEL_49:
  PnpQueryID(a1, 1LL, &v133, &v132);
  v33 = v133;
  KseAddHardwareId((PCWSTR)v133);
  PnpQueryID(a1, 2LL, &v128, &v125);
  PnpGenerateDeviceIdsHash((__int64)v33, (__int64)v128, (_DWORD *)(a1 + 684));
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
  if ( (int)PiQueryRemovableDeviceOverride(a1, v33, v128, (bool *)&v115) >= 0 )
  {
    v35 = v115;
  }
  else
  {
    v35 = (v143 & 0x20) == 0 && (v143 & 0x40000) == 0 && (v143 & 0x10) != 0;
    if ( v34 )
      goto LABEL_62;
  }
  v36 = 0LL;
  if ( v2 != 1 )
    v36 = (__int64)v3;
  if ( (int)PipGenerateContainerID(a1, v36, v35, v34, &v140) >= 0 )
  {
    if ( v34 )
      ExFreePoolWithTag(v34, 0);
    v34 = (WCHAR *)v140;
    SourceString = v140;
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
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), (__int64)Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v42, v43, v44);
  }
  v45 = KeGetCurrentThread();
  --v45->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v46 = Handle;
  if ( !Handle )
    goto LABEL_81;
  v47 = v128;
  v48 = v132;
  v49 = v133;
  if ( v114 || v113 == 1 )
  {
    v51 = v110;
  }
  else
  {
    LOBYTE(BugCheckParameter4) = 1;
    v50 = PnpCheckDeviceIdsChanged(a1, Handle, v133, v132, BugCheckParameter4, &v110);
    v51 = v110;
    if ( v50 < 0 )
      v51 = 0;
    LOBYTE(v110) = v51;
    if ( !v51 )
    {
      LOBYTE(BugCheckParameter4a) = 0;
      v52 = PnpCheckDeviceIdsChanged(a1, v46, v47, v125, BugCheckParameter4a, &v110);
      v51 = v110;
      if ( v52 < 0 )
        v51 = 0;
    }
  }
  if ( v49 )
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)v46, 2, 7, (__int64)v49, v48, v112);
  v53 = v112;
  if ( v47 )
    CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)v46, 3, 7, (__int64)v47, v125, v112);
  if ( v51 || (_BYTE)v119 )
  {
    v54 = v114;
    if ( v114 )
    {
      v106 = v111;
      v107 = v120;
    }
    else
    {
      v105 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(a1 + 48), v46, &v120);
      v106 = v111;
      if ( v105 < 0 )
      {
        v107 = 0;
      }
      else
      {
        v107 = v120;
        v106 = v120 | v111;
        v111 |= v120;
      }
    }
    if ( (v107 & 0x20) != 0 || (v106 & 0x40000) != 0 )
    {
      v111 = v106 & 0xFFFBFFFF;
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)v46, 11, 4, (__int64)&v111, 4, v53);
      LOBYTE(v106) = v111;
    }
    v55 = 18;
    if ( (v106 & 0x20) != 0 )
    {
      v54 = 1;
      PipSetDevNodeProblem(a1, 18, 0);
    }
  }
  else
  {
LABEL_81:
    v54 = v114;
    v55 = 18;
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v56, v57, v58);
  v59 = Handle;
  v60 = 0;
  v61 = v127;
  if ( Handle )
  {
    P = 0LL;
    v121 = 0;
    if ( v127 )
    {
      v77 = -1LL;
      do
        ++v77;
      while ( *((_WORD *)v127 + v77) );
      v60 = 2 * v77 + 2;
      if ( (unsigned int)PnpFindAlternateStringData(v127, v60, &P, &v121) )
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
      v112);
    if ( (int)PnpGetDeviceLocationStrings(a1, (char **)&P, &v121) >= 0 )
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
        2 * v121,
        v112);
      ExFreePoolWithTag(v62, 0);
    }
  }
  PnpQueryBusInformation(a1);
  if ( (v143 & 0x4000) == 0 && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 14) )
  {
    if ( v54 )
      PpDevCfgProcessDevice(a1, v59, v113 == 1);
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
    PnpIsDeviceInstanceEnabled(v59, (unsigned __int16 *)(a1 + 40), 1);
  }
  if ( v59 )
    PnpInitializeSessionId(a1, (__int64)v59, v113 == 1);
  PiQueryAndAllocateBootResources(a1);
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    v63 = KeGetCurrentThread();
    --v63->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    LOBYTE(v64) = v113 == 1;
    PnpSaveDeviceCapabilities(a1, v142, v64);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v65, v66, v67);
    PpHotSwapUpdateRemovalPolicy(a1);
    LOBYTE(v68) = 1;
    v69 = PpDeviceRegistration(a1 + 40, v68, a1 + 56, 0);
    if ( v69 < 0 )
      PipSetDevNodeProblem(a1, 19, v69);
    v61 = v127;
    v59 = Handle;
  }
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    PnpIrpDeviceEnumerated(v4);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v70, *(_QWORD *)(a1 + 48), 1);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v71, *(_QWORD *)(a1 + 48), 14);
    PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, (_QWORD *)v4);
    PnpNewDeviceNodeDependencyCheck(a1);
  }
  if ( v133 )
    ExFreePoolWithTag(v133, 0);
  if ( v128 )
    ExFreePoolWithTag(v128, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v59 )
    ZwClose(v59);
  if ( v123 )
    ExFreePoolWithTag(v123, 0);
  if ( v134 )
    ExFreePoolWithTag(v134, 0);
  if ( v61 )
    ExFreePoolWithTag(v61, 0);
  if ( v129 )
    ExFreePoolWithTag(v129, 0);
  v72 = v135;
  if ( v135 )
    PiPnpRtlEndOperation((char *)v135);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    Template_p((__int64)v72, &KMPnPEvt_ProcessNewDevice_Stop, 0LL, a1);
  v73 = v116;
  if ( *(_DWORD *)(a1 + 568) )
    PnpTraceDockDeviceEnumeration(a1, v116);
  return v73;
}
