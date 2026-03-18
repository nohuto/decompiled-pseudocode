/*
 * XREFs of imp_WdfRegistryOpenKey @ 0x1C00091F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C00089B0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0008E30 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0008F40 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A070 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C0011E28 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00140F4 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C001C048 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001C214 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     FxFreeToNPagedLookasideListNoTracking @ 0x1C0038660 (FxFreeToNPagedLookasideListNoTracking.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C003A718 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C003A78C (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003B6E0 (-FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C003B760 (-PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003B810 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003B87C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003BE40 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003BE7C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003C1C8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0063DB0 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C00651D0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_DDxd @ 0x1C007BC28 (WPP_IFR_SF_DDxd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C9490 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall imp_WdfRegistryOpenKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v6; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int result; // eax
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  unsigned __int16 Length; // dx
  int v13; // eax
  unsigned __int64 ContextSizeOverride; // rax
  unsigned __int64 v15; // r13
  int v16; // ebx
  void *Caller; // rax
  void (__fastcall ***v18)(FxObject *); // rax
  _FX_DRIVER_GLOBALS *v19; // rdx
  void (__fastcall ***v20)(FxObject *); // rbx
  int v21; // ebp
  _LIST_ENTRY *v22; // r12
  void (__fastcall **v23)(FxObject *); // rax
  void **v24; // r9
  FxObject *v25; // rsi
  void (__fastcall **v26)(FxObject *); // rax
  KIRQL v27; // r13
  KIRQL v28; // r13
  _LIST_ENTRY *Blink; // rcx
  WDFKEY__ *v30; // rsi
  NTSTATUS v31; // eax
  unsigned __int16 v32; // ax
  _QWORD *i; // rax
  void (__fastcall *v34)(FxObject *); // rax
  KIRQL v35; // al
  int v36; // edx
  KIRQL v37; // r14
  FxObject *v38; // rdi
  KIRQL v39; // r15
  _LIST_ENTRY *Flink; // rcx
  void (__fastcall **v41)(FxObject *); // rax
  __int16 v42; // ax
  bool v43; // zf
  void (__fastcall ***v44)(FxObject *); // rcx
  void (__fastcall ****v45)(FxObject *); // r15
  void (__fastcall ***v46)(FxObject *); // rdi
  unsigned int v47; // edx
  unsigned int v48; // r8d
  __int64 (__fastcall *v49)(FxObject *, void *, __int64, char *); // rax
  __int16 v50; // cx
  FxTagTracker *v51; // r14
  unsigned __int16 v52; // cx
  _QWORD *j; // rdi
  void (__fastcall *v54)(unsigned __int64); // rax
  void (__fastcall *v55)(unsigned __int64); // rax
  unsigned __int16 v56; // ax
  char v57; // dl
  _QWORD *v58; // rcx
  _QWORD *v59; // rdi
  void (__fastcall *v60)(FxObject *, unsigned int); // rdx
  void (__fastcall *v61)(FxObject *); // rax
  void (__fastcall **v62)(FxObject *); // rcx
  void (__fastcall **v63)(FxObject *); // rcx
  FX_POOL_TRACKER *v64; // rdi
  char v65; // r12
  bool v66; // r15
  char v67; // r13
  signed __int32 v68; // eax
  __int16 v69; // ax
  _MDL *v70; // rdx
  void (__fastcall **v71)(FxObject *); // rcx
  void (__fastcall **v72)(FxObject *); // rdi
  FxRequestTimer *v73; // rcx
  __int16 v74; // cx
  FxTagTracker *v75; // r14
  unsigned __int16 v76; // cx
  _QWORD *k; // rdi
  void (__fastcall *v78)(unsigned __int64); // rax
  void (__fastcall *v79)(unsigned __int64); // rax
  unsigned __int16 v80; // ax
  char v81; // dl
  _QWORD *v82; // rcx
  _QWORD *v83; // rdi
  __int64 v84; // rdx
  void (__fastcall *v85)(_QWORD); // rax
  _MDL *v86; // rdx
  void (__fastcall **v87)(FxObject *); // rdi
  void (__fastcall **v88)(FxObject *); // rcx
  void (__fastcall **v89)(FxObject *); // rsi
  FxRequestTimer *v90; // rcx
  void (__fastcall ***v91)(FxObject *); // rsi
  void (__fastcall *v92)(FxObject *); // rax
  _SLIST_ENTRY *v93; // rsi
  void (__fastcall **v94)(FxObject *); // rdi
  void (__fastcall ***v95)(FxObject *); // r14
  KIRQL v96; // al
  KIRQL v97; // r12
  __int16 v98; // cx
  unsigned __int8 v99; // al
  void (__fastcall *v100)(void (__fastcall ***)(FxObject *), __int64); // rax
  void (__fastcall **v101)(FxObject *); // rcx
  void (__fastcall **v102)(FxObject *); // rcx
  void (__fastcall ***v103)(FxObject *); // rax
  FX_POOL_TRACKER *v104; // rdi
  _MDL *v105; // rdx
  void (__fastcall **v106)(FxObject *); // rcx
  void (__fastcall **v107)(FxObject *); // rdi
  FxRequestTimer *v108; // rcx
  void (__fastcall ***v109)(FxObject *); // rcx
  FxObject *v110; // rcx
  void *ParentObject; // rdx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v113; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rcx
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v117; // rax
  unsigned __int64 ContextSize; // r8
  unsigned __int64 v119; // rdx
  unsigned __int16 v120; // ax
  char *v121; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  _FX_DRIVER_GLOBALS *v124; // r10
  const void *v125; // rcx
  _FX_DRIVER_GLOBALS *v126; // r10
  const void *v127; // rax
  _FX_DRIVER_GLOBALS *v128; // rcx
  const void *v129; // rax
  _FX_DRIVER_GLOBALS *v130; // r10
  const void *v131; // rcx
  KIRQL v132; // di
  _FX_DRIVER_GLOBALS *v133; // r10
  const void *v134; // rcx
  FxTagTracker *v135; // rcx
  FxVerifierLock *v136; // rcx
  void (__fastcall **v137)(FxObject *); // rcx
  FxVerifierLock *v138; // rcx
  FxTagTracker *v139; // rcx
  void (__fastcall **v140)(FxObject *); // rcx
  FxVerifierLock *v141; // rcx
  FX_POOL_HEADER *v142; // rax
  FxVerifierLock *v143; // rcx
  void (__fastcall **v144)(FxObject *); // rcx
  FxVerifierLock *v145; // rcx
  FxRequestCompletionState v146; // esi
  FxIoQueue *v147; // rdi
  _IRP *v148; // rcx
  CCHAR v149; // dl
  FxTagTracker *v150; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-B8h]
  FxRegKey *pParent; // [rsp+50h] [rbp-88h] BYREF
  void *PPObject; // [rsp+58h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-78h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]
  KIRQL v156; // [rsp+E0h] [rbp+8h]
  signed __int32 v157; // [rsp+E0h] [rbp+8h]
  void *v158; // [rsp+E8h] [rbp+10h] BYREF
  void *m_Key; // [rsp+F0h] [rbp+18h]
  ACCESS_MASK v160; // [rsp+F8h] [rbp+20h]

  v160 = DesiredAccess;
  v6 = KeyAttributes;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( ParentKey )
  {
    FxObjectHandleGetPtr(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      (unsigned __int64)ParentKey,
      0x1006u,
      (void **)&pParent);
    m_Globals = pParent->FxPagedObject::FxObject::m_Globals;
    m_Key = pParent->m_Key;
  }
  else
  {
    m_Key = 0LL;
    if ( KeyAttributes )
    {
      if ( KeyAttributes->Size == 56 )
      {
        ParentObject = KeyAttributes->ParentObject;
        if ( ParentObject )
        {
          FxObjectHandleGetPtr(
            (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
            (unsigned __int64)ParentObject,
            0x1000u,
            &PPObject);
          m_Globals = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
        }
      }
      else
      {
        WPP_IFR_SF_qddd(
          (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
          0,
          6u,
          0xBu,
          WPP_FxValidateFunctions_hpp_Traceguids,
          KeyAttributes,
          56,
          KeyAttributes->Size,
          -1073741820);
      }
    }
  }
  if ( !KeyName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Key )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Key = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      return -1073741808;
    }
  }
  result = FxValidateObjectAttributes(m_Globals, v6, 0);
  if ( result >= 0 )
  {
    Length = KeyName->Length;
    if ( (KeyName->Length & 1) != 0 )
    {
      v13 = Length;
      v113 = 13;
    }
    else
    {
      LOWORD(v13) = KeyName->MaximumLength;
      if ( (v13 & 1) != 0 )
      {
        v13 = (unsigned __int16)v13;
        v113 = 14;
      }
      else
      {
        if ( !(_WORD)v13 || KeyName->Buffer )
        {
          if ( Length <= (unsigned __int16)v13 )
          {
            ContextSizeOverride = 0LL;
            if ( v6 )
            {
              ContextTypeInfo = v6->ContextTypeInfo;
              if ( ContextTypeInfo )
              {
                ContextSizeOverride = v6->ContextSizeOverride;
                if ( !ContextSizeOverride )
                  ContextSizeOverride = ContextTypeInfo->ContextSize;
              }
            }
            v15 = 176LL;
            v16 = 0;
            if ( ContextSizeOverride )
            {
              v115 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v115 < ContextSizeOverride )
                goto LABEL_254;
              v116 = v115 + 176;
              if ( v116 < 0xB0 )
              {
                v16 = -1073741675;
                goto LABEL_253;
              }
              v15 = v116;
            }
            if ( m_Globals->FxVerifierHandle )
            {
              if ( v15 + 32 < v15 )
              {
                v15 = -1LL;
                v16 = -1073741675;
              }
              else
              {
                v15 += 32LL;
                v16 = 0;
              }
            }
            if ( v16 >= 0 )
            {
              if ( m_Globals->FxPoolTrackingOn )
                Caller = retaddr;
              else
                Caller = 0LL;
              v18 = (void (__fastcall ***)(FxObject *))FxPoolAllocator(
                                                         m_Globals,
                                                         &m_Globals->FxPoolFrameworks,
                                                         ExDefaultNonPagedPoolType,
                                                         v15,
                                                         m_Globals->Tag,
                                                         Caller);
              v20 = v18;
              if ( v18 )
              {
                if ( m_Globals->FxVerifierHandle )
                {
                  memset(v18, 0, 0x20uLL);
                  *((_DWORD *)v20 + 7) = 1146058822;
                  v20 += 4;
                }
                v20[17] = 0LL;
                v20[18] = 0LL;
                v20[19] = 0LL;
                v20[20] = 0LL;
                v20[21] = 0LL;
                v20[16] = (void (__fastcall **)(FxObject *))v20;
                if ( v6 )
                {
                  v117 = v6->ContextTypeInfo;
                  if ( v117 )
                  {
                    ContextSize = v6->ContextSizeOverride;
                    if ( !ContextSize )
                      ContextSize = v117->ContextSize;
                    memset(v20 + 22, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                  }
                  v20[20] = (void (__fastcall **)(FxObject *))v6->ContextTypeInfo;
                }
              }
              if ( v20 )
              {
                v20[2] = (void (__fastcall **)(FxObject *))m_Globals;
                *v20 = (void (__fastcall **)(FxObject *))&FxObject::`vftable';
                v21 = 0;
                *((_DWORD *)v20 + 2) = 8392710;
                v20[7] = 0LL;
                *((_BYTE *)v20 + 48) = 1;
                v20[8] = 0LL;
                v22 = (_LIST_ENTRY *)(v20 + 9);
                *((_DWORD *)v20 + 3) = 1;
                *((_DWORD *)v20 + 6) = 0x10000;
                v20[5] = (void (__fastcall **)(FxObject *))(v20 + 4);
                v20[4] = (void (__fastcall **)(FxObject *))(v20 + 4);
                v20[10] = (void (__fastcall **)(FxObject *))(v20 + 9);
                v20[9] = (void (__fastcall **)(FxObject *))(v20 + 9);
                v23 = v20[2];
                v20[11] = 0LL;
                v20[12] = 0LL;
                if ( *((_BYTE *)v23 + 316) )
                  FxObject::Vf_VerifyConstruct((FxObject *)v20, v19, 0);
                *((_WORD *)v20 + 12) |= 0x11u;
                v24 = (void **)(v20 + 14);
                *v20 = (void (__fastcall **)(FxObject *))&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
                v20[14] = 0LL;
                v25 = 0LL;
                v20[13] = 0LL;
                v20[15] = (void (__fastcall **)(FxObject *))m_Globals;
                v158 = 0LL;
                if ( !*((_WORD *)v20 + 5) )
                {
                  v21 = -1073741816;
                  goto LABEL_46;
                }
                if ( !v6 )
                  goto LABEL_402;
                if ( v6->ExecutionLevel == WdfExecutionLevelPassive )
                {
                  FxObject::MarkPassiveCallbacks((FxObject *)v20, ObjectLock);
                  v25 = (FxObject *)v158;
                  v24 = (void **)(v20 + 14);
                }
                v119 = (unsigned __int64)v6->ParentObject;
                if ( v119 )
                {
                  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)v20[2], v119, 0x1000u, &v158);
                  v25 = (FxObject *)v158;
                  v24 = (void **)(v20 + 14);
                }
                else
                {
LABEL_402:
                  if ( !v20[8] )
                  {
                    v26 = v20[2];
                    if ( (char *)v26[9] != (char *)v20 )
                    {
                      v25 = (FxObject *)v26[9];
                      v158 = v25;
                    }
                  }
                }
                if ( v25 )
                {
                  v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v20 + 7);
                  v156 = v27;
                  if ( *((_WORD *)v20 + 13) != 1 )
                  {
                    FxObject::TraceDroppedEvent((FxObject *)v20, FxObjectDroppedEventAssignParentObject);
                    KeReleaseSpinLock((PKSPIN_LOCK)v20 + 7, v27);
                    v21 = -1073741738;
                    goto LABEL_46;
                  }
                  if ( v20[8] )
                  {
                    KeReleaseSpinLock((PKSPIN_LOCK)v20 + 7, v27);
                    v21 = -1071644147;
                    goto LABEL_46;
                  }
                  v28 = KeAcquireSpinLockRaiseToDpc(&v25->m_SpinLock.m_Lock);
                  if ( v25->m_ObjectState == 1 )
                  {
                    Blink = v25->m_ChildListHead.Blink;
                    if ( Blink->Flink != &v25->m_ChildListHead )
                      __fastfail(3u);
                    v22->Flink = &v25->m_ChildListHead;
                    v20[10] = (void (__fastcall **)(FxObject *))Blink;
                    Blink->Flink = v22;
                    v25->m_ChildListHead.Blink = v22;
                    if ( !v20[12] )
                      v20[12] = (void (__fastcall **)(FxObject *))v25->m_DeviceBase;
                    KeReleaseSpinLock(&v25->m_SpinLock.m_Lock, v28);
                    v20[8] = (void (__fastcall **)(FxObject *))v25;
                  }
                  else
                  {
                    FxObject::TraceDroppedEvent(v25, FxObjectDroppedEventAddChildObjectInternal);
                    KeReleaseSpinLock(&v25->m_SpinLock.m_Lock, v28);
                    v21 = -1073741738;
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)v20 + 7, v156);
                  if ( v21 < 0 )
                  {
LABEL_46:
                    v32 = *((_WORD *)v20 + 5);
                    if ( v32 )
                    {
                      for ( i = (void (__fastcall ***)(FxObject *))((char *)v20 + v32); i; i = (_QWORD *)i[1] )
                      {
                        i[3] = 0LL;
                        i[2] = 0LL;
                      }
                    }
                    *((_WORD *)v20 + 12) &= ~0x400u;
                    v34 = (*v20)[6];
                    if ( v34 != FxObject::DeleteObject )
                      goto LABEL_353;
                    v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v20 + 7);
                    v36 = *((unsigned __int16 *)v20 + 13);
                    v37 = v35;
                    *((_WORD *)v20 + 12) |= 4u;
                    if ( v36 == 1 )
                    {
                      v38 = (FxObject *)v20[8];
                      if ( v38 )
                      {
                        v39 = KeAcquireSpinLockRaiseToDpc(&v38->m_SpinLock.m_Lock);
                        if ( v38->m_ObjectState != 1 )
                        {
                          FxObject::TraceDroppedEvent(v38, FxObjectDroppedEventRemoveChildObjectInternal);
                          KeReleaseSpinLock(&v38->m_SpinLock.m_Lock, v39);
                          FxObject::SetObjectStateLocked((FxObject *)v20, FxObjectStateWaitingForEarlyDispose);
                          KeReleaseSpinLock((PKSPIN_LOCK)v20 + 7, v37);
                          return v21;
                        }
                        Flink = v22->Flink;
                        v41 = v20[10];
                        if ( v22->Flink->Blink != v22 || (char *)*v41 != (char *)v22 )
                          __fastfail(3u);
                        *v41 = (void (__fastcall *)(FxObject *))Flink;
                        Flink->Blink = (_LIST_ENTRY *)v41;
                        v20[10] = (void (__fastcall **)(FxObject *))(v20 + 9);
                        v22->Flink = v22;
                        KeReleaseSpinLock(&v38->m_SpinLock.m_Lock, v39);
                        v20[8] = 0LL;
                      }
                      v42 = *((_WORD *)v20 + 12);
                      if ( (v42 & 0x20) != 0 || (v42 & 0x10) != 0 && v37 )
                        goto LABEL_296;
                      if ( (v42 & 0x200) != 0 )
                      {
                        v124 = (_FX_DRIVER_GLOBALS *)v20[2];
                        if ( v124->FxVerboseOn )
                        {
                          if ( *((_WORD *)v20 + 5) )
                            v125 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          else
                            v125 = 0LL;
                          WPP_IFR_SF_qqLL(
                            v124,
                            5u,
                            0x14u,
                            0xAu,
                            WPP_FxObject_hpp_Traceguids,
                            v20,
                            v125,
                            *((unsigned __int16 *)v20 + 13),
                            9u);
                        }
                        if ( *((char *)v20 + 24) < 0 )
                          *((_BYTE *)v20 + _InterlockedIncrement((volatile signed __int32 *)v20 - 2) - 16) = 9;
                      }
                      v43 = ((_BYTE)v20[3] & 0x20) == 0;
                      *((_WORD *)v20 + 13) = 9;
                      if ( !v43 )
                      {
                        if ( v37 )
                        {
LABEL_296:
                          FxObject::QueueDeferredDisposeLocked((FxObject *)v20, FxObjectStateDeferedDeleting);
                          KeReleaseSpinLock((PKSPIN_LOCK)v20 + 7, v37);
                          return v21;
                        }
                      }
                      v44 = (void (__fastcall ***)(FxObject *))v20[4];
                      v45 = (void (__fastcall ****)(FxObject *))(v20 + 4);
                      if ( v44 != v20 + 4 )
                      {
                        while ( !v37 || (*(_BYTE *)(v44 - 6) & 0x10) == 0 )
                        {
                          v44 = (void (__fastcall ***)(FxObject *))*v44;
                          if ( v44 == (void (__fastcall ***)(FxObject *))v45 )
                            goto LABEL_62;
                        }
                        goto LABEL_296;
                      }
LABEL_62:
                      KeReleaseSpinLock((PKSPIN_LOCK)v20 + 7, v37);
                      v46 = *v45;
                      if ( *v45 != (void (__fastcall ***)(FxObject *))v45 )
                      {
                        while ( 1 )
                        {
                          v95 = v46 - 9;
                          v96 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v46 - 2);
                          v97 = v96;
                          if ( *((_WORD *)v46 - 23) != 1 )
                          {
                            switch ( *((_WORD *)v46 - 23) )
                            {
                              case 5:
                                v99 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)(v46 - 9), v96, 0);
                                goto LABEL_190;
                              case 7:
                                v99 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)(v46 - 9), v96, 0);
                                goto LABEL_190;
                              default:
                                FxObject::TraceDroppedEvent(
                                  (FxObject *)(v46 - 9),
                                  FxObjectDroppedEventPerformEarlyDispose);
                                KeReleaseSpinLock((PKSPIN_LOCK)v46 - 2, v97);
                                goto LABEL_191;
                            }
                          }
                          if ( ((_WORD)v95[3] & 0x200) != 0 )
                          {
                            v126 = (_FX_DRIVER_GLOBALS *)v95[2];
                            if ( v126->FxVerboseOn )
                            {
                              if ( *((_WORD *)v95 + 5) )
                                v127 = (const void *)((unsigned __int64)v95 ^ 0xFFFFFFFFFFFFFFF8uLL);
                              else
                                v127 = 0LL;
                              WPP_IFR_SF_qqLL(v126, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, v46 - 9, v127, 1u, 3u);
                            }
                            if ( *((char *)v95 + 24) < 0 )
                              *((_BYTE *)v95 + _InterlockedIncrement((volatile signed __int32 *)v46 - 20) - 16) = 3;
                          }
                          *((_WORD *)v95 + 13) = 3;
                          if ( ((_WORD)v95[3] & 0x200) != 0 )
                          {
                            v128 = (_FX_DRIVER_GLOBALS *)v95[2];
                            if ( v128->FxVerboseOn )
                            {
                              if ( *((_WORD *)v95 + 5) )
                                v129 = (const void *)((unsigned __int64)v95 ^ 0xFFFFFFFFFFFFFFF8uLL);
                              else
                                v129 = 0LL;
                              WPP_IFR_SF_qqLL(v128, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, v46 - 9, v129, 3u, 4u);
                            }
                            if ( *((char *)v95 + 24) < 0 )
                              *((_BYTE *)v95 + _InterlockedIncrement((volatile signed __int32 *)v46 - 20) - 16) = 4;
                          }
                          *((_WORD *)v95 + 13) = 4;
                          if ( FxObject::DisposeChildrenWorker(
                                 (FxObject *)(v46 - 9),
                                 FxObjectStateDeferedDisposing,
                                 v97,
                                 0) )
                          {
                            v98 = *((_WORD *)v95 + 12);
                            if ( (v98 & 0x104) == 0x104 )
                            {
                              FxObject::DeletedAndDisposedWorkerLocked((FxObject *)(v46 - 9), v97, 0);
                            }
                            else
                            {
                              if ( (v98 & 0x200) != 0 )
                              {
                                v130 = (_FX_DRIVER_GLOBALS *)v95[2];
                                if ( v130->FxVerboseOn )
                                {
                                  if ( *((_WORD *)v95 + 5) )
                                    v131 = (const void *)((unsigned __int64)v95 ^ 0xFFFFFFFFFFFFFFF8uLL);
                                  else
                                    v131 = 0LL;
                                  WPP_IFR_SF_qqLL(
                                    v130,
                                    5u,
                                    0x14u,
                                    0xAu,
                                    WPP_FxObject_hpp_Traceguids,
                                    v46 - 9,
                                    v131,
                                    *((unsigned __int16 *)v95 + 13),
                                    2u);
                                }
                                if ( *((char *)v95 + 24) < 0 )
                                  *((_BYTE *)v95 + _InterlockedIncrement((volatile signed __int32 *)v46 - 20) - 16) = 2;
                              }
                              *((_WORD *)v95 + 13) = 2;
                            }
                            v99 = 1;
                          }
                          else
                          {
                            v99 = 0;
                          }
LABEL_190:
                          if ( !v99 )
                            break;
LABEL_191:
                          v46 = (void (__fastcall ***)(FxObject *))*v46;
                          if ( v46 == v20 + 4 )
                            goto LABEL_63;
                        }
                        v132 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v20 + 7);
                        FxObject::QueueDeferredDisposeLocked((FxObject *)v20, FxObjectStateDeferedDeleting);
                        KeReleaseSpinLock((PKSPIN_LOCK)v20 + 7, v132);
                        return v21;
                      }
LABEL_63:
                      if ( (((_WORD)v20[3] & 0x800) == 0 || ((unsigned __int8 (__fastcall *)(_QWORD))(*v20)[7])(v20))
                        && ((_WORD)v20[3] & 0x400) != 0 )
                      {
                        FxObject::CallCleanupCallbacks((FxObject *)v20);
                      }
                      if ( ((_WORD)v20[3] & 0x200) != 0 )
                      {
                        v133 = (_FX_DRIVER_GLOBALS *)v20[2];
                        if ( v133->FxVerboseOn )
                        {
                          if ( *((_WORD *)v20 + 5) )
                            v134 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          else
                            v134 = 0LL;
                          WPP_IFR_SF_qqLL(
                            v133,
                            5u,
                            0x14u,
                            0xAu,
                            WPP_FxObject_hpp_Traceguids,
                            v20,
                            v134,
                            *((unsigned __int16 *)v20 + 13),
                            0xAu);
                        }
                        if ( *((char *)v20 + 24) < 0 )
                          *((_BYTE *)v20 + _InterlockedIncrement((volatile signed __int32 *)v20 - 2) - 16) = 10;
                      }
                      *((_WORD *)v20 + 13) = 10;
                      FxObject::DestroyChildren((FxObject *)v20);
                      v49 = (__int64 (__fastcall *)(FxObject *, void *, __int64, char *))(*v20)[2];
                      if ( v49 == FxObject::Release )
                      {
                        if ( *((char *)v20 + 24) < 0 )
                        {
                          v135 = (FxTagTracker *)*(v20 - 4);
                          if ( v135 )
                            FxTagTracker::UpdateTagHistory(
                              v135,
                              0LL,
                              1215,
                              "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
                              TagRelease,
                              *((_DWORD *)v20 + 3) - 1);
                        }
                        if ( _InterlockedDecrement((volatile signed __int32 *)v20 + 3) )
                          return v21;
                        v50 = *((_WORD *)v20 + 12);
                        if ( (v50 & 0x20) == 0 && ((v50 & 0x10) == 0 || !KeGetCurrentIrql()) )
                        {
                          if ( (v50 & 0x80u) != 0 )
                          {
                            v51 = (FxTagTracker *)*(v20 - 4);
                            if ( v51 )
                              FxTagTracker::CheckForAbandondedTags((FxTagTracker *)*(v20 - 4));
                          }
                          else
                          {
                            v51 = 0LL;
                          }
                          v52 = *((_WORD *)v20 + 5);
                          if ( v52 && ((_BYTE)v20[3] & 8) != 0 )
                          {
                            for ( j = (void (__fastcall ***)(FxObject *))((char *)v20 + v52); j; j = (_QWORD *)j[1] )
                            {
                              v54 = (void (__fastcall *)(unsigned __int64))j[2];
                              if ( v54 )
                              {
                                v54((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
                                j[2] = 0LL;
                              }
                              v55 = (void (__fastcall *)(unsigned __int64))j[3];
                              if ( v55 )
                              {
                                v55((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
                                j[3] = 0LL;
                              }
                            }
                            v56 = *((_WORD *)v20 + 5);
                            v57 = 1;
                            if ( v56 )
                            {
                              v58 = (void (__fastcall ***)(FxObject *))((char *)v20 + v56);
                              if ( v58 )
                              {
                                do
                                {
                                  v59 = (_QWORD *)v58[1];
                                  if ( !v57 )
                                    FxPoolFree(v58);
                                  v57 = 0;
                                  v58 = v59;
                                }
                                while ( v59 );
                              }
                            }
                          }
                          if ( v51 )
                          {
                            *(v20 - 4) = 0LL;
                            FxTagTracker::`scalar deleting destructor'(v51, 1u);
                          }
                          v60 = (void (__fastcall *)(FxObject *, unsigned int))**v20;
                          if ( v60 == FxObject::SelfDestruct )
                          {
                            v61 = (*v20)[1];
                            if ( (char *)v61 == (char *)FxRegKey::`scalar deleting destructor' )
                            {
                              *v20 = (void (__fastcall **)(FxObject *))&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
                              v62 = v20[14];
                              if ( v62 )
                              {
                                ZwClose(v62);
                                v20[14] = 0LL;
                              }
                              v63 = v20[13];
                              *v20 = (void (__fastcall **)(FxObject *))&FxObject::`vftable'.WdfVerifierAllocateFailCount;
                              if ( v63 )
                              {
                                FxPoolFree(v63);
                                v20[13] = 0LL;
                              }
                              FxObject::~FxObject((FxObject *)v20, (unsigned int)v60, v48);
                              if ( *((char *)v20 + 24) < 0 )
                                v20 -= 4;
                              if ( !v20 )
                                KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
                              if ( ((unsigned __int16)v20 & 0xFFF) != 0 )
                              {
LABEL_103:
                                v64 = (FX_POOL_TRACKER *)*(v20 - 2);
                                if ( *((_BYTE *)*(v20 - 1) + 264) )
                                {
                                  if ( FxIsPagedPoolType(v64->PoolType) )
                                    FxPoolRemovePagedAllocateTracker(v64);
                                  else
                                    FxPoolRemoveNonPagedAllocateTracker(v64);
                                  memset(v64, 0, v64->Size + 64);
                                }
                                ExFreePoolWithTag(v64, 0);
                                return v21;
                              }
                            }
                            else
                            {
                              if ( (char *)v61 != (char *)FxFileObject::`vector deleting destructor' )
                              {
                                if ( (char *)v61 == (char *)FxRequest::`scalar deleting destructor' )
                                {
                                  *v20 = (void (__fastcall **)(FxObject *))&FxRequestBase::`vftable';
                                  v70 = (_MDL *)v20[30];
                                  if ( v70 )
                                    FxMdlFree((_FX_DRIVER_GLOBALS *)v20[2], v70);
                                  v71 = v20[21];
                                  v72 = v20[19];
                                  if ( v71 )
                                  {
                                    if ( v72 )
                                      (*((void (__fastcall **)(void (__fastcall **)(FxObject *), void (__fastcall ***)(FxObject *)))*v71
                                       + 3))(
                                        v71,
                                        v20);
                                    v137 = v20[21];
                                    if ( v137 )
                                      (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v137)(
                                        v137,
                                        1LL);
                                  }
                                  if ( v72 && *((_BYTE *)v20 + 213) == 1 )
                                    IoFreeIrp((PIRP)v20[19]);
                                  v73 = (FxRequestTimer *)v20[22];
                                  if ( v73 )
                                    FxRequestTimer::`scalar deleting destructor'(v73, 1u);
                                  *v20 = (void (__fastcall **)(FxObject *))&FxNonPagedObject::`vftable';
                                  if ( *((char *)v20 + 24) < 0 )
                                  {
                                    v138 = (FxVerifierLock *)*(v20 - 3);
                                    if ( v138 )
                                    {
                                      FxVerifierLock::`scalar deleting destructor'(v138, 1u);
                                      *(v20 - 3) = 0LL;
                                    }
                                  }
                                  *((_BYTE *)v20 + 104) = 0;
                                  FxObject::~FxObject((FxObject *)v20, (unsigned int)v70, v48);
                                  if ( *((char *)v20 + 24) < 0 )
                                    v20 -= 4;
                                  FxPoolFree(v20);
                                }
                                else
                                {
                                  ((void (__fastcall *)(void (__fastcall ***)(FxObject *), __int64))v61)(v20, 1LL);
                                }
                                return v21;
                              }
                              v20[15] = (void (__fastcall **)(FxObject *))&FxFileObject::`vftable'{for `IFxHasCallbacks'};
                              *v20 = (void (__fastcall **)(FxObject *))&FxNonPagedObject::`vftable';
                              if ( *((char *)v20 + 24) < 0 )
                              {
                                v136 = (FxVerifierLock *)*(v20 - 3);
                                if ( v136 )
                                {
                                  FxVerifierLock::`scalar deleting destructor'(v136, 1u);
                                  *(v20 - 3) = 0LL;
                                }
                              }
                              *((_BYTE *)v20 + 104) = 0;
                              FxObject::~FxObject((FxObject *)v20, (unsigned int)v60, v48);
                              if ( *((char *)v20 + 24) < 0 )
                                v20 -= 4;
                              if ( !v20 )
                                KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
                              if ( ((unsigned __int16)v20 & 0xFFF) != 0 )
                                goto LABEL_103;
                            }
                            ExFreePoolWithTag(v20, 0);
                            return v21;
                          }
                          v34 = **v20;
LABEL_353:
                          v34((FxObject *)v20);
                          return v21;
                        }
LABEL_354:
                        FxObject::SetObjectStateLocked((FxObject *)v20, FxObjectStateDeferedDestroy);
                        FxDisposeList::Add(*((FxDisposeList **)v20[2][9] + 43), (FxObject *)v20);
                        return v21;
                      }
                      if ( (char *)v49 == (char *)FxRequest::Release )
                      {
                        v65 = *((_BYTE *)v20 + 354);
                        v66 = *((_BYTE *)v20 + 213) == 0;
                        v67 = *((_BYTE *)v20 + 238);
                        if ( *((char *)v20 + 24) < 0 )
                        {
                          v139 = (FxTagTracker *)*(v20 - 4);
                          if ( v139 )
                            FxTagTracker::UpdateTagHistory(
                              v139,
                              0LL,
                              1215,
                              "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
                              TagRelease,
                              *((_DWORD *)v20 + 3) - 1);
                        }
                        v68 = _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
                        v157 = v68;
                        if ( v68 )
                          goto LABEL_108;
                        v74 = *((_WORD *)v20 + 12);
                        if ( (v74 & 0x20) != 0 || (v74 & 0x10) != 0 && KeGetCurrentIrql() )
                        {
                          FxObject::SetObjectStateLocked((FxObject *)v20, FxObjectStateDeferedDestroy);
                          FxDisposeList::Add(*((FxDisposeList **)v20[2][9] + 43), (FxObject *)v20);
                        }
                        else
                        {
                          if ( (v74 & 0x80u) != 0 )
                          {
                            v75 = (FxTagTracker *)*(v20 - 4);
                            if ( v75 )
                              FxTagTracker::CheckForAbandondedTags((FxTagTracker *)*(v20 - 4));
                          }
                          else
                          {
                            v75 = 0LL;
                          }
                          v76 = *((_WORD *)v20 + 5);
                          if ( v76 && ((_BYTE)v20[3] & 8) != 0 )
                          {
                            for ( k = (void (__fastcall ***)(FxObject *))((char *)v20 + v76); k; k = (_QWORD *)k[1] )
                            {
                              v78 = (void (__fastcall *)(unsigned __int64))k[2];
                              if ( v78 )
                              {
                                v78((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
                                k[2] = 0LL;
                              }
                              v79 = (void (__fastcall *)(unsigned __int64))k[3];
                              if ( v79 )
                              {
                                v79((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
                                k[3] = 0LL;
                              }
                            }
                            v80 = *((_WORD *)v20 + 5);
                            v81 = 1;
                            if ( v80 )
                            {
                              v82 = (void (__fastcall ***)(FxObject *))((char *)v20 + v80);
                              if ( v82 )
                              {
                                do
                                {
                                  v83 = (_QWORD *)v82[1];
                                  if ( !v81 )
                                    FxPoolFree(v82);
                                  v81 = 0;
                                  v82 = v83;
                                }
                                while ( v83 );
                              }
                            }
                          }
                          if ( v75 )
                          {
                            *(v20 - 4) = 0LL;
                            FxTagTracker::`scalar deleting destructor'(v75, 1u);
                          }
                          v84 = (__int64)*v20;
                          v85 = (void (__fastcall *)(_QWORD))**v20;
                          if ( (char *)v85 == (char *)FxRequestFromLookaside::SelfDestruct )
                          {
                            v86 = (_MDL *)v20[30];
                            v87 = v20[12];
                            *v20 = (void (__fastcall **)(FxObject *))&FxRequestBase::`vftable';
                            if ( v86 )
                              FxMdlFree((_FX_DRIVER_GLOBALS *)v20[2], v86);
                            v88 = v20[21];
                            v89 = v20[19];
                            if ( v88 )
                            {
                              if ( v89 )
                                (*((void (__fastcall **)(void (__fastcall **)(FxObject *), void (__fastcall ***)(FxObject *)))*v88
                                 + 3))(
                                  v88,
                                  v20);
                              v140 = v20[21];
                              if ( v140 )
                                (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v140)(v140, 1LL);
                            }
                            if ( v89 && *((_BYTE *)v20 + 213) == 1 )
                              IoFreeIrp((PIRP)v20[19]);
                            v90 = (FxRequestTimer *)v20[22];
                            if ( v90 )
                              FxRequestTimer::`scalar deleting destructor'(v90, 1u);
                            *v20 = (void (__fastcall **)(FxObject *))&FxNonPagedObject::`vftable';
                            if ( *((char *)v20 + 24) < 0 )
                            {
                              v141 = (FxVerifierLock *)*(v20 - 3);
                              if ( v141 )
                              {
                                FxVerifierLock::`scalar deleting destructor'(v141, 1u);
                                *(v20 - 3) = 0LL;
                              }
                            }
                            *((_BYTE *)v20 + 104) = 0;
                            FxObject::~FxObject((FxObject *)v20, (unsigned int)v86, v48);
                            if ( *((_BYTE *)v20 + 355) )
                            {
                              v142 = FxObject::_CleanupPointer((_FX_DRIVER_GLOBALS *)v20[2], (FxObject *)v20);
                              ExFreePoolWithTag(v142->Base, 0);
                            }
                            else
                            {
                              if ( *((char *)v20 + 24) < 0 )
                                v91 = v20 - 4;
                              else
                                v91 = v20;
                              if ( *((_BYTE *)v87[2] + 264) )
                                FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)*(v91 - 2));
                              v92 = v87[81];
                              if ( v92 && *((_WORD *)v92 + 4) == 4354 && *((_BYTE *)v92 + 1651) )
                              {
                                FxFreeToNPagedLookasideListNoTracking((_NPAGED_LOOKASIDE_LIST *)(v87 + 56), *(v91 - 2));
                                v68 = v157;
                                goto LABEL_108;
                              }
                              v93 = (_SLIST_ENTRY *)*(v91 - 2);
                              v94 = v87 + 56;
                              ++*((_DWORD *)v94 + 7);
                              if ( ExQueryDepthSList((PSLIST_HEADER)v94) >= *((_WORD *)v94 + 8) )
                              {
                                ++*((_DWORD *)v94 + 8);
                                v94[7]((FxObject *)v93);
                              }
                              else
                              {
                                ExpInterlockedPushEntrySList((PSLIST_HEADER)v94, v93);
                              }
                            }
                          }
                          else if ( (char *)v85 == (char *)FxObject::SelfDestruct )
                          {
                            v100 = *(void (__fastcall **)(void (__fastcall ***)(FxObject *), __int64))(v84 + 8);
                            if ( (char *)v100 == (char *)FxRegKey::`scalar deleting destructor' )
                            {
                              *v20 = (void (__fastcall **)(FxObject *))&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
                              v101 = v20[14];
                              if ( v101 )
                              {
                                ZwClose(v101);
                                v20[14] = 0LL;
                              }
                              v102 = v20[13];
                              *v20 = (void (__fastcall **)(FxObject *))&FxObject::`vftable'.WdfVerifierAllocateFailCount;
                              if ( v102 )
                              {
                                FxPoolFree(v102);
                                v20[13] = 0LL;
                              }
                              FxObject::~FxObject((FxObject *)v20, v84, v48);
                              if ( *((char *)v20 + 24) < 0 )
                                v103 = v20 - 4;
                              else
                                v103 = v20;
                              if ( !v103 )
                                KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
                            }
                            else
                            {
                              if ( (char *)v100 != (char *)FxFileObject::`vector deleting destructor' )
                              {
                                if ( (char *)v100 == (char *)FxRequest::`scalar deleting destructor' )
                                {
                                  *v20 = (void (__fastcall **)(FxObject *))&FxRequestBase::`vftable';
                                  v105 = (_MDL *)v20[30];
                                  if ( v105 )
                                    FxMdlFree((_FX_DRIVER_GLOBALS *)v20[2], v105);
                                  v106 = v20[21];
                                  v107 = v20[19];
                                  if ( v106 )
                                  {
                                    if ( v107 )
                                      (*((void (__fastcall **)(void (__fastcall **)(FxObject *), void (__fastcall ***)(FxObject *)))*v106
                                       + 3))(
                                        v106,
                                        v20);
                                    v144 = v20[21];
                                    if ( v144 )
                                      (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v144)(
                                        v144,
                                        1LL);
                                  }
                                  if ( v107 && *((_BYTE *)v20 + 213) == 1 )
                                    IoFreeIrp((PIRP)v20[19]);
                                  v108 = (FxRequestTimer *)v20[22];
                                  if ( v108 )
                                    FxRequestTimer::`scalar deleting destructor'(v108, 1u);
                                  *v20 = (void (__fastcall **)(FxObject *))&FxNonPagedObject::`vftable';
                                  if ( *((char *)v20 + 24) < 0 )
                                  {
                                    v145 = (FxVerifierLock *)*(v20 - 3);
                                    if ( v145 )
                                    {
                                      FxVerifierLock::`scalar deleting destructor'(v145, 1u);
                                      *(v20 - 3) = 0LL;
                                    }
                                  }
                                  *((_BYTE *)v20 + 104) = 0;
                                  FxObject::~FxObject((FxObject *)v20, (unsigned int)v105, v48);
                                  if ( *((char *)v20 + 24) < 0 )
                                    v109 = v20 - 4;
                                  else
                                    v109 = v20;
                                  FxPoolFree(v109);
                                  v68 = v157;
                                }
                                else
                                {
                                  v100(v20, 1LL);
                                  v68 = v157;
                                }
                                goto LABEL_108;
                              }
                              v20[15] = (void (__fastcall **)(FxObject *))&FxFileObject::`vftable'{for `IFxHasCallbacks'};
                              *v20 = (void (__fastcall **)(FxObject *))&FxNonPagedObject::`vftable';
                              if ( *((char *)v20 + 24) < 0 )
                              {
                                v143 = (FxVerifierLock *)*(v20 - 3);
                                if ( v143 )
                                {
                                  FxVerifierLock::`scalar deleting destructor'(v143, 1u);
                                  *(v20 - 3) = 0LL;
                                }
                              }
                              *((_BYTE *)v20 + 104) = 0;
                              FxObject::~FxObject((FxObject *)v20, v84, v48);
                              if ( *((char *)v20 + 24) < 0 )
                                v103 = v20 - 4;
                              else
                                v103 = v20;
                              if ( !v103 )
                                KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
                            }
                            if ( ((unsigned __int16)v103 & 0xFFF) != 0 )
                            {
                              v104 = (FX_POOL_TRACKER *)*(v103 - 2);
                              if ( *((_BYTE *)*(v103 - 1) + 264) )
                              {
                                if ( FxIsPagedPoolType(v104->PoolType) )
                                  FxPoolRemovePagedAllocateTracker(v104);
                                else
                                  FxPoolRemoveNonPagedAllocateTracker(v104);
                                memset(v104, 0, v104->Size + 64);
                              }
                              ExFreePoolWithTag(v104, 0);
                              v68 = v157;
                              goto LABEL_108;
                            }
                            ExFreePoolWithTag(v103, 0);
                          }
                          else
                          {
                            v85(v20);
                          }
                        }
                        v68 = v157;
LABEL_108:
                        if ( v65 && v68 == 1 && *((_BYTE *)v20 + 214) )
                        {
                          FxIoQueue::ReturnReservedRequest((FxIoQueue *)v20[42], (FxRequest *)v20);
                        }
                        else if ( !v66 && v67 && v68 == 1 && *((_BYTE *)v20 + 214) )
                        {
                          v146 = *((unsigned __int8 *)v20 + 237);
                          v147 = (FxIoQueue *)v20[31];
                          v148 = (_IRP *)v20[19];
                          v149 = *((_BYTE *)v20 + 236);
                          *((_BYTE *)v20 + 237) = 0;
                          v20[31] = 0LL;
                          v20[19] = 0LL;
                          IofCompleteRequest(v148, v149);
                          FxRequest::PostProcessCompletionForDriverRequest((FxRequest *)v20, v146, v147);
                        }
                        return v21;
                      }
                      if ( (char *)v49 != (char *)FxMemoryObject::Release )
                      {
                        v49(
                          (FxObject *)v20,
                          0LL,
                          1215LL,
                          "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
                        return v21;
                      }
                      if ( *((char *)v20 + 24) < 0 )
                      {
                        v150 = (FxTagTracker *)*(v20 - 4);
                        if ( v150 )
                          FxTagTracker::UpdateTagHistory(
                            v150,
                            0LL,
                            1215,
                            "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
                            TagRelease,
                            *((_DWORD *)v20 + 3) - 1);
                      }
                      if ( _InterlockedDecrement((volatile signed __int32 *)v20 + 3) )
                        return v21;
                      v69 = *((_WORD *)v20 + 12);
                      if ( (v69 & 0x20) != 0 || (v69 & 0x10) != 0 && KeGetCurrentIrql() )
                        goto LABEL_354;
                      FxObject::ProcessDestroy((FxObject *)v20, v47, v48);
                    }
                    else if ( v36 == 2 )
                    {
                      v110 = (FxObject *)v20[8];
                      if ( v110 )
                      {
                        if ( FxObject::RemoveChildObjectInternal(v110, (FxObject *)v20) == -1073741738 )
                        {
                          FxObject::SetObjectStateLocked(
                            (FxObject *)v20,
                            FxObjectStateWaitingForParentDeleteAndDisposed);
                          KeReleaseSpinLock((PKSPIN_LOCK)v20 + 7, v37);
                          return v21;
                        }
                        v20[8] = 0LL;
                      }
                      FxObject::DeletedAndDisposedWorkerLocked((FxObject *)v20, v37, 1u);
                    }
                    else
                    {
                      FxObject::TraceDroppedEvent((FxObject *)v20, FxObjectDroppedEventDeleteObject);
                      KeReleaseSpinLock((PKSPIN_LOCK)v20 + 7, v37);
                    }
                    return v21;
                  }
                  v24 = (void **)(v20 + 14);
                }
                if ( v6 )
                {
                  v120 = *((_WORD *)v20 + 5);
                  if ( v120 )
                    v121 = (char *)v20 + v120;
                  else
                    v121 = 0LL;
                  EvtDestroyCallback = v6->EvtDestroyCallback;
                  if ( EvtDestroyCallback )
                    *((_QWORD *)v121 + 3) = EvtDestroyCallback;
                  EvtCleanupCallback = v6->EvtCleanupCallback;
                  if ( EvtCleanupCallback )
                  {
                    *((_QWORD *)v121 + 2) = EvtCleanupCallback;
                    *((_WORD *)v20 + 12) |= 0x400u;
                  }
                }
                *((_WORD *)v20 + 12) |= 8u;
                if ( *((_WORD *)v20 + 5) )
                  v30 = (WDFKEY__ *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v30 = 0LL;
                ObjectAttributes.RootDirectory = m_Key;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = KeyName;
                v31 = ZwOpenKey(v24, v160, &ObjectAttributes);
                v21 = v31;
                if ( v31 >= 0 )
                  *Key = v30;
                else
                  WPP_IFR_SF_d(m_Globals, 2u, 2u, 0xBu, WPP_FxRegistryAPI_cpp_Traceguids, v31);
                if ( v21 >= 0 )
                  return v21;
                goto LABEL_46;
              }
LABEL_254:
              WPP_IFR_SF_d(m_Globals, 2u, 2u, 0xAu, WPP_FxRegistryAPI_cpp_Traceguids, -1073741670);
              return -1073741670;
            }
LABEL_253:
            WPP_IFR_SF_DDxd(m_Globals, 0x80u, v10, v11, Tag, 0x80u, 0, ContextSizeOverride, v16);
            goto LABEL_254;
          }
          WPP_IFR_SF_qddd(
            m_Globals,
            Length,
            6u,
            0x10u,
            WPP_FxValidateFunctions_hpp_Traceguids_0,
            KeyName,
            Length,
            (unsigned __int16)v13,
            -1073741811);
          return -1073741811;
        }
        v13 = (unsigned __int16)v13;
        v113 = 15;
      }
    }
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v113, WPP_FxValidateFunctions_hpp_Traceguids_0, KeyName, v13, -1073741811);
    return -1073741811;
  }
  return result;
}
