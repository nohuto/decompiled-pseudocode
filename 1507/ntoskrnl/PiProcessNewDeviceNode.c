/*
 * XREFs of PiProcessNewDeviceNode @ 0x1404D7558
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14012B9FC (PpMarkDeviceStackExtensionFlag.c)
 *     PnpIrpDeviceEnumerated @ 0x14012F948 (PnpIrpDeviceEnumerated.c)
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     wcschr @ 0x140173B98 (wcschr.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     Template_p @ 0x1401FBC84 (Template_p.c)
 *     Template_pz @ 0x1401FD5E4 (Template_pz.c)
 *     PpvUtilFailDriver @ 0x1401FD690 (PpvUtilFailDriver.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpGetDeviceLocationStrings @ 0x14040D898 (PnpGetDeviceLocationStrings.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     PiQueryAndAllocateBootResources @ 0x14045CAAC (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x14045D384 (PiQueryResourceRequirements.c)
 *     PnpSetPlugPlayEvent @ 0x140460814 (PnpSetPlugPlayEvent.c)
 *     PipClearDevNodeUserFlags @ 0x1404615D0 (PipClearDevNodeUserFlags.c)
 *     PpIrpQueryCapabilities @ 0x140461B3C (PpIrpQueryCapabilities.c)
 *     PnpIrpQueryID @ 0x1404D628C (PnpIrpQueryID.c)
 *     PnpQueryID @ 0x1404D6380 (PnpQueryID.c)
 *     _PnpSetObjectProperty @ 0x1404D8694 (_PnpSetObjectProperty.c)
 *     PnpSaveDeviceCapabilities @ 0x1404D8990 (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x1404D8AB8 (_CmSetDeviceRegProp.c)
 *     PnpQueryDeviceText @ 0x1404D92F0 (PnpQueryDeviceText.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404D93C4 (PnpCheckDeviceIdsChanged.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DF4DC (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404E3C7C (PnpNewDeviceNodeDependencyCheck.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     PpDeviceRegistration @ 0x1404E660C (PpDeviceRegistration.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404E66AC (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140534E10 (PiBuildDeviceNodeInstancePath.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140537510 (PiDcUpdateDeviceContainerMembership.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140538C94 (PipClearDevNodeProblem.c)
 *     PiQueryRemovableDeviceOverride @ 0x140540D3C (PiQueryRemovableDeviceOverride.c)
 *     KseAddHardwareId @ 0x14054B3B8 (KseAddHardwareId.c)
 *     PnpFindAlternateStringData @ 0x14054DA2C (PnpFindAlternateStringData.c)
 *     PnpGenerateDeviceIdsHash @ 0x14054DE28 (PnpGenerateDeviceIdsHash.c)
 *     PnpQueryBusInformation @ 0x14054E8A4 (PnpQueryBusInformation.c)
 *     PiCreateDeviceInstanceKey @ 0x14054EC5C (PiCreateDeviceInstanceKey.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140550338 (PnpIsDeviceInstanceEnabled.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140553DE4 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140554BA8 (PipGenerateContainerID.c)
 *     PnpInitializeSessionId @ 0x1405551FC (PnpInitializeSessionId.c)
 *     PipSetDevNodeUserFlags @ 0x140581810 (PipSetDevNodeUserFlags.c)
 *     PpDevCfgProcessDevice @ 0x140587928 (PpDevCfgProcessDevice.c)
 *     PipMakeGloballyUniqueId @ 0x1405B1CF8 (PipMakeGloballyUniqueId.c)
 *     PnpDisableDevice @ 0x14067E214 (PnpDisableDevice.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14068CEDC (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x14068DAC4 (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x14068E7C8 (PnpSetInvalidIDEvent.c)
 *     PnpLogDuplicateDevice @ 0x140693F58 (PnpLogDuplicateDevice.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(__int64 a1)
{
  HANDLE v2; // r14
  ULONG_PTR v3; // r13
  wchar_t *v4; // r12
  int v5; // eax
  wchar_t *v6; // rax
  int v7; // ebx
  __int64 v8; // r8
  bool v9; // r15
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
  int v20; // eax
  void *v21; // rax
  ULONG_PTR v22; // rbx
  int v23; // r12d
  BOOL v24; // esi
  int v25; // r15d
  struct _KTHREAD *v26; // rax
  __int64 v27; // r8
  HANDLE v28; // rbx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  PVOID v35; // rsi
  WCHAR *v36; // rbx
  __int64 v37; // r8
  HANDLE v38; // rdx
  struct _KTHREAD *v39; // rax
  struct _KTHREAD *v40; // rcx
  __int16 v41; // ax
  struct _KTHREAD *v42; // rax
  struct _KTHREAD *v43; // rcx
  __int16 v44; // ax
  struct _KTHREAD *v45; // rax
  HANDLE v46; // rbx
  PVOID v47; // r15
  unsigned int v48; // r12d
  PVOID v49; // r14
  int v50; // eax
  char v51; // si
  int v52; // eax
  int v53; // r14d
  char v54; // r12
  struct _KTHREAD *v55; // rcx
  unsigned int v56; // ebx
  __int16 v57; // ax
  HANDLE v58; // rsi
  PVOID v59; // r14
  PVOID v60; // rbx
  __int64 v61; // r8
  struct _KTHREAD *v62; // rax
  __int64 v63; // r8
  struct _KTHREAD *v64; // rcx
  __int16 v65; // ax
  __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rcx
  PVOID v70; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v76; // rcx
  __int16 v77; // ax
  __int64 v78; // rdx
  int v79; // esi
  bool v80; // zf
  __int64 v81; // rdx
  __int64 v82; // r8
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
  __int64 v97; // rax
  int v98; // esi
  __int64 v99; // rdx
  int v100; // eax
  __int64 v101; // rdx
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int BugCheckParameter4a; // [rsp+28h] [rbp-E0h]
  int v104; // [rsp+68h] [rbp-A0h] BYREF
  int v105; // [rsp+6Ch] [rbp-9Ch] BYREF
  BOOL v106; // [rsp+70h] [rbp-98h]
  int v107; // [rsp+74h] [rbp-94h]
  __int64 v108; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  char v110[4]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v111; // [rsp+8Ch] [rbp-7Ch]
  int v112; // [rsp+90h] [rbp-78h] BYREF
  int v113; // [rsp+94h] [rbp-74h] BYREF
  int v114; // [rsp+98h] [rbp-70h] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp-68h] BYREF
  PVOID P; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v117; // [rsp+B0h] [rbp-58h] BYREF
  PCWSTR v118; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v119; // [rsp+C0h] [rbp-48h] BYREF
  PVOID v120; // [rsp+C8h] [rbp-40h]
  PVOID v121; // [rsp+D0h] [rbp-38h] BYREF
  PVOID v122; // [rsp+D8h] [rbp-30h] BYREF
  int v123; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v124; // [rsp+E4h] [rbp-24h] BYREF
  PVOID v125; // [rsp+E8h] [rbp-20h] BYREF
  int v126; // [rsp+F0h] [rbp-18h] BYREF
  PVOID v127; // [rsp+F8h] [rbp-10h] BYREF
  PVOID v128; // [rsp+100h] [rbp-8h] BYREF
  __int64 v129; // [rsp+108h] [rbp+0h] BYREF
  const WCHAR *v130; // [rsp+110h] [rbp+8h] BYREF
  int v131; // [rsp+118h] [rbp+10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp+18h] BYREF
  int v133; // [rsp+130h] [rbp+28h] BYREF
  wchar_t *Str; // [rsp+138h] [rbp+30h] BYREF
  int v135; // [rsp+148h] [rbp+40h] BYREF
  int v136; // [rsp+14Ch] [rbp+44h]
  GUID Guid; // [rsp+188h] [rbp+80h] BYREF

  v128 = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    Template_p(a1, &KMPnPEvt_ProcessNewDevice_Start, 0LL, a1);
  LOBYTE(v106) = 0;
  v111 = 0;
  v2 = 0LL;
  v107 = 0;
  v3 = *(_QWORD *)(a1 + 32);
  v129 = MEMORY[0xFFFFF78000000014];
  v105 = 0;
  LOBYTE(v104) = 0;
  Handle = 0LL;
  PiPnpRtlBeginOperation((__int64 **)&v128);
  PipClearDevNodeFlags(a1, 0x2000000LL);
  v120 = 0LL;
  v4 = 0LL;
  v5 = PnpQueryID(a1, 0, (ULONG_PTR *)&Str, &v131);
  if ( v5 < 0 )
  {
    v79 = v5;
    if ( v5 == -1073479624 )
      v79 = -1073741823;
    v111 = v79;
  }
  else
  {
    v120 = Str;
    v6 = wcschr(Str, 0x5Cu);
    *v6 = 0;
    v4 = v6 + 1;
  }
  v7 = PpIrpQueryCapabilities(v3, &v135);
  PipClearDevNodeUserFlags(a1, 2);
  v9 = 0;
  if ( v7 >= 0 )
  {
    if ( (v136 & 0x20000) != 0 )
      PipSetDevNodeUserFlags(a1);
    v9 = (v136 & 0x40) != 0;
  }
  if ( (v136 & 0x20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 568) == 4 )
      PpProfileCancelTransitioningDock(a1);
    *(_DWORD *)(a1 + 568) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 568) = 0;
  }
  PnpQueryDeviceText(*(_QWORD *)(a1 + 32), 0LL, v8, &v119);
  PnpQueryDeviceText(*(_QWORD *)(a1 + 32), 1LL, v10, &v127);
  v11 = PnpQueryID(a1, 3, (ULONG_PTR *)&P, &v133);
  GloballyUniqueId = v11;
  if ( v9 )
  {
    if ( v11 == -1073741637 )
    {
      PipSetDevNodeProblem(a1, 9LL, 3221225659LL);
      PipSetDevNodeFlags(*(_QWORD *)(a1 + 16), 0x200000LL);
      PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
    }
    goto LABEL_132;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9
    || (v13 = *(_QWORD *)(a1 + 16), v13 == IopRootDeviceNode) )
  {
LABEL_132:
    v14 = P;
    goto LABEL_18;
  }
  v118 = 0LL;
  v14 = P;
  while ( 1 )
  {
    GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(v13 + 32), v14, &v118);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    v14 = (void *)v118;
    P = (PVOID)v118;
LABEL_18:
    if ( GloballyUniqueId < 0 )
    {
      v80 = (*(_DWORD *)(a1 + 396) & 0x2000) == 0;
      v111 = GloballyUniqueId;
      if ( v80 || *(_DWORD *)(a1 + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v81 = 3LL;
          v82 = 3221225626LL;
        }
        else
        {
          v82 = (unsigned int)GloballyUniqueId;
          v81 = 19LL;
        }
        PipSetDevNodeProblem(a1, v81, v82);
      }
    }
    v17 = PiBuildDeviceNodeInstancePath(a1, v120, v4, v14);
    if ( v17 < 0 )
      goto LABEL_187;
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
      Template_pz(v16, v15, v18, a1, *(_QWORD *)(a1 + 48));
    v19 = PiCreateDeviceInstanceKey(a1, &Handle, &v105);
    v17 = v19;
    if ( v19 < 0 )
    {
      PipSetDevNodeProblem(a1, 19LL, (unsigned int)v19);
    }
    else
    {
      v20 = 0;
      if ( v105 == 1 )
        v20 = 0x20000;
      v107 = v20;
    }
    v2 = Handle;
    if ( v17 < 0 )
LABEL_187:
      v111 = v17;
    PpMarkDeviceStackExtensionFlag(v3, 16, 1);
    PipSetDevNodeState(a1, 770);
    if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9 )
      break;
    if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && (*(_DWORD *)(a1 + 404) == 3 || *(_DWORD *)(a1 + 404) == 19) )
      break;
    if ( v105 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      if ( Handle && v119 )
      {
        v97 = -1LL;
        do
          ++v97;
        while ( *((_WORD *)v119 + v97) );
        CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 1, 1, (__int64)v119, 2 * v97 + 2, v107);
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      v76 = KeGetCurrentThread();
      v77 = v76->KernelApcDisable + 1;
      v76->KernelApcDisable = v77;
      if ( !v77
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v76->ApcState.ApcListHead[0].Flink != &v76->152
        && !v76->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v2 = Handle;
      goto LABEL_31;
    }
    v21 = (void *)PnpDeviceObjectFromDeviceInstance(a1 + 40);
    v22 = (ULONG_PTR)v21;
    if ( !v21 )
      goto LABEL_31;
    if ( v21 == (void *)v3 )
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
      IoAddTriageDumpDataBlock(v3, *(unsigned __int16 *)(v3 + 2));
      v83 = *(_QWORD *)(v3 + 8);
      if ( v83 )
      {
        IoAddTriageDumpDataBlock(v83, *(__int16 *)(v83 + 2));
        v84 = (_WORD *)(*(_QWORD *)(v3 + 8) + 56LL);
        if ( *v84 )
        {
          IoAddTriageDumpDataBlock((int)v84, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(v3 + 8) + 56LL));
        }
      }
      v85 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
      if ( v85 )
      {
        v86 = (unsigned __int16 *)(v85 + 40);
        IoAddTriageDumpDataBlock(v85, 712);
        if ( *v86 )
        {
          IoAddTriageDumpDataBlock((int)v86, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v86 + 1), *v86);
        }
        v87 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 56LL);
        if ( *v87 )
        {
          IoAddTriageDumpDataBlock((int)v87, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 56LL));
        }
        v88 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 16LL);
        if ( v88 && *(_WORD *)(v88 + 56) )
        {
          IoAddTriageDumpDataBlock(v88 + 56, 2);
          v89 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v89 + 64), *(unsigned __int16 *)(v89 + 56));
        }
      }
      IoAddTriageDumpDataBlock(v22, *(unsigned __int16 *)(v22 + 2));
      v90 = *(_QWORD *)(v22 + 8);
      if ( v90 )
      {
        IoAddTriageDumpDataBlock(v90, *(__int16 *)(v90 + 2));
        v91 = (_WORD *)(*(_QWORD *)(v22 + 8) + 56LL);
        if ( *v91 )
        {
          IoAddTriageDumpDataBlock((int)v91, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v22 + 8) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(v22 + 8) + 56LL));
        }
      }
      v92 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
      if ( v92 )
      {
        v93 = (unsigned __int16 *)(v92 + 40);
        IoAddTriageDumpDataBlock(v92, 712);
        if ( *v93 )
        {
          IoAddTriageDumpDataBlock((int)v93, 2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v93 + 1), *v93);
        }
        v94 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 56LL);
        if ( *v94 )
        {
          IoAddTriageDumpDataBlock((int)v94, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 56LL));
        }
        v95 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL);
        if ( v95 && *(_WORD *)(v95 + 56) )
        {
          IoAddTriageDumpDataBlock(v95 + 56, 2);
          v96 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v96 + 64), *(unsigned __int16 *)(v96 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, v3, v22, 0LL);
    }
    ZwClose(v2);
    v136 &= ~0x40u;
    Handle = 0LL;
    v2 = 0LL;
    v9 = 0;
    PipSetDevNodeProblem(a1, 42LL, 0LL);
    PnpLogDuplicateDevice((PCWSTR)v120, (PCWSTR)v14);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) + 16LL) == *(_QWORD *)(a1 + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObject((PVOID)v22);
    v13 = *(_QWORD *)(a1 + 16);
  }
  v23 = v107;
  v24 = 0;
  v25 = 18;
  if ( v2 )
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
      v107);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v129,
      8,
      v23);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v23);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v23);
  }
  if ( (v136 & 0x4000) != 0
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 1)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 14) )
  {
    PnpDisableDevice(a1, 29LL);
  }
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v28 = Handle;
    if ( Handle && v127 )
    {
      v73 = -1LL;
      do
        ++v73;
      while ( *((_WORD *)v127 + v73) );
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 14, 1, (__int64)v127, 2 * v73 + 2, v23);
    }
    LOBYTE(v27) = v105 == 1;
    PnpSaveDeviceCapabilities(a1, &v135, v27);
    v29 = *(_QWORD *)(a1 + 48);
    LOBYTE(v24) = v105 == 1;
    v106 = v24;
    v112 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v29,
                (__int64)v28,
                11,
                (__int64)&v114,
                (__int64)&v108,
                (__int64)&v112) >= 0
      && v114 == 4
      && v112 == 4 )
    {
      v30 = v108;
      if ( (v108 & 0x20) == 0 )
      {
        if ( (v108 & 0x40) == 0 )
        {
LABEL_44:
          v31 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), a1 + 40);
          v32 = v111;
          if ( v31 < 0 )
            v32 = v31;
          v111 = v32;
          if ( !v24
            && (unsigned int)PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               *(_QWORD *)(a1 + 48),
                               1u,
                               (__int64)v28,
                               0LL,
                               (__int64)&DEVPKEY_Device_FirmwareDependencies,
                               (__int64)&v123,
                               0LL,
                               0,
                               (__int64)&v112,
                               0) == -1073741789 )
          {
            v106 = v123 == 8210;
          }
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          v33 = KeGetCurrentThread();
          v34 = v33->KernelApcDisable + 1;
          v33->KernelApcDisable = v34;
          if ( !v34
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
            && !v33->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v2 = Handle;
          goto LABEL_51;
        }
        v74 = 28LL;
LABEL_137:
        if ( (v136 & 0x100) != 0 )
        {
          v78 = *(_QWORD *)(a1 + 48);
          LODWORD(v108) = v30 | 0x400;
          CmSetDeviceRegProp(PiPnpRtlCtx, v78, (_DWORD)v28, 11, 4, (__int64)&v108, 4, v23);
        }
        else
        {
          PipSetDevNodeProblem(a1, v74, 0LL);
        }
        goto LABEL_44;
      }
      v74 = 18LL;
      if ( (v108 & 1) != 0 )
        goto LABEL_137;
    }
    else
    {
      v30 = 0;
      LODWORD(v108) = 0;
      v74 = 1LL;
    }
    LOBYTE(v24) = 1;
    v106 = v24;
    goto LABEL_137;
  }
LABEL_51:
  PnpQueryID(a1, 1, (ULONG_PTR *)&v125, &v124);
  v35 = v125;
  KseAddHardwareId((PCWSTR)v125);
  PnpQueryID(a1, 2, (ULONG_PTR *)&v121, &v117);
  PnpGenerateDeviceIdsHash(v35, v121, a1 + 684);
  PnpIrpQueryID(*(struct _DEVICE_OBJECT **)(a1 + 32), 5, (ULONG_PTR *)&SourceString);
  v36 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v36, 0);
      v36 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(a1, v35, v121, v110) >= 0 )
  {
    LOBYTE(v37) = v110[0];
  }
  else
  {
    LOBYTE(v37) = (v136 & 0x20) == 0 && (v136 & 0x40000) == 0 && (v136 & 0x10) != 0;
    if ( v36 )
      goto LABEL_64;
  }
  v38 = 0LL;
  if ( v105 != 1 )
    v38 = v2;
  if ( (int)PipGenerateContainerID(a1, v38, v37, v36, &v130) >= 0 )
  {
    if ( v36 )
      ExFreePoolWithTag(v36, 0);
    v36 = (WCHAR *)v130;
    SourceString = v130;
  }
  if ( !v36 )
  {
    *(_QWORD *)(a1 + 664) = 0LL;
    *(_QWORD *)(a1 + 672) = 0LL;
    goto LABEL_66;
  }
LABEL_64:
  RtlInitUnicodeString(&DestinationString, v36);
  if ( RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664)) < 0 )
  {
    *(_QWORD *)(a1 + 664) = 0LL;
    *(_QWORD *)(a1 + 672) = 0LL;
  }
LABEL_66:
  v39 = KeGetCurrentThread();
  --v39->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(a1, 32LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v40 = KeGetCurrentThread();
  v41 = v40->KernelApcDisable + 1;
  v40->KernelApcDisable = v41;
  if ( !v41
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v40->ApcState.ApcListHead[0].Flink != &v40->152
    && !v40->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( Handle )
  {
    if ( SourceString )
    {
      v42 = KeGetCurrentThread();
      --v42->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), Handle, SourceString);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      v43 = KeGetCurrentThread();
      v44 = v43->KernelApcDisable + 1;
      v43->KernelApcDisable = v44;
      if ( !v44
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
        && !v43->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  v45 = KeGetCurrentThread();
  --v45->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v46 = Handle;
  if ( Handle )
  {
    v47 = v121;
    v48 = v124;
    v49 = v125;
    if ( v106 || v105 == 1 )
    {
      v51 = v104;
    }
    else
    {
      LOBYTE(BugCheckParameter4) = 1;
      v50 = PnpCheckDeviceIdsChanged(a1, Handle, v125, v124, BugCheckParameter4, &v104);
      v51 = v104;
      if ( v50 < 0 )
        v51 = 0;
      LOBYTE(v104) = v51;
      if ( !v51 )
      {
        LOBYTE(BugCheckParameter4a) = 0;
        v52 = PnpCheckDeviceIdsChanged(a1, v46, v47, v117, BugCheckParameter4a, &v104);
        v51 = v104;
        if ( v52 < 0 )
          v51 = 0;
      }
    }
    if ( v49 )
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)v46, 2, 7, (__int64)v49, v48, v107);
    v53 = v107;
    if ( v47 )
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)v46, 3, 7, (__int64)v47, v117, v107);
    if ( v51 && (int)PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(a1 + 48), v46, &v126) >= 0 && (v98 = v126) != 0 )
    {
      v99 = *(_QWORD *)(a1 + 48);
      v112 = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v99,
                  (__int64)v46,
                  11,
                  (__int64)&v114,
                  (__int64)&v108,
                  (__int64)&v112) < 0
        || v114 != 4
        || (v100 = v108, v112 != 4) )
      {
        v100 = 0;
      }
      v101 = *(_QWORD *)(a1 + 48);
      LODWORD(v108) = v98 | v100;
      CmSetDeviceRegProp(PiPnpRtlCtx, v101, (_DWORD)v46, 11, 4, (__int64)&v108, 4, v53);
      v25 = 18;
      if ( (v98 & 0x20) != 0 )
      {
        v54 = 1;
        PipSetDevNodeProblem(a1, 18LL, 0LL);
        goto LABEL_85;
      }
    }
    else
    {
      v25 = 18;
    }
  }
  v54 = v106;
LABEL_85:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v55 = KeGetCurrentThread();
  v56 = 0;
  v57 = v55->KernelApcDisable + 1;
  v55->KernelApcDisable = v57;
  if ( !v57
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v55->ApcState.ApcListHead[0].Flink != &v55->152
    && !v55->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v58 = Handle;
  v59 = v119;
  if ( Handle )
  {
    v122 = 0LL;
    v113 = 0;
    if ( v119 )
    {
      v72 = -1LL;
      do
        ++v72;
      while ( *((_WORD *)v119 + v72) );
      v56 = 2 * v72 + 2;
      if ( (unsigned int)PnpFindAlternateStringData(v119, v56, &v122, &v113) )
        v25 = 25;
    }
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      v25,
      (__int64)v59,
      v56,
      v107);
    if ( (int)PnpGetDeviceLocationStrings(a1, (char **)&v122, &v113) >= 0 )
    {
      v60 = v122;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)v122,
        2 * v113,
        v107);
      ExFreePoolWithTag(v60, 0);
    }
  }
  PnpQueryBusInformation(a1);
  if ( v54 && (v136 & 0x4000) == 0 && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 14) )
    PpDevCfgProcessDevice(a1, v58, v105 == 1);
  PiQueryResourceRequirements(a1);
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 22)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0
     || *(_DWORD *)(a1 + 404) != 29
     && *(_DWORD *)(a1 + 404) != 14
     && *(_DWORD *)(a1 + 404) != 9
     && *(_DWORD *)(a1 + 404) != 3
     && *(_DWORD *)(a1 + 404) != 19) )
  {
    PnpIsDeviceInstanceEnabled(v58, a1 + 40, 1LL);
  }
  if ( v58 )
  {
    LOBYTE(v61) = v105 == 1;
    PnpInitializeSessionId(a1, v58, v61);
  }
  PiQueryAndAllocateBootResources(a1);
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    v62 = KeGetCurrentThread();
    --v62->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    LOBYTE(v63) = v105 == 1;
    PnpSaveDeviceCapabilities(a1, &v135, v63);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    v64 = KeGetCurrentThread();
    v65 = v64->KernelApcDisable + 1;
    v64->KernelApcDisable = v65;
    if ( !v65
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v64->ApcState.ApcListHead[0].Flink != &v64->152
      && !v64->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    PpHotSwapUpdateRemovalPolicy(a1);
    LOBYTE(v66) = 1;
    v67 = PpDeviceRegistration(a1 + 40, v66, a1 + 56, 0LL);
    if ( v67 < 0 )
      PipSetDevNodeProblem(a1, 19LL, (unsigned int)v67);
    v59 = v119;
    v58 = Handle;
  }
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    PnpIrpDeviceEnumerated(v3);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v68, *(_QWORD *)(a1 + 48), 1LL);
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v69, *(_QWORD *)(a1 + 48), 14LL);
    PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, (_QWORD *)v3);
    PnpNewDeviceNodeDependencyCheck(a1);
  }
  if ( v125 )
    ExFreePoolWithTag(v125, 0);
  if ( v121 )
    ExFreePoolWithTag(v121, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v58 )
    ZwClose(v58);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v127 )
    ExFreePoolWithTag(v127, 0);
  if ( v59 )
    ExFreePoolWithTag(v59, 0);
  if ( v120 )
    ExFreePoolWithTag(v120, 0);
  v70 = v128;
  if ( v128 )
    PiPnpRtlEndOperation((char *)v128);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    Template_p((__int64)v70, &KMPnPEvt_ProcessNewDevice_Stop, 0LL, a1);
  return v111;
}
