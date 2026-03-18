/*
 * XREFs of ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0021950
 * Callers:
 *     imp_WdfDeviceCreate @ 0x1C001ED00 (imp_WdfDeviceCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F040 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?SetInitialState@FxDevice@@AEAAXXZ @ 0x1C001FA20 (-SetInitialState@FxDevice@@AEAAXXZ.c)
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00200D0 (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020120 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020320 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C0030CD0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C006A220 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C007D60C (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     WPP_IFR_SF_DDxd @ 0x1C007FDD4 (WPP_IFR_SF_DDxd.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D4A70 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxDevice::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        __int64 DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        FxDevice **Device)
{
  __int64 v4; // rbp
  _POOL_TYPE v5; // r14d
  ULONG v7; // r12d
  unsigned __int64 flags; // r10
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v11; // rbx
  signed int id; // esi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  void *Caller; // rax
  _QWORD *v16; // rax
  _FX_DRIVER_GLOBALS *v17; // rdx
  _QWORD *v18; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v19; // rax
  unsigned __int64 ContextSizeOverride; // r8
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // edi
  int v24; // eax
  NTSTATUS v25; // eax
  _FX_DRIVER_GLOBALS *v26; // rdi
  _DEVICE_OBJECT *v27; // r12
  unsigned __int64 v28; // r9
  _POOL_TYPE v29; // r8d
  void *v30; // rax
  _QWORD *v31; // rax
  _FX_DRIVER_GLOBALS *v32; // rdx
  _QWORD *v33; // rsi
  __int64 v34; // rax
  _POOL_TYPE v35; // r8d
  unsigned __int64 v36; // r9
  _FX_DRIVER_GLOBALS *v37; // r13
  void *v38; // rax
  _QWORD *v39; // rax
  _FX_DRIVER_GLOBALS *v40; // rdx
  _QWORD *v41; // r14
  __int64 v42; // rax
  _FX_DRIVER_GLOBALS *v43; // rdi
  PIO_WORKITEM WorkItem; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rcx
  _QWORD *i; // rdx
  __int64 v49; // rcx
  _QWORD *v51; // rdx
  int v52; // eax
  bool v53; // cf
  _FX_DRIVER_GLOBALS *v54; // rdx
  _FX_DRIVER_GLOBALS *v55; // rdx
  _FX_DRIVER_GLOBALS *v56; // rdx
  _QWORD *v57; // rax
  _QWORD *v58; // r9
  const _GUID *Tag; // [rsp+20h] [rbp-68h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  WDFDEVICE_INIT **v61; // [rsp+98h] [rbp+10h]
  void *object; // [rsp+A0h] [rbp+18h] BYREF
  FxDevice **v63; // [rsp+A8h] [rbp+20h]

  v63 = Device;
  v61 = (WDFDEVICE_INIT **)DeviceInit;
  v4 = *(_QWORD *)DeviceInit;
  v5 = ExDefaultNonPagedPoolType;
  v7 = FxDriverGlobals->Tag;
  *Device = 0LL;
  flags = 0LL;
  if ( DeviceAttributes )
  {
    ContextTypeInfo = DeviceAttributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      flags = DeviceAttributes->ContextSizeOverride;
      if ( !flags )
        flags = ContextTypeInfo->ContextSize;
    }
  }
  v11 = 752LL;
  id = 0;
  if ( flags )
  {
    v13 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v13 < flags )
    {
LABEL_78:
      v23 = -1073741670;
LABEL_79:
      v18 = 0LL;
      goto LABEL_69;
    }
    v14 = v13 + 752;
    if ( v14 < 0x2F0 )
    {
      id = -1073741675;
LABEL_77:
      WPP_IFR_SF_DDxd(
        FxDriverGlobals,
        DeviceInit,
        (unsigned int)DeviceAttributes,
        (unsigned __int16)Device,
        Tag,
        0x2C0u,
        0,
        flags,
        id);
      goto LABEL_78;
    }
    v11 = v14;
  }
  if ( FxDriverGlobals->FxVerifierHandle )
  {
    DeviceInit = -1LL;
    if ( v11 + 48 >= v11 )
      DeviceInit = v11 + 48;
    v53 = v11 + 48 < v11;
    v11 = DeviceInit;
    id = v53 ? 0xC0000095 : 0;
  }
  if ( id < 0 )
    goto LABEL_77;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v16 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v5, v11, v7, Caller);
  v18 = v16;
  if ( v16 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v16, 0, 0x30uLL);
      *((_DWORD *)v18 + 8) = 1146058822;
      v18 += 6;
    }
    memset(v18 + 88, 0, 0x30uLL);
    v18[88] = v18;
    if ( DeviceAttributes )
    {
      v19 = DeviceAttributes->ContextTypeInfo;
      if ( v19 )
      {
        ContextSizeOverride = DeviceAttributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = v19->ContextSize;
        memset(v18 + 94, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v18[92] = DeviceAttributes->ContextTypeInfo;
    }
  }
  if ( !v18 )
    goto LABEL_78;
  v21 = *(_QWORD *)(v4 + 8);
  v18[2] = *(_QWORD *)(v21 + 16);
  *v18 = &FxObject::`vftable';
  *((_DWORD *)v18 + 2) = 46141442;
  v18[7] = 0LL;
  *((_BYTE *)v18 + 48) = 1;
  *((_DWORD *)v18 + 3) = 1;
  *((_DWORD *)v18 + 6) = 0x10000;
  v18[8] = 0LL;
  v18[5] = v18 + 4;
  v18[4] = v18 + 4;
  v18[10] = v18 + 9;
  v18[9] = v18 + 9;
  v22 = v18[2];
  v18[11] = 0LL;
  v18[12] = 0LL;
  if ( *(_BYTE *)(v22 + 316) )
    FxObject::Vf_VerifyConstruct((FxObject *)v18, v17, 0);
  *v18 = FxNonPagedObject::`vftable';
  v18[14] = 0LL;
  *((_BYTE *)v18 + 104) = 1;
  if ( *((char *)v18 + 24) < 0 )
  {
    v54 = (_FX_DRIVER_GLOBALS *)v18[2];
    if ( v54->FxVerifierLock )
    {
      object = 0LL;
      FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&object, v54, (FxObject *)v18);
      *(v18 - 5) = object;
    }
  }
  v18[15] = IFxHasCallbacks::`vftable';
  v18[18] = 0LL;
  v18[19] = 0LL;
  v18[20] = 0LL;
  *((_WORD *)v18 + 12) |= 0x10u;
  *v18 = FxDevice::`vftable'{for `FxNonPagedObject'};
  v18[15] = FxDevice::`vftable'{for `IFxHasCallbacks'};
  v18[17] = v21;
  v18[21] = 0LL;
  v18[22] = 0LL;
  v18[16] = 0LL;
  *(_QWORD *)((char *)v18 + 188) = 1LL;
  *((_DWORD *)v18 + 46) = 1;
  v18[12] = v18;
  v18[28] = 0LL;
  *((_DWORD *)v18 + 86) = 0;
  *((_WORD *)v18 + 174) = 0;
  *((_BYTE *)v18 + 350) = 0;
  v18[42] = 0LL;
  v18[39] = v18 + 38;
  v18[38] = v18 + 38;
  v18[41] = v18 + 40;
  v18[40] = v18 + 40;
  v18[37] = FxSpinLockTransactionedList::`vftable';
  v18[45] = 0LL;
  *((_BYTE *)v18 + 352) = 1;
  FxDevice::SetInitialState((FxDevice *)v18);
  v23 = FxDevice::Initialize((FxDevice *)v18, (WDFDEVICE_INIT *)v4, DeviceAttributes);
  if ( v23 < 0 )
    goto LABEL_102;
  v24 = *(_DWORD *)(v4 + 36);
  if ( !v24 )
  {
    v25 = FxDevice::FdoInitialize((FxDevice *)v18, (WDFDEVICE_INIT *)v4);
LABEL_29:
    v23 = v25;
    goto LABEL_30;
  }
  v52 = v24 - 1;
  if ( !v52 )
  {
    v25 = FxDevice::PdoInitialize((FxDevice *)v18, (WDFDEVICE_INIT *)v4);
    goto LABEL_29;
  }
  if ( v52 == 1 )
  {
    v25 = FxDevice::ControlDeviceInitialize((FxDevice *)v18, (WDFDEVICE_INIT *)v4);
    goto LABEL_29;
  }
LABEL_30:
  if ( v23 < 0 )
  {
LABEL_102:
    FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)v18, v23, 0);
    goto LABEL_79;
  }
  v26 = (_FX_DRIVER_GLOBALS *)v18[2];
  v27 = (_DEVICE_OBJECT *)v18[18];
  v28 = 160LL;
  v29 = ExDefaultNonPagedPoolType;
  v18[16] = 0LL;
  if ( v26->FxVerifierHandle )
    v28 = 208LL;
  if ( v26->FxPoolTrackingOn )
    v30 = retaddr;
  else
    v30 = 0LL;
  v31 = FxPoolAllocator(v26, &v26->FxPoolFrameworks, v29, v28, v26->Tag, v30);
  v33 = v31;
  if ( !v31 )
    goto LABEL_101;
  if ( v26->FxVerifierHandle )
  {
    memset(v31, 0, 0x30uLL);
    *((_DWORD *)v33 + 8) = 1146058822;
    v33 += 6;
  }
  if ( !v33 )
  {
LABEL_101:
    v23 = -1073741670;
    goto LABEL_102;
  }
  v33[2] = v26;
  *v33 = &FxObject::`vftable';
  *((_DWORD *)v33 + 2) = 4147;
  v33[7] = 0LL;
  *((_BYTE *)v33 + 48) = 1;
  *((_DWORD *)v33 + 3) = 1;
  *((_DWORD *)v33 + 6) = 0x10000;
  v33[8] = 0LL;
  v33[5] = v33 + 4;
  v33[4] = v33 + 4;
  v33[10] = v33 + 9;
  v33[9] = v33 + 9;
  v34 = v33[2];
  v33[11] = 0LL;
  v33[12] = 0LL;
  if ( *(_BYTE *)(v34 + 316) )
    FxObject::Vf_VerifyConstruct((FxObject *)v33, v32, 0);
  *v33 = FxNonPagedObject::`vftable';
  v33[14] = 0LL;
  *((_BYTE *)v33 + 104) = 1;
  if ( *((char *)v33 + 24) < 0 )
  {
    v55 = (_FX_DRIVER_GLOBALS *)v33[2];
    if ( v55->FxVerifierLock )
    {
      object = 0LL;
      FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&object, v55, (FxObject *)v33);
      *(v33 - 5) = object;
    }
  }
  v35 = ExDefaultNonPagedPoolType;
  *v33 = FxDisposeList::`vftable';
  v36 = 224LL;
  v33[15] = 0LL;
  v33[16] = v33 + 15;
  v33[18] = 0LL;
  v33[17] = 0LL;
  *((_WORD *)v33 + 12) |= 0x800u;
  v37 = (_FX_DRIVER_GLOBALS *)v33[2];
  if ( v37->FxVerifierHandle )
    v36 = 272LL;
  if ( v37->FxPoolTrackingOn )
    v38 = retaddr;
  else
    v38 = 0LL;
  v39 = FxPoolAllocator(v37, &v37->FxPoolFrameworks, v35, v36, v37->Tag, v38);
  v41 = v39;
  if ( !v39 )
    goto LABEL_93;
  if ( v37->FxVerifierHandle )
  {
    memset(v39, 0, 0x30uLL);
    *((_DWORD *)v41 + 8) = 1146058822;
    v41 += 6;
  }
  if ( !v41 )
    goto LABEL_93;
  v41[2] = v37;
  *v41 = &FxObject::`vftable';
  *((_DWORD *)v41 + 2) = 4145;
  v41[7] = 0LL;
  *((_BYTE *)v41 + 48) = 1;
  *((_DWORD *)v41 + 3) = 1;
  *((_DWORD *)v41 + 6) = 0x10000;
  v41[8] = 0LL;
  v41[5] = v41 + 4;
  v41[4] = v41 + 4;
  v41[10] = v41 + 9;
  v41[9] = v41 + 9;
  v42 = v41[2];
  v41[11] = 0LL;
  v41[12] = 0LL;
  if ( *(_BYTE *)(v42 + 316) )
    FxObject::Vf_VerifyConstruct((FxObject *)v41, v40, 0);
  *v41 = FxNonPagedObject::`vftable';
  v41[14] = 0LL;
  *((_BYTE *)v41 + 104) = 1;
  if ( *((char *)v41 + 24) < 0 )
  {
    v56 = (_FX_DRIVER_GLOBALS *)v41[2];
    if ( v56->FxVerifierLock )
    {
      object = 0LL;
      FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&object, v56, (FxObject *)v41);
      *(v41 - 5) = object;
    }
  }
  *v41 = FxSystemWorkItem::`vftable';
  v41[16] = 0LL;
  *((_BYTE *)v41 + 176) = 0;
  KeInitializeEvent((PRKEVENT)(v41 + 19), NotificationEvent, 1u);
  *((_BYTE *)v41 + 176) = 1;
  *((_BYTE *)v41 + 216) = 0;
  KeInitializeEvent((PRKEVENT)v41 + 8, SynchronizationEvent, 0);
  *((_BYTE *)v41 + 216) = 1;
  v41[17] = 0LL;
  v41[18] = 0LL;
  *((_DWORD *)v41 + 46) = 0;
  *((_WORD *)v41 + 60) = 0;
  *((_DWORD *)v41 + 47) = 1;
  *((_WORD *)v41 + 12) |= 0x811u;
  v43 = (_FX_DRIVER_GLOBALS *)v41[2];
  WorkItem = IoAllocateWorkItem(v27);
  v41[16] = WorkItem;
  if ( !WorkItem )
  {
    WPP_IFR_SF_(v43, 2u, 0x12u, 0xDu, WPP_FxSystemWorkitem_cpp_Traceguids);
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD))(*v41 + 16LL))(v41, 0LL, 0LL, 0LL);
LABEL_93:
    v23 = -1073741670;
    WPP_IFR_SF_d(v37, 2u, 0xDu, 0xAu, WPP_FxDisposeList_cpp_Traceguids, -1073741670);
    FxObject::DeleteFromFailedCreate((FxObject *)v33);
    goto LABEL_55;
  }
  v33[18] = v41;
  v33[19] = v27;
  v23 = 0;
  v18[16] = v33;
LABEL_55:
  if ( v23 < 0 )
    goto LABEL_102;
  v23 = FxObject::Commit((FxObject *)v18, (_FX_DRIVER_GLOBALS *)DeviceAttributes, &object, (FxObject *)v18[17], 1u);
  if ( v23 < 0 )
    goto LABEL_102;
  v45 = *(_QWORD *)(v4 + 48);
  if ( v45 )
  {
    *(_OWORD *)(v18 + 29) = *(_OWORD *)(v45 + 104);
    *(_QWORD *)(v45 + 104) = 0LL;
    *(_QWORD *)(v45 + 112) = 0LL;
  }
  v46 = *(_QWORD **)(v4 + 264);
  if ( v46 )
  {
    v51 = (_QWORD *)v18[47];
    if ( (_QWORD *)*v51 != v18 + 46 )
      __fastfail(3u);
    *v46 = v18 + 46;
    v46[1] = v51;
    *v51 = v46;
    v18[47] = v46;
    *(_QWORD *)(v4 + 264) = 0LL;
    ++*(_BYTE *)(v18[18] + 76LL);
  }
  v47 = v18[18];
  if ( (*(_DWORD *)(v47 + 368) & 1) != 0 )
    ++*(_BYTE *)(v47 + 76);
  if ( *((_BYTE *)v18 + 282) )
    ++*(_BYTE *)(v18[18] + 76LL);
  for ( i = *(_QWORD **)(v4 + 920); i != (_QWORD *)(v4 + 920); i = (_QWORD *)*i )
  {
    v57 = (_QWORD *)i[4];
    if ( v57 )
    {
      v58 = (_QWORD *)v18[47];
      if ( (_QWORD *)*v58 != v18 + 46 )
        __fastfail(3u);
      *v57 = v18 + 46;
      v57[1] = v58;
      *v58 = v57;
      v18[47] = v57;
      i[4] = 0LL;
      ++*(_BYTE *)(v18[18] + 76LL);
    }
  }
  v49 = v18[81];
  if ( v49 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 216LL))(v49, v4);
  *(_QWORD *)(v4 + 16) = v18;
  *v61 = 0LL;
  if ( !*(_BYTE *)(v4 + 24) )
  {
    WDFDEVICE_INIT::~WDFDEVICE_INIT((WDFDEVICE_INIT *)v4);
    FxPoolFree((_QWORD *)v4);
  }
LABEL_69:
  *v63 = (FxDevice *)v18;
  return (unsigned int)v23;
}
