/*
 * XREFs of ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008CEA8
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0087CC0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008D5AC (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EA70 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EDA0 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0014020 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C0014228 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00151E0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C005C350 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C005C450 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0077068 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_dqdd @ 0x1C007F094 (WPP_IFR_SF_dqdd.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C008B888 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z @ 0x1C008C7E0 (-GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C008F6E4 (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C008FF14 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C00900DC (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0092864 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfig(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _URB *Urb,
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
  void **p_InterfaceHandle; // rsi
  void **v18; // r13
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // cx
  _QWORD *v21; // rax
  FxIoTarget **v22; // rbx
  __int64 v23; // rax
  FxUsbPipe *v24; // rax
  FxIoTarget *v25; // rax
  int v26; // eax
  unsigned __int16 v27; // r12
  _URB *v28; // rax
  unsigned __int16 v29; // r9
  unsigned __int16 v30; // r9
  int _a2; // ecx
  unsigned __int16 v32; // r9
  USBD_HANDLE__ *m_USBDHandle; // r9
  int v34; // eax
  FxUsbInterface *v35; // rax
  FxUsbPipe **v36; // r11
  unsigned __int8 v37; // r13
  unsigned __int16 *v38; // r12
  unsigned __int16 *v39; // rsi
  FxUsbInterface *v40; // rax
  FxUsbInterface *v41; // r10
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int8 i; // r15
  unsigned int v45; // r12d
  FxObject *v46; // rcx
  unsigned int v48; // [rsp+58h] [rbp-B0h]
  _URB *v49; // [rsp+60h] [rbp-A8h]
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+78h] [rbp-90h]
  _FX_DRIVER_GLOBALS *InterfaceFromNumber; // [rsp+80h] [rbp-88h]
  _QWORD *v53; // [rsp+88h] [rbp-80h]
  FxUsbDevice *v54; // [rsp+90h] [rbp-78h]
  _FX_DRIVER_GLOBALS *FxDriverGlobals; // [rsp+98h] [rbp-70h]
  FxSyncRequest request; // [rsp+A0h] [rbp-68h] BYREF
  _LIST_ENTRY *Caller; // [rsp+220h] [rbp+118h]
  unsigned __int8 v58; // [rsp+228h] [rbp+120h]
  FxUsbInterface *v59; // [rsp+228h] [rbp+120h]
  unsigned __int8 v62; // [rsp+240h] [rbp+138h]

  p_m_Globals = &this->m_Globals;
  v54 = this;
  m_Globals = this->m_Globals;
  v7 = this;
  FxDriverGlobals = m_Globals;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, m_Globals, 0LL, 0LL);
  v49 = 0LL;
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
                           (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
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
    v62 = 0;
    p_InterfaceHandle = &Urb->UrbSelectInterface.Interface.InterfaceHandle;
    v18 = &Urb->UrbSelectInterface.Interface.InterfaceHandle;
    options.Timeout = (__int64)Urb + Urb->UrbHeader.Length;
    if ( (unsigned __int64)&Urb->UrbSelectInterface.Interface.InterfaceHandle < options.Timeout )
    {
      while ( 1 )
      {
        if ( *((_DWORD *)v18 + 4) > 0xFFu )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dqdd(
            *p_m_Globals,
            v16,
            0xEu,
            0x16u,
            WPP_FxUsbDevice_cpp_Traceguids,
            255,
            v18,
            *((_DWORD *)v18 + 4),
            -1073741808);
          goto LABEL_61;
        }
        InterfaceFromNumber = (_FX_DRIVER_GLOBALS *)FxUsbDevice::GetInterfaceFromNumber(v7, *((_BYTE *)v18 + 2));
        if ( !InterfaceFromNumber )
        {
          _a2 = -1073741808;
          v32 = 23;
          goto LABEL_44;
        }
        v19 = *((unsigned __int8 *)v18 + 16);
        v58 = *((_BYTE *)v18 + 16);
        if ( v19 > v8 )
          v8 = *((unsigned __int8 *)v18 + 16);
        if ( (_BYTE)v19 )
          v20 = 8 * *((unsigned __int8 *)v18 + 16);
        else
          v20 = 8;
        *(_QWORD *)&options.Size = v20;
        v21 = FxPoolAllocator(
                FxDriverGlobals,
                (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks,
                ExDefaultNonPagedPoolType,
                v20,
                FxDriverGlobals->Tag,
                Caller);
        v53 = v21;
        v22 = (FxIoTarget **)v21;
        if ( !v21 )
        {
          _a2 = -1073741670;
          v32 = 24;
LABEL_44:
          v9 = _a2;
          WPP_IFR_SF_dd(*p_m_Globals, 2u, 0xEu, v32, WPP_FxUsbDevice_cpp_Traceguids, *((unsigned __int8 *)v18 + 2), _a2);
          goto LABEL_61;
        }
        memset(v21, 0, *(size_t *)&options.Size);
        v23 = 2LL * v62;
        v48 = 0;
        v14[v23] = (FxUsbPipe **)v22;
        LODWORD(v14[v23 + 1]) = v58;
        if ( v58 )
          break;
LABEL_29:
        if ( InterfaceFromNumber->FxPoolFrameworks.NonPagedHead.Blink )
          FxUsbDevice::CleanupInterfacePipesAndDelete(v7, InterfaceFromNumber);
        ++v62;
        v18 = (void **)((char *)v18 + *(unsigned __int16 *)v18);
        if ( (unsigned __int64)v18 >= options.Timeout )
          goto LABEL_32;
      }
      while ( 1 )
      {
        v24 = (FxUsbPipe *)FxObjectHandleAlloc(
                             *p_m_Globals,
                             ExDefaultNonPagedPoolType,
                             0x1B0uLL,
                             0,
                             PipesAttributes,
                             0,
                             FxObjectTypeExternal);
        if ( v24 )
          FxUsbPipe::FxUsbPipe(v24, *p_m_Globals, v7);
        else
          v25 = 0LL;
        *(_QWORD *)&options.Size = v25;
        *v22 = v25;
        if ( !v25 )
          break;
        v26 = FxIoTarget::Init(v25, v7->m_DeviceBase);
        v9 = v26;
        if ( v26 < 0 )
        {
          v30 = 26;
          goto LABEL_38;
        }
        v26 = FxObject::Commit(*(FxObject **)&options.Size, PipesAttributes, 0LL, (FxObject *)InterfaceFromNumber, 1u);
        v9 = v26;
        if ( v26 < 0 )
        {
          v30 = 27;
LABEL_38:
          WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, v30, WPP_FxUsbDevice_cpp_Traceguids, v26);
          goto LABEL_61;
        }
        v22 = (FxIoTarget **)(v53 + 1);
        ++v48;
        ++v53;
        if ( v48 >= v58 )
          goto LABEL_29;
      }
      v9 = -1073741670;
      v29 = 25;
      goto LABEL_40;
    }
LABEL_32:
    if ( v7->m_NumInterfaces > 1u && v8 )
    {
      v27 = 24 * v8 + 56;
      v28 = (_URB *)FxPoolAllocator(
                      *p_m_Globals,
                      (_LIST_ENTRY *)&(*p_m_Globals)->FxPoolFrameworks,
                      ExDefaultNonPagedPoolType,
                      v27,
                      (*p_m_Globals)->Tag,
                      Caller);
      v49 = v28;
      if ( !v28 )
      {
        v9 = -1073741670;
        v29 = 28;
LABEL_40:
        WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, v29, WPP_FxUsbDevice_cpp_Traceguids, -1073741670);
LABEL_61:
        for ( i = 0; i < v7->m_NumInterfaces; ++i )
        {
          if ( v14[2 * i] )
          {
            v45 = 0;
            if ( LODWORD(v14[2 * i + 1]) )
            {
              do
              {
                v46 = v14[2 * i][v45];
                if ( v46 )
                {
                  FxObject::DeleteFromFailedCreate(v46);
                  v14[2 * i][v45] = 0LL;
                }
                ++v45;
              }
              while ( v45 < LODWORD(v14[2 * i + 1]) );
              v7 = v54;
            }
            FxPoolFree(v14[2 * i]);
            v14[2 * i] = 0LL;
            LODWORD(v14[2 * i + 1]) = 0;
          }
        }
        FxPoolFree(v14);
        goto LABEL_71;
      }
      memset(v28, 0, v27);
    }
    m_USBDHandle = v7->m_USBDHandle;
    options.Timeout = 0x500000010LL;
    v51 = -20000000LL;
    FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, Urb, FxUrbTypeLegacy, m_USBDHandle);
    v34 = FxIoTarget::SubmitSync(
            v7,
            *(FxRequestBase **)&request.m_ClearContextOnDestroy,
            (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
            0LL);
    v9 = v34;
    if ( v34 < 0 )
    {
      WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxUsbDevice_cpp_Traceguids, v34);
    }
    else
    {
      v7->m_ConfigHandle = Urb->UrbSelectConfiguration.ConfigurationHandle;
      v35 = FxUsbDevice::GetInterfaceFromNumber(v7, Urb->UrbSelectConfiguration.Interface.InterfaceNumber);
      v35->m_NumberOfConfiguredPipes = *((_BYTE *)&Urb->UrbOpenStaticStreams + 56);
      v35->m_ConfiguredPipes = *v14;
      *v14 = v36;
      *((_DWORD *)v14 + 2) = (_DWORD)v36;
      FxUsbInterface::SetInfo(v35, (_USBD_INTERFACE_INFORMATION *)p_InterfaceHandle);
      v37 = 1;
      if ( v7->m_NumInterfaces > 1u )
      {
        v38 = (unsigned __int16 *)((char *)&Urb->UrbHeader.Length + Urb->UrbHeader.Length);
        v39 = (unsigned __int16 *)((char *)p_InterfaceHandle + *(unsigned __int16 *)p_InterfaceHandle);
        while ( v39 < v38 )
        {
          v40 = FxUsbDevice::GetInterfaceFromNumber(v7, *((_BYTE *)v39 + 2));
          v59 = v40;
          v41 = v40;
          if ( *((_DWORD *)v39 + 4) )
          {
            FxUsbInterface::FormatSelectSettingUrb(v40, v49, v39[8], *((_BYTE *)v39 + 3));
            IoReuseIrp(*(PIRP *)(*(_QWORD *)&request.m_ClearContextOnDestroy + 152LL), 0);
            FxRequestBase::ClearFieldsForReuse(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v42);
            FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, v49, FxUrbTypeLegacy, 0LL);
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
            memmove(v39, &v49->UrbOpenStaticStreams.NumberOfStreams, v49->UrbSelectInterface.Interface.Length);
            v41 = v59;
          }
          v41->m_NumberOfConfiguredPipes = *((_BYTE *)v39 + 16);
          v43 = 2LL * v37;
          v41->m_ConfiguredPipes = v14[2 * v37];
          v14[v43] = 0LL;
          LODWORD(v14[v43 + 1]) = 0;
          FxUsbInterface::SetInfo(v41, (_USBD_INTERFACE_INFORMATION *)v39);
          v39 = (unsigned __int16 *)((char *)v39 + *v39);
          ++v37;
        }
      }
      if ( PipesAttributes_0 )
        *PipesAttributes_0 = v37;
    }
$Done_51:
    if ( v49 )
      FxPoolFree(v49);
    goto LABEL_61;
  }
LABEL_71:
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return (unsigned int)v9;
}
