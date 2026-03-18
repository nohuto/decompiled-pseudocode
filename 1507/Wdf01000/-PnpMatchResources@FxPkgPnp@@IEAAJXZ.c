/*
 * XREFs of ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C001A370
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z @ 0x1C001A730 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z.c)
 * Callees:
 *     ??0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C000A06C (--0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C000E628 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C000FCC0 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C000FD6C (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C000FE58 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0015E00 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C002A050 (-AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpMatchResources(FxPkgPnp *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxCmResList *m_ResourcesRaw; // rbp
  int v4; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r14
  _UNICODE_STRING *FileName; // r13
  FxCmResList *m_Resources; // rsi
  _LIST_ENTRY *p_m_InterruptListHead; // rsi
  FxPkgPnp *Flink; // rax
  FxCmResList *v11; // rax
  _LIST_ENTRY *v12; // r12
  FxCollectionInternal *v13; // rbp
  _LIST_ENTRY **p_Blink; // r14
  _LIST_ENTRY **v15; // r15
  FxDeviceBase *v16; // rdx
  _FX_DRIVER_GLOBALS *v17; // rcx
  unsigned int DesiredAccess; // r12d
  unsigned int v20; // esi
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *p_FullCreateOptions; // r14
  FxResourceCm *v22; // rax
  FxObject *v23; // rax
  FxObject *v24; // rdi
  unsigned int v25; // r15d
  unsigned int v26; // ebp
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v27; // r13
  FxResourceCm *v28; // rax
  FxObject *v29; // rax
  FxObject *v30; // rdi
  _LIST_ENTRY *v31; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v32; // r13
  FxDeviceBase *v33; // rax
  const void *v34; // rax
  _LIST_ENTRY *v35; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  const void *v37; // rax
  FxDeviceBase *v38; // rax
  const void *v39; // rax
  unsigned int v40; // [rsp+80h] [rbp+8h]
  unsigned int Blink_high; // [rsp+88h] [rbp+10h]
  _LIST_ENTRY *v42; // [rsp+90h] [rbp+18h]

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x21u, WPP_PnpStateMachine_cpp_Traceguids);
  m_ResourcesRaw = this->m_ResourcesRaw;
  this->m_PnpStateAndCaps.Value = this->m_PnpStateAndCaps.Value & 0xFFFFF3CF | 0x820;
  v4 = 0;
  CurrentStackLocation = this->m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  while ( m_ResourcesRaw->m_ListHead.Flink != &m_ResourcesRaw->m_ListHead )
    FxCollectionInternal::Remove(&m_ResourcesRaw->FxCollectionInternal, 0);
  m_ResourcesRaw->m_AccessFlags = 0;
  if ( SecurityContext )
  {
    DesiredAccess = SecurityContext->DesiredAccess;
    v20 = 0;
    p_FullCreateOptions = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&SecurityContext->FullCreateOptions;
    if ( DesiredAccess )
    {
      while ( 1 )
      {
        v22 = (FxResourceCm *)FxObjectHandleAlloc(
                                m_ResourcesRaw->m_Globals,
                                ExDefaultNonPagedPoolType,
                                0x90uLL,
                                0,
                                0LL,
                                0,
                                FxObjectTypeInternal);
        if ( !v22 )
          break;
        FxResourceCm::FxResourceCm(v22, m_ResourcesRaw->m_Globals, p_FullCreateOptions);
        v24 = v23;
        if ( !v23 )
          break;
        FxObject::AssignParentObject(v23, m_ResourcesRaw);
        if ( !FxCollectionInternal::Add(&m_ResourcesRaw->FxCollectionInternal, m_ResourcesRaw->m_Globals, v24) )
          break;
        ++v20;
        ++p_FullCreateOptions;
        v4 = 0;
        if ( v20 >= DesiredAccess )
          goto LABEL_6;
      }
      v4 = -1073741670;
      FxCollectionInternal::Clear(&m_ResourcesRaw->FxCollectionInternal);
    }
  }
LABEL_6:
  if ( v4 < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v37 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v37 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x22u, WPP_PnpStateMachine_cpp_Traceguids, v37, v4);
  }
  else
  {
    m_Resources = this->m_Resources;
    v4 = 0;
    while ( m_Resources->m_ListHead.Flink != &m_Resources->m_ListHead )
      FxCollectionInternal::Remove(&m_Resources->FxCollectionInternal, 0);
    m_Resources->m_AccessFlags = 0;
    if ( FileName )
    {
      v25 = *(_DWORD *)&FileName[1].Length;
      v26 = 0;
      v27 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&FileName[1].MaximumLength + 1);
      if ( v25 )
      {
        while ( 1 )
        {
          v28 = (FxResourceCm *)FxObjectHandleAlloc(
                                  m_Resources->m_Globals,
                                  ExDefaultNonPagedPoolType,
                                  0x90uLL,
                                  0,
                                  0LL,
                                  0,
                                  FxObjectTypeInternal);
          if ( !v28 )
            break;
          FxResourceCm::FxResourceCm(v28, m_Resources->m_Globals, v27);
          v30 = v29;
          if ( !v29 )
            break;
          FxObject::AssignParentObject(v29, m_Resources);
          if ( !FxCollectionInternal::Add(&m_Resources->FxCollectionInternal, m_Resources->m_Globals, v30) )
            break;
          ++v26;
          ++v27;
          v4 = 0;
          if ( v26 >= v25 )
            goto LABEL_10;
        }
        v4 = -1073741670;
        FxCollectionInternal::Clear(&m_Resources->FxCollectionInternal);
      }
    }
LABEL_10:
    if ( v4 < 0 )
    {
      v38 = this->m_DeviceBase;
      if ( v38->m_ObjectSize )
        v39 = (const void *)((unsigned __int64)v38 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v39 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x23u, WPP_PnpStateMachine_cpp_Traceguids, v39, v4);
    }
    else
    {
      p_m_InterruptListHead = &this->m_InterruptListHead;
      Flink = (FxPkgPnp *)this->m_InterruptListHead.Flink;
      if ( Flink != (FxPkgPnp *)&this->m_InterruptListHead )
      {
        do
        {
          Flink[-1].m_DeviceD0Entry.m_Method = 0LL;
          LOWORD(Flink[-1].m_DeviceReleaseHardware.m_Method) = 0;
          BYTE4(Flink[-1].m_DeviceD0ExitPreInterruptsDisabled.m_Method) = 0;
          BYTE1(Flink[-1].m_DevicePrepareHardware.m_Method) = 0;
          LODWORD(Flink[-1].m_DeviceD0Exit.m_Method) = 0;
          LODWORD(Flink[-1].m_DeviceD0ExitPreInterruptsDisabled.m_Method) = 0;
          BYTE1(Flink[-1].m_Resources) = 0;
          Flink = (FxPkgPnp *)Flink->__vftable;
        }
        while ( Flink != (FxPkgPnp *)p_m_InterruptListHead );
      }
      v11 = this->m_Resources;
      v12 = &this->m_InterruptListHead;
      v13 = &v11->FxCollectionInternal;
      p_Blink = &v11->m_ListHead.Flink[-1].Blink;
      v15 = &this->m_ResourcesRaw->m_ListHead.Flink[-1].Blink;
      if ( p_Blink != (_LIST_ENTRY **)&v11->FxCollectionInternal )
      {
        do
        {
          v31 = *v15;
          v32 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&(*v15)[6].Blink;
          if ( v32->Type == 2 )
          {
            v12 = v12->Flink;
            if ( v12 == p_m_InterruptListHead )
            {
              v33 = this->m_DeviceBase;
              if ( v33->m_ObjectSize )
                v34 = (const void *)((unsigned __int64)v33 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v34 = 0LL;
              WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, 0x24u, WPP_PnpStateMachine_cpp_Traceguids, v34);
              break;
            }
            v35 = *p_Blink;
            v42 = *p_Blink;
            Blink_high = HIWORD(v31[6].Blink);
            if ( (BYTE2((*p_Blink)[6].Blink) & 2) != 0 && HIWORD(v31[6].Blink) > 1u )
            {
              v40 = 0;
              do
              {
                if ( v12 == p_m_InterruptListHead )
                  break;
                FxInterrupt::AssignResources(
                  (FxInterrupt *)&v12[-28].Blink,
                  v32,
                  (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v35[6].Blink);
                v12 = v12->Flink;
                v35 = v42;
                ++v40;
              }
              while ( v40 < Blink_high );
            }
            else
            {
              FxInterrupt::AssignResources(
                (FxInterrupt *)&v12[-28].Blink,
                v32,
                (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v35[6].Blink);
            }
          }
          p_Blink = &p_Blink[1][-1].Blink;
          v15 = &v15[1][-1].Blink;
        }
        while ( p_Blink != (_LIST_ENTRY **)v13 );
      }
      v16 = this->m_DeviceBase;
      if ( BYTE1(v16[1].m_Globals) )
      {
        if ( (v16->m_AttachedDevice.m_DeviceObject->Characteristics & 1) != 0 )
          v16->m_DeviceObject.m_DeviceObject->Characteristics |= 1u;
        FxDevice::SetFilterIoType(this->m_Device);
      }
    }
  }
  v17 = this->m_Globals;
  if ( v17->FxVerboseOn )
    WPP_IFR_SF_d(v17, 5u, 0xCu, 0x25u, WPP_PnpStateMachine_cpp_Traceguids, v4);
  return (unsigned int)v4;
}
