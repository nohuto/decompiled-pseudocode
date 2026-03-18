/*
 * XREFs of ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0022EA0
 * Callers:
 *     imp_WdfDeviceCreate @ 0x1C00344D0 (imp_WdfDeviceCreate.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0002960 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001E9D0 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?SetInitialState@FxDevice@@AEAAXXZ @ 0x1C001F38C (-SetInitialState@FxDevice@@AEAAXXZ.c)
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001F920 (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001F96C (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001FB28 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C00202C0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0066A4C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C00798B4 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C9490 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxDevice::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        FxDevice **Device)
{
  __int64 v4; // rbp
  _POOL_TYPE v5; // ebx
  ULONG Tag; // esi
  unsigned __int64 ContextSizeOverride; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  void *Caller; // rax
  _QWORD *v12; // rax
  _FX_DRIVER_GLOBALS *v13; // rdx
  _QWORD *v14; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v15; // rax
  unsigned __int64 ContextSize; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // edi
  int v20; // eax
  NTSTATUS v21; // eax
  _FX_DRIVER_GLOBALS *v22; // rdi
  _DEVICE_OBJECT *v23; // r12
  SIZE_T v24; // r9
  _POOL_TYPE v25; // r8d
  void *v26; // rax
  _QWORD *v27; // rax
  _FX_DRIVER_GLOBALS *v28; // rdx
  _QWORD *v29; // rsi
  __int64 v30; // rax
  _POOL_TYPE v31; // r8d
  SIZE_T v32; // r9
  _FX_DRIVER_GLOBALS *v33; // r13
  void *v34; // rax
  _QWORD *v35; // rax
  _FX_DRIVER_GLOBALS *v36; // rdx
  _QWORD *v37; // r14
  __int64 v38; // rax
  _FX_DRIVER_GLOBALS *v39; // rdi
  PIO_WORKITEM WorkItem; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _QWORD *i; // rdx
  __int64 v45; // rcx
  _QWORD *v47; // rdx
  int v48; // eax
  _FX_DRIVER_GLOBALS *v49; // rdx
  _FX_DRIVER_GLOBALS *v50; // rdx
  _FX_DRIVER_GLOBALS *v51; // rdx
  _QWORD *v52; // rax
  _QWORD *v53; // r9
  void *retaddr; // [rsp+68h] [rbp+0h]
  void *object; // [rsp+80h] [rbp+18h] BYREF
  FxDevice **v57; // [rsp+88h] [rbp+20h]

  v57 = Device;
  v4 = (__int64)*DeviceInit;
  v5 = ExDefaultNonPagedPoolType;
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
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0x2C0u, 0, ContextSizeOverride, (unsigned __int64 *)&object) < 0 )
    goto LABEL_91;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v12 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v5, (SIZE_T)object, Tag, Caller);
  v14 = v12;
  if ( v12 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v12, 0, 0x20uLL);
      *((_DWORD *)v14 + 7) = 1146058822;
      v14 += 4;
    }
    memset(v14 + 88, 0, 0x30uLL);
    v14[88] = v14;
    if ( DeviceAttributes )
    {
      v15 = DeviceAttributes->ContextTypeInfo;
      if ( v15 )
      {
        ContextSize = DeviceAttributes->ContextSizeOverride;
        if ( !ContextSize )
          ContextSize = v15->ContextSize;
        memset(v14 + 94, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v14[92] = DeviceAttributes->ContextTypeInfo;
    }
  }
  if ( !v14 )
  {
LABEL_91:
    v19 = -1073741670;
    goto LABEL_92;
  }
  v17 = *(_QWORD *)(v4 + 8);
  v14[2] = *(_QWORD *)(v17 + 16);
  *v14 = &FxObject::`vftable';
  *((_DWORD *)v14 + 2) = 46141442;
  v14[7] = 0LL;
  *((_BYTE *)v14 + 48) = 1;
  *((_DWORD *)v14 + 3) = 1;
  *((_DWORD *)v14 + 6) = 0x10000;
  v14[8] = 0LL;
  v14[5] = v14 + 4;
  v14[4] = v14 + 4;
  v14[10] = v14 + 9;
  v14[9] = v14 + 9;
  v18 = v14[2];
  v14[11] = 0LL;
  v14[12] = 0LL;
  if ( *(_BYTE *)(v18 + 316) )
    FxObject::Vf_VerifyConstruct((FxObject *)v14, v13, 0);
  *v14 = &FxNonPagedObject::`vftable';
  v14[14] = 0LL;
  *((_BYTE *)v14 + 104) = 1;
  if ( *((char *)v14 + 24) < 0 )
  {
    v49 = (_FX_DRIVER_GLOBALS *)v14[2];
    if ( v49->FxVerifierLock )
    {
      object = 0LL;
      FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&object, v49, (FxObject *)v14);
      *(v14 - 3) = object;
    }
  }
  v14[15] = &IFxHasCallbacks::`vftable';
  v14[18] = 0LL;
  v14[19] = 0LL;
  v14[20] = 0LL;
  *((_WORD *)v14 + 12) |= 0x10u;
  *v14 = &FxDevice::`vftable'{for `FxNonPagedObject'};
  v14[15] = &FxDevice::`vftable'{for `IFxHasCallbacks'};
  v14[17] = v17;
  v14[21] = 0LL;
  v14[22] = 0LL;
  v14[16] = 0LL;
  *(_QWORD *)((char *)v14 + 188) = 1LL;
  *((_DWORD *)v14 + 46) = 1;
  v14[12] = v14;
  v14[28] = 0LL;
  *((_DWORD *)v14 + 86) = 0;
  *((_WORD *)v14 + 174) = 0;
  *((_BYTE *)v14 + 350) = 0;
  v14[42] = 0LL;
  v14[39] = v14 + 38;
  v14[38] = v14 + 38;
  v14[41] = v14 + 40;
  v14[40] = v14 + 40;
  v14[37] = &FxSpinLockTransactionedList::`vftable';
  v14[45] = 0LL;
  *((_BYTE *)v14 + 352) = 1;
  FxDevice::SetInitialState((FxDevice *)v14);
  v19 = FxDevice::Initialize((FxDevice *)v14, (WDFDEVICE_INIT *)v4, DeviceAttributes);
  if ( v19 < 0 )
  {
LABEL_90:
    FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)v14, v19, 0);
LABEL_92:
    v14 = 0LL;
    goto LABEL_64;
  }
  v20 = *(_DWORD *)(v4 + 36);
  if ( !v20 )
  {
    v21 = FxDevice::FdoInitialize((FxDevice *)v14, (WDFDEVICE_INIT *)v4);
LABEL_24:
    v19 = v21;
    goto LABEL_25;
  }
  v48 = v20 - 1;
  if ( !v48 )
  {
    v21 = FxDevice::PdoInitialize((FxDevice *)v14, (WDFDEVICE_INIT *)v4);
    goto LABEL_24;
  }
  if ( v48 == 1 )
  {
    v21 = FxDevice::ControlDeviceInitialize((FxDevice *)v14, (WDFDEVICE_INIT *)v4);
    goto LABEL_24;
  }
LABEL_25:
  if ( v19 < 0 )
    goto LABEL_90;
  v22 = (_FX_DRIVER_GLOBALS *)v14[2];
  v23 = (_DEVICE_OBJECT *)v14[18];
  v24 = 160LL;
  v25 = ExDefaultNonPagedPoolType;
  v14[16] = 0LL;
  if ( v22->FxVerifierHandle )
    v24 = 192LL;
  if ( v22->FxPoolTrackingOn )
    v26 = retaddr;
  else
    v26 = 0LL;
  v27 = FxPoolAllocator(v22, &v22->FxPoolFrameworks, v25, v24, v22->Tag, v26);
  v29 = v27;
  if ( !v27 )
    goto LABEL_89;
  if ( v22->FxVerifierHandle )
  {
    memset(v27, 0, 0x20uLL);
    *((_DWORD *)v29 + 7) = 1146058822;
    v29 += 4;
  }
  if ( !v29 )
  {
LABEL_89:
    v19 = -1073741670;
    goto LABEL_90;
  }
  v29[2] = v22;
  *v29 = &FxObject::`vftable';
  *((_DWORD *)v29 + 2) = 4147;
  v29[7] = 0LL;
  *((_BYTE *)v29 + 48) = 1;
  *((_DWORD *)v29 + 3) = 1;
  *((_DWORD *)v29 + 6) = 0x10000;
  v29[8] = 0LL;
  v29[5] = v29 + 4;
  v29[4] = v29 + 4;
  v29[10] = v29 + 9;
  v29[9] = v29 + 9;
  v30 = v29[2];
  v29[11] = 0LL;
  v29[12] = 0LL;
  if ( *(_BYTE *)(v30 + 316) )
    FxObject::Vf_VerifyConstruct((FxObject *)v29, v28, 0);
  *v29 = &FxNonPagedObject::`vftable';
  v29[14] = 0LL;
  *((_BYTE *)v29 + 104) = 1;
  if ( *((char *)v29 + 24) < 0 )
  {
    v50 = (_FX_DRIVER_GLOBALS *)v29[2];
    if ( v50->FxVerifierLock )
    {
      object = 0LL;
      FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&object, v50, (FxObject *)v29);
      *(v29 - 3) = object;
    }
  }
  v31 = ExDefaultNonPagedPoolType;
  *v29 = &FxDisposeList::`vftable';
  v32 = 224LL;
  v29[15] = 0LL;
  v29[16] = v29 + 15;
  v29[18] = 0LL;
  v29[17] = 0LL;
  *((_WORD *)v29 + 12) |= 0x800u;
  v33 = (_FX_DRIVER_GLOBALS *)v29[2];
  if ( v33->FxVerifierHandle )
    v32 = 256LL;
  if ( v33->FxPoolTrackingOn )
    v34 = retaddr;
  else
    v34 = 0LL;
  v35 = FxPoolAllocator(v33, &v33->FxPoolFrameworks, v31, v32, v33->Tag, v34);
  v37 = v35;
  if ( !v35 )
    goto LABEL_81;
  if ( v33->FxVerifierHandle )
  {
    memset(v35, 0, 0x20uLL);
    *((_DWORD *)v37 + 7) = 1146058822;
    v37 += 4;
  }
  if ( !v37 )
    goto LABEL_81;
  v37[2] = v33;
  *v37 = &FxObject::`vftable';
  *((_DWORD *)v37 + 2) = 4145;
  v37[7] = 0LL;
  *((_BYTE *)v37 + 48) = 1;
  *((_DWORD *)v37 + 3) = 1;
  *((_DWORD *)v37 + 6) = 0x10000;
  v37[8] = 0LL;
  v37[5] = v37 + 4;
  v37[4] = v37 + 4;
  v37[10] = v37 + 9;
  v37[9] = v37 + 9;
  v38 = v37[2];
  v37[11] = 0LL;
  v37[12] = 0LL;
  if ( *(_BYTE *)(v38 + 316) )
    FxObject::Vf_VerifyConstruct((FxObject *)v37, v36, 0);
  *v37 = &FxNonPagedObject::`vftable';
  v37[14] = 0LL;
  *((_BYTE *)v37 + 104) = 1;
  if ( *((char *)v37 + 24) < 0 )
  {
    v51 = (_FX_DRIVER_GLOBALS *)v37[2];
    if ( v51->FxVerifierLock )
    {
      object = 0LL;
      FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&object, v51, (FxObject *)v37);
      *(v37 - 3) = object;
    }
  }
  *v37 = &FxSystemWorkItem::`vftable';
  v37[16] = 0LL;
  *((_BYTE *)v37 + 176) = 0;
  KeInitializeEvent((PRKEVENT)(v37 + 19), NotificationEvent, 1u);
  *((_BYTE *)v37 + 176) = 1;
  *((_BYTE *)v37 + 216) = 0;
  KeInitializeEvent((PRKEVENT)v37 + 8, SynchronizationEvent, 0);
  *((_BYTE *)v37 + 216) = 1;
  v37[17] = 0LL;
  v37[18] = 0LL;
  *((_DWORD *)v37 + 46) = 0;
  *((_WORD *)v37 + 60) = 0;
  *((_DWORD *)v37 + 47) = 1;
  *((_WORD *)v37 + 12) |= 0x811u;
  v39 = (_FX_DRIVER_GLOBALS *)v37[2];
  WorkItem = IoAllocateWorkItem(v23);
  v37[16] = WorkItem;
  if ( !WorkItem )
  {
    WPP_IFR_SF_(v39, 2u, 0x12u, 0xDu, WPP_FxSystemWorkitem_cpp_Traceguids);
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD))(*v37 + 16LL))(v37, 0LL, 0LL, 0LL);
LABEL_81:
    v19 = -1073741670;
    WPP_IFR_SF_d(v33, 2u, 0xDu, 0xAu, WPP_FxDisposeList_cpp_Traceguids, -1073741670);
    FxObject::DeleteFromFailedCreate((FxObject *)v29);
    goto LABEL_50;
  }
  v29[18] = v37;
  v29[19] = v23;
  v19 = 0;
  v14[16] = v29;
LABEL_50:
  if ( v19 < 0 )
    goto LABEL_90;
  v19 = FxObject::Commit((FxObject *)v14, DeviceAttributes, &object, (FxObject *)v14[17], 1u);
  if ( v19 < 0 )
    goto LABEL_90;
  v41 = *(_QWORD *)(v4 + 48);
  if ( v41 )
  {
    *(_OWORD *)(v14 + 29) = *(_OWORD *)(v41 + 104);
    *(_QWORD *)(v41 + 104) = 0LL;
    *(_QWORD *)(v41 + 112) = 0LL;
  }
  v42 = *(_QWORD **)(v4 + 264);
  if ( v42 )
  {
    v47 = (_QWORD *)v14[47];
    if ( (_QWORD *)*v47 != v14 + 46 )
      __fastfail(3u);
    *v42 = v14 + 46;
    v42[1] = v47;
    *v47 = v42;
    v14[47] = v42;
    *(_QWORD *)(v4 + 264) = 0LL;
    ++*(_BYTE *)(v14[18] + 76LL);
  }
  v43 = v14[18];
  if ( (*(_DWORD *)(v43 + 368) & 1) != 0 )
    ++*(_BYTE *)(v43 + 76);
  if ( *((_BYTE *)v14 + 282) )
    ++*(_BYTE *)(v14[18] + 76LL);
  for ( i = *(_QWORD **)(v4 + 920); i != (_QWORD *)(v4 + 920); i = (_QWORD *)*i )
  {
    v52 = (_QWORD *)i[4];
    if ( v52 )
    {
      v53 = (_QWORD *)v14[47];
      if ( (_QWORD *)*v53 != v14 + 46 )
        __fastfail(3u);
      *v52 = v14 + 46;
      v52[1] = v53;
      *v53 = v52;
      v14[47] = v52;
      i[4] = 0LL;
      ++*(_BYTE *)(v14[18] + 76LL);
    }
  }
  v45 = v14[81];
  if ( v45 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 216LL))(v45, v4);
  *(_QWORD *)(v4 + 16) = v14;
  *DeviceInit = 0LL;
  if ( !*(_BYTE *)(v4 + 24) )
  {
    WDFDEVICE_INIT::~WDFDEVICE_INIT((WDFDEVICE_INIT *)v4, (unsigned int)i);
    FxPoolFree((_QWORD *)v4);
  }
LABEL_64:
  *v57 = (FxDevice *)v14;
  return (unsigned int)v19;
}
