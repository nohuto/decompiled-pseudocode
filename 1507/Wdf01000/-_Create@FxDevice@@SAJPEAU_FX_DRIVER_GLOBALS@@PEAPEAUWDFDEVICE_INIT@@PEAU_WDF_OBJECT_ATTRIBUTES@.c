/*
 * XREFs of ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C000CE70
 * Callers:
 *     imp_WdfDeviceCreate @ 0x1C000CD80 (imp_WdfDeviceCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000D780 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?SetInitialState@FxDevice@@AEAAXXZ @ 0x1C000E17C (-SetInitialState@FxDevice@@AEAAXXZ.c)
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000E96C (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000E9B8 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000EBA4 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C000F1E0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0016050 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C0076634 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxDevice::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        FxDevice **Device)
{
  __int64 v4; // rbp
  _POOL_TYPE v5; // ebx
  FxDevice **v6; // r12
  ULONG Tag; // esi
  unsigned __int64 ContextSizeOverride; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  _LIST_ENTRY *Caller; // rax
  unsigned __int64 **v13; // rax
  _FX_DRIVER_GLOBALS *v14; // rdx
  unsigned __int64 **v15; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v16; // rax
  unsigned __int64 ContextSize; // r8
  unsigned __int64 *v18; // rdi
  unsigned __int64 *v19; // rax
  int v20; // edi
  int v21; // eax
  int v22; // eax
  unsigned __int64 *v23; // rdi
  SIZE_T v24; // r9
  _DEVICE_OBJECT *v25; // rax
  _POOL_TYPE v26; // r8d
  _LIST_ENTRY *v27; // rax
  unsigned __int8 **v28; // rax
  _FX_DRIVER_GLOBALS *v29; // rdx
  unsigned __int8 **v30; // r14
  unsigned __int8 *v31; // rax
  _POOL_TYPE v32; // r8d
  SIZE_T v33; // r9
  unsigned __int8 *v34; // r13
  _LIST_ENTRY *v35; // rax
  _LIST_ENTRY **v36; // rax
  _FX_DRIVER_GLOBALS *v37; // rdx
  _LIST_ENTRY **v38; // rsi
  _LIST_ENTRY *v39; // rax
  _FX_DRIVER_GLOBALS *v40; // rdi
  PIO_WORKITEM WorkItem; // rax
  __int64 v42; // rax
  unsigned __int64 *v43; // rax
  unsigned __int64 *v44; // rcx
  _QWORD *i; // rdx
  unsigned __int64 *v46; // rcx
  unsigned __int64 ***v48; // rdx
  int v49; // eax
  unsigned __int64 *v50; // r14
  unsigned __int64 *v51; // r12
  FxVerifierLock *v52; // rax
  _KEVENT *v53; // rax
  _KEVENT *v54; // rsi
  unsigned __int8 *v55; // rsi
  unsigned __int8 *v56; // r12
  FxVerifierLock *v57; // rax
  _KEVENT *v58; // rax
  unsigned __int8 *v59; // rdi
  _LIST_ENTRY *v60; // r12
  unsigned __int64 v61; // rdi
  FxVerifierLock *v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 *v64; // rax
  unsigned __int64 ***v65; // r9
  ULONG Total; // [rsp+20h] [rbp-58h]
  _DEVICE_OBJECT *DeviceObject; // [rsp+30h] [rbp-48h]
  _LIST_ENTRY *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 Size; // [rsp+90h] [rbp+18h] BYREF
  void *object; // [rsp+98h] [rbp+20h] BYREF

  object = Device;
  v4 = (__int64)*DeviceInit;
  v5 = ExDefaultNonPagedPoolType;
  v6 = Device;
  Tag = FxDriverGlobals->Tag;
  *Device = 0LL;
  ContextSizeOverride = 0LL;
  if ( DeviceAttributes )
  {
    ContextTypeInfo = DeviceAttributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = DeviceAttributes->ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
    }
  }
  if ( FxCalculateObjectTotalSize2(FxDriverGlobals, 0x2C0u, 0, ContextSizeOverride, &Size) < 0 )
    goto LABEL_110;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v13 = (unsigned __int64 **)FxPoolAllocator(
                               FxDriverGlobals,
                               (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks,
                               v5,
                               Size,
                               Tag,
                               Caller);
  v15 = v13;
  if ( v13 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v13, 0, 0x20uLL);
      *((_DWORD *)v15 + 7) = 1146058822;
      v15 += 4;
    }
    memset(v15 + 88, 0, 0x30uLL);
    v15[88] = (unsigned __int64 *)v15;
    if ( DeviceAttributes )
    {
      v16 = DeviceAttributes->ContextTypeInfo;
      if ( v16 )
      {
        ContextSize = DeviceAttributes->ContextSizeOverride;
        if ( !ContextSize )
          ContextSize = v16->ContextSize;
        memset(v15 + 94, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v15[92] = (unsigned __int64 *)&DeviceAttributes->ContextTypeInfo->Size;
    }
  }
  if ( !v15 )
  {
LABEL_110:
    v20 = -1073741670;
    goto LABEL_111;
  }
  v18 = *(unsigned __int64 **)(v4 + 8);
  v15[2] = (unsigned __int64 *)v18[2];
  *v15 = (unsigned __int64 *)&FxObject::`vftable';
  *((_DWORD *)v15 + 2) = 46141442;
  v15[7] = 0LL;
  *((_BYTE *)v15 + 48) = 1;
  *((_DWORD *)v15 + 3) = 1;
  *((_DWORD *)v15 + 6) = 0x10000;
  v15[8] = 0LL;
  v15[5] = (unsigned __int64 *)(v15 + 4);
  v15[4] = (unsigned __int64 *)(v15 + 4);
  v15[10] = (unsigned __int64 *)(v15 + 9);
  v15[9] = (unsigned __int64 *)(v15 + 9);
  v19 = v15[2];
  v15[11] = 0LL;
  v15[12] = 0LL;
  if ( *((_BYTE *)v19 + 316) )
    FxObject::Vf_VerifyConstruct((FxObject *)v15, v14, 0);
  *v15 = (unsigned __int64 *)&FxNonPagedObject::`vftable';
  v15[14] = 0LL;
  *((_BYTE *)v15 + 104) = 1;
  if ( *((char *)v15 + 24) < 0 )
  {
    v50 = v15[2];
    if ( *((_BYTE *)v50 + 322) )
    {
      v51 = 0LL;
      v52 = (FxVerifierLock *)FxPoolAllocator(
                                (_FX_DRIVER_GLOBALS *)v50,
                                (_LIST_ENTRY *)(v50 + 13),
                                ExDefaultNonPagedPoolType,
                                0xB0uLL,
                                *((_DWORD *)v50 + 17),
                                retaddr);
      if ( v52 && (FxVerifierLock::FxVerifierLock(v52, (_FX_DRIVER_GLOBALS *)v50, (FxObject *)v15), (v54 = v53) != 0LL) )
      {
        if ( v53[5].Header.Size )
        {
          v53[2].Header.WaitListHead.Flink = 0LL;
          v53[2].Header.LockNV = 1;
          LODWORD(v53[2].Header.WaitListHead.Blink) = 0;
          KeInitializeEvent(v53 + 3, SynchronizationEvent, 0);
          LOBYTE(v54[1].Header.WaitListHead.Blink) = 1;
        }
        v51 = (unsigned __int64 *)v54;
      }
      else
      {
        WPP_IFR_SF_d((_FX_DRIVER_GLOBALS *)v50, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
      }
      *(v15 - 3) = v51;
      v6 = (FxDevice **)object;
    }
  }
  v15[15] = (unsigned __int64 *)&IFxHasCallbacks::`vftable';
  v15[18] = 0LL;
  v15[19] = 0LL;
  v15[20] = 0LL;
  *((_WORD *)v15 + 12) |= 0x10u;
  *v15 = &FxObject::`vftable'.BugCheckCallbackRecord.Checksum;
  v15[15] = (unsigned __int64 *)&FxDevice::`vftable'{for `IFxHasCallbacks'};
  v15[17] = v18;
  v15[21] = 0LL;
  v15[22] = 0LL;
  v15[16] = 0LL;
  *(unsigned __int64 **)((char *)v15 + 188) = (unsigned __int64 *)1;
  *((_DWORD *)v15 + 46) = 1;
  v15[12] = (unsigned __int64 *)v15;
  v15[28] = 0LL;
  *((_DWORD *)v15 + 86) = 0;
  *((_WORD *)v15 + 174) = 0;
  *((_BYTE *)v15 + 350) = 0;
  v15[42] = 0LL;
  v15[39] = (unsigned __int64 *)(v15 + 38);
  v15[38] = (unsigned __int64 *)(v15 + 38);
  v15[41] = (unsigned __int64 *)(v15 + 40);
  v15[40] = (unsigned __int64 *)(v15 + 40);
  v15[37] = (unsigned __int64 *)&FxObject::`vftable'.FxTrackDriverForMiniDumpLog;
  v15[45] = 0LL;
  *((_BYTE *)v15 + 352) = 1;
  FxDevice::SetInitialState((FxDevice *)v15);
  v20 = FxDevice::Initialize((FxDevice *)v15, (WDFDEVICE_INIT *)v4, DeviceAttributes);
  if ( v20 < 0 )
  {
LABEL_109:
    FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)v15, v20, 0);
LABEL_111:
    v15 = 0LL;
    goto LABEL_64;
  }
  v21 = *(_DWORD *)(v4 + 36);
  if ( !v21 )
  {
    v22 = FxDevice::FdoInitialize((FxDevice *)v15, (WDFDEVICE_INIT *)v4);
LABEL_24:
    v20 = v22;
    goto LABEL_25;
  }
  v49 = v21 - 1;
  if ( !v49 )
  {
    v22 = FxDevice::PdoInitialize((FxDevice *)v15, (WDFDEVICE_INIT *)v4);
    goto LABEL_24;
  }
  if ( v49 == 1 )
  {
    v22 = FxDevice::ControlDeviceInitialize((FxDevice *)v15, (WDFDEVICE_INIT *)v4);
    goto LABEL_24;
  }
LABEL_25:
  if ( v20 < 0 )
    goto LABEL_109;
  v23 = v15[2];
  v24 = 160LL;
  v25 = (_DEVICE_OBJECT *)v15[18];
  v26 = ExDefaultNonPagedPoolType;
  v15[16] = 0LL;
  DeviceObject = v25;
  if ( *((_BYTE *)v23 + 320) )
    v24 = 192LL;
  if ( *((_BYTE *)v23 + 264) )
    v27 = retaddr;
  else
    v27 = 0LL;
  v28 = (unsigned __int8 **)FxPoolAllocator(
                              (_FX_DRIVER_GLOBALS *)v23,
                              (_LIST_ENTRY *)(v23 + 13),
                              v26,
                              v24,
                              *((_DWORD *)v23 + 17),
                              v27);
  v30 = v28;
  if ( !v28 )
    goto LABEL_108;
  if ( *((_BYTE *)v23 + 320) )
  {
    memset(v28, 0, 0x20uLL);
    *((_DWORD *)v30 + 7) = 1146058822;
    v30 += 4;
  }
  if ( !v30 )
  {
LABEL_108:
    v20 = -1073741670;
    goto LABEL_109;
  }
  v30[2] = (unsigned __int8 *)v23;
  *v30 = (unsigned __int8 *)&FxObject::`vftable';
  *((_DWORD *)v30 + 2) = 4147;
  v30[7] = 0LL;
  *((_BYTE *)v30 + 48) = 1;
  *((_DWORD *)v30 + 3) = 1;
  *((_DWORD *)v30 + 6) = 0x10000;
  v30[8] = 0LL;
  v30[5] = (unsigned __int8 *)(v30 + 4);
  v30[4] = (unsigned __int8 *)(v30 + 4);
  v30[10] = (unsigned __int8 *)(v30 + 9);
  v30[9] = (unsigned __int8 *)(v30 + 9);
  v31 = v30[2];
  v30[11] = 0LL;
  v30[12] = 0LL;
  if ( v31[316] )
    FxObject::Vf_VerifyConstruct((FxObject *)v30, v29, 0);
  *v30 = (unsigned __int8 *)&FxNonPagedObject::`vftable';
  v30[14] = 0LL;
  *((_BYTE *)v30 + 104) = 1;
  if ( *((char *)v30 + 24) < 0 )
  {
    v55 = v30[2];
    if ( v55[322] )
    {
      v56 = 0LL;
      v57 = (FxVerifierLock *)FxPoolAllocator(
                                (_FX_DRIVER_GLOBALS *)v55,
                                (_LIST_ENTRY *)(v55 + 104),
                                ExDefaultNonPagedPoolType,
                                0xB0uLL,
                                *((_DWORD *)v55 + 17),
                                retaddr);
      if ( v57
        && (FxVerifierLock::FxVerifierLock(v57, (_FX_DRIVER_GLOBALS *)v55, (FxObject *)v30),
            (v59 = (unsigned __int8 *)v58) != 0LL) )
      {
        if ( v58[5].Header.Size )
        {
          v58[2].Header.WaitListHead.Flink = 0LL;
          v58[2].Header.LockNV = 1;
          LODWORD(v58[2].Header.WaitListHead.Blink) = 0;
          KeInitializeEvent(v58 + 3, SynchronizationEvent, 0);
          v59[40] = 1;
        }
        v56 = v59;
      }
      else
      {
        WPP_IFR_SF_d((_FX_DRIVER_GLOBALS *)v55, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
      }
      *(v30 - 3) = v56;
      v6 = (FxDevice **)object;
    }
  }
  v32 = ExDefaultNonPagedPoolType;
  *v30 = &FxObject::`vftable'.FxPoolTrackingOn;
  v33 = 224LL;
  v30[15] = 0LL;
  v30[16] = (unsigned __int8 *)(v30 + 15);
  v30[18] = 0LL;
  v30[17] = 0LL;
  *((_WORD *)v30 + 12) |= 0x800u;
  v34 = v30[2];
  if ( v34[320] )
    v33 = 256LL;
  if ( v34[264] )
    v35 = retaddr;
  else
    v35 = 0LL;
  v36 = (_LIST_ENTRY **)FxPoolAllocator(
                          (_FX_DRIVER_GLOBALS *)v34,
                          (_LIST_ENTRY *)(v34 + 104),
                          v32,
                          v33,
                          *((_DWORD *)v34 + 17),
                          v35);
  v38 = v36;
  if ( !v36 )
    goto LABEL_100;
  if ( v34[320] )
  {
    memset(v36, 0, 0x20uLL);
    *((_DWORD *)v38 + 7) = 1146058822;
    v38 += 4;
  }
  if ( !v38 )
    goto LABEL_100;
  v38[2] = (_LIST_ENTRY *)v34;
  *v38 = (_LIST_ENTRY *)&FxObject::`vftable';
  *((_DWORD *)v38 + 2) = 4145;
  v38[7] = 0LL;
  *((_BYTE *)v38 + 48) = 1;
  *((_DWORD *)v38 + 3) = 1;
  *((_DWORD *)v38 + 6) = 0x10000;
  v38[8] = 0LL;
  v38[5] = (_LIST_ENTRY *)(v38 + 4);
  v38[4] = (_LIST_ENTRY *)(v38 + 4);
  v38[10] = (_LIST_ENTRY *)(v38 + 9);
  v38[9] = (_LIST_ENTRY *)(v38 + 9);
  v39 = v38[2];
  v38[11] = 0LL;
  v38[12] = 0LL;
  if ( BYTE4(v39[19].Blink) )
    FxObject::Vf_VerifyConstruct((FxObject *)v38, v37, 0);
  *v38 = (_LIST_ENTRY *)&FxNonPagedObject::`vftable';
  v38[14] = 0LL;
  *((_BYTE *)v38 + 104) = 1;
  if ( *((char *)v38 + 24) >= 0 )
    goto LABEL_48;
  v60 = v38[2];
  if ( !BYTE2(v60[20].Flink) )
    goto LABEL_48;
  v61 = 0LL;
  Total = HIDWORD(v60[4].Flink);
  Size = 0LL;
  v62 = (FxVerifierLock *)FxPoolAllocator(
                            (_FX_DRIVER_GLOBALS *)v60,
                            (_LIST_ENTRY *)((char *)v60 + 104),
                            ExDefaultNonPagedPoolType,
                            0xB0uLL,
                            Total,
                            retaddr);
  if ( v62 )
  {
    FxVerifierLock::FxVerifierLock(v62, (_FX_DRIVER_GLOBALS *)v60, (FxObject *)v38);
    v61 = v63;
    if ( v63 )
    {
      if ( *(_BYTE *)(v63 + 122) )
      {
        *(_QWORD *)(v63 + 56) = 0LL;
        *(_DWORD *)(v63 + 48) = 1;
        *(_DWORD *)(v63 + 64) = 0;
        KeInitializeEvent((PRKEVENT)(v63 + 72), SynchronizationEvent, 0);
        *(_BYTE *)(v61 + 40) = 1;
      }
      goto LABEL_97;
    }
    v61 = Size;
  }
  WPP_IFR_SF_d((_FX_DRIVER_GLOBALS *)v60, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
LABEL_97:
  *(v38 - 3) = (_LIST_ENTRY *)v61;
LABEL_48:
  *v38 = &FxObject::`vftable'.FxPoolFrameworks.PagedHead;
  v38[16] = 0LL;
  *((_BYTE *)v38 + 176) = 0;
  KeInitializeEvent((PRKEVENT)(v38 + 19), NotificationEvent, 1u);
  *((_BYTE *)v38 + 176) = 1;
  *((_BYTE *)v38 + 216) = 0;
  KeInitializeEvent((PRKEVENT)v38 + 8, SynchronizationEvent, 0);
  *((_BYTE *)v38 + 216) = 1;
  v38[17] = 0LL;
  v38[18] = 0LL;
  *((_DWORD *)v38 + 46) = 0;
  *((_WORD *)v38 + 60) = 0;
  *((_DWORD *)v38 + 47) = 1;
  v40 = (_FX_DRIVER_GLOBALS *)v38[2];
  *((_WORD *)v38 + 12) |= 0x811u;
  WorkItem = IoAllocateWorkItem(DeviceObject);
  v38[16] = (_LIST_ENTRY *)WorkItem;
  if ( !WorkItem )
  {
    WPP_IFR_SF_(v40, 2u, 0x12u, 0xDu, WPP_FxSystemWorkitem_cpp_Traceguids);
    ((void (__fastcall *)(_LIST_ENTRY **, _QWORD, _QWORD, _QWORD))(*v38)[1].Flink)(v38, 0LL, 0LL, 0LL);
    v6 = (FxDevice **)object;
LABEL_100:
    WPP_IFR_SF_d((_FX_DRIVER_GLOBALS *)v34, 2u, 0xDu, 0xAu, WPP_FxDisposeList_cpp_Traceguids, -1073741670);
    v20 = -1073741670;
    FxObject::DeleteFromFailedCreate((FxObject *)v30);
    goto LABEL_50;
  }
  v30[19] = (unsigned __int8 *)DeviceObject;
  v6 = (FxDevice **)object;
  v20 = 0;
  v30[18] = (unsigned __int8 *)v38;
  v15[16] = (unsigned __int64 *)v30;
LABEL_50:
  if ( v20 < 0 )
    goto LABEL_109;
  v20 = FxObject::Commit((FxObject *)v15, DeviceAttributes, &object, (FxObject *)v15[17], 1u);
  if ( v20 < 0 )
    goto LABEL_109;
  v42 = *(_QWORD *)(v4 + 48);
  if ( v42 )
  {
    *(_OWORD *)(v15 + 29) = *(_OWORD *)(v42 + 104);
    *(_QWORD *)(v42 + 104) = 0LL;
    *(_QWORD *)(v42 + 112) = 0LL;
  }
  v43 = *(unsigned __int64 **)(v4 + 264);
  if ( v43 )
  {
    v48 = (unsigned __int64 ***)v15[47];
    *v43 = (unsigned __int64)(v15 + 46);
    v43[1] = (unsigned __int64)v48;
    if ( *v48 != v15 + 46 )
      __fastfail(3u);
    *v48 = (unsigned __int64 **)v43;
    v15[47] = v43;
    *(_QWORD *)(v4 + 264) = 0LL;
    ++*((_BYTE *)v15[18] + 76);
  }
  v44 = v15[18];
  if ( (v44[46] & 1) != 0 )
    ++*((_BYTE *)v44 + 76);
  if ( *((_BYTE *)v15 + 282) )
    ++*((_BYTE *)v15[18] + 76);
  for ( i = *(_QWORD **)(v4 + 920); i != (_QWORD *)(v4 + 920); i = (_QWORD *)*i )
  {
    v64 = (unsigned __int64 *)i[4];
    if ( v64 )
    {
      v65 = (unsigned __int64 ***)v15[47];
      *v64 = (unsigned __int64)(v15 + 46);
      v64[1] = (unsigned __int64)v65;
      if ( *v65 != v15 + 46 )
        __fastfail(3u);
      *v65 = (unsigned __int64 **)v64;
      v15[47] = v64;
      i[4] = 0LL;
      ++*((_BYTE *)v15[18] + 76);
    }
  }
  v46 = v15[81];
  if ( v46 )
    (*(void (__fastcall **)(unsigned __int64 *, __int64))(*v46 + 216))(v46, v4);
  *(_QWORD *)(v4 + 16) = v15;
  *DeviceInit = 0LL;
  if ( !*(_BYTE *)(v4 + 24) )
  {
    WDFDEVICE_INIT::~WDFDEVICE_INIT((WDFDEVICE_INIT *)v4);
    FxPoolFree((void *)v4);
  }
LABEL_64:
  *v6 = (FxDevice *)v15;
  return (unsigned int)v20;
}
