/*
 * XREFs of imp_WdfRegistryOpenKey @ 0x1C000C920
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C000577C (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000C140 (--1FxObject@@UEAA@XZ.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C000C1C0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C000C500 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000C660 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0016B3C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001CF08 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C003E068 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C003E0D8 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C003E158 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003E200 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003EFF4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F19C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003F20C (-PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F260 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003F2C8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003F338 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C003F364 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003F3E8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003F998 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003F9DC (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003FD34 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C003FE38 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C006721C (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0067DA0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C00684F0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0071D08 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_DDxd @ 0x1C007FDD4 (WPP_IFR_SF_DDxd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D4A70 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4AB0 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  int result; // eax
  unsigned __int16 v10; // r9
  unsigned __int16 Length; // dx
  int v12; // eax
  _POOL_TYPE v13; // esi
  unsigned __int64 ContextSizeOverride; // r8
  unsigned int v15; // ebp
  unsigned __int64 v16; // r13
  signed int v17; // ebx
  void *Caller; // rax
  void (__fastcall ***v19)(FxObject *); // rax
  _FX_DRIVER_GLOBALS *v20; // rdx
  void (__fastcall ***v21)(FxObject *); // rbx
  FxObject *v22; // rsi
  _LIST_ENTRY *v23; // r12
  void (__fastcall **v24)(FxObject *); // rax
  void **v25; // rbp
  void (__fastcall **v26)(FxObject *); // rax
  KIRQL v27; // r13
  KIRQL v28; // r13
  _LIST_ENTRY *Blink; // rcx
  int v30; // ebp
  WDFKEY__ *v31; // rsi
  NTSTATUS v32; // eax
  unsigned __int16 v33; // ax
  _QWORD *i; // rax
  void (__fastcall *v35)(FxObject *); // rax
  KIRQL v36; // al
  int v37; // edx
  KIRQL v38; // r14
  FxObject *v39; // rdi
  KIRQL v40; // r15
  _LIST_ENTRY *Flink; // rcx
  void (__fastcall **v42)(FxObject *); // rax
  __int16 v43; // cx
  bool v44; // zf
  void (__fastcall ***v45)(FxObject *); // rcx
  void (__fastcall ****v46)(FxObject *); // r15
  void (__fastcall ***v47)(FxObject *); // rdi
  FxObjectDebugLeakDetection *v48; // rdx
  unsigned int v49; // r8d
  __int64 (__fastcall *v50)(FxObject *, volatile signed __int32 *, __int64, const char *); // rax
  __int16 v51; // cx
  FxTagTracker *v52; // r14
  unsigned __int16 v53; // cx
  _QWORD *j; // rdi
  void (__fastcall *v55)(unsigned __int64); // rax
  void (__fastcall *v56)(unsigned __int64); // rax
  unsigned __int16 v57; // ax
  _QWORD *v58; // rcx
  _QWORD *v59; // rdi
  void (__fastcall *v60)(FxObject *, unsigned int); // rdx
  FxRegKey *(__fastcall *v61)(FxRegKey *, char); // rax
  void (__fastcall **v62)(FxObject *); // rcx
  void (__fastcall **v63)(FxObject *); // rcx
  FX_POOL_TRACKER *v64; // rdi
  char v65; // r15
  char v66; // r14
  char v67; // r13
  __int64 v68; // rdx
  signed __int32 v69; // edi
  __int16 v70; // ax
  _MDL *v71; // rcx
  void (__fastcall **v72)(FxObject *); // rcx
  void (__fastcall **v73)(FxObject *); // rdi
  FxRequestTimer *v74; // rcx
  __int16 v75; // cx
  FxTagTracker *v76; // r8
  unsigned __int16 v77; // cx
  _QWORD *v78; // rsi
  void (__fastcall *v79)(unsigned __int64, __int64, FxTagTracker *); // rax
  void (__fastcall *v80)(unsigned __int64, __int64, FxTagTracker *); // rax
  unsigned __int16 v81; // ax
  char v82; // dl
  _QWORD *v83; // rcx
  _QWORD *v84; // rsi
  __int64 v85; // rdx
  void (__fastcall *v86)(FxRequestFromLookaside *, unsigned int); // rax
  _MDL *v87; // rcx
  void (__fastcall **v88)(FxObject *); // rsi
  void (__fastcall **v89)(FxObject *); // rcx
  void (__fastcall **v90)(FxObject *); // r12
  FxRequestTimer *v91; // rcx
  void (__fastcall ***v92)(FxObject *); // r12
  void (__fastcall *v93)(FxObject *); // rax
  _SLIST_ENTRY *v94; // r12
  void (__fastcall **v95)(FxObject *); // rsi
  void (__fastcall ***v96)(FxObject *); // r14
  KIRQL v97; // r15
  __int16 v98; // cx
  unsigned __int8 v99; // al
  FxRequest *(__fastcall *v100)(FxRequest *, char); // rax
  void (__fastcall **v101)(FxObject *); // rcx
  void (__fastcall **v102)(FxObject *); // rcx
  void (__fastcall ***v103)(FxObject *); // rax
  FX_POOL_TRACKER *v104; // rsi
  _SLIST_ENTRY *v105; // r12
  _MDL *v106; // rcx
  void (__fastcall **v107)(FxObject *); // rcx
  void (__fastcall **v108)(FxObject *); // rsi
  FxRequestTimer *v109; // rcx
  void (__fastcall ***v110)(FxObject *); // rcx
  void *ParentObject; // rdx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v113; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v115; // rax
  unsigned __int64 v116; // rax
  __int64 v117; // rax
  bool v118; // cf
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v119; // rax
  unsigned __int64 ContextSize; // r8
  unsigned __int64 v121; // rdx
  unsigned __int16 v122; // ax
  char *v123; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  FxObject *v126; // rcx
  _FX_DRIVER_GLOBALS *v127; // rcx
  const void *v128; // rdx
  _FX_DRIVER_GLOBALS *v129; // rcx
  const void *v130; // rdx
  _FX_DRIVER_GLOBALS *v131; // rcx
  const void *v132; // rdx
  _FX_DRIVER_GLOBALS *v133; // rcx
  const void *v134; // rdx
  KIRQL v135; // di
  _FX_DRIVER_GLOBALS *v136; // rcx
  const void *v137; // rdx
  FxTagTracker *v138; // rcx
  void (__fastcall **v139)(FxObject *); // rcx
  FxVerifierLock *v140; // rcx
  FxTagTracker *v141; // rcx
  void (__fastcall **v142)(FxObject *); // rcx
  FxVerifierLock *v143; // rcx
  _SINGLE_LIST_ENTRY *v144; // rax
  void (__fastcall **v145)(FxObject *); // rcx
  FxVerifierLock *v146; // rcx
  char v147; // di
  FxIoQueue *v148; // rsi
  _IRP *v149; // rcx
  CCHAR v150; // dl
  FxRequest *v151; // rdx
  FxTagTracker *v152; // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-B8h]
  FxRegKey *pParent; // [rsp+50h] [rbp-88h] BYREF
  void *PPObject; // [rsp+58h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-78h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]
  KIRQL v158; // [rsp+E0h] [rbp+8h]
  void *v159; // [rsp+E8h] [rbp+10h] BYREF
  FxTagTracker *m_Key; // [rsp+F0h] [rbp+18h]
  ACCESS_MASK v161; // [rsp+F8h] [rbp+20h]

  v161 = DesiredAccess;
  v6 = KeyAttributes;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( ParentKey )
  {
    FxObjectHandleGetPtr(
      (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
      (unsigned __int64)ParentKey,
      0x1006u,
      (void **)&pParent);
    DriverName = pParent->FxPagedObject::FxObject::m_Globals;
    m_Key = (FxTagTracker *)pParent->m_Key;
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
            (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
            (unsigned __int64)ParentObject,
            0x1000u,
            &PPObject);
          DriverName = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
        }
      }
      else
      {
        WPP_IFR_SF_qddd(
          (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
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
    FxVerifierNullBugCheck(DriverName, retaddr);
  if ( !Key )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *Key = 0LL;
  if ( DriverName->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(DriverName, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(DriverName);
      return -1073741808;
    }
  }
  result = FxValidateObjectAttributes(DriverName, v6, 0);
  if ( result >= 0 )
  {
    Length = KeyName->Length;
    if ( (KeyName->Length & 1) != 0 )
    {
      v12 = Length;
      v113 = 13;
    }
    else
    {
      LOWORD(v12) = KeyName->MaximumLength;
      if ( (v12 & 1) != 0 )
      {
        v12 = (unsigned __int16)v12;
        v113 = 14;
      }
      else
      {
        if ( !(_WORD)v12 || KeyName->Buffer )
        {
          if ( Length <= (unsigned __int16)v12 )
          {
            v13 = ExDefaultNonPagedPoolType;
            ContextSizeOverride = 0LL;
            v15 = DriverName->Tag;
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
            v16 = 176LL;
            v17 = 0;
            if ( ContextSizeOverride )
            {
              v115 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v115 < ContextSizeOverride )
                goto LABEL_254;
              v116 = v115 + 176;
              v16 = -1LL;
              if ( v116 >= 0xB0 )
                v16 = v116;
              v17 = v116 < 0xB0 ? 0xC0000095 : 0;
              if ( v116 < 0xB0 )
                goto LABEL_253;
            }
            if ( DriverName->FxVerifierHandle )
            {
              v117 = -1LL;
              LOBYTE(Length) = v16;
              if ( v16 + 48 >= v16 )
                v117 = v16 + 48;
              v118 = v16 + 48 < v16;
              v16 = v117;
              v17 = v118 ? 0xC0000095 : 0;
            }
            if ( v17 < 0 )
            {
LABEL_253:
              WPP_IFR_SF_DDxd(DriverName, Length, ContextSizeOverride, v10, Tag, 0x80u, 0, ContextSizeOverride, v17);
              if ( v17 < 0 )
                goto LABEL_254;
            }
            if ( DriverName->FxPoolTrackingOn )
              Caller = retaddr;
            else
              Caller = 0LL;
            v19 = (void (__fastcall ***)(FxObject *))FxPoolAllocator(
                                                       DriverName,
                                                       &DriverName->FxPoolFrameworks,
                                                       v13,
                                                       v16,
                                                       v15,
                                                       Caller);
            v21 = v19;
            if ( v19 )
            {
              if ( DriverName->FxVerifierHandle )
              {
                memset(v19, 0, 0x30uLL);
                *((_DWORD *)v21 + 8) = 1146058822;
                v21 += 6;
              }
              v21[17] = 0LL;
              v21[18] = 0LL;
              v21[19] = 0LL;
              v21[20] = 0LL;
              v21[21] = 0LL;
              v21[16] = (void (__fastcall **)(FxObject *))v21;
              if ( v6 )
              {
                v119 = v6->ContextTypeInfo;
                if ( v119 )
                {
                  ContextSize = v6->ContextSizeOverride;
                  if ( !ContextSize )
                    ContextSize = v119->ContextSize;
                  memset(v21 + 22, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                }
                v21[20] = (void (__fastcall **)(FxObject *))v6->ContextTypeInfo;
              }
            }
            if ( v21 )
            {
              v21[2] = (void (__fastcall **)(FxObject *))DriverName;
              *v21 = (void (__fastcall **)(FxObject *))&FxObject::`vftable';
              v22 = 0LL;
              *((_DWORD *)v21 + 2) = 8392710;
              v21[7] = 0LL;
              *((_BYTE *)v21 + 48) = 1;
              v21[8] = 0LL;
              v23 = (_LIST_ENTRY *)(v21 + 9);
              *((_DWORD *)v21 + 3) = 1;
              *((_DWORD *)v21 + 6) = 0x10000;
              v21[5] = (void (__fastcall **)(FxObject *))(v21 + 4);
              v21[4] = (void (__fastcall **)(FxObject *))(v21 + 4);
              v21[10] = (void (__fastcall **)(FxObject *))(v21 + 9);
              v21[9] = (void (__fastcall **)(FxObject *))(v21 + 9);
              v24 = v21[2];
              v21[11] = 0LL;
              v21[12] = 0LL;
              if ( *((_BYTE *)v24 + 316) )
                FxObject::Vf_VerifyConstruct((FxObject *)v21, v20, 0);
              *((_WORD *)v21 + 12) |= 0x11u;
              v25 = (void **)(v21 + 14);
              *v21 = (void (__fastcall **)(FxObject *))FxRegKey::`vftable';
              v21[14] = 0LL;
              v21[13] = 0LL;
              v21[15] = (void (__fastcall **)(FxObject *))DriverName;
              v159 = 0LL;
              if ( !*((_WORD *)v21 + 5) )
              {
                v30 = -1073741816;
                goto LABEL_48;
              }
              if ( !v6 )
                goto LABEL_415;
              if ( v6->ExecutionLevel == WdfExecutionLevelPassive )
              {
                FxObject::MarkPassiveCallbacks((FxObject *)v21, ObjectLock);
                v22 = (FxObject *)v159;
              }
              v121 = (unsigned __int64)v6->ParentObject;
              if ( v121 )
              {
                FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)v21[2], v121, 0x1000u, &v159);
                v22 = (FxObject *)v159;
              }
              else
              {
LABEL_415:
                if ( !v21[8] )
                {
                  v26 = v21[2];
                  if ( (char *)v26[9] != (char *)v21 )
                  {
                    v22 = (FxObject *)v26[9];
                    v159 = v22;
                  }
                }
              }
              if ( v22 )
              {
                v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v21 + 7);
                v158 = v27;
                if ( *((_WORD *)v21 + 13) != 1 )
                {
                  FxObject::TraceDroppedEvent((FxObject *)v21, FxObjectDroppedEventAssignParentObject);
                  KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v27);
                  v30 = -1073741738;
                  goto LABEL_48;
                }
                if ( v21[8] )
                {
                  KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v27);
                  v30 = -1071644147;
                  goto LABEL_48;
                }
                v28 = KeAcquireSpinLockRaiseToDpc(&v22->m_SpinLock.m_Lock);
                if ( v22->m_ObjectState == 1 )
                {
                  Blink = v22->m_ChildListHead.Blink;
                  if ( Blink->Flink != &v22->m_ChildListHead )
                    __fastfail(3u);
                  v23->Flink = &v22->m_ChildListHead;
                  v21[10] = (void (__fastcall **)(FxObject *))Blink;
                  Blink->Flink = v23;
                  v22->m_ChildListHead.Blink = v23;
                  if ( !v21[12] )
                    v21[12] = (void (__fastcall **)(FxObject *))v22->m_DeviceBase;
                  KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v28);
                  v30 = 0;
                  v21[8] = (void (__fastcall **)(FxObject *))v22;
                }
                else
                {
                  FxObject::TraceDroppedEvent(v22, FxObjectDroppedEventAddChildObjectInternal);
                  KeReleaseSpinLock(&v22->m_SpinLock.m_Lock, v28);
                  v30 = -1073741738;
                }
                KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v158);
                if ( v30 < 0 )
                {
LABEL_48:
                  v33 = *((_WORD *)v21 + 5);
                  if ( v33 )
                  {
                    for ( i = (void (__fastcall ***)(FxObject *))((char *)v21 + v33); i; i = (_QWORD *)i[1] )
                    {
                      i[3] = 0LL;
                      i[2] = 0LL;
                    }
                  }
                  *((_WORD *)v21 + 12) &= ~0x400u;
                  v35 = (*v21)[6];
                  if ( v35 != FxObject::DeleteObject )
                    goto LABEL_356;
                  v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v21 + 7);
                  v37 = *((unsigned __int16 *)v21 + 13);
                  v38 = v36;
                  *((_WORD *)v21 + 12) |= 4u;
                  if ( v37 != 1 )
                  {
                    if ( v37 == 2 )
                    {
                      v126 = (FxObject *)v21[8];
                      if ( v126 )
                      {
                        if ( FxObject::RemoveChildObjectInternal(v126, (FxObject *)v21) == -1073741738 )
                        {
                          FxObject::SetObjectStateLocked(
                            (FxObject *)v21,
                            FxObjectStateWaitingForParentDeleteAndDisposed);
                          KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v38);
                          return v30;
                        }
                        v21[8] = 0LL;
                      }
                      FxObject::DeletedAndDisposedWorkerLocked((FxObject *)v21, v38, 1u);
                      return v30;
                    }
                    FxObject::TraceDroppedEvent((FxObject *)v21, FxObjectDroppedEventDeleteObject);
                    KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v38);
                    return v30;
                  }
                  v39 = (FxObject *)v21[8];
                  if ( v39 )
                  {
                    v40 = KeAcquireSpinLockRaiseToDpc(&v39->m_SpinLock.m_Lock);
                    if ( v39->m_ObjectState != 1 )
                    {
                      FxObject::TraceDroppedEvent(v39, FxObjectDroppedEventRemoveChildObjectInternal);
                      KeReleaseSpinLock(&v39->m_SpinLock.m_Lock, v40);
                      FxObject::SetObjectStateLocked((FxObject *)v21, FxObjectStateWaitingForEarlyDispose);
                      KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v38);
                      return v30;
                    }
                    Flink = v23->Flink;
                    v42 = v21[10];
                    if ( v23->Flink->Blink != v23 || (char *)*v42 != (char *)v23 )
                      __fastfail(3u);
                    *v42 = (void (__fastcall *)(FxObject *))Flink;
                    Flink->Blink = (_LIST_ENTRY *)v42;
                    v21[10] = (void (__fastcall **)(FxObject *))(v21 + 9);
                    v23->Flink = v23;
                    KeReleaseSpinLock(&v39->m_SpinLock.m_Lock, v40);
                    v21[8] = 0LL;
                  }
                  v43 = *((_WORD *)v21 + 12);
                  if ( (v43 & 0x20) != 0 || (v43 & 0x10) != 0 && v38 )
                    goto LABEL_299;
                  if ( (v43 & 0x200) != 0 )
                  {
                    v127 = (_FX_DRIVER_GLOBALS *)v21[2];
                    if ( v127->FxVerboseOn )
                    {
                      v128 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !*((_WORD *)v21 + 5) )
                        v128 = 0LL;
                      WPP_IFR_SF_qqLL(
                        v127,
                        5u,
                        0x14u,
                        0xAu,
                        WPP_FxObject_hpp_Traceguids,
                        v21,
                        v128,
                        *((unsigned __int16 *)v21 + 13),
                        9u);
                    }
                    if ( *((char *)v21 + 24) < 0 )
                      *((_BYTE *)v21 + _InterlockedIncrement((volatile signed __int32 *)v21 - 6) - 32) = 9;
                  }
                  v44 = ((_BYTE)v21[3] & 0x20) == 0;
                  *((_WORD *)v21 + 13) = 9;
                  if ( !v44 )
                  {
                    if ( v38 )
                    {
LABEL_299:
                      FxObject::QueueDeferredDisposeLocked((FxObject *)v21, FxObjectStateDeferedDeleting);
                      KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v38);
                      return v30;
                    }
                  }
                  v45 = (void (__fastcall ***)(FxObject *))v21[4];
                  v46 = (void (__fastcall ****)(FxObject *))(v21 + 4);
                  if ( v45 != v21 + 4 )
                  {
                    while ( !v38 || (*(_BYTE *)(v45 - 6) & 0x10) == 0 )
                    {
                      v45 = (void (__fastcall ***)(FxObject *))*v45;
                      if ( v45 == (void (__fastcall ***)(FxObject *))v46 )
                        goto LABEL_64;
                    }
                    goto LABEL_299;
                  }
LABEL_64:
                  KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v38);
                  v47 = *v46;
                  if ( *v46 != (void (__fastcall ***)(FxObject *))v46 )
                  {
                    while ( 1 )
                    {
                      v96 = v47 - 9;
                      v97 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v47 - 2);
                      if ( *((_WORD *)v47 - 23) != 1 )
                      {
                        switch ( *((_WORD *)v47 - 23) )
                        {
                          case 5:
                            v99 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)(v47 - 9), v97, 0);
                            goto LABEL_193;
                          case 7:
                            v99 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)(v47 - 9), v97, 0);
                            goto LABEL_193;
                          default:
                            FxObject::TraceDroppedEvent((FxObject *)(v47 - 9), FxObjectDroppedEventPerformEarlyDispose);
                            KeReleaseSpinLock((PKSPIN_LOCK)v96 + 7, v97);
                            goto LABEL_194;
                        }
                      }
                      if ( ((_WORD)v96[3] & 0x200) != 0 )
                      {
                        v129 = (_FX_DRIVER_GLOBALS *)v96[2];
                        if ( v129->FxVerboseOn )
                        {
                          v130 = (const void *)((unsigned __int64)v96 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          if ( !*((_WORD *)v96 + 5) )
                            v130 = 0LL;
                          WPP_IFR_SF_qqLL(v129, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, v47 - 9, v130, 1u, 3u);
                        }
                        if ( *((char *)v96 + 24) < 0 )
                          *((_BYTE *)v96 + _InterlockedIncrement((volatile signed __int32 *)v47 - 24) - 32) = 3;
                      }
                      *((_WORD *)v96 + 13) = 3;
                      if ( ((_WORD)v96[3] & 0x200) != 0 )
                      {
                        v131 = (_FX_DRIVER_GLOBALS *)v96[2];
                        if ( v131->FxVerboseOn )
                        {
                          v132 = (const void *)((unsigned __int64)v96 ^ 0xFFFFFFFFFFFFFFF8uLL);
                          if ( !*((_WORD *)v96 + 5) )
                            v132 = 0LL;
                          WPP_IFR_SF_qqLL(v131, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, v47 - 9, v132, 3u, 4u);
                        }
                        if ( *((char *)v96 + 24) < 0 )
                          *((_BYTE *)v96 + _InterlockedIncrement((volatile signed __int32 *)v47 - 24) - 32) = 4;
                      }
                      *((_WORD *)v96 + 13) = 4;
                      if ( FxObject::DisposeChildrenWorker((FxObject *)(v47 - 9), FxObjectStateDeferedDisposing, v97, 0) )
                      {
                        v98 = *((_WORD *)v96 + 12);
                        if ( (v98 & 0x104) == 0x104 )
                        {
                          FxObject::DeletedAndDisposedWorkerLocked((FxObject *)(v47 - 9), v97, 0);
                        }
                        else
                        {
                          if ( (v98 & 0x200) != 0 )
                          {
                            v133 = (_FX_DRIVER_GLOBALS *)v96[2];
                            if ( v133->FxVerboseOn )
                            {
                              v134 = (const void *)((unsigned __int64)v96 ^ 0xFFFFFFFFFFFFFFF8uLL);
                              if ( !*((_WORD *)v96 + 5) )
                                v134 = 0LL;
                              WPP_IFR_SF_qqLL(
                                v133,
                                5u,
                                0x14u,
                                0xAu,
                                WPP_FxObject_hpp_Traceguids,
                                v47 - 9,
                                v134,
                                *((unsigned __int16 *)v96 + 13),
                                2u);
                            }
                            if ( *((char *)v96 + 24) < 0 )
                              *((_BYTE *)v96 + _InterlockedIncrement((volatile signed __int32 *)v47 - 24) - 32) = 2;
                          }
                          *((_WORD *)v96 + 13) = 2;
                        }
                        v99 = 1;
                      }
                      else
                      {
                        v99 = 0;
                      }
LABEL_193:
                      if ( !v99 )
                        break;
LABEL_194:
                      v47 = (void (__fastcall ***)(FxObject *))*v47;
                      if ( v47 == v21 + 4 )
                        goto LABEL_65;
                    }
                    v135 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v21 + 7);
                    FxObject::QueueDeferredDisposeLocked((FxObject *)v21, FxObjectStateDeferedDeleting);
                    KeReleaseSpinLock((PKSPIN_LOCK)v21 + 7, v135);
                    return v30;
                  }
LABEL_65:
                  if ( (((_WORD)v21[3] & 0x800) == 0 || ((unsigned __int8 (__fastcall *)(_QWORD))(*v21)[7])(v21))
                    && ((_WORD)v21[3] & 0x400) != 0 )
                  {
                    FxObject::CallCleanupCallbacks((FxObject *)v21);
                  }
                  if ( ((_WORD)v21[3] & 0x200) != 0 )
                  {
                    v136 = (_FX_DRIVER_GLOBALS *)v21[2];
                    if ( v136->FxVerboseOn )
                    {
                      v137 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !*((_WORD *)v21 + 5) )
                        v137 = 0LL;
                      WPP_IFR_SF_qqLL(
                        v136,
                        5u,
                        0x14u,
                        0xAu,
                        WPP_FxObject_hpp_Traceguids,
                        v21,
                        v137,
                        *((unsigned __int16 *)v21 + 13),
                        0xAu);
                    }
                    if ( *((char *)v21 + 24) < 0 )
                      *((_BYTE *)v21 + _InterlockedIncrement((volatile signed __int32 *)v21 - 6) - 32) = 10;
                  }
                  *((_WORD *)v21 + 13) = 10;
                  FxObject::DestroyChildren((FxObject *)v21);
                  v50 = (__int64 (__fastcall *)(FxObject *, volatile signed __int32 *, __int64, const char *))(*v21)[2];
                  if ( v50 == FxObject::Release )
                  {
                    if ( *((char *)v21 + 24) < 0 )
                    {
                      v138 = (FxTagTracker *)*(v21 - 6);
                      if ( v138 )
                        FxTagTracker::UpdateTagHistory(
                          v138,
                          0LL,
                          1246,
                          "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
                          TagRelease,
                          *((_DWORD *)v21 + 3) - 1);
                    }
                    if ( _InterlockedDecrement((volatile signed __int32 *)v21 + 3) )
                      return v30;
                    v51 = *((_WORD *)v21 + 12);
                    if ( (v51 & 0x20) == 0 && ((v51 & 0x10) == 0 || !KeGetCurrentIrql()) )
                    {
                      if ( (v51 & 0x80u) != 0 )
                      {
                        v52 = (FxTagTracker *)*(v21 - 6);
                        if ( v52 )
                          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)*(v21 - 6));
                      }
                      else
                      {
                        v52 = 0LL;
                      }
                      v53 = *((_WORD *)v21 + 5);
                      if ( v53 && ((_BYTE)v21[3] & 8) != 0 )
                      {
                        for ( j = (void (__fastcall ***)(FxObject *))((char *)v21 + v53); j; j = (_QWORD *)j[1] )
                        {
                          v55 = (void (__fastcall *)(unsigned __int64))j[2];
                          if ( v55 )
                          {
                            v55((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                            j[2] = 0LL;
                          }
                          v56 = (void (__fastcall *)(unsigned __int64))j[3];
                          if ( v56 )
                          {
                            v56((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
                            j[3] = 0LL;
                          }
                        }
                        v57 = *((_WORD *)v21 + 5);
                        LOBYTE(v48) = 1;
                        if ( v57 )
                        {
                          v58 = (void (__fastcall ***)(FxObject *))((char *)v21 + v57);
                          if ( v58 )
                          {
                            do
                            {
                              v59 = (_QWORD *)v58[1];
                              if ( !(_BYTE)v48 )
                                FxPoolFree(v58);
                              LOBYTE(v48) = 0;
                              v58 = v59;
                            }
                            while ( v59 );
                          }
                        }
                      }
                      if ( *((char *)v21 + 24) < 0 )
                      {
                        if ( *((_BYTE *)v21 - 20) )
                        {
                          _InterlockedDecrement((volatile signed __int32 *)v21[2][41] + 3);
                          if ( *((_WORD *)v21 + 4) == 4098
                            && _InterlockedExchangeAdd((volatile signed __int32 *)v21[2][41] + 4, 0xFFFFFFFF) != 1 )
                          {
                            v48 = (FxObjectDebugLeakDetection *)v21[2][41];
                            _InterlockedExchangeAdd(&v48->LimitScaled, -v48->Limit);
                          }
                        }
                      }
                      if ( v52 )
                      {
                        *(v21 - 6) = 0LL;
                        FxTagTracker::`scalar deleting destructor'(v52, (unsigned int)v48);
                      }
                      v60 = (void (__fastcall *)(FxObject *, unsigned int))**v21;
                      if ( v60 == FxObject::SelfDestruct )
                      {
                        v61 = (FxRegKey *(__fastcall *)(FxRegKey *, char))(*v21)[1];
                        if ( v61 == FxRegKey::`scalar deleting destructor' )
                        {
                          *v21 = (void (__fastcall **)(FxObject *))FxRegKey::`vftable';
                          v62 = v21[14];
                          if ( v62 )
                          {
                            ZwClose(v62);
                            v21[14] = 0LL;
                          }
                          v63 = v21[13];
                          *v21 = (void (__fastcall **)(FxObject *))FxPagedObject::`vftable';
                          if ( v63 )
                          {
                            FxPoolFree(v63);
                            v21[13] = 0LL;
                          }
                          FxObject::~FxObject((FxObject *)v21, (unsigned int)v60, v49);
                          if ( *((char *)v21 + 24) < 0 )
                            v21 -= 6;
                          if ( !v21 )
                            KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
                          if ( ((unsigned __int16)v21 & 0xFFF) != 0 )
                          {
LABEL_106:
                            v64 = (FX_POOL_TRACKER *)*(v21 - 2);
                            if ( *((_BYTE *)*(v21 - 1) + 264) )
                            {
                              if ( FxIsPagedPoolType(v64->PoolType) )
                                FxPoolRemovePagedAllocateTracker(v64);
                              else
                                FxPoolRemoveNonPagedAllocateTracker(v64);
                              memset(v64, 0, v64->Size + 64);
                            }
                            ExFreePoolWithTag(v64, 0);
                            return v30;
                          }
LABEL_340:
                          ExFreePoolWithTag(v21, 0);
                          return v30;
                        }
                        if ( (char *)v61 == (char *)FxRequest::`scalar deleting destructor' )
                        {
                          *v21 = (void (__fastcall **)(FxObject *))FxRequestBase::`vftable';
                          v71 = (_MDL *)v21[30];
                          if ( v71 )
                          {
                            if ( *((_BYTE *)v21[2] + 316) )
                              FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v21[2], (_MDL *)v21[30]);
                            else
                              IoFreeMdl(v71);
                          }
                          v72 = v21[21];
                          v73 = v21[19];
                          if ( v72 )
                          {
                            if ( v73 )
                              (*((void (__fastcall **)(void (__fastcall **)(FxObject *), void (__fastcall ***)(FxObject *)))*v72
                               + 3))(
                                v72,
                                v21);
                            v139 = v21[21];
                            if ( v139 )
                              (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v139)(v139, 1LL);
                          }
                          if ( v73 && *((_BYTE *)v21 + 213) == 1 )
                            IoFreeIrp((PIRP)v21[19]);
                          v74 = (FxRequestTimer *)v21[22];
                          if ( v74 )
                            FxRequestTimer::`scalar deleting destructor'(v74, (unsigned int)v60);
                          *v21 = (void (__fastcall **)(FxObject *))FxNonPagedObject::`vftable';
                          if ( *((char *)v21 + 24) < 0 )
                          {
                            v140 = (FxVerifierLock *)*(v21 - 5);
                            if ( v140 )
                            {
                              FxVerifierLock::`scalar deleting destructor'(v140, (unsigned int)v60);
                              *(v21 - 5) = 0LL;
                            }
                          }
                          *((_BYTE *)v21 + 104) = 0;
                          FxObject::~FxObject((FxObject *)v21, (unsigned int)v60, v49);
                          if ( *((char *)v21 + 24) < 0 )
                            v21 -= 6;
                          FxPoolFree(v21);
                          return v30;
                        }
                        if ( (char *)v61 == (char *)FxMemoryBuffer::`scalar deleting destructor' )
                        {
                          *v21 = (void (__fastcall **)(FxObject *))FxMemoryBuffer::`vftable'{for `FxObject'};
                          v21[13] = (void (__fastcall **)(FxObject *))FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
                          FxObject::~FxObject((FxObject *)v21, (unsigned int)v60, v49);
                          if ( *((char *)v21 + 24) < 0 )
                            v21 -= 6;
                          if ( !v21 )
                            KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
                          if ( ((unsigned __int16)v21 & 0xFFF) != 0 )
                            goto LABEL_106;
                          goto LABEL_340;
                        }
                        v61((FxRegKey *)v21, 1);
                        return v30;
                      }
                      v35 = **v21;
LABEL_356:
                      v35((FxObject *)v21);
                      return v30;
                    }
LABEL_357:
                    FxObject::SetObjectStateLocked((FxObject *)v21, FxObjectStateDeferedDestroy);
                    FxDisposeList::Add(*((FxDisposeList **)v21[2][9] + 43), (FxObject *)v21);
                    return v30;
                  }
                  if ( (char *)v50 != (char *)FxRequest::Release )
                  {
                    if ( (char *)v50 != (char *)FxMemoryObject::Release )
                    {
                      v50(
                        (FxObject *)v21,
                        0LL,
                        1246LL,
                        "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
                      return v30;
                    }
                    if ( *((char *)v21 + 24) < 0 )
                    {
                      v152 = (FxTagTracker *)*(v21 - 6);
                      if ( v152 )
                        FxTagTracker::UpdateTagHistory(
                          v152,
                          0LL,
                          1246,
                          "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
                          TagRelease,
                          *((_DWORD *)v21 + 3) - 1);
                    }
                    if ( _InterlockedDecrement((volatile signed __int32 *)v21 + 3) )
                      return v30;
                    v70 = *((_WORD *)v21 + 12);
                    if ( (v70 & 0x20) == 0 && ((v70 & 0x10) == 0 || !KeGetCurrentIrql()) )
                    {
                      FxObject::ProcessDestroy((FxObject *)v21, v48, v49);
                      return v30;
                    }
                    goto LABEL_357;
                  }
                  v65 = *((_BYTE *)v21 + 354);
                  v66 = *((_BYTE *)v21 + 213);
                  v67 = *((_BYTE *)v21 + 238);
                  if ( *((char *)v21 + 24) < 0 )
                  {
                    v141 = (FxTagTracker *)*(v21 - 6);
                    if ( v141 )
                      FxTagTracker::UpdateTagHistory(
                        v141,
                        0LL,
                        1246,
                        "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp",
                        TagRelease,
                        *((_DWORD *)v21 + 3) - 1);
                  }
                  v68 = -1LL;
                  v69 = _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
                  if ( v69 )
                  {
LABEL_111:
                    if ( v65 && v69 == 1 && *((_BYTE *)v21 + 214) )
                    {
                      FxIoQueue::ReturnReservedRequest((FxIoQueue *)v21[42], (FxRequest *)v21);
                    }
                    else if ( v66 )
                    {
                      if ( v67 )
                      {
                        if ( v69 == 1 )
                        {
                          if ( *((_BYTE *)v21 + 214) )
                          {
                            v147 = *((_BYTE *)v21 + 237);
                            v148 = (FxIoQueue *)v21[31];
                            v149 = (_IRP *)v21[19];
                            v150 = *((_BYTE *)v21 + 236);
                            v21[31] = 0LL;
                            v21[19] = 0LL;
                            *((_BYTE *)v21 + 237) = 0;
                            IofCompleteRequest(v149, v150);
                            if ( v147 == 1 )
                              FxIoQueue::PostRequestCompletedCallback(v148, v151);
                          }
                        }
                      }
                    }
                    return v30;
                  }
                  v75 = *((_WORD *)v21 + 12);
                  if ( (v75 & 0x20) != 0 || (v75 & 0x10) != 0 && KeGetCurrentIrql() )
                  {
                    FxObject::SetObjectStateLocked((FxObject *)v21, FxObjectStateDeferedDestroy);
                    FxDisposeList::Add(*((FxDisposeList **)v21[2][9] + 43), (FxObject *)v21);
                    goto LABEL_111;
                  }
                  if ( (v75 & 0x80u) != 0 )
                  {
                    v76 = (FxTagTracker *)*(v21 - 6);
                    m_Key = v76;
                    if ( v76 )
                    {
                      FxTagTracker::CheckForAbandondedTags(v76);
                      v76 = m_Key;
                      v68 = -1LL;
                    }
                  }
                  else
                  {
                    v76 = 0LL;
                    m_Key = 0LL;
                  }
                  v77 = *((_WORD *)v21 + 5);
                  if ( v77 && ((_BYTE)v21[3] & 8) != 0 )
                  {
                    v78 = (void (__fastcall ***)(FxObject *))((char *)v21 + v77);
                    if ( v78 )
                    {
                      do
                      {
                        v79 = (void (__fastcall *)(unsigned __int64, __int64, FxTagTracker *))v78[2];
                        if ( v79 )
                        {
                          v79((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL, v68, v76);
                          v78[2] = 0LL;
                        }
                        v80 = (void (__fastcall *)(unsigned __int64, __int64, FxTagTracker *))v78[3];
                        if ( v80 )
                        {
                          v80((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL, v68, v76);
                          v78[3] = 0LL;
                        }
                        v78 = (_QWORD *)v78[1];
                      }
                      while ( v78 );
                      v76 = m_Key;
                    }
                    v81 = *((_WORD *)v21 + 5);
                    v82 = 1;
                    if ( v81 )
                    {
                      v83 = (void (__fastcall ***)(FxObject *))((char *)v21 + v81);
                      if ( v83 )
                      {
                        do
                        {
                          v84 = (_QWORD *)v83[1];
                          if ( !v82 )
                            FxPoolFree(v83);
                          v82 = 0;
                          v83 = v84;
                        }
                        while ( v84 );
                        v76 = m_Key;
                      }
                    }
                    LODWORD(v68) = -1;
                  }
                  if ( *((char *)v21 + 24) < 0 )
                  {
                    if ( *((_BYTE *)v21 - 20) )
                    {
                      _InterlockedDecrement((volatile signed __int32 *)v21[2][41] + 3);
                      if ( *((_WORD *)v21 + 4) == 4098 )
                      {
                        LODWORD(v68) = _InterlockedExchangeAdd((volatile signed __int32 *)v21[2][41] + 4, 0xFFFFFFFF);
                        if ( (_DWORD)v68 != 1 )
                        {
                          v68 = (__int64)v21[2][41];
                          _InterlockedExchangeAdd((volatile signed __int32 *)(v68 + 8), -*(_DWORD *)(v68 + 4));
                        }
                      }
                    }
                  }
                  if ( v76 )
                  {
                    *(v21 - 6) = 0LL;
                    FxTagTracker::`scalar deleting destructor'(v76, v68);
                  }
                  v85 = (__int64)*v21;
                  v86 = (void (__fastcall *)(FxRequestFromLookaside *, unsigned int))**v21;
                  if ( v86 == FxRequestFromLookaside::SelfDestruct )
                  {
                    v87 = (_MDL *)v21[30];
                    v88 = v21[12];
                    *v21 = (void (__fastcall **)(FxObject *))FxRequestBase::`vftable';
                    if ( v87 )
                    {
                      if ( *((_BYTE *)v21[2] + 316) )
                        FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v21[2], v87);
                      else
                        IoFreeMdl(v87);
                    }
                    v89 = v21[21];
                    v90 = v21[19];
                    if ( v89 )
                    {
                      if ( v90 )
                        (*((void (__fastcall **)(void (__fastcall **)(FxObject *), void (__fastcall ***)(FxObject *)))*v89
                         + 3))(
                          v89,
                          v21);
                      v142 = v21[21];
                      if ( v142 )
                        (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v142)(v142, 1LL);
                    }
                    if ( v90 && *((_BYTE *)v21 + 213) == 1 )
                      IoFreeIrp((PIRP)v21[19]);
                    v91 = (FxRequestTimer *)v21[22];
                    if ( v91 )
                      FxRequestTimer::`scalar deleting destructor'(v91, v85);
                    *v21 = (void (__fastcall **)(FxObject *))FxNonPagedObject::`vftable';
                    if ( *((char *)v21 + 24) < 0 )
                    {
                      v143 = (FxVerifierLock *)*(v21 - 5);
                      if ( v143 )
                      {
                        FxVerifierLock::`scalar deleting destructor'(v143, v85);
                        *(v21 - 5) = 0LL;
                      }
                    }
                    *((_BYTE *)v21 + 104) = 0;
                    FxObject::~FxObject((FxObject *)v21, v85, (unsigned int)v76);
                    if ( *((_BYTE *)v21 + 355) )
                    {
                      v144 = FxObject::_CleanupPointer((_FX_DRIVER_GLOBALS *)v21[2], (FxObject *)v21);
                      ExFreePoolWithTag(v144->Next, 0);
                    }
                    else
                    {
                      if ( *((char *)v21 + 24) < 0 )
                        v92 = v21 - 6;
                      else
                        v92 = v21;
                      if ( *((_BYTE *)v88[2] + 264) )
                        FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)*(v92 - 2));
                      v93 = v88[81];
                      if ( v93 && *((_WORD *)v93 + 4) == 4354 && *((_BYTE *)v93 + 1667) )
                      {
                        v105 = (_SLIST_ENTRY *)*(v92 - 2);
                        if ( ExQueryDepthSList((PSLIST_HEADER)v88 + 28) >= *((_WORD *)v88 + 232) )
                          v88[63]((FxObject *)v105);
                        else
                          ExpInterlockedPushEntrySList((PSLIST_HEADER)v88 + 28, v105);
                      }
                      else
                      {
                        v94 = (_SLIST_ENTRY *)*(v92 - 2);
                        v95 = v88 + 56;
                        ++*((_DWORD *)v95 + 7);
                        if ( ExQueryDepthSList((PSLIST_HEADER)v95) >= *((_WORD *)v95 + 8) )
                        {
                          ++*((_DWORD *)v95 + 8);
                          v95[7]((FxObject *)v94);
                        }
                        else
                        {
                          ExpInterlockedPushEntrySList((PSLIST_HEADER)v95, v94);
                        }
                      }
                    }
                    goto LABEL_111;
                  }
                  if ( (char *)v86 != (char *)FxObject::SelfDestruct )
                  {
                    ((void (__fastcall *)(_QWORD))v86)(v21);
                    goto LABEL_111;
                  }
                  v100 = *(FxRequest *(__fastcall **)(FxRequest *, char))(v85 + 8);
                  if ( (char *)v100 == (char *)FxRegKey::`scalar deleting destructor' )
                  {
                    *v21 = (void (__fastcall **)(FxObject *))FxRegKey::`vftable';
                    v101 = v21[14];
                    if ( v101 )
                    {
                      ZwClose(v101);
                      v21[14] = 0LL;
                    }
                    v102 = v21[13];
                    *v21 = (void (__fastcall **)(FxObject *))FxPagedObject::`vftable';
                    if ( v102 )
                    {
                      FxPoolFree(v102);
                      v21[13] = 0LL;
                    }
                    FxObject::~FxObject((FxObject *)v21, v85, (unsigned int)v76);
                    if ( *((char *)v21 + 24) < 0 )
                      v103 = v21 - 6;
                    else
                      v103 = v21;
                    if ( !v103 )
                      KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
                  }
                  else
                  {
                    if ( v100 == FxRequest::`scalar deleting destructor' )
                    {
                      *v21 = (void (__fastcall **)(FxObject *))FxRequestBase::`vftable';
                      v106 = (_MDL *)v21[30];
                      if ( v106 )
                      {
                        if ( *((_BYTE *)v21[2] + 316) )
                          FxMdlFreeDebug((_FX_DRIVER_GLOBALS *)v21[2], (_MDL *)v21[30]);
                        else
                          IoFreeMdl(v106);
                      }
                      v107 = v21[21];
                      v108 = v21[19];
                      if ( v107 )
                      {
                        if ( v108 )
                          (*((void (__fastcall **)(void (__fastcall **)(FxObject *), void (__fastcall ***)(FxObject *)))*v107
                           + 3))(
                            v107,
                            v21);
                        v145 = v21[21];
                        if ( v145 )
                          (*(void (__fastcall **)(void (__fastcall **)(FxObject *), __int64))*v145)(v145, 1LL);
                      }
                      if ( v108 && *((_BYTE *)v21 + 213) == 1 )
                        IoFreeIrp((PIRP)v21[19]);
                      v109 = (FxRequestTimer *)v21[22];
                      if ( v109 )
                        FxRequestTimer::`scalar deleting destructor'(v109, v85);
                      *v21 = (void (__fastcall **)(FxObject *))FxNonPagedObject::`vftable';
                      if ( *((char *)v21 + 24) < 0 )
                      {
                        v146 = (FxVerifierLock *)*(v21 - 5);
                        if ( v146 )
                        {
                          FxVerifierLock::`scalar deleting destructor'(v146, v85);
                          *(v21 - 5) = 0LL;
                        }
                      }
                      *((_BYTE *)v21 + 104) = 0;
                      FxObject::~FxObject((FxObject *)v21, v85, (unsigned int)v76);
                      if ( *((char *)v21 + 24) < 0 )
                        v110 = v21 - 6;
                      else
                        v110 = v21;
                      FxPoolFree(v110);
                      goto LABEL_111;
                    }
                    if ( (char *)v100 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
                    {
                      v100((FxRequest *)v21, 1);
                      goto LABEL_111;
                    }
                    *v21 = (void (__fastcall **)(FxObject *))FxMemoryBuffer::`vftable'{for `FxObject'};
                    v21[13] = (void (__fastcall **)(FxObject *))FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
                    FxObject::~FxObject((FxObject *)v21, v85, (unsigned int)v76);
                    if ( *((char *)v21 + 24) < 0 )
                      v103 = v21 - 6;
                    else
                      v103 = v21;
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
                  }
                  else
                  {
                    ExFreePoolWithTag(v103, 0);
                  }
                  goto LABEL_111;
                }
                v25 = (void **)(v21 + 14);
              }
              if ( v6 )
              {
                v122 = *((_WORD *)v21 + 5);
                if ( v122 )
                  v123 = (char *)v21 + v122;
                else
                  v123 = 0LL;
                EvtDestroyCallback = v6->EvtDestroyCallback;
                if ( EvtDestroyCallback )
                  *((_QWORD *)v123 + 3) = EvtDestroyCallback;
                EvtCleanupCallback = v6->EvtCleanupCallback;
                if ( EvtCleanupCallback )
                {
                  *((_QWORD *)v123 + 2) = EvtCleanupCallback;
                  *((_WORD *)v21 + 12) |= 0x400u;
                }
              }
              *((_WORD *)v21 + 12) |= 8u;
              if ( *((_WORD *)v21 + 5) )
                v31 = (WDFKEY__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v31 = 0LL;
              if ( *((_BYTE *)v21[2] + 316) )
                FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)v21, (_FX_DRIVER_GLOBALS *)0x400);
              ObjectAttributes.RootDirectory = m_Key;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.ObjectName = KeyName;
              v32 = ZwOpenKey(v25, v161, &ObjectAttributes);
              v30 = v32;
              if ( v32 >= 0 )
                *Key = v31;
              else
                WPP_IFR_SF_d(DriverName, 2u, 2u, 0xBu, WPP_FxRegistryAPI_cpp_Traceguids, v32);
              if ( v30 >= 0 )
                return v30;
              goto LABEL_48;
            }
LABEL_254:
            WPP_IFR_SF_d(DriverName, 2u, 2u, 0xAu, WPP_FxRegistryAPI_cpp_Traceguids, -1073741670);
            return -1073741670;
          }
          WPP_IFR_SF_qddd(
            DriverName,
            Length,
            6u,
            0x10u,
            WPP_FxValidateFunctions_hpp_Traceguids_0,
            KeyName,
            Length,
            (unsigned __int16)v12,
            -1073741811);
          return -1073741811;
        }
        v12 = (unsigned __int16)v12;
        v113 = 15;
      }
    }
    WPP_IFR_SF_qdd(DriverName, 2u, 6u, v113, WPP_FxValidateFunctions_hpp_Traceguids_0, KeyName, v12, -1073741811);
    return -1073741811;
  }
  return result;
}
