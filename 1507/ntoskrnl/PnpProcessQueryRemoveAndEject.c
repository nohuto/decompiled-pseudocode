/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x1405361F8
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x140460714 (PnpProcessTargetDeviceEvent.c)
 *     PnpShutdownDevices @ 0x14067A594 (PnpShutdownDevices.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PipAreDriversLoaded @ 0x1400CFDA4 (PipAreDriversLoaded.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     PnpIsChainDereferenced @ 0x14011C010 (PnpIsChainDereferenced.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpNotifyTargetDeviceChange @ 0x14045EA84 (PnpNotifyTargetDeviceChange.c)
 *     PnpCompareGuid @ 0x140460920 (PnpCompareGuid.c)
 *     IopQueryDeviceState @ 0x140461634 (IopQueryDeviceState.c)
 *     IoGetLegacyVetoList @ 0x1404E10D8 (IoGetLegacyVetoList.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140535188 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x140535314 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpBuildRemovalRelationList @ 0x140535628 (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x140535D44 (PnpInvalidateRelationsInList.c)
 *     PnpResizeTargetDeviceBlock @ 0x140535E34 (PnpResizeTargetDeviceBlock.c)
 *     IopFreeRelationList @ 0x140535FC0 (IopFreeRelationList.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140536068 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140536AEC (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x140536BE4 (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x140536D78 (IopEnumerateRelations.c)
 *     PnpAllocateCriticalMemory @ 0x140536EA0 (PnpAllocateCriticalMemory.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140536EEC (PnpNotifyUserModeDeviceRemoval.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140538C94 (PipClearDevNodeProblem.c)
 *     PipDeviceObjectListElementAt @ 0x14055B1C0 (PipDeviceObjectListElementAt.c)
 *     PnpRestartDeviceNode @ 0x14058C398 (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x14058C4FC (PipIsProblemReadonly.c)
 *     PnpLogVetoInformation @ 0x14058EADC (PnpLogVetoInformation.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14067E6F8 (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x14067E910 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14068D984 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14068D9AC (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14068E020 (PpProfileQueryHardwareProfileChange.c)
 *     PnpCollectOpenHandles @ 0x14068E334 (PnpCollectOpenHandles.c)
 *     PnpFinalizeVetoedRemove @ 0x14068E430 (PnpFinalizeVetoedRemove.c)
 *     IopEjectDevice @ 0x1406940A4 (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x140694240 (IopQueryDockRemovalInterface.c)
 *     PipDeviceObjectListRemove @ 0x1406959D0 (PipDeviceObjectListRemove.c)
 *     PoGetLightestSystemStateForEject @ 0x1406B04DC (PoGetLightestSystemStateForEject.c)
 */

__int64 __fastcall PnpProcessQueryRemoveAndEject(const void **a1)
{
  char *v1; // rdi
  ULONG_PTR v2; // r12
  char v3; // r13
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r9
  signed int v8; // r15d
  __int64 CriticalMemory; // rax
  int v10; // r8d
  UNICODE_STRING *v11; // r14
  int v12; // ebx
  _QWORD *BugCheckParameter4; // r14
  _DWORD *v14; // r8
  int v15; // eax
  int v16; // r8d
  __int64 v17; // rcx
  _DWORD *v18; // rbx
  __int64 v19; // r9
  int v20; // r13d
  _QWORD **v21; // rbx
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r13d
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned int i; // ebx
  int IsChainDereferenced; // eax
  bool v31; // zf
  __int64 v32; // r12
  int v33; // eax
  GUID *v34; // r8
  __int64 v35; // r8
  int v36; // r9d
  int v37; // r13d
  _QWORD **v38; // rbx
  _QWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // ebx
  void *v43; // rcx
  int v44; // r13d
  _QWORD *v45; // rsi
  void *v46; // rcx
  __int64 v47; // rbx
  void *v48; // rdi
  int v50; // ecx
  _DWORD *v51; // rbx
  int v52; // eax
  int v53; // ebx
  int v54; // eax
  PVOID v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  _DWORD *v63; // rcx
  __int64 v64; // rdx
  PCWSTR v65; // rdx
  __int64 v66; // rbx
  _QWORD *v67; // rdx
  __int64 v68; // rcx
  int v69; // r8d
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v71; // rbx
  char *DeviceNode; // rdx
  int v73; // r9d
  __int64 v74; // rax
  __int64 **v75; // r12
  __int64 *v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rbx
  _QWORD *v79; // rdx
  __int64 v80; // rcx
  int v81; // r8d
  int v82; // ecx
  void *v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // r15
  _QWORD *PoolWithTag; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  _DWORD *v91; // rsi
  _QWORD *v92; // rbx
  __int64 v93; // rbx
  __int64 v94; // r9
  struct _DEVICE_OBJECT *v95; // r15
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rdx
  int LightestSystemStateForEject; // eax
  __int64 v100; // r9
  unsigned int *P; // [rsp+40h] [rbp-C0h]
  _QWORD *v102; // [rsp+50h] [rbp-B0h]
  __int64 v103; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v104; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h]
  PVOID v106; // [rsp+70h] [rbp-90h] BYREF
  int v107; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v108; // [rsp+80h] [rbp-80h]
  __int64 v109; // [rsp+88h] [rbp-78h] BYREF
  PUNICODE_STRING v110; // [rsp+90h] [rbp-70h]
  ULONG_PTR v111; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v112[5]; // [rsp+A0h] [rbp-60h] BYREF
  int v113; // [rsp+C8h] [rbp-38h] BYREF
  int v114; // [rsp+CCh] [rbp-34h] BYREF
  LARGE_INTEGER Interval; // [rsp+D0h] [rbp-30h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v117; // [rsp+E0h] [rbp-20h] BYREF
  PCWSTR v118; // [rsp+E8h] [rbp-18h] BYREF
  PCWSTR SourceString; // [rsp+F0h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  char v122; // [rsp+110h] [rbp+10h] BYREF
  char v123; // [rsp+170h] [rbp+70h]
  char v124; // [rsp+178h] [rbp+78h]
  int v125; // [rsp+180h] [rbp+80h]
  int v126; // [rsp+188h] [rbp+88h]

  v1 = (char *)*a1;
  v2 = (ULONG_PTR)a1;
  Interval.QuadPart = -1000000LL;
  v3 = 0;
  v109 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)v1 + 18);
  P = 0LL;
  v102 = 0LL;
  v123 = 0;
  v5 = v4[39];
  DeviceObject = 0LL;
  v118 = 0LL;
  v106 = 0LL;
  v108 = *(_DWORD **)(v5 + 40);
  v6 = (__int64)v108;
  v117 = 0LL;
  Object = v4;
  PpDevNodeLockTree(1);
  if ( (unsigned int)(v108[75] - 787) <= 1 )
  {
    v12 = -1073741738;
    goto LABEL_297;
  }
  if ( PnpCompareGuid(v1 + 104, &GUID_DEVICE_EJECT) )
  {
    v8 = 4;
    goto LABEL_5;
  }
  if ( (*((_DWORD *)v1 + 34) & 4) == 0 )
  {
    v8 = 0;
LABEL_5:
    v124 = 0;
    goto LABEL_6;
  }
  v54 = v108[76];
  if ( (v108[99] & 0x10) != 0 )
  {
    if ( v54 == 777 || v54 <= 774 || (v8 = 5, v54 >= 780) )
      v8 = 6;
  }
  else if ( v54 != 777 && v54 > 774 && v54 < 780 || (*(_DWORD *)(v4[39] + 32LL) & 4) != 0 )
  {
    v8 = 3;
  }
  else
  {
    v8 = 2;
  }
  v124 = 1;
LABEL_6:
  if ( (v8 & 0xFFFFFFFB) == 0 && (v108[99] & 0x1000) != 0 )
  {
    v56 = 1LL;
LABEL_142:
    v57 = v6 + 40;
LABEL_143:
    PnpFinalizeVetoedRemove(v1, v56, v57, v7);
    v12 = -2147483608;
LABEL_297:
    LODWORD(v2) = 0;
    goto LABEL_92;
  }
  if ( !v8 && *((_DWORD *)v1 + 4) == 22 && v108[150] )
  {
    v56 = 10LL;
    goto LABEL_142;
  }
  CriticalMemory = PnpAllocateCriticalMemory((unsigned int)v8, 1LL, 1044LL, 1299213904LL);
  P = (unsigned int *)CriticalMemory;
  v10 = CriticalMemory;
  if ( !CriticalMemory )
  {
    v57 = 0LL;
    v56 = 0LL;
    goto LABEL_143;
  }
  v11 = (UNICODE_STRING *)(CriticalMemory + 4);
  v7 = 0LL;
  *(_DWORD *)CriticalMemory = 0;
  *(_QWORD *)(CriticalMemory + 12) = CriticalMemory + 20;
  v110 = (PUNICODE_STRING)(CriticalMemory + 4);
  *(_DWORD *)(CriticalMemory + 4) = 0x2000000;
  if ( v8 == 4 )
  {
    if ( (*(_DWORD *)(v6 + 396) & 0x80000) != 0 || (unsigned int)(*(_DWORD *)(v6 + 568) - 3) <= 1 )
    {
      LODWORD(v2) = 0;
LABEL_91:
      v12 = 0;
      goto LABEL_92;
    }
    if ( (*(_DWORD *)(v6 + 560) & 0x10) == 0 )
    {
      v56 = 8LL;
      goto LABEL_142;
    }
  }
  else if ( !v8 && !(unsigned int)PipAreDriversLoaded(v6) )
  {
    LODWORD(v2) = 0;
    v12 = 0;
    if ( ((*(_DWORD *)(v6 + 300) - 770) & 0xFFFFFFEF) == 0 )
    {
      if ( (*(_DWORD *)(v6 + 396) & 0x6000) == 0 )
        goto LABEL_159;
      if ( !(unsigned int)PipIsProblemReadonly(v6, *(unsigned int *)(v6 + 404)) )
        PipClearDevNodeProblem(v58);
      if ( (*(_DWORD *)(v6 + 396) & 0x6000) != 0 )
      {
        if ( (*((_DWORD *)v1 + 34) & 2) == 0 )
          v12 = -1073741811;
      }
      else
      {
LABEL_159:
        if ( (*((_DWORD *)v1 + 34) & 2) != 0 )
          PipSetDevNodeProblem(v6, *((unsigned int *)v1 + 4), 0LL);
        else
          PnpRestartDeviceNode(v6);
      }
      goto LABEL_297;
    }
LABEL_92:
    PpDevNodeUnlockTree(1);
LABEL_93:
    v48 = v102;
    goto LABEL_94;
  }
  v12 = PnpBuildRemovalRelationList((__int64)v4, v8, v10, v11, &v111);
  if ( v12 < 0 )
  {
    v57 = (__int64)v11;
    v56 = *P;
    goto LABEL_143;
  }
  BugCheckParameter4 = (_QWORD *)v111;
  v125 = **(_DWORD **)v111;
  v102 = (_QWORD *)PnpAllocateCriticalMemory((unsigned int)v8, 512LL, 8LL * (unsigned int)v125, 1315991120LL);
  BugCheckParameter2 = v8;
  if ( v102 )
  {
    v125 = 0;
    v103 = 1LL;
    while ( 1 )
    {
      do
      {
        if ( !(unsigned __int8)IopEnumerateRelations(
                                 (_DWORD)BugCheckParameter4,
                                 (unsigned int)&v103,
                                 (unsigned int)&v104,
                                 (unsigned int)&v107,
                                 0LL) )
          goto LABEL_24;
      }
      while ( !v107 && (v8 & 0xFFFFFFFFFFFFFFFBuLL) != 0 );
      v14 = *(_DWORD **)(v104[39] + 40LL);
      if ( (v8 & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        v52 = v14[142];
        if ( v52 == 1 )
        {
          v123 = 1;
        }
        else if ( v52 )
        {
          v3 = 1;
        }
      }
      if ( (v8 & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
      {
        if ( (v14[99] & 0x1000) != 0 )
        {
          PnpFinalizeVetoedRemove(v1, 1LL, v14 + 10, 0LL);
          v12 = -1073741823;
          goto LABEL_168;
        }
        if ( v14[75] == 785 )
        {
          PnpFinalizeVetoedRemove(v1, 5LL, v14 + 10, 0LL);
          v12 = -1073741823;
          goto LABEL_24;
        }
      }
      v102[v125++] = v104;
    }
  }
  v12 = -1073741670;
LABEL_24:
  if ( v12 < 0 )
  {
LABEL_168:
    LODWORD(v2) = 0;
LABEL_169:
    IopFreeRelationList(BugCheckParameter4);
    PnpFinalizeVetoedRemove(v1, 0LL, 0LL, v59);
    goto LABEL_92;
  }
  v15 = PnpResizeTargetDeviceBlock((const void **)v2, v8);
  v1 = *(char **)v2;
  v12 = v15;
  LODWORD(v2) = 0;
  if ( v15 < 0 )
    goto LABEL_169;
  LOBYTE(v16) = v124;
  v12 = PnpCompileDeviceInstancePaths(v8, (_DWORD)BugCheckParameter4, v16, 0, (__int64)&v106);
  if ( v8 == 3 )
    PnpBuildUnsafeRemovalDeviceList(v17, (__int64)BugCheckParameter4, &v117);
  if ( v12 < 0 )
    goto LABEL_169;
  if ( !v123 )
    goto LABEL_30;
  LOBYTE(v17) = v3;
  PpProfileBeginHardwareProfileTransition(v17);
  if ( v125 - 1 >= 0 )
  {
    v60 = v125 - 1;
    do
    {
      v104 = (_QWORD *)v102[v60];
      v61 = *(_QWORD *)(v104[39] + 40LL);
      if ( *(_DWORD *)(v61 + 568) == 1 )
      {
        _InterlockedAdd(&PiProfileDevicesInTransition, 1u);
        *(_DWORD *)(v61 + 568) = 3;
      }
      --v60;
    }
    while ( v60 >= 0 );
    BugCheckParameter4 = (_QWORD *)v111;
    v6 = (__int64)v108;
  }
  if ( v8 == 4 )
  {
    v18 = P;
    if ( (int)IoGetLegacyVetoList((PVOID *)&SourceString, P) >= 0 && *P )
    {
      ((void (*)(void))PpProfileCancelHardwareProfileTransition)();
      IopFreeRelationList(BugCheckParameter4);
      v63 = (_DWORD *)*((_QWORD *)v1 + 6);
      if ( v63 )
        *v63 = *P;
      if ( *((_QWORD *)v1 + 7) )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        RtlCopyUnicodeString(*((PUNICODE_STRING *)v1 + 7), &DestinationString);
      }
      ExFreePoolWithTag((PVOID)SourceString, 0);
LABEL_187:
      v12 = -2147483608;
      goto LABEL_92;
    }
    v2 = (ULONG_PTR)v110;
    LOBYTE(v62) = v3;
    if ( (int)PpProfileQueryHardwareProfileChange(v62, 0LL, P, v110) < 0 )
    {
      ((void (*)(void))PpProfileCancelHardwareProfileTransition)();
      IopFreeRelationList(BugCheckParameter4);
      v56 = *P;
      v57 = v2;
      goto LABEL_143;
    }
  }
  else
  {
LABEL_30:
    if ( (v8 & 0xFFFFFFFB) != 0 )
    {
      if ( ((v8 - 3) & 0xFFFFFFFD) == 0 )
        PnpDeleteLockedDeviceNodes((int)Object, (int)BugCheckParameter4, 3, 0, 0, 0LL, 0LL);
      goto LABEL_63;
    }
    v2 = (ULONG_PTR)v110;
    v18 = P;
  }
  v126 = PnpNotifyUserModeDeviceRemoval(v1, v106, &GUID_TARGET_DEVICE_QUERY_REMOVE, v18, v2);
  if ( v126 < 0 )
  {
    PnpFinalizeVetoedRemove(v1, (unsigned int)*v18, v2, v19);
LABEL_60:
    v33 = v126;
LABEL_61:
    LODWORD(v2) = 0;
    goto LABEL_62;
  }
  v20 = 0;
  if ( v125 <= 0 )
    goto LABEL_43;
  v21 = (_QWORD **)v102;
  while ( 1 )
  {
    v22 = *v21;
    v104 = v22;
    v23 = v22 ? *(_QWORD *)(v22[39] + 40LL) : 0LL;
    if ( !v23 )
      break;
    v24 = *(_DWORD *)(v23 + 300);
    if ( ((v24 - 769) & 0xFFFFFFEE) != 0 || v24 == 785 )
      break;
LABEL_41:
    ++v21;
    if ( ++v20 >= v125 )
      goto LABEL_42;
  }
  if ( !v1[72] )
  {
    v126 = PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_QUERY_REMOVE, v22, 0LL, &v118);
    if ( v126 < 0 )
      goto LABEL_192;
    goto LABEL_41;
  }
  v126 = -1073741536;
LABEL_192:
  v65 = v118;
  *P = 7;
  if ( v65 )
    RtlCopyUnicodeString((PUNICODE_STRING)v2, (PCUNICODE_STRING)(v65 + 28));
  else
    RtlInitUnicodeString((PUNICODE_STRING)v2, 0LL);
  v19 = 0LL;
  v66 = v20 - 1;
  if ( v20 - 1 >= 0 )
  {
    do
    {
      v67 = (_QWORD *)v102[v66];
      v104 = v67;
      if ( v67 )
        v68 = *(_QWORD *)(v67[39] + 40LL);
      else
        v68 = 0LL;
      if ( !v68 || (v69 = *(_DWORD *)(v68 + 300), ((v69 - 769) & 0xFFFFFFEE) != 0) || v69 == 785 )
      {
        PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_CANCELLED, v67, 0LL, 0LL);
        v19 = 0LL;
      }
      --v66;
    }
    while ( v66 >= 0 );
    v6 = (__int64)v108;
LABEL_42:
    v18 = P;
    goto LABEL_43;
  }
  v18 = P;
LABEL_43:
  if ( v126 < 0 )
    goto LABEL_241;
  LOBYTE(v19) = 1;
  v126 = PnpDeleteLockedDeviceNodes((int)Object, (int)BugCheckParameter4, 0, v19, *((_DWORD *)v1 + 4), (__int64)v18, v2);
  v25 = v126;
  memset(v112, 0, sizeof(v112));
  v26 = BYTE5(v112[4]);
  v27 = 0LL;
  LODWORD(v112[4]) = 0;
  v112[0] = 0LL;
  v112[1] = v6 + 40;
  v28 = 1LL;
  if ( (v8 & 0xFFFFFFFB) == 0 )
    v26 = 1LL;
  v112[3] = &v112[2];
  v112[2] = &v112[2];
  BYTE5(v112[4]) = v26;
  if ( PnpDumpVetoedHandles || (BYTE4(v112[4]) = 0, (NtGlobalFlag & 0x4000) != 0) )
    BYTE4(v112[4]) = 1;
  if ( v126 < 0 )
  {
    if ( *v18 != 6 )
      goto LABEL_54;
    PnpCollectOpenHandles(v102, (unsigned int)v125, v112);
    goto LABEL_219;
  }
  for ( i = 0; i < 0x32; ++i )
  {
    if ( i )
      KeDelayExecutionThread(0, 0, &Interval);
    IsChainDereferenced = PnpIsChainDereferenced(v102, v125, 1, 0, &DeviceObject);
    v27 = 0LL;
    if ( !IsChainDereferenced )
      break;
  }
  v6 = (__int64)v108;
  v31 = i == 50;
  v18 = P;
  BugCheckParameter4 = (_QWORD *)v111;
  v2 = (ULONG_PTR)v110;
  if ( v31 )
  {
    *P = 5;
    PnpCollectOpenHandles(v102, (unsigned int)v125, v112);
    if ( DeviceObject )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v71 = DeviceAttachmentBaseRef;
      if ( DeviceAttachmentBaseRef )
        DeviceNode = (char *)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
      else
        DeviceNode = 0LL;
      RtlCopyUnicodeString((PUNICODE_STRING)v2, (PCUNICODE_STRING)(DeviceNode + 40));
      ObfDereferenceObject(v71);
      v18 = P;
    }
    else
    {
      RtlInitUnicodeString((PUNICODE_STRING)v2, 0LL);
    }
    LOBYTE(v73) = 1;
    PnpDeleteLockedDeviceNodes((int)Object, (int)BugCheckParameter4, 1, v73, 0, 0LL, 0LL);
    v25 = -1073741823;
    v126 = -1073741823;
LABEL_219:
    v27 = 0LL;
  }
LABEL_54:
  if ( BYTE5(v112[4]) )
  {
    PnpLogVetoInformation(v112[1], &v112[2], 0LL);
    while ( 1 )
    {
      v32 = v112[2];
      if ( (_QWORD *)v112[2] == &v112[2] )
        break;
      v74 = *(_QWORD *)v112[2];
      if ( *(_QWORD **)(v112[2] + 8LL) != &v112[2] || *(_QWORD *)(v74 + 8) != v112[2] )
        __fastfail(3u);
      v112[2] = *(_QWORD *)v112[2];
      *(_QWORD *)(v74 + 8) = &v112[2];
      v75 = (__int64 **)(v32 - 24);
      while ( 1 )
      {
        v76 = *v75;
        if ( *v75 == (__int64 *)v75 )
          break;
        v77 = *v76;
        if ( (__int64 **)v76[1] != v75 || *(__int64 **)(v77 + 8) != v76 )
          __fastfail(3u);
        *v75 = (__int64 *)v77;
        *(_QWORD *)(v77 + 8) = v75;
        ObfDereferenceObject((PVOID)*(v76 - 1));
        ExFreePoolWithTag(v76 - 1, 0x50706E50u);
      }
      ExFreePoolWithTag(v75, 0x4F706E50u);
    }
    v2 = (ULONG_PTR)v110;
    v27 = 0LL;
    v18 = P;
  }
  if ( v25 >= 0 )
  {
    if ( *((_DWORD *)v1 + 4) != 54 )
      goto LABEL_60;
    LOBYTE(v27) = v124;
    v33 = PnpCancelRemoveOnHungDevices((_DWORD)v1, v8, v27, (_DWORD)BugCheckParameter4, (__int64)&v106);
    goto LABEL_61;
  }
  v78 = v125 - 1;
  if ( v125 - 1 >= 0 )
  {
    do
    {
      v79 = (_QWORD *)v102[v78];
      v104 = v79;
      if ( v79 )
        v80 = *(_QWORD *)(v79[39] + 40LL);
      else
        v80 = 0LL;
      if ( !v80 || (v81 = *(_DWORD *)(v80 + 300), ((v81 - 769) & 0xFFFFFFEE) != 0) || v81 == 785 )
        PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_CANCELLED, v79, 0LL, 0LL);
      --v78;
    }
    while ( v78 >= 0 );
    v6 = (__int64)v108;
  }
  v18 = P;
LABEL_241:
  PnpFinalizeVetoedRemove(v1, (unsigned int)*v18, v2, v19);
  LODWORD(v2) = 0;
  PnpNotifyUserModeDeviceRemoval(v1, v106, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0LL, 0LL);
  v33 = v126;
LABEL_62:
  if ( v33 < 0 )
  {
    if ( v123 )
      PpProfileCancelHardwareProfileTransition(v26, v28, v27);
    if ( *((_DWORD *)v1 + 4) != 54 )
      goto LABEL_256;
    v103 = 1LL;
    while ( (unsigned __int8)IopEnumerateRelations(
                               (_DWORD)BugCheckParameter4,
                               (unsigned int)&v103,
                               (unsigned int)&v104,
                               0,
                               0LL) )
      *(_DWORD *)(v6 + 704) &= ~2u;
    if ( *((_DWORD *)v1 + 4) == 54 && *(_DWORD *)*BugCheckParameter4 == 1 )
    {
      if ( *v18 == 6 || *(_DWORD *)(v6 + 300) == 788 )
        KeBugCheckEx(0xCAu, 0xEuLL, BugCheckParameter2, (int)*v18, (ULONG_PTR)BugCheckParameter4);
      v82 = (int)Object;
      *((_DWORD *)Object + 12) |= 0x4000000u;
      IopQueryDeviceState(v82, &v113);
      v12 = 0;
    }
    else
    {
LABEL_256:
      v12 = -2147483608;
    }
    IopFreeRelationList(BugCheckParameter4);
    goto LABEL_92;
  }
LABEL_63:
  if ( v8 == 3 )
  {
    v55 = v117;
    if ( v117 )
    {
      PnpNotifyUserModeDeviceRemoval(v1, v117, &GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL);
      ExFreePoolWithTag(v55, 0x4B706E50u);
    }
    v34 = &GUID_TARGET_DEVICE_REMOVE_COMPLETE;
  }
  else
  {
    v34 = &GUID_DEVICE_REMOVE_PENDING;
  }
  PnpNotifyUserModeDeviceRemoval(v1, v106, v34, 0LL, 0LL);
  v37 = v125;
  if ( v125 <= 0 )
  {
    v41 = 1LL;
  }
  else
  {
    v38 = (_QWORD **)v102;
    v2 = (unsigned int)v125;
    v35 = 0LL;
    do
    {
      v39 = *v38;
      v104 = v39;
      if ( v39 )
        v40 = *(_QWORD *)(v39[39] + 40LL);
      else
        v40 = 0LL;
      if ( v8 || !v40 || (*(_DWORD *)(v40 + 704) & 2) == 0 )
      {
        PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_COMPLETE, v39, 0LL, 0LL);
        v35 = 0LL;
      }
      ++v38;
      v41 = 1LL;
      --v2;
    }
    while ( v2 );
    v6 = (__int64)v108;
  }
  if ( ((v8 - 2) & 0xFFFFFFFC) == 0 && v8 != 4 )
  {
    PnpInvalidateRelationsInList(BugCheckParameter4, v8, 1, 0);
    v53 = *(_DWORD *)*BugCheckParameter4 - 1;
    if ( v53 >= 0 )
    {
      do
      {
        PipDeviceObjectListElementAt(*BugCheckParameter4, v53, (unsigned int)&v122, (unsigned int)&v114, 0LL);
        if ( !v114 )
          PipDeviceObjectListRemove(*BugCheckParameter4, (unsigned int)v53);
        --v53;
      }
      while ( v53 >= 0 );
      v37 = v125;
    }
  }
  if ( ((v8 - 3) & 0xFFFFFFFD) != 0 )
  {
    v42 = (int)Object;
    if ( *(_DWORD *)(v6 + 568) )
    {
      IopQueryDockRemovalInterface(Object, &v109, v35);
      if ( v109 )
        (*(void (__fastcall **)(_QWORD, __int64))(v109 + 32))(*(_QWORD *)(v109 + 8), 3LL);
    }
    if ( !v8 )
    {
      PipSetDevNodeFlags(v6, 0x2000000);
      goto LABEL_80;
    }
    if ( v8 == 4 )
LABEL_80:
      v36 = 1;
    else
      LOBYTE(v36) = 0;
    PnpDeleteLockedDeviceNodes(v42, (int)BugCheckParameter4, 2, v36, *((_DWORD *)v1 + 4), 0LL, 0LL);
    v44 = *(_DWORD *)(v6 + 560);
    LOBYTE(v44) = (v44 & 8) != 0;
    if ( v8 != 4 )
    {
      v45 = Object;
      v103 = 1LL;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !(unsigned __int8)IopEnumerateRelations(
                                     (_DWORD)BugCheckParameter4,
                                     (unsigned int)&v103,
                                     (unsigned int)&v104,
                                     (unsigned int)&v107,
                                     0LL) )
            {
              PnpUnlinkDeviceRemovalRelations(v46, (__int64)BugCheckParameter4);
              IopFreeRelationList(BugCheckParameter4);
              v6 = (__int64)v108;
              goto LABEL_85;
            }
            v50 = (int)v104;
            v51 = v104 ? *(_DWORD **)(v104[39] + 40LL) : 0LL;
            if ( *((_DWORD *)v1 + 4) != 54 || v107 == 1 )
              break;
            if ( v51[75] != 788 )
            {
              *((_DWORD *)v104 + 12) |= 0x4000000u;
              IopQueryDeviceState(v50, &v113);
            }
          }
          if ( v45 != v104 )
            break;
          if ( (*((_DWORD *)v1 + 34) & 2) == 0 && v51[75] == 786 && (v51[99] & 0x2000) != 0 && v51[101] == 21 )
          {
            PipClearDevNodeProblem(v51);
            goto LABEL_274;
          }
        }
        if ( (v51[99] & 0x6000) == 0 && v51[75] == 786 )
LABEL_274:
          PnpRestartDeviceNode(v51);
      }
    }
    if ( (*(_DWORD *)(v6 + 560) & 8) != 0 || (v44 & 0x10000) != 0 )
    {
      v103 = 1LL;
      while ( (unsigned __int8)IopEnumerateRelations(
                                 (_DWORD)BugCheckParameter4,
                                 (unsigned int)&v103,
                                 (unsigned int)&v104,
                                 0,
                                 0LL) )
      {
        v84 = v104[39];
        v85 = *(_QWORD *)(v84 + 40);
        if ( v85 )
        {
          PipSetDevNodeFlags(*(_QWORD *)(v84 + 40), 0x80000);
          v86 = *(_QWORD *)(v85 + 696);
          if ( v86 )
          {
            IopFreeRelationList(*(_QWORD **)(v86 + 64));
            *(_QWORD *)(v86 + 64) = 0LL;
            *(_QWORD *)(v85 + 696) = 0LL;
          }
        }
      }
      PnpUnlinkDeviceRemovalRelations(v83, (__int64)BugCheckParameter4);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x20207050u);
      v91 = v108;
      v92 = PoolWithTag;
      if ( PoolWithTag )
      {
        v95 = (struct _DEVICE_OBJECT *)Object;
        ObfReferenceObject(Object);
        LOBYTE(v96) = v123;
        v92[8] = BugCheckParameter4;
        LOBYTE(v97) = BYTE2(v44) & 1;
        *((_BYTE *)v92 + 88) = v123;
        v92[6] = v1;
        LOBYTE(v98) = v44;
        v92[7] = v95;
        *((_BYTE *)v92 + 89) = (v1[136] & 8) != 0;
        v92[12] = v109;
        *((_QWORD *)v91 + 87) = v92;
        LightestSystemStateForEject = PoGetLightestSystemStateForEject(v96, v98, v97, (char *)v92 + 92);
        LODWORD(v2) = 0;
        if ( LightestSystemStateForEject >= 0 )
        {
          PpDevNodeUnlockTree(1);
          IopEjectDevice(v95);
          v12 = 259;
          goto LABEL_93;
        }
        if ( LightestSystemStateForEject == -1073741090 )
          v64 = 9LL;
        else
          v64 = 0LL;
        PnpFinalizeVetoedRemove(v1, v64, 0LL, v100);
        v92[6] = 0LL;
        *((_BYTE *)v92 + 89) = 0;
        v92[1] = v92;
        *v92 = v92;
        PnpProcessCompletedEject(v92);
      }
      else
      {
        v93 = v109;
        LODWORD(v2) = 0;
        if ( v109 )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(v109 + 32))(*(_QWORD *)(v109 + 8), 1LL);
          (*(void (__fastcall **)(_QWORD))(v93 + 24))(*(_QWORD *)(v93 + 8));
        }
        if ( v123 )
          PpProfileCancelHardwareProfileTransition(v89, v88, v90);
        PnpInvalidateRelationsInList(BugCheckParameter4, 4u, 0, 1);
        IopFreeRelationList(BugCheckParameter4);
        PnpFinalizeVetoedRemove(v1, 0LL, 0LL, v94);
      }
      goto LABEL_187;
    }
    PnpUnlinkDeviceRemovalRelations(v43, (__int64)BugCheckParameter4);
    IopFreeRelationList(BugCheckParameter4);
LABEL_85:
    LODWORD(v2) = 0;
    if ( v8 == 2 )
      PnpNotifyUserModeDeviceRemoval(v1, v106, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL);
    if ( !v8 && (*((_DWORD *)v1 + 34) & 2) == 0 && (*(_DWORD *)(v6 + 396) & 0x2000) != 0 && *(_DWORD *)(v6 + 404) == 18 )
    {
      PipClearDevNodeProblem(v6);
      PnpRestartDeviceNode(v6);
      PnpRequestDeviceAction(*(PVOID *)(v6 + 32), 16, 1, 0LL, 0LL, 0LL);
    }
    v47 = v109;
    if ( v109 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(v109 + 32))(*(_QWORD *)(v109 + 8), 1LL);
      (*(void (__fastcall **)(_QWORD))(v47 + 24))(*(_QWORD *)(v47 + 8));
    }
    goto LABEL_91;
  }
  PnpUnlinkDeviceRemovalRelations((void *)v41, (__int64)BugCheckParameter4);
  if ( !*(_QWORD *)(v6 + 16) )
  {
    ++*(_DWORD *)(*(_QWORD *)(v6 + 648) + 656LL);
    *(_QWORD *)(v6 + 648) |= 1uLL;
  }
  PnpQueuePendingSurpriseRemoval(Object, (void **)&v111, *((_DWORD *)v1 + 4), v8);
  PpDevNodeUnlockTree(1);
  v48 = v102;
  PnpIsChainDereferenced(v102, v37, 0, 1u, 0LL);
  v12 = 0;
LABEL_94:
  if ( P && PnpShutdownEvent.Header.SignalState == (_DWORD)v2 )
    ExFreePoolWithTag(P, 0);
  if ( v106 )
    ExFreePoolWithTag(v106, 0);
  if ( v48 )
    ExFreePoolWithTag(v48, 0);
  return (unsigned int)v12;
}
