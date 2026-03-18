/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x14049F874
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x1404E0D6C (PnpProcessTargetDeviceEvent.c)
 *     PnpShutdownDevices @ 0x1405FF9D0 (PnpShutdownDevices.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140098860 (IoGetDeviceAttachmentBaseRef.c)
 *     PipAreDriversLoaded @ 0x1400998D0 (PipAreDriversLoaded.c)
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     PnpIsChainDereferenced @ 0x1400DA0AC (PnpIsChainDereferenced.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PipSetDevNodeFlags @ 0x140457CF8 (PipSetDevNodeFlags.c)
 *     IoGetLegacyVetoList @ 0x14045808C (IoGetLegacyVetoList.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     PnpBuildRemovalRelationList @ 0x14049EDD4 (PnpBuildRemovalRelationList.c)
 *     PnpResizeTargetDeviceBlock @ 0x14049F7A0 (PnpResizeTargetDeviceBlock.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14049FD44 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14049FEC0 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1404A0028 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpInvalidateRelationsInList @ 0x1404A00B8 (PnpInvalidateRelationsInList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1404A01A8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x1404A029C (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x1404A0438 (IopEnumerateRelations.c)
 *     IopFreeRelationList @ 0x1404A0570 (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x1404A0618 (PnpAllocateCriticalMemory.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1404A07E0 (PnpNotifyUserModeDeviceRemoval.c)
 *     PipSetDevNodeProblem @ 0x1404A0BE4 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404A0DFC (PipClearDevNodeProblem.c)
 *     PipDeviceObjectListElementAt @ 0x1404C5C90 (PipDeviceObjectListElementAt.c)
 *     PnpCompareGuid @ 0x1404E0E6C (PnpCompareGuid.c)
 *     PnpNotifyTargetDeviceChange @ 0x1404E0E88 (PnpNotifyTargetDeviceChange.c)
 *     IopQueryDeviceState @ 0x1404ECD38 (IopQueryDeviceState.c)
 *     PnpRestartDeviceNode @ 0x14060388C (PnpRestartDeviceNode.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140603984 (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x140603BA0 (PnpProcessCompletedEject.c)
 *     PipIsProblemReadonly @ 0x140603F14 (PipIsProblemReadonly.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14060DE98 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14060DEC0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14060E224 (PpProfileQueryHardwareProfileChange.c)
 *     PnpCollectOpenHandles @ 0x14060E4AC (PnpCollectOpenHandles.c)
 *     PnpFinalizeVetoedRemove @ 0x14060E5A8 (PnpFinalizeVetoedRemove.c)
 *     PnpFreeVetoInformation @ 0x14060E63C (PnpFreeVetoInformation.c)
 *     PnpLogVetoInformation @ 0x14060E6D4 (PnpLogVetoInformation.c)
 *     IopEjectDevice @ 0x14061532C (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x1406154C8 (IopQueryDockRemovalInterface.c)
 *     PipDeviceObjectListRemove @ 0x140617130 (PipDeviceObjectListRemove.c)
 *     PoGetLightestSystemStateForEject @ 0x140631FD0 (PoGetLightestSystemStateForEject.c)
 */

__int64 __fastcall PnpProcessQueryRemoveAndEject(const void **a1)
{
  char *v1; // rdi
  void *v3; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // r15d
  __int64 CriticalMemory; // rax
  __int64 v10; // r8
  void *v11; // r14
  UNICODE_STRING *v12; // r12
  int v13; // ebx
  _QWORD *BugCheckParameter4; // r14
  _DWORD *v15; // r8
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // r8d
  __int64 v20; // rcx
  PVOID v21; // rbx
  GUID *v22; // r8
  __int64 v23; // r8
  int v24; // r9d
  int v25; // r13d
  _QWORD **v26; // rbx
  __int64 v27; // r12
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ebx
  PVOID v32; // rdi
  __int64 v34; // rdx
  _DWORD *v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rcx
  char v38; // bl
  _QWORD *v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  _DWORD *v43; // rcx
  __int64 v44; // rdx
  int v45; // eax
  int v46; // r9d
  int v47; // r13d
  _QWORD **v48; // r12
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  int v51; // r8d
  int v52; // eax
  PCWSTR v53; // rdx
  UNICODE_STRING *v54; // rcx
  __int64 v55; // r12
  _QWORD *v56; // rsi
  _QWORD *v57; // rdx
  __int64 v58; // rcx
  int v59; // r8d
  __int64 v60; // rdx
  __int64 v61; // rcx
  int v62; // r8d
  unsigned int v63; // r12d
  _QWORD *v64; // rsi
  int IsChainDereferenced; // eax
  bool v66; // zf
  int v67; // r12d
  PVOID v68; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v70; // rbx
  char *DeviceNode; // rdx
  int v72; // r9d
  int v73; // eax
  __int64 v74; // r12
  _QWORD *v75; // rsi
  _QWORD *v76; // rdx
  __int64 v77; // rcx
  int v78; // r8d
  PVOID v79; // rcx
  _QWORD *v80; // rcx
  __int64 v81; // rdx
  int v82; // ebx
  __int64 v83; // rcx
  int v84; // r13d
  _QWORD *v85; // rsi
  __int64 v86; // rcx
  _QWORD *v87; // rcx
  _DWORD *v88; // rbx
  __int64 v89; // rbx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rbx
  __int64 v93; // r15
  _QWORD *PoolWithTag; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  _DWORD *v99; // rsi
  _QWORD *v100; // rbx
  __int64 v101; // rbx
  struct _DEVICE_OBJECT *v102; // r15
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // rdx
  int LightestSystemStateForEject; // eax
  unsigned int *P; // [rsp+40h] [rbp-C0h]
  __int64 v108; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v109; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v110; // [rsp+58h] [rbp-A8h]
  int v111; // [rsp+60h] [rbp-A0h] BYREF
  int v112; // [rsp+64h] [rbp-9Ch] BYREF
  PUNICODE_STRING v113; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h]
  PVOID v115; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v116; // [rsp+80h] [rbp-80h]
  __int64 v117; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR v118; // [rsp+90h] [rbp-70h] BYREF
  int v119; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v120[5]; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER Interval; // [rsp+C8h] [rbp-38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+D0h] [rbp-30h] BYREF
  PVOID v123; // [rsp+D8h] [rbp-28h] BYREF
  PCWSTR v124; // [rsp+E0h] [rbp-20h]
  PCWSTR SourceString; // [rsp+E8h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  char v128; // [rsp+108h] [rbp+8h] BYREF
  char v129; // [rsp+160h] [rbp+60h]
  char v130; // [rsp+168h] [rbp+68h]
  int v131; // [rsp+170h] [rbp+70h]

  v1 = (char *)*a1;
  Interval.QuadPart = -1000000LL;
  v3 = 0LL;
  v117 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)v1 + 18);
  v110 = 0LL;
  v129 = 0;
  LOBYTE(v111) = 0;
  v5 = v4[39];
  DeviceObject = 0LL;
  v124 = 0LL;
  v115 = 0LL;
  v116 = *(_DWORD **)(v5 + 40);
  v6 = (__int64)v116;
  v123 = 0LL;
  Object = v4;
  PpDevNodeLockTree(1);
  if ( (unsigned int)(v116[75] - 787) <= 1 )
  {
    v13 = -1073741738;
    goto LABEL_89;
  }
  if ( (unsigned __int8)PnpCompareGuid(v1 + 104, &GUID_DEVICE_EJECT) )
  {
    v8 = 4;
LABEL_75:
    v130 = 0;
    goto LABEL_10;
  }
  if ( (*((_DWORD *)v1 + 34) & 4) == 0 )
  {
    v8 = 0;
    goto LABEL_75;
  }
  v7 = v116[76];
  if ( (v116[99] & 0x10) != 0 )
  {
    if ( v7 == 777 || v7 <= 774 || (v8 = 5, v7 >= 780) )
      v8 = 6;
  }
  else if ( v7 != 777 && v7 > 774 && v7 < 780 || (*(_DWORD *)(v4[39] + 32LL) & 4) != 0 )
  {
    v8 = 3;
  }
  else
  {
    v8 = 2;
  }
  v130 = 1;
LABEL_10:
  if ( (v8 & 0xFFFFFFFB) == 0 && (v116[99] & 0x1000) != 0 )
  {
    v34 = 1LL;
LABEL_78:
    PnpFinalizeVetoedRemove(v1, v34, v116 + 10);
LABEL_81:
    v13 = -2147483608;
    goto LABEL_89;
  }
  if ( !v8 && *((_DWORD *)v1 + 4) == 22 && v116[150] )
  {
    v34 = 10LL;
    goto LABEL_78;
  }
  CriticalMemory = PnpAllocateCriticalMemory(v8, 1LL, 1044LL, 1299213904LL);
  v10 = 0LL;
  P = (unsigned int *)CriticalMemory;
  v11 = (void *)CriticalMemory;
  if ( !CriticalMemory )
  {
    v36 = 0LL;
    goto LABEL_87;
  }
  *(_DWORD *)CriticalMemory = 0;
  v12 = (UNICODE_STRING *)(CriticalMemory + 4);
  v113 = (PUNICODE_STRING)(CriticalMemory + 4);
  *(_QWORD *)(CriticalMemory + 12) = CriticalMemory + 20;
  *(_DWORD *)(CriticalMemory + 4) = 0x2000000;
  if ( v8 == 4 )
  {
    if ( (*(_DWORD *)(v6 + 396) & 0x80000) != 0 || (unsigned int)(*(_DWORD *)(v6 + 568) - 3) <= 1 )
    {
      v13 = 0;
      goto LABEL_88;
    }
    if ( (*(_DWORD *)(v6 + 560) & 0x10) != 0 )
      goto LABEL_15;
    v10 = v6 + 40;
    v36 = 8LL;
LABEL_87:
    PnpFinalizeVetoedRemove(v1, v36, v10);
    v13 = -2147483608;
LABEL_88:
    v3 = v11;
    goto LABEL_89;
  }
  if ( !v8 && !(unsigned int)PipAreDriversLoaded(v6) )
  {
    v13 = 0;
    if ( ((*(_DWORD *)(v6 + 300) - 770) & 0xFFFFFFEF) == 0 )
    {
      if ( (*(_DWORD *)(v6 + 396) & 0x6000) == 0 )
        goto LABEL_104;
      if ( !(unsigned int)PipIsProblemReadonly(v6, *(unsigned int *)(v6 + 404)) )
        PipClearDevNodeProblem(v37);
      if ( (*(_DWORD *)(v6 + 396) & 0x6000) != 0 )
      {
        if ( (*((_DWORD *)v1 + 34) & 2) == 0 )
          v13 = -1073741811;
      }
      else
      {
LABEL_104:
        if ( (*((_DWORD *)v1 + 34) & 2) != 0 )
          PipSetDevNodeProblem(v6, *((unsigned int *)v1 + 4), *((unsigned int *)v1 + 5));
        else
          PnpRestartDeviceNode(v6);
      }
    }
    goto LABEL_88;
  }
LABEL_15:
  v13 = PnpBuildRemovalRelationList((__int64)v4, v8, (int)v11, v12, &v118);
  if ( v13 < 0 )
  {
    v35 = v11;
LABEL_80:
    PnpFinalizeVetoedRemove(v1, (unsigned int)*v35, v12);
    v3 = v35;
    goto LABEL_81;
  }
  BugCheckParameter4 = (_QWORD *)v118;
  v131 = **(_DWORD **)v118;
  v110 = (PVOID)PnpAllocateCriticalMemory(v8, 512LL, 8LL * (unsigned int)v131, 1315991120LL);
  BugCheckParameter2 = (int)v8;
  if ( v110 )
  {
    v131 = 0;
    v108 = 1LL;
    while ( 1 )
    {
      do
      {
        if ( !(unsigned __int8)IopEnumerateRelations(
                                 (_DWORD)BugCheckParameter4,
                                 (unsigned int)&v108,
                                 (unsigned int)&v109,
                                 (unsigned int)&v112,
                                 0LL) )
          goto LABEL_27;
      }
      while ( !v112 && ((int)v8 & 0xFFFFFFFFFFFFFFFBuLL) != 0 );
      v15 = *(_DWORD **)(v109[39] + 40LL);
      if ( ((int)v8 & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        v16 = v15[142];
        if ( v16 == 1 )
        {
          v129 = 1;
        }
        else
        {
          v17 = (unsigned __int8)v111;
          if ( v16 )
            v17 = 1;
          v111 = v17;
        }
      }
      if ( ((int)v8 & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
      {
        if ( (v15[99] & 0x1000) != 0 )
        {
          PnpFinalizeVetoedRemove(v1, 1LL, v15 + 10);
          v13 = -1073741823;
          goto LABEL_114;
        }
        if ( v15[75] == 785 )
        {
          PnpFinalizeVetoedRemove(v1, 5LL, v15 + 10);
          v13 = -1073741823;
          goto LABEL_27;
        }
      }
      *((_QWORD *)v110 + (unsigned int)v131++) = v109;
    }
  }
  v13 = -1073741670;
LABEL_27:
  if ( v13 < 0 )
    goto LABEL_114;
  v18 = PnpResizeTargetDeviceBlock(a1, v8);
  v1 = (char *)*a1;
  v13 = v18;
  if ( v18 < 0 )
    goto LABEL_114;
  LOBYTE(v19) = v130;
  v13 = PnpCompileDeviceInstancePaths(v8, (_DWORD)BugCheckParameter4, v19, 0, (__int64)&v115);
  if ( v8 == 3 )
    PnpBuildUnsafeRemovalDeviceList(v20, BugCheckParameter4, &v123);
  if ( v13 < 0 )
  {
LABEL_114:
    IopFreeRelationList(BugCheckParameter4);
    PnpFinalizeVetoedRemove(v1, 0LL, 0LL);
    goto LABEL_115;
  }
  if ( !v129 )
    goto LABEL_33;
  v38 = v111;
  LOBYTE(v20) = v111;
  PpProfileBeginHardwareProfileTransition(v20);
  if ( v131 - 1 >= 0 )
  {
    v39 = v110;
    v40 = v131 - 1;
    do
    {
      v109 = (_QWORD *)v39[v40];
      v41 = *(_QWORD *)(v109[39] + 40LL);
      if ( *(_DWORD *)(v41 + 568) == 1 )
      {
        _InterlockedAdd(&PiProfileDevicesInTransition, 1u);
        *(_DWORD *)(v41 + 568) = 3;
      }
      --v40;
    }
    while ( v40 >= 0 );
    BugCheckParameter4 = (_QWORD *)v118;
    v6 = (__int64)v116;
    v12 = v113;
  }
  if ( v8 == 4 )
  {
    v35 = P;
    if ( (int)IoGetLegacyVetoList((PVOID *)&SourceString, P) >= 0 && *P )
    {
      ((void (*)(void))PpProfileCancelHardwareProfileTransition)();
      IopFreeRelationList(BugCheckParameter4);
      v43 = (_DWORD *)*((_QWORD *)v1 + 6);
      if ( v43 )
        *v43 = *P;
      if ( *((_QWORD *)v1 + 7) )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        RtlCopyUnicodeString(*((PUNICODE_STRING *)v1 + 7), &DestinationString);
      }
      ExFreePoolWithTag((PVOID)SourceString, 0);
      goto LABEL_133;
    }
    LOBYTE(v42) = v38;
    if ( (int)PpProfileQueryHardwareProfileChange(v42, 0LL, P, v12) < 0 )
    {
      ((void (*)(void))PpProfileCancelHardwareProfileTransition)();
      IopFreeRelationList(BugCheckParameter4);
      goto LABEL_80;
    }
  }
  else
  {
LABEL_33:
    if ( (v8 & 0xFFFFFFFB) != 0 )
    {
      if ( ((v8 - 3) & 0xFFFFFFFD) == 0 )
        PnpDeleteLockedDeviceNodes((int)Object, (int)BugCheckParameter4, 3, 0, 0, 0, 0LL, 0LL);
      goto LABEL_36;
    }
    v35 = P;
  }
  v45 = PnpNotifyUserModeDeviceRemoval(v1, v115, &GUID_TARGET_DEVICE_QUERY_REMOVE, v35, v12);
  v46 = 0;
  v13 = v45;
  if ( v45 < 0 )
  {
    PnpFinalizeVetoedRemove(v1, (unsigned int)*v35, v12);
    goto LABEL_207;
  }
  v47 = 0;
  if ( v131 <= 0 )
    goto LABEL_166;
  v48 = (_QWORD **)v110;
  while ( 1 )
  {
    v49 = *v48;
    v109 = v49;
    if ( v49 )
      v50 = *(_QWORD *)(v49[39] + 40LL);
    else
      v50 = 0LL;
    if ( v50 )
    {
      v51 = *(_DWORD *)(v50 + 300);
      if ( ((v51 - 769) & 0xFFFFFFEE) == 0 && v51 != 785 )
        goto LABEL_148;
    }
    if ( v1[72] )
      break;
    v52 = PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_QUERY_REMOVE, v49);
    v46 = 0;
    v13 = v52;
    if ( v52 < 0 )
      goto LABEL_151;
LABEL_148:
    ++v47;
    ++v48;
    if ( v47 >= v131 )
      goto LABEL_165;
  }
  v13 = -1073741536;
LABEL_151:
  v53 = v124;
  v54 = v113;
  *P = 7;
  if ( v53 )
    RtlCopyUnicodeString(v54, (PCUNICODE_STRING)(v53 + 28));
  else
    RtlInitUnicodeString(v54, 0LL);
  v55 = v47 - 1;
  if ( v47 - 1 >= 0 )
  {
    v56 = v110;
    do
    {
      v57 = (_QWORD *)v56[v55];
      v109 = v57;
      if ( v57 )
        v58 = *(_QWORD *)(v57[39] + 40LL);
      else
        v58 = 0LL;
      if ( !v58 || (v59 = *(_DWORD *)(v58 + 300), ((v59 - 769) & 0xFFFFFFEE) != 0) || v59 == 785 )
        PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_CANCELLED, v57);
      --v55;
    }
    while ( v55 >= 0 );
    v6 = (__int64)v116;
  }
LABEL_165:
  v12 = v113;
LABEL_166:
  v35 = P;
  if ( v13 < 0 )
  {
LABEL_203:
    PnpFinalizeVetoedRemove(v1, *P, v113);
    PnpNotifyUserModeDeviceRemoval(v1, v115, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0LL, 0LL);
  }
  else
  {
    LOBYTE(v46) = 1;
    v13 = PnpDeleteLockedDeviceNodes(
            (int)Object,
            (int)BugCheckParameter4,
            0,
            v46,
            *((_DWORD *)v1 + 4),
            *((_DWORD *)v1 + 5),
            (ULONG_PTR)P,
            (__int64)v12);
    memset(v120, 0, sizeof(v120));
    v61 = BYTE5(v120[4]);
    v62 = 0;
    LODWORD(v120[4]) = 0;
    v120[0] = 0LL;
    v120[1] = v6 + 40;
    if ( (v8 & 0xFFFFFFFB) == 0 )
      v61 = 1LL;
    v120[3] = &v120[2];
    v120[2] = &v120[2];
    BYTE5(v120[4]) = v61;
    if ( PnpDumpVetoedHandles || (BYTE4(v120[4]) = 0, (NtGlobalFlag & 0x4000) != 0) )
      BYTE4(v120[4]) = 1;
    if ( v13 < 0 )
    {
      v67 = v131;
      if ( *P == 6 )
      {
        PnpCollectOpenHandles(v110, (unsigned int)v131, v120);
        goto LABEL_188;
      }
    }
    else
    {
      v63 = 0;
      v64 = v110;
      do
      {
        if ( v63 )
          KeDelayExecutionThread(0, 0, &Interval);
        IsChainDereferenced = PnpIsChainDereferenced(v64, v131, 1, 0, &DeviceObject);
        v62 = 0;
        if ( !IsChainDereferenced )
          break;
        ++v63;
      }
      while ( v63 < 0x32 );
      v6 = (__int64)v116;
      v66 = v63 == 50;
      v67 = v131;
      BugCheckParameter4 = (_QWORD *)v118;
      if ( v66 )
      {
        v68 = v110;
        *P = 5;
        PnpCollectOpenHandles(v68, (unsigned int)v131, v120);
        if ( DeviceObject )
        {
          DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
          v70 = DeviceAttachmentBaseRef;
          if ( DeviceAttachmentBaseRef )
            DeviceNode = (char *)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
          else
            DeviceNode = 0LL;
          RtlCopyUnicodeString(v113, (PCUNICODE_STRING)(DeviceNode + 40));
          ObfDereferenceObject(v70);
        }
        else
        {
          RtlInitUnicodeString(v113, 0LL);
        }
        LOBYTE(v72) = 1;
        PnpDeleteLockedDeviceNodes((int)Object, (int)BugCheckParameter4, 1, v72, 0, 0, 0LL, 0LL);
        v13 = -1073741823;
LABEL_188:
        v62 = 0;
      }
    }
    if ( BYTE5(v120[4]) )
    {
      PnpLogVetoInformation(v120[1], &v120[2], 0LL);
      PnpFreeVetoInformation(&v120[2]);
      v62 = 0;
    }
    if ( v13 < 0 )
    {
      v73 = v67 - 1;
      v74 = v67 - 1;
      if ( v73 >= 0 )
      {
        v75 = v110;
        do
        {
          v76 = (_QWORD *)v75[v74];
          v109 = v76;
          if ( v76 )
            v77 = *(_QWORD *)(v76[39] + 40LL);
          else
            v77 = 0LL;
          if ( !v77 || (v78 = *(_DWORD *)(v77 + 300), ((v78 - 769) & 0xFFFFFFEE) != 0) || v78 == 785 )
            PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_CANCELLED, v76);
          --v74;
        }
        while ( v74 >= 0 );
        v6 = (__int64)v116;
      }
      goto LABEL_203;
    }
    if ( *((_DWORD *)v1 + 4) == 54 )
    {
      LOBYTE(v62) = v130;
      v13 = PnpCancelRemoveOnHungDevices((_DWORD)v1, v8, v62, (_DWORD)BugCheckParameter4, (__int64)&v115);
    }
  }
LABEL_207:
  if ( v13 >= 0 )
  {
LABEL_36:
    if ( v8 == 3 )
    {
      v21 = v123;
      if ( v123 )
      {
        PnpNotifyUserModeDeviceRemoval(v1, v123, &GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL);
        ExFreePoolWithTag(v21, 0x4B706E50u);
      }
      v22 = &GUID_TARGET_DEVICE_REMOVE_COMPLETE;
    }
    else
    {
      v22 = &GUID_DEVICE_REMOVE_PENDING;
    }
    PnpNotifyUserModeDeviceRemoval(v1, v115, v22, 0LL, 0LL);
    v25 = v131;
    if ( v131 <= 0 )
    {
      v30 = 1LL;
    }
    else
    {
      v26 = (_QWORD **)v110;
      v27 = (unsigned int)v131;
      do
      {
        v28 = *v26;
        v109 = v28;
        if ( v28 )
          v29 = *(_QWORD *)(v28[39] + 40LL);
        else
          v29 = 0LL;
        if ( v8 || !v29 || (*(_DWORD *)(v29 + 704) & 2) == 0 )
          PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_COMPLETE, v28);
        ++v26;
        v30 = 1LL;
        --v27;
      }
      while ( v27 );
      v6 = (__int64)v116;
    }
    if ( ((v8 - 2) & 0xFFFFFFFC) == 0 && v8 != 4 )
    {
      LOBYTE(v23) = 1;
      PnpInvalidateRelationsInList(BugCheckParameter4, v8, v23, 0LL);
      v31 = *(_DWORD *)*BugCheckParameter4 - 1;
      if ( v31 >= 0 )
      {
        do
        {
          PipDeviceObjectListElementAt(*BugCheckParameter4, v31, (unsigned int)&v128, (unsigned int)&v119, 0LL);
          if ( !v119 )
            PipDeviceObjectListRemove(*BugCheckParameter4, (unsigned int)v31);
          --v31;
        }
        while ( v31 >= 0 );
        v25 = v131;
      }
    }
    if ( ((v8 - 3) & 0xFFFFFFFD) == 0 )
    {
      PnpUnlinkDeviceRemovalRelations(v30, BugCheckParameter4);
      if ( !*(_QWORD *)(v6 + 16) )
      {
        ++*(_DWORD *)(*(_QWORD *)(v6 + 648) + 656LL);
        *(_QWORD *)(v6 + 648) |= 1uLL;
      }
      PnpQueuePendingSurpriseRemoval(Object, &v118, *((unsigned int *)v1 + 4), v8);
      PpDevNodeUnlockTree(1);
      v32 = v110;
      PnpIsChainDereferenced(v110, v25, 0, 1u, 0LL);
      v3 = P;
      v13 = 0;
      goto LABEL_59;
    }
    v82 = (int)Object;
    if ( *(_DWORD *)(v6 + 568) )
    {
      IopQueryDockRemovalInterface(Object, &v117);
      if ( v117 )
        (*(void (__fastcall **)(_QWORD, __int64))(v117 + 32))(*(_QWORD *)(v117 + 8), 3LL);
    }
    if ( v8 )
    {
      if ( v8 != 4 )
      {
        LOBYTE(v24) = 0;
        goto LABEL_246;
      }
    }
    else
    {
      PipSetDevNodeFlags(v6, 0x2000000);
    }
    v24 = 1;
LABEL_246:
    PnpDeleteLockedDeviceNodes(v82, (int)BugCheckParameter4, 2, v24, *((_DWORD *)v1 + 4), *((_DWORD *)v1 + 5), 0LL, 0LL);
    v84 = *(_DWORD *)(v6 + 560);
    LOBYTE(v84) = (v84 & 8) != 0;
    if ( v8 == 4 )
    {
      if ( (*(_DWORD *)(v6 + 560) & 8) == 0 && (v84 & 0x10000) == 0 )
      {
        PnpUnlinkDeviceRemovalRelations(v83, BugCheckParameter4);
        IopFreeRelationList(BugCheckParameter4);
LABEL_271:
        if ( v8 == 2 )
          PnpNotifyUserModeDeviceRemoval(v1, v115, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL);
        if ( !v8
          && (*((_DWORD *)v1 + 34) & 2) == 0
          && (*(_DWORD *)(v6 + 396) & 0x2000) != 0
          && *(_DWORD *)(v6 + 404) == 18 )
        {
          PipClearDevNodeProblem(v6);
          PnpRestartDeviceNode(v6);
          PnpRequestDeviceAction(*(PVOID *)(v6 + 32), 16, 1, 0LL, 0LL, 0LL);
        }
        v89 = v117;
        if ( v117 )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(v117 + 32))(*(_QWORD *)(v117 + 8), 1LL);
          (*(void (__fastcall **)(_QWORD))(v89 + 24))(*(_QWORD *)(v89 + 8));
        }
        v13 = 0;
        goto LABEL_115;
      }
      v108 = 1LL;
      while ( (unsigned __int8)IopEnumerateRelations(
                                 (_DWORD)BugCheckParameter4,
                                 (unsigned int)&v108,
                                 (unsigned int)&v109,
                                 0,
                                 0LL) )
      {
        v91 = v109[39];
        v92 = *(_QWORD *)(v91 + 40);
        if ( v92 )
        {
          PipSetDevNodeFlags(*(_QWORD *)(v91 + 40), 0x80000);
          v93 = *(_QWORD *)(v92 + 696);
          if ( v93 )
          {
            IopFreeRelationList(*(PVOID *)(v93 + 64));
            *(_QWORD *)(v93 + 64) = 0LL;
            *(_QWORD *)(v92 + 696) = 0LL;
          }
        }
      }
      PnpUnlinkDeviceRemovalRelations(v90, BugCheckParameter4);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x20207050u);
      v99 = v116;
      v100 = PoolWithTag;
      if ( PoolWithTag )
      {
        v102 = (struct _DEVICE_OBJECT *)Object;
        ObfReferenceObject(Object);
        LOBYTE(v103) = v129;
        v100[8] = BugCheckParameter4;
        LOBYTE(v104) = BYTE2(v84) & 1;
        *((_BYTE *)v100 + 88) = v129;
        v100[6] = v1;
        LOBYTE(v105) = v84;
        v100[7] = v102;
        *((_BYTE *)v100 + 89) = (v1[136] & 8) != 0;
        v100[12] = v117;
        *((_QWORD *)v99 + 87) = v100;
        LightestSystemStateForEject = PoGetLightestSystemStateForEject(v103, v105, v104, (char *)v100 + 92);
        if ( LightestSystemStateForEject >= 0 )
        {
          PpDevNodeUnlockTree(1);
          IopEjectDevice(v102);
          v3 = P;
          v13 = 259;
          goto LABEL_90;
        }
        if ( LightestSystemStateForEject == -1073741090 )
          v44 = 9LL;
        else
          v44 = 0LL;
        PnpFinalizeVetoedRemove(v1, v44, 0LL);
        v100[6] = 0LL;
        *((_BYTE *)v100 + 89) = 0;
        v100[1] = v100;
        *v100 = v100;
        PnpProcessCompletedEject(v100);
      }
      else
      {
        v101 = v117;
        if ( v117 )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(v117 + 32))(*(_QWORD *)(v117 + 8), 1LL);
          (*(void (__fastcall **)(_QWORD))(v101 + 24))(*(_QWORD *)(v101 + 8));
        }
        if ( v129 )
          PpProfileCancelHardwareProfileTransition(v96, v95, v97);
        LOBYTE(v98) = 1;
        PnpInvalidateRelationsInList(BugCheckParameter4, 4LL, 0LL, v98);
        IopFreeRelationList(BugCheckParameter4);
        PnpFinalizeVetoedRemove(v1, 0LL, 0LL);
      }
LABEL_133:
      v13 = -2147483608;
      goto LABEL_115;
    }
    v85 = Object;
    v108 = 1LL;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !(unsigned __int8)IopEnumerateRelations(
                                   (_DWORD)BugCheckParameter4,
                                   (unsigned int)&v108,
                                   (unsigned int)&v109,
                                   (unsigned int)&v112,
                                   0LL) )
          {
            PnpUnlinkDeviceRemovalRelations(v86, BugCheckParameter4);
            IopFreeRelationList(BugCheckParameter4);
            v6 = (__int64)v116;
            goto LABEL_271;
          }
          v87 = v109;
          v88 = v109 ? *(_DWORD **)(v109[39] + 40LL) : 0LL;
          if ( *((_DWORD *)v1 + 4) != 54 || v112 == 1 )
            break;
          if ( v88[75] != 788 )
          {
            *((_DWORD *)v109 + 12) |= 0x4000000u;
            IopQueryDeviceState(v87, &v111);
          }
        }
        if ( v85 != v109 )
          break;
        if ( (*((_DWORD *)v1 + 34) & 2) == 0 && v88[75] == 786 && (v88[99] & 0x2000) != 0 && v88[101] == 21 )
        {
          PipClearDevNodeProblem(v88);
          goto LABEL_266;
        }
      }
      if ( (v88[99] & 0x6000) == 0 && v88[75] == 786 )
LABEL_266:
        PnpRestartDeviceNode(v88);
    }
  }
  if ( v129 )
    PpProfileCancelHardwareProfileTransition(v61, v60, 0LL);
  if ( *((_DWORD *)v1 + 4) == 54 )
  {
    v108 = 1LL;
    while ( (unsigned __int8)IopEnumerateRelations(
                               (_DWORD)BugCheckParameter4,
                               (unsigned int)&v108,
                               (unsigned int)&v109,
                               0,
                               0LL) )
      *(_DWORD *)(v6 + 704) &= ~2u;
    if ( *((_DWORD *)v1 + 4) == 54 )
    {
      if ( *(_DWORD *)*BugCheckParameter4 == 1 )
      {
        if ( *v35 == 6 || *(_DWORD *)(v6 + 300) == 788 )
          KeBugCheckEx(0xCAu, 0xEuLL, BugCheckParameter2, (int)*v35, (ULONG_PTR)BugCheckParameter4);
        v79 = Object;
        *((_DWORD *)Object + 12) |= 0x4000000u;
        IopQueryDeviceState(v79, &v111);
        goto LABEL_219;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v1 + 5) + 216LL) & 1) != 0 && *v35 == 5 )
      {
        v108 = 1LL;
        while ( (unsigned __int8)IopEnumerateRelations(
                                   (_DWORD)BugCheckParameter4,
                                   (unsigned int)&v108,
                                   (unsigned int)&v109,
                                   (unsigned int)&v112,
                                   0LL) )
        {
          v80 = v109;
          if ( v109 )
            v81 = *(_QWORD *)(v109[39] + 40LL);
          else
            v81 = 0LL;
          if ( v112 != 1 && *(_DWORD *)(v81 + 300) != 788 )
          {
            *((_DWORD *)v109 + 12) |= 0x4000000u;
            IopQueryDeviceState(v80, &v111);
          }
        }
LABEL_219:
        v13 = 0;
      }
      else
      {
        v13 = -2147483608;
      }
    }
  }
  IopFreeRelationList(BugCheckParameter4);
LABEL_115:
  v3 = P;
LABEL_89:
  PpDevNodeUnlockTree(1);
LABEL_90:
  v32 = v110;
LABEL_59:
  if ( v3 && !PnpShutdownEvent.Header.SignalState )
    ExFreePoolWithTag(v3, 0);
  if ( v115 )
    ExFreePoolWithTag(v115, 0);
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  return (unsigned int)v13;
}
