/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x140484DD0
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x14048A17C (PnpProcessTargetDeviceEvent.c)
 *     PnpShutdownDevices @ 0x140629AD4 (PnpShutdownDevices.c)
 * Callees:
 *     PipAreDriversLoaded @ 0x140009350 (PipAreDriversLoaded.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     PnpIsChainDereferenced @ 0x1400858E0 (PnpIsChainDereferenced.c)
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopQueryDeviceState @ 0x1403F01FC (IopQueryDeviceState.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     IoGetLegacyVetoList @ 0x1403F2D94 (IoGetLegacyVetoList.c)
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     IopRemoveDeviceRelationsFromList @ 0x140483AD0 (IopRemoveDeviceRelationsFromList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x140483B1C (PiEventRemovalPostSurpriseRemove.c)
 *     PipClearDevNodeProblem @ 0x1404844A0 (PipClearDevNodeProblem.c)
 *     PiEventRemovalCompleteNotifyKernel @ 0x140485190 (PiEventRemovalCompleteNotifyKernel.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1404851F8 (PnpNotifyUserModeDeviceRemoval.c)
 *     PiEventAllocateVetoBuffer @ 0x140485334 (PiEventAllocateVetoBuffer.c)
 *     PnpResizeTargetDeviceBlock @ 0x140485388 (PnpResizeTargetDeviceBlock.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1404855C4 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140485654 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x1404857D0 (PiEventBuildPdoList.c)
 *     PnpInvalidateRelationsInList @ 0x140485900 (PnpInvalidateRelationsInList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1404859EC (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x140485AE0 (PnpCompileDeviceInstancePaths.c)
 *     IopEnumerateRelations @ 0x140485C7C (IopEnumerateRelations.c)
 *     IopFreeRelationList @ 0x140485DE0 (IopFreeRelationList.c)
 *     PnpBuildRemovalRelationList @ 0x140485F74 (PnpBuildRemovalRelationList.c)
 *     PiEventRemovalGetDeleteType @ 0x1404869DC (PiEventRemovalGetDeleteType.c)
 *     PiEventRestartRemovalRelations @ 0x140580AB0 (PiEventRestartRemovalRelations.c)
 *     PnpRestartDeviceNode @ 0x14062DD3C (PnpRestartDeviceNode.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14062DE34 (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x14062E050 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140642388 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1406423B0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x140642714 (PpProfileQueryHardwareProfileChange.c)
 *     PnpFinalizeVetoedRemove @ 0x140642A98 (PnpFinalizeVetoedRemove.c)
 *     IopEjectDevice @ 0x140649E68 (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x14064A004 (IopQueryDockRemovalInterface.c)
 *     PiEventQueryRemoveDevices @ 0x14064D0B4 (PiEventQueryRemoveDevices.c)
 *     PiEventQueryRemoveNoFdo @ 0x14064D234 (PiEventQueryRemoveNoFdo.c)
 *     PiEventQueryRemoveNotifyKernel @ 0x14064D2CC (PiEventQueryRemoveNotifyKernel.c)
 *     PiEventRemovalCanceledNotifyKernel @ 0x14064D3CC (PiEventRemovalCanceledNotifyKernel.c)
 *     PoGetLightestSystemStateForEject @ 0x14066A264 (PoGetLightestSystemStateForEject.c)
 */

__int64 __fastcall PnpProcessQueryRemoveAndEject(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  PVOID v3; // r12
  _QWORD *v4; // r14
  __int64 v5; // rax
  __int64 v6; // r15
  int v7; // eax
  ULONG_PTR v8; // rsi
  PUNICODE_STRING v9; // rbx
  unsigned int *v10; // r12
  _DWORD **BugCheckParameter4; // r14
  int v12; // ebx
  __int64 *v13; // rdi
  int v14; // eax
  int v15; // r8d
  __int64 v16; // rcx
  PVOID v17; // rbx
  GUID *v18; // r8
  int v19; // ebx
  __int64 v20; // r8
  int v21; // r9d
  PVOID v22; // rdi
  PVOID v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  _QWORD *v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // rcx
  int v35; // r8d
  __int64 v36; // rcx
  int v37; // ecx
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rsi
  _BYTE *PoolWithTag; // rbx
  __int64 v45; // r9
  struct _DEVICE_OBJECT *v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  bool v50; // al
  int LightestSystemStateForEject; // eax
  int v52; // [rsp+50h] [rbp-79h] BYREF
  PVOID v53; // [rsp+58h] [rbp-71h] BYREF
  PVOID v54; // [rsp+60h] [rbp-69h] BYREF
  int v55; // [rsp+68h] [rbp-61h] BYREF
  int v56; // [rsp+6Ch] [rbp-5Dh]
  PUNICODE_STRING v57; // [rsp+70h] [rbp-59h] BYREF
  __int64 v58; // [rsp+78h] [rbp-51h] BYREF
  PVOID Object; // [rsp+80h] [rbp-49h]
  int v60; // [rsp+88h] [rbp-41h] BYREF
  __int64 v61; // [rsp+90h] [rbp-39h] BYREF
  ULONG_PTR v62; // [rsp+98h] [rbp-31h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-29h] BYREF
  PCWSTR SourceString; // [rsp+A8h] [rbp-21h] BYREF
  PVOID v65; // [rsp+B0h] [rbp-19h] BYREF
  PVOID P; // [rsp+B8h] [rbp-11h]
  int v67[2]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp+7h] BYREF
  __int64 *v70; // [rsp+130h] [rbp+67h] BYREF
  char v71; // [rsp+138h] [rbp+6Fh] BYREF
  int v72; // [rsp+140h] [rbp+77h] BYREF
  char v73; // [rsp+148h] [rbp+7Fh]

  v70 = a1;
  v1 = *a1;
  v2 = 0LL;
  P = 0LL;
  v3 = 0LL;
  v54 = 0LL;
  v68 = 0LL;
  v4 = *(_QWORD **)(v1 + 144);
  *(_QWORD *)v67 = 0LL;
  v65 = 0LL;
  v61 = 0LL;
  v5 = v4[39];
  v71 = 0;
  LOBYTE(v72) = 0;
  v53 = 0LL;
  v6 = *(_QWORD *)(v5 + 40);
  Object = v4;
  PpDevNodeLockTree(1);
  if ( (unsigned int)(*(_DWORD *)(v6 + 300) - 787) <= 1 )
  {
    v12 = -1073741738;
    goto LABEL_49;
  }
  v7 = PiEventRemovalGetDeleteType(v6, v1);
  v8 = v7;
  if ( v7 == 4 || v7 <= 1 || (v73 = 1, v7 >= 7) )
    v73 = 0;
  if ( (v7 & 0xFFFFFFFB) == 0 && (*(_DWORD *)(v6 + 396) & 0x1000) != 0 )
  {
    v27 = 1LL;
LABEL_55:
    v28 = v6 + 40;
LABEL_58:
    PnpFinalizeVetoedRemove(v1, v27, v28);
LABEL_61:
    v12 = -2147483608;
    goto LABEL_49;
  }
  if ( !v7 && *(_DWORD *)(v1 + 16) == 22 && *(_DWORD *)(v6 + 600) )
  {
    v27 = 10LL;
    goto LABEL_55;
  }
  P = (PVOID)PiEventAllocateVetoBuffer((unsigned int)v7, &v63, &v57);
  if ( !P )
    goto LABEL_57;
  if ( (_DWORD)v8 == 4 )
  {
    if ( (*(_DWORD *)(v6 + 396) & 0x80000) != 0 || (unsigned int)(*(_DWORD *)(v6 + 568) - 3) <= 1 )
    {
LABEL_48:
      v12 = 0;
LABEL_49:
      PpDevNodeUnlockTree(1);
LABEL_50:
      v22 = v54;
      goto LABEL_29;
    }
    if ( (*(_DWORD *)(v6 + 560) & 0x10) == 0 )
    {
      v27 = 8LL;
      goto LABEL_55;
    }
  }
  else if ( !(_DWORD)v8 && !(unsigned int)PipAreDriversLoaded(v6) )
  {
    v12 = PiEventQueryRemoveNoFdo(v6, v1);
    goto LABEL_49;
  }
  v9 = v57;
  v10 = (unsigned int *)v63;
  if ( (int)PnpBuildRemovalRelationList(v4, (unsigned int)v8, v63, v57, &v62) < 0 )
  {
LABEL_71:
    PnpFinalizeVetoedRemove(v1, *v10, v9);
LABEL_73:
    v12 = -2147483608;
LABEL_76:
    v3 = v53;
    goto LABEL_49;
  }
  BugCheckParameter4 = (_DWORD **)v62;
  v12 = PiEventBuildPdoList(v62, v8, v1, (unsigned int)&v52, (__int64)&v54, (__int64)&v71, (__int64)&v72);
  if ( v12 < 0 )
    goto LABEL_154;
  v13 = v70;
  v14 = PnpResizeTargetDeviceBlock(v70, (unsigned int)v8);
  v1 = *v13;
  v12 = v14;
  if ( v14 < 0 )
    goto LABEL_154;
  LOBYTE(v15) = v73;
  v12 = PnpCompileDeviceInstancePaths(v8, (_DWORD)BugCheckParameter4, v15, 0, (__int64)&v53);
  if ( (_DWORD)v8 == 3 )
    PnpBuildUnsafeRemovalDeviceList(v16, BugCheckParameter4, &v65);
  if ( v12 < 0 )
  {
LABEL_154:
    IopFreeRelationList(BugCheckParameter4);
    PnpFinalizeVetoedRemove(v1, 0LL, 0LL);
    goto LABEL_76;
  }
  if ( !v71 )
    goto LABEL_17;
  LOBYTE(v16) = v72;
  PpProfileBeginHardwareProfileTransition(v16);
  if ( v52 - 1 >= 0 )
  {
    v30 = v54;
    v31 = v52 - 1;
    do
    {
      v58 = v30[v31];
      v32 = *(_QWORD *)(*(_QWORD *)(v58 + 312) + 40LL);
      if ( *(_DWORD *)(v32 + 568) == 1 )
      {
        _InterlockedIncrement(&PiProfileDevicesInTransition);
        v30 = v54;
        *(_DWORD *)(v32 + 568) = 3;
      }
      --v31;
    }
    while ( v31 >= 0 );
    v2 = v61;
    v10 = (unsigned int *)v63;
    BugCheckParameter4 = (_DWORD **)v62;
  }
  if ( (_DWORD)v8 == 4 )
  {
    if ( (int)IoGetLegacyVetoList((PVOID *)&SourceString, v10) >= 0 && *v10 )
    {
      PpProfileCancelHardwareProfileTransition();
      IopFreeRelationList(BugCheckParameter4);
      v34 = *(_DWORD **)(v1 + 48);
      if ( v34 )
        *v34 = *v10;
      if ( *(_QWORD *)(v1 + 56) )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        RtlCopyUnicodeString(*(PUNICODE_STRING *)(v1 + 56), &DestinationString);
      }
      ExFreePoolWithTag((PVOID)SourceString, 0);
      goto LABEL_73;
    }
    v9 = v57;
    LOBYTE(v33) = v72;
    if ( (int)PpProfileQueryHardwareProfileChange(v33, 0LL, v10, v57) < 0 )
    {
      PpProfileCancelHardwareProfileTransition();
      IopFreeRelationList(BugCheckParameter4);
      goto LABEL_71;
    }
  }
  else
  {
LABEL_17:
    if ( (v8 & 0xFFFFFFFB) != 0 )
    {
      if ( (((_DWORD)v8 - 3) & 0xFFFFFFFD) == 0 )
        PnpDeleteLockedDeviceNodes((int)Object, (int)BugCheckParameter4, 3, 0, 0, 0, 0LL, 0LL);
      goto LABEL_20;
    }
    v9 = v57;
  }
  v12 = PnpNotifyUserModeDeviceRemoval(v1, v53, &GUID_TARGET_DEVICE_QUERY_REMOVE, v10, v9);
  if ( v12 < 0 )
  {
    PnpFinalizeVetoedRemove(v1, *v10, v57);
  }
  else
  {
    v12 = PiEventQueryRemoveNotifyKernel(v1, (int)v54, v52, (int)v67, (__int64)v10, v57);
    if ( v12 < 0 )
    {
LABEL_97:
      PnpFinalizeVetoedRemove(v1, *v10, v57);
      PnpNotifyUserModeDeviceRemoval(v1, v53, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0LL, 0LL);
      goto LABEL_101;
    }
    v12 = PiEventQueryRemoveDevices((unsigned int)v8, v1, Object, BugCheckParameter4, v52, v54, v10, v57, &v68);
    if ( v12 < 0 )
    {
      PiEventRemovalCanceledNotifyKernel(v54, (unsigned int)v52);
      goto LABEL_97;
    }
    if ( *(_DWORD *)(v1 + 16) == 54 )
    {
      LOBYTE(v35) = v73;
      v12 = PnpCancelRemoveOnHungDevices(v1, v8, v35, (_DWORD)BugCheckParameter4, (__int64)&v53);
    }
  }
LABEL_101:
  if ( v12 < 0 )
  {
    if ( v71 )
      PpProfileCancelHardwareProfileTransition();
    if ( *(_DWORD *)(v1 + 16) != 54 )
      goto LABEL_75;
    v56 = 0;
    v55 = 1;
    while ( (unsigned __int8)IopEnumerateRelations(
                               (_DWORD)BugCheckParameter4,
                               (unsigned int)&v55,
                               (unsigned int)&v58,
                               0,
                               0LL) )
    {
      if ( v58 )
        v36 = *(_QWORD *)(*(_QWORD *)(v58 + 312) + 40LL);
      else
        v36 = 0LL;
      if ( v36 )
        *(_DWORD *)(v36 + 704) &= ~2u;
    }
    if ( *(_DWORD *)(v1 + 16) != 54 )
      goto LABEL_75;
    if ( **BugCheckParameter4 == 1 )
    {
      if ( *v10 == 6 || *(_DWORD *)(v6 + 300) == 788 )
        KeBugCheckEx(0xCAu, 0xEuLL, v8, (int)*v10, (ULONG_PTR)BugCheckParameter4);
      v37 = (int)Object;
      *((_DWORD *)Object + 12) |= 0x4000000u;
      IopQueryDeviceState(v37, &v60);
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 216LL) & 1) == 0 || *v10 != 5 )
      {
        v12 = -2147483608;
LABEL_75:
        IopFreeRelationList(BugCheckParameter4);
        goto LABEL_76;
      }
      v56 = 0;
      v55 = 1;
      while ( (unsigned __int8)IopEnumerateRelations(
                                 (_DWORD)BugCheckParameter4,
                                 (unsigned int)&v55,
                                 (unsigned int)&v58,
                                 (unsigned int)&v70,
                                 0LL) )
      {
        v38 = v58;
        if ( v58 )
          v39 = *(_QWORD *)(*(_QWORD *)(v58 + 312) + 40LL);
        else
          v39 = 0LL;
        if ( (_DWORD)v70 != 1 && *(_DWORD *)(v39 + 300) != 788 )
        {
          *(_DWORD *)(v58 + 48) |= 0x4000000u;
          IopQueryDeviceState(v38, &v60);
        }
      }
    }
    v12 = 0;
    goto LABEL_75;
  }
LABEL_20:
  if ( (_DWORD)v8 == 3 )
  {
    v17 = v65;
    if ( v65 )
    {
      PnpNotifyUserModeDeviceRemoval(v1, v65, &GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL);
      ExFreePoolWithTag(v17, 0x4B706E50u);
    }
    v18 = &GUID_TARGET_DEVICE_REMOVE_COMPLETE;
  }
  else
  {
    v18 = &GUID_DEVICE_REMOVE_PENDING;
  }
  v3 = v53;
  PnpNotifyUserModeDeviceRemoval(v1, v53, v18, 0LL, 0LL);
  v19 = v52;
  PiEventRemovalCompleteNotifyKernel((unsigned int)v8, v54, (unsigned int)v52);
  if ( (((_DWORD)v8 - 2) & 0xFFFFFFFC) == 0 && (_DWORD)v8 != 4 )
  {
    LOBYTE(v20) = 1;
    PnpInvalidateRelationsInList(BugCheckParameter4, (unsigned int)v8, v20, 0LL);
    IopRemoveDeviceRelationsFromList(BugCheckParameter4);
  }
  if ( (((_DWORD)v8 - 3) & 0xFFFFFFFD) != 0 )
  {
    v24 = Object;
    if ( *(_DWORD *)(v6 + 568) )
    {
      IopQueryDockRemovalInterface(Object, &v61);
      v2 = v61;
      if ( v61 )
        (*(void (__fastcall **)(_QWORD, __int64))(v61 + 32))(*(_QWORD *)(v61 + 8), 3LL);
    }
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 4 )
      {
        v21 = 0;
LABEL_41:
        PnpDeleteLockedDeviceNodes(
          (int)v24,
          (int)BugCheckParameter4,
          2,
          v21,
          *(_DWORD *)(v1 + 16),
          *(_DWORD *)(v1 + 20),
          0LL,
          0LL);
        v25 = *(_DWORD *)(v6 + 560) >> 3;
        v26 = HIWORD(*(_DWORD *)(v6 + 560));
        LOBYTE(v25) = (*(_DWORD *)(v6 + 560) & 8) != 0;
        LOBYTE(v26) = HIWORD(*(_DWORD *)(v6 + 560)) & 1;
        v72 = v25;
        LODWORD(v70) = v26;
        if ( (_DWORD)v8 != 4 )
        {
          PiEventRestartRemovalRelations(v1, BugCheckParameter4, v24);
LABEL_43:
          PnpUnlinkDeviceRemovalRelations(v25, BugCheckParameter4);
          IopFreeRelationList(BugCheckParameter4);
          if ( (_DWORD)v8 == 2 )
            PnpNotifyUserModeDeviceRemoval(v1, v3, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL);
          if ( !(_DWORD)v8
            && (*(_DWORD *)(v1 + 136) & 2) == 0
            && (*(_DWORD *)(v6 + 396) & 0x2000) != 0
            && *(_DWORD *)(v6 + 404) == 18 )
          {
            PipClearDevNodeProblem(v6);
            PnpRestartDeviceNode(v6);
            PnpRequestDeviceAction(*(PVOID *)(v6 + 32), 16, 1, 0LL, 0LL, 0LL);
          }
          if ( v2 )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
            (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
          }
          goto LABEL_48;
        }
        if ( !(_BYTE)v25 && !(_BYTE)v26 )
          goto LABEL_43;
        v56 = 0;
        v55 = 1;
        while ( (unsigned __int8)IopEnumerateRelations(
                                   (_DWORD)BugCheckParameter4,
                                   (unsigned int)&v55,
                                   (unsigned int)&v58,
                                   0,
                                   0LL) )
        {
          v41 = *(_QWORD *)(v58 + 312);
          v42 = *(_QWORD *)(v41 + 40);
          if ( v42 )
          {
            PipSetDevNodeFlags(*(_QWORD *)(v41 + 40), 0x80000);
            v43 = *(_QWORD *)(v42 + 696);
            if ( v43 )
            {
              IopFreeRelationList(*(PVOID *)(v43 + 64));
              *(_QWORD *)(v43 + 64) = 0LL;
              *(_QWORD *)(v42 + 696) = 0LL;
            }
          }
        }
        PnpUnlinkDeviceRemovalRelations(v40, BugCheckParameter4);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x20207050u);
        if ( PoolWithTag )
        {
          v46 = (struct _DEVICE_OBJECT *)Object;
          ObfReferenceObject(Object);
          LOBYTE(v47) = v71;
          LOBYTE(v48) = (_BYTE)v70;
          LOBYTE(v49) = v72;
          PoolWithTag[88] = v71;
          *((_QWORD *)PoolWithTag + 6) = v1;
          *((_QWORD *)PoolWithTag + 7) = v46;
          *((_QWORD *)PoolWithTag + 8) = BugCheckParameter4;
          v50 = (*(_BYTE *)(v1 + 136) & 8) != 0;
          *((_QWORD *)PoolWithTag + 12) = v2;
          PoolWithTag[89] = v50;
          *(_QWORD *)(v6 + 696) = PoolWithTag;
          LightestSystemStateForEject = PoGetLightestSystemStateForEject(v47, v49, v48, PoolWithTag + 92);
          if ( LightestSystemStateForEject >= 0 )
          {
            PpDevNodeUnlockTree(1);
            IopEjectDevice(v46);
            v12 = 259;
            goto LABEL_50;
          }
          if ( LightestSystemStateForEject == -1073741090 )
            v29 = 9LL;
          else
            v29 = 0LL;
          PnpFinalizeVetoedRemove(v1, v29, 0LL);
          *((_QWORD *)PoolWithTag + 6) = 0LL;
          PoolWithTag[89] = 0;
          *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
          *(_QWORD *)PoolWithTag = PoolWithTag;
          PnpProcessCompletedEject(PoolWithTag);
          goto LABEL_61;
        }
        if ( v2 )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(v2 + 32))(*(_QWORD *)(v2 + 8), 1LL);
          (*(void (__fastcall **)(_QWORD))(v2 + 24))(*(_QWORD *)(v2 + 8));
        }
        if ( v71 )
          PpProfileCancelHardwareProfileTransition();
        LOBYTE(v45) = 1;
        PnpInvalidateRelationsInList(BugCheckParameter4, 4LL, 0LL, v45);
        IopFreeRelationList(BugCheckParameter4);
LABEL_57:
        v28 = 0LL;
        v27 = 0LL;
        goto LABEL_58;
      }
    }
    else
    {
      PipSetDevNodeFlags(v6, 0x2000000);
    }
    LOBYTE(v21) = 1;
    goto LABEL_41;
  }
  PiEventRemovalPostSurpriseRemove((_QWORD *)v6, v1, v8, &v62);
  PpDevNodeUnlockTree(1);
  v22 = v54;
  PnpIsChainDereferenced(v54, v19, 0, 1u, 0LL);
  v12 = 0;
LABEL_29:
  if ( P && !PnpShutdownEvent.Header.SignalState )
    ExFreePoolWithTag(P, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  return (unsigned int)v12;
}
