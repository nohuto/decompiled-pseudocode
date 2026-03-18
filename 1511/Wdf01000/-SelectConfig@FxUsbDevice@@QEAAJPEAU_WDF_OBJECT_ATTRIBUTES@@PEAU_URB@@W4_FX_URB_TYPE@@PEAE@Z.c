/*
 * XREFs of ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007C218
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0078C90 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007C954 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007DC6C (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C007DF54 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0003E5C (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0005CC0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C0019438 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C00558D4 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C00559D4 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C006BA9C (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_dqdd @ 0x1C0072258 (WPP_IFR_SF_dqdd.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C007AE48 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z @ 0x1C007BBA0 (-GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C007E85C (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C007F054 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C007F274 (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfig(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _FILE_OBJECT *Urb,
        _FX_URB_TYPE NumConfiguredInterfaces,
        unsigned __int8 *PipesAttributes_0)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxUsbDevice *v7; // rdi
  unsigned __int16 v8; // r12
  int v9; // ebx
  unsigned __int8 m_NumInterfaces; // al
  unsigned __int16 v11; // ax
  size_t v12; // rbx
  FxUsbPipe ***v13; // rax
  FxUsbPipe ***v14; // r14
  const void *v15; // rdi
  unsigned __int8 v16; // dl
  _FILE_OBJECT *v17; // rbx
  void **p_SectionObjectPointer; // rsi
  void **v19; // r13
  unsigned __int16 v20; // ax
  unsigned __int16 v21; // cx
  _QWORD *v22; // rax
  FxIoTarget **v23; // rbx
  __int64 v24; // rax
  FxUsbPipe *v25; // rax
  FxIoTarget *v26; // rax
  int v27; // eax
  size_t v28; // r12
  _URB *v29; // rax
  unsigned __int16 v30; // r9
  unsigned __int16 v31; // r9
  int _a2; // ecx
  unsigned __int16 v33; // r9
  USBD_HANDLE__ *m_USBDHandle; // r9
  int v35; // eax
  FxUsbInterface *v36; // rax
  FxUsbPipe **v37; // r11
  unsigned __int8 v38; // r13
  unsigned __int16 *v39; // r12
  unsigned __int16 *v40; // rsi
  FxUsbInterface *v41; // rax
  FxUsbInterface *v42; // r10
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int8 v45; // r15
  __int64 v46; // rsi
  unsigned int v47; // r12d
  FxObject *v48; // rcx
  unsigned int v50; // [rsp+58h] [rbp-B0h]
  _URB *v51; // [rsp+60h] [rbp-A8h]
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+78h] [rbp-90h]
  _FX_DRIVER_GLOBALS *InterfaceFromNumber; // [rsp+80h] [rbp-88h]
  _QWORD *v55; // [rsp+88h] [rbp-80h]
  FxUsbDevice *v56; // [rsp+90h] [rbp-78h]
  _FX_DRIVER_GLOBALS *FxDriverGlobals; // [rsp+98h] [rbp-70h]
  FxSyncRequest request; // [rsp+A0h] [rbp-68h] BYREF
  void *Caller; // [rsp+220h] [rbp+118h]
  unsigned __int8 v60; // [rsp+228h] [rbp+120h]
  FxUsbInterface *v61; // [rsp+228h] [rbp+120h]
  unsigned __int8 v64; // [rsp+240h] [rbp+138h]
  unsigned __int8 i; // [rsp+240h] [rbp+138h]

  p_m_Globals = &this->m_Globals;
  v56 = this;
  m_Globals = this->m_Globals;
  v7 = this;
  FxDriverGlobals = m_Globals;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, m_Globals, 0LL, 0LL);
  v51 = 0LL;
  v8 = 0;
  if ( PipesAttributes_0 )
    *PipesAttributes_0 = 0;
  v9 = FxRequestBase::ValidateTarget(*(FxRequestBase **)&request.m_ClearContextOnDestroy, (unsigned __int64)v7);
  if ( v9 >= 0 )
  {
    m_NumInterfaces = v7->m_NumInterfaces;
    if ( m_NumInterfaces )
      v11 = 16 * m_NumInterfaces;
    else
      v11 = 16;
    v12 = v11;
    v13 = (FxUsbPipe ***)FxPoolAllocator(
                           m_Globals,
                           &m_Globals->FxPoolFrameworks,
                           ExDefaultNonPagedPoolType,
                           v11,
                           m_Globals->Tag,
                           Caller);
    v14 = v13;
    if ( !v13 )
    {
      v9 = -1073741670;
      if ( v7->m_ObjectSize )
        v15 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v15 = 0LL;
      WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbDevice_cpp_Traceguids, v15, -1073741670);
      goto LABEL_71;
    }
    memset(v13, 0, v12);
    v17 = Urb;
    v64 = 0;
    p_SectionObjectPointer = (void **)&Urb->SectionObjectPointer;
    options.Timeout = (__int64)Urb + (unsigned __int16)Urb->Type;
    v19 = (void **)&Urb->SectionObjectPointer;
    if ( (unsigned __int64)&Urb->SectionObjectPointer < options.Timeout )
    {
      while ( 1 )
      {
        if ( *((_DWORD *)v19 + 4) > 0xFFu )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dqdd(
            *p_m_Globals,
            v16,
            0xEu,
            0x16u,
            WPP_FxUsbDevice_cpp_Traceguids,
            255,
            v19,
            *((_DWORD *)v19 + 4),
            -1073741808);
          goto LABEL_61;
        }
        InterfaceFromNumber = (_FX_DRIVER_GLOBALS *)FxUsbDevice::GetInterfaceFromNumber(v7, *((_BYTE *)v19 + 2));
        if ( !InterfaceFromNumber )
        {
          _a2 = -1073741808;
          v33 = 23;
          goto LABEL_44;
        }
        v20 = *((unsigned __int8 *)v19 + 16);
        v60 = *((_BYTE *)v19 + 16);
        if ( v20 > v8 )
          v8 = *((unsigned __int8 *)v19 + 16);
        if ( (_BYTE)v20 )
          v21 = 8 * *((unsigned __int8 *)v19 + 16);
        else
          v21 = 8;
        *(_QWORD *)&options.Size = v21;
        v22 = FxPoolAllocator(
                FxDriverGlobals,
                &FxDriverGlobals->FxPoolFrameworks,
                ExDefaultNonPagedPoolType,
                v21,
                FxDriverGlobals->Tag,
                Caller);
        v55 = v22;
        v23 = (FxIoTarget **)v22;
        if ( !v22 )
        {
          _a2 = -1073741670;
          v33 = 24;
LABEL_44:
          v9 = _a2;
          WPP_IFR_SF_dd(*p_m_Globals, 2u, 0xEu, v33, WPP_FxUsbDevice_cpp_Traceguids, *((unsigned __int8 *)v19 + 2), _a2);
          goto LABEL_61;
        }
        memset(v22, 0, *(size_t *)&options.Size);
        v24 = 2LL * v64;
        v50 = 0;
        v14[v24] = (FxUsbPipe **)v23;
        LODWORD(v14[v24 + 1]) = v60;
        if ( v60 )
          break;
LABEL_29:
        if ( InterfaceFromNumber->FxPoolFrameworks.NonPagedHead.Blink )
          FxUsbDevice::CleanupInterfacePipesAndDelete(v7, InterfaceFromNumber);
        ++v64;
        v19 = (void **)((char *)v19 + *(unsigned __int16 *)v19);
        if ( (unsigned __int64)v19 >= options.Timeout )
        {
          v17 = Urb;
          goto LABEL_33;
        }
      }
      while ( 1 )
      {
        v25 = (FxUsbPipe *)FxObjectHandleAlloc(
                             *p_m_Globals,
                             ExDefaultNonPagedPoolType,
                             0x1B0uLL,
                             0,
                             PipesAttributes,
                             0,
                             FxObjectTypeExternal);
        if ( v25 )
          FxUsbPipe::FxUsbPipe(v25, *p_m_Globals, v7);
        else
          v26 = 0LL;
        *(_QWORD *)&options.Size = v26;
        *v23 = v26;
        if ( !v26 )
          break;
        v27 = FxIoTarget::Init(v26, v7->m_DeviceBase);
        v9 = v27;
        if ( v27 < 0 )
        {
          v31 = 26;
          goto LABEL_39;
        }
        v27 = FxObject::Commit(*(FxObject **)&options.Size, PipesAttributes, 0LL, (FxObject *)InterfaceFromNumber, 1u);
        v9 = v27;
        if ( v27 < 0 )
        {
          v31 = 27;
LABEL_39:
          WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, v31, WPP_FxUsbDevice_cpp_Traceguids, v27);
          goto LABEL_61;
        }
        v23 = (FxIoTarget **)(v55 + 1);
        ++v50;
        ++v55;
        if ( v50 >= v60 )
          goto LABEL_29;
      }
      v9 = -1073741670;
      v30 = 25;
      goto LABEL_41;
    }
LABEL_33:
    if ( v7->m_NumInterfaces > 1u && v8 )
    {
      v28 = (unsigned __int16)(24 * (v8 - 1) + 80);
      v29 = (_URB *)FxPoolAllocator(
                      *p_m_Globals,
                      &(*p_m_Globals)->FxPoolFrameworks,
                      ExDefaultNonPagedPoolType,
                      (unsigned int)v28,
                      (*p_m_Globals)->Tag,
                      Caller);
      v51 = v29;
      if ( !v29 )
      {
        v9 = -1073741670;
        v30 = 28;
LABEL_41:
        WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, v30, WPP_FxUsbDevice_cpp_Traceguids, -1073741670);
LABEL_61:
        v45 = 0;
        for ( i = 0; v45 < v7->m_NumInterfaces; i = v45 )
        {
          v46 = 2LL * v45;
          if ( v14[2 * v45] )
          {
            v47 = 0;
            if ( LODWORD(v14[2 * v45 + 1]) )
            {
              do
              {
                v48 = v14[2 * v45][v47];
                if ( v48 )
                {
                  FxObject::DeleteFromFailedCreate(v48);
                  v14[2 * v45][v47] = 0LL;
                }
                ++v47;
              }
              while ( v47 < LODWORD(v14[2 * v45 + 1]) );
              v7 = v56;
              v45 = i;
            }
            FxPoolFree(v14[v46]);
            v14[v46] = 0LL;
            LODWORD(v14[v46 + 1]) = 0;
          }
          ++v45;
        }
        FxPoolFree(v14);
        goto LABEL_71;
      }
      memset(v29, 0, v28);
    }
    m_USBDHandle = v7->m_USBDHandle;
    options.Timeout = 0x500000010LL;
    v53 = -20000000LL;
    FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v17, FxUrbTypeLegacy, m_USBDHandle);
    v35 = FxIoTarget::SubmitSync(
            v7,
            *(FxRequestBase **)&request.m_ClearContextOnDestroy,
            (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
            0LL);
    v9 = v35;
    if ( v35 < 0 )
    {
      WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxUsbDevice_cpp_Traceguids, v35);
    }
    else
    {
      v7->m_ConfigHandle = Urb->FsContext2;
      v36 = FxUsbDevice::GetInterfaceFromNumber(v7, BYTE2(Urb->SectionObjectPointer));
      v36->m_NumberOfConfiguredPipes = Urb->FinalStatus;
      v36->m_ConfiguredPipes = *v14;
      *v14 = v37;
      *((_DWORD *)v14 + 2) = (_DWORD)v37;
      FxUsbInterface::SetInfo(v36, (_USBD_INTERFACE_INFORMATION *)p_SectionObjectPointer);
      v38 = 1;
      if ( v7->m_NumInterfaces > 1u )
      {
        v39 = (unsigned __int16 *)((char *)Urb + (unsigned __int16)Urb->Type);
        v40 = (unsigned __int16 *)((char *)p_SectionObjectPointer + *(unsigned __int16 *)p_SectionObjectPointer);
        while ( v40 < v39 )
        {
          v41 = FxUsbDevice::GetInterfaceFromNumber(v7, *((_BYTE *)v40 + 2));
          v61 = v41;
          v42 = v41;
          if ( *((_DWORD *)v40 + 4) )
          {
            FxUsbInterface::FormatSelectSettingUrb(v41, v51, v40[8], *((_BYTE *)v40 + 3));
            IoReuseIrp(*(PIRP *)(*(_QWORD *)&request.m_ClearContextOnDestroy + 152LL), 0);
            FxRequestBase::ClearFieldsForReuse(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v43);
            FxFormatUsbRequest(
              *(FxRequestBase **)&request.m_ClearContextOnDestroy,
              (_FILE_OBJECT *)v51,
              FxUrbTypeLegacy,
              0LL);
            v9 = FxIoTarget::SubmitSync(
                   v7,
                   *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                   (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                   0LL);
            if ( v9 < 0 )
            {
              WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Du, WPP_FxUsbDevice_cpp_Traceguids, v9);
              goto $Done_51;
            }
            memmove(v40, &v51->UrbOpenStaticStreams.NumberOfStreams, v51->UrbSelectInterface.Interface.Length);
            v42 = v61;
          }
          v42->m_NumberOfConfiguredPipes = *((_BYTE *)v40 + 16);
          v44 = 2LL * v38;
          v42->m_ConfiguredPipes = v14[2 * v38];
          v14[v44] = 0LL;
          LODWORD(v14[v44 + 1]) = 0;
          FxUsbInterface::SetInfo(v42, (_USBD_INTERFACE_INFORMATION *)v40);
          v40 = (unsigned __int16 *)((char *)v40 + *v40);
          ++v38;
        }
      }
      if ( PipesAttributes_0 )
        *PipesAttributes_0 = v38;
    }
$Done_51:
    if ( v51 )
      FxPoolFree(v51);
    goto LABEL_61;
  }
LABEL_71:
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return (unsigned int)v9;
}
