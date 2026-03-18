/*
 * XREFs of ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C009024C
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C008BD80 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0090958 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0092CBC (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0092F9C (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0005400 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00117C0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0029E20 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C002A78C (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00348B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0066250 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C006634C (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_dd @ 0x1C0067DA0 (WPP_IFR_SF_dd.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C007E038 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_dqdd @ 0x1C0084940 (WPP_IFR_SF_dqdd.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C008C724 (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C008EDEC (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z @ 0x1C008FB90 (-GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C00913EC (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C0091BF0 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfig(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _FILE_OBJECT *Urb,
        _FX_URB_TYPE NumConfiguredInterfaces,
        unsigned __int8 *PipesAttributes_0)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  unsigned __int16 v8; // r12
  int v9; // ebx
  unsigned __int8 m_NumInterfaces; // si
  unsigned __int16 v11; // ax
  size_t v12; // rbx
  FxUsbPipe ***v13; // rax
  FxUsbPipe ***v14; // r13
  __int64 m_ObjectSize; // rax
  const void *v16; // rdi
  unsigned __int8 v17; // dl
  void **p_SectionObjectPointer; // rsi
  void **v19; // r15
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // cx
  _QWORD *v23; // rax
  FxIoTarget **v24; // rbx
  __int64 v25; // rax
  FxUsbPipe *v26; // rax
  FxIoTarget *v27; // rax
  int v28; // eax
  unsigned __int16 v29; // r12
  _URB *v30; // rax
  unsigned __int16 v31; // r9
  USBD_HANDLE__ *m_USBDHandle; // r9
  int v33; // eax
  FxUsbInterface *InterfaceFromNumber; // rax
  FxUsbPipe **v35; // r11
  unsigned __int8 v36; // r12
  unsigned __int16 *v37; // r15
  unsigned __int16 *v38; // rsi
  FxUsbInterface *v39; // r10
  __int64 v40; // rcx
  __int64 v41; // r14
  FxUsbPipe ***v42; // rdi
  unsigned int i; // esi
  FxObject *v44; // rcx
  unsigned __int8 v46; // [rsp+58h] [rbp-B0h]
  unsigned int v47; // [rsp+5Ch] [rbp-ACh]
  _URB *v48; // [rsp+60h] [rbp-A8h]
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+78h] [rbp-90h]
  _QWORD *v51; // [rsp+80h] [rbp-88h]
  FxObject *Parent; // [rsp+88h] [rbp-80h]
  FxSyncRequest request; // [rsp+90h] [rbp-78h] BYREF
  void *Caller; // [rsp+210h] [rbp+108h]
  unsigned __int8 v55; // [rsp+218h] [rbp+110h]
  FxUsbInterface *v56; // [rsp+218h] [rbp+110h]
  unsigned __int8 v59; // [rsp+230h] [rbp+128h]

  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  request.__vftable = (FxSyncRequest_vtbl *)m_Globals;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, m_Globals, 0LL, 0LL);
  v48 = 0LL;
  v8 = 0;
  if ( PipesAttributes_0 )
    *PipesAttributes_0 = 0;
  v9 = FxRequestBase::ValidateTarget(*(FxRequestBase **)&request.m_ClearContextOnDestroy, (unsigned __int64)this);
  if ( v9 >= 0 )
  {
    m_NumInterfaces = this->m_NumInterfaces;
    v11 = 16;
    v46 = m_NumInterfaces;
    if ( m_NumInterfaces )
      v11 = 16 * m_NumInterfaces;
    else
      v46 = 1;
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
      m_ObjectSize = this->m_ObjectSize;
      v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)m_ObjectSize )
        v16 = 0LL;
      WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbDevice_cpp_Traceguids, v16, -1073741670);
      goto LABEL_69;
    }
    memset(v13, 0, v12);
    v59 = 0;
    p_SectionObjectPointer = (void **)&Urb->SectionObjectPointer;
    v19 = (void **)&Urb->SectionObjectPointer;
    options.Timeout = (__int64)Urb + (unsigned __int16)Urb->Type;
    if ( (unsigned __int64)&Urb->SectionObjectPointer < options.Timeout )
    {
      while ( 1 )
      {
        if ( *((_DWORD *)v19 + 4) > 0xFFu )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dqdd(
            *p_m_Globals,
            v17,
            0xEu,
            0x16u,
            WPP_FxUsbDevice_cpp_Traceguids,
            255,
            v19,
            *((_DWORD *)v19 + 4),
            -1073741808);
          goto LABEL_59;
        }
        Parent = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v19 + 2));
        if ( !Parent )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dd(
            *p_m_Globals,
            2u,
            0xEu,
            0x17u,
            WPP_FxUsbDevice_cpp_Traceguids,
            *((unsigned __int8 *)v19 + 2),
            -1073741808);
          goto LABEL_59;
        }
        v20 = *((unsigned __int8 *)v19 + 16);
        v55 = *((_BYTE *)v19 + 16);
        v21 = v20;
        if ( v20 <= v8 )
          v21 = v8;
        v8 = v21;
        if ( (_BYTE)v20 )
          v22 = 8 * *((unsigned __int8 *)v19 + 16);
        else
          v22 = 8;
        *(_QWORD *)&options.Size = v22;
        v23 = FxPoolAllocator(
                (_FX_DRIVER_GLOBALS *)request.__vftable,
                (FX_POOL *)&request.__vftable[1].QueryInterface,
                ExDefaultNonPagedPoolType,
                v22,
                HIDWORD(request.__vftable[1].SelfDestruct),
                Caller);
        v51 = v23;
        v24 = (FxIoTarget **)v23;
        if ( !v23 )
        {
          v9 = -1073741670;
          WPP_IFR_SF_dd(
            *p_m_Globals,
            2u,
            0xEu,
            0x18u,
            WPP_FxUsbDevice_cpp_Traceguids,
            *((unsigned __int8 *)v19 + 2),
            -1073741670);
          goto LABEL_59;
        }
        memset(v23, 0, *(size_t *)&options.Size);
        v25 = 2LL * v59;
        v47 = 0;
        v14[v25] = (FxUsbPipe **)v24;
        LODWORD(v14[v25 + 1]) = v55;
        if ( v55 )
          break;
LABEL_28:
        if ( *(_QWORD *)&Parent[1].m_ObjectFlags )
          FxUsbDevice::CleanupInterfacePipesAndDelete(this, (_FX_DRIVER_GLOBALS *)Parent);
        ++v59;
        v19 = (void **)((char *)v19 + *(unsigned __int16 *)v19);
        if ( (unsigned __int64)v19 >= options.Timeout )
          goto LABEL_31;
      }
      while ( 1 )
      {
        v26 = (FxUsbPipe *)FxObjectHandleAlloc(
                             *p_m_Globals,
                             ExDefaultNonPagedPoolType,
                             0x1B0uLL,
                             0,
                             PipesAttributes,
                             0,
                             FxObjectTypeExternal);
        if ( v26 )
          FxUsbPipe::FxUsbPipe(v26, *p_m_Globals, this);
        else
          v27 = 0LL;
        *(_QWORD *)&options.Size = v27;
        *v24 = v27;
        if ( !v27 )
          break;
        v9 = FxIoTarget::Init(v27, this->m_DeviceBase);
        if ( v9 < 0 )
        {
          WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Au, WPP_FxUsbDevice_cpp_Traceguids, v9);
          goto LABEL_59;
        }
        v28 = FxObject::Commit(*(FxObject **)&options.Size, (_FX_DRIVER_GLOBALS *)PipesAttributes, 0LL, Parent, 1u);
        v9 = v28;
        if ( v28 < 0 )
        {
          WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Bu, WPP_FxUsbDevice_cpp_Traceguids, v28);
          goto LABEL_59;
        }
        v24 = (FxIoTarget **)(v51 + 1);
        ++v47;
        ++v51;
        if ( v47 >= v55 )
          goto LABEL_28;
      }
      v9 = -1073741670;
      v31 = 25;
      goto LABEL_38;
    }
LABEL_31:
    if ( this->m_NumInterfaces > 1u && v8 )
    {
      v29 = 24 * v8 + 56;
      v30 = (_URB *)FxPoolAllocator(
                      *p_m_Globals,
                      &(*p_m_Globals)->FxPoolFrameworks,
                      ExDefaultNonPagedPoolType,
                      v29,
                      (*p_m_Globals)->Tag,
                      Caller);
      v48 = v30;
      if ( !v30 )
      {
        v9 = -1073741670;
        v31 = 28;
LABEL_38:
        WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, v31, WPP_FxUsbDevice_cpp_Traceguids, -1073741670);
LABEL_59:
        if ( v46 )
        {
          v41 = v46;
          v42 = v14;
          do
          {
            if ( *v42 )
            {
              for ( i = 0; i < *((_DWORD *)v42 + 2); ++i )
              {
                v44 = (*v42)[i];
                if ( v44 )
                {
                  FxObject::DeleteFromFailedCreate(v44);
                  (*v42)[i] = 0LL;
                }
              }
              FxPoolFree(*v42);
              *v42 = 0LL;
              *((_DWORD *)v42 + 2) = 0;
            }
            v42 += 2;
            --v41;
          }
          while ( v41 );
        }
        FxPoolFree(v14);
        goto LABEL_69;
      }
      memset(v30, 0, v29);
    }
    m_USBDHandle = this->m_USBDHandle;
    options.Timeout = 0x500000010LL;
    v50 = -20000000LL;
    FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, Urb, FxUrbTypeLegacy, m_USBDHandle);
    v33 = FxIoTarget::SubmitSync(
            this,
            *(FxRequest **)&request.m_ClearContextOnDestroy,
            (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
            0LL);
    v9 = v33;
    if ( v33 < 0 )
    {
      WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxUsbDevice_cpp_Traceguids, v33);
    }
    else
    {
      this->m_ConfigHandle = Urb->FsContext2;
      InterfaceFromNumber = FxUsbDevice::GetInterfaceFromNumber(this, BYTE2(Urb->SectionObjectPointer));
      InterfaceFromNumber->m_NumberOfConfiguredPipes = Urb->FinalStatus;
      InterfaceFromNumber->m_ConfiguredPipes = *v14;
      *v14 = v35;
      *((_DWORD *)v14 + 2) = (_DWORD)v35;
      FxUsbInterface::SetInfo(InterfaceFromNumber, (_USBD_INTERFACE_INFORMATION *)p_SectionObjectPointer);
      v36 = 1;
      if ( this->m_NumInterfaces > 1u )
      {
        v37 = (unsigned __int16 *)((char *)Urb + (unsigned __int16)Urb->Type);
        v38 = (unsigned __int16 *)((char *)p_SectionObjectPointer + *(unsigned __int16 *)p_SectionObjectPointer);
        while ( v38 < v37 )
        {
          v39 = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v38 + 2));
          v56 = v39;
          if ( *((_DWORD *)v38 + 4) )
          {
            FxUsbInterface::FormatSelectSettingUrb(v39, v48, v38[8], *((_BYTE *)v38 + 3));
            IoReuseIrp(*(PIRP *)(*(_QWORD *)&request.m_ClearContextOnDestroy + 152LL), 0);
            FxRequestBase::ClearFieldsForReuse(*(FxRequestBase **)&request.m_ClearContextOnDestroy);
            FxFormatUsbRequest(
              *(FxRequestBase **)&request.m_ClearContextOnDestroy,
              (_FILE_OBJECT *)v48,
              FxUrbTypeLegacy,
              0LL);
            v9 = FxIoTarget::SubmitSync(
                   this,
                   *(FxRequest **)&request.m_ClearContextOnDestroy,
                   (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                   0LL);
            if ( v9 < 0 )
            {
              WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Du, WPP_FxUsbDevice_cpp_Traceguids, v9);
              goto $Done_53;
            }
            memmove(v38, &v48->UrbOpenStaticStreams.NumberOfStreams, v48->UrbSelectInterface.Interface.Length);
            v39 = v56;
          }
          v39->m_NumberOfConfiguredPipes = *((_BYTE *)v38 + 16);
          v40 = 2LL * v36;
          v39->m_ConfiguredPipes = v14[2 * v36];
          v14[v40] = 0LL;
          LODWORD(v14[v40 + 1]) = 0;
          FxUsbInterface::SetInfo(v39, (_USBD_INTERFACE_INFORMATION *)v38);
          v38 = (unsigned __int16 *)((char *)v38 + *v38);
          ++v36;
        }
      }
      if ( PipesAttributes_0 )
        *PipesAttributes_0 = v36;
    }
$Done_53:
    if ( v48 )
      FxPoolFree(v48);
    goto LABEL_59;
  }
LABEL_69:
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return (unsigned int)v9;
}
