/*
 * XREFs of ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0015900
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z @ 0x1C0015D00 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z.c)
 * Callees:
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C0009314 (-Construct@FxObject@@AEAAXE@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C001BDAC (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C001F830 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C001F8C4 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C001F9B0 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0023424 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C002F3C0 (-AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
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
  _LIST_ENTRY *p_m_InterruptListHead; // r14
  FxPkgPnp *Flink; // rax
  FxCmResList *v11; // rax
  _LIST_ENTRY *v12; // r12
  FxCollectionInternal *v13; // rbp
  _LIST_ENTRY **p_Blink; // rsi
  _LIST_ENTRY **v15; // r15
  FxDeviceBase *v16; // rdx
  _FX_DRIVER_GLOBALS *v17; // rcx
  unsigned int DesiredAccess; // r12d
  unsigned int *p_FullCreateOptions; // r14
  unsigned int v21; // esi
  FxObject *v22; // rax
  FxObject *v23; // rdi
  _FX_DRIVER_GLOBALS *v24; // rcx
  unsigned int v25; // r15d
  unsigned int v26; // ebp
  char *v27; // r13
  _QWORD *v28; // rdi
  _LIST_ENTRY *v29; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v30; // r13
  _LIST_ENTRY *v31; // rcx
  FxDeviceBase *v32; // rax
  const void *v33; // rax
  FxDeviceBase *m_DeviceBase; // rax
  const void *v35; // rax
  unsigned __int16 v36; // r9
  FxDeviceBase *v37; // rax
  unsigned int v38; // [rsp+80h] [rbp+8h]
  unsigned int Blink_high; // [rsp+88h] [rbp+10h]
  _LIST_ENTRY *v40; // [rsp+90h] [rbp+18h]

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
    p_FullCreateOptions = &SecurityContext->FullCreateOptions;
    v21 = 0;
    if ( DesiredAccess )
    {
      while ( 1 )
      {
        v22 = (FxObject *)FxObjectHandleAlloc(
                            m_ResourcesRaw->m_Globals,
                            ExDefaultNonPagedPoolType,
                            0x90uLL,
                            0,
                            0LL,
                            0,
                            FxObjectTypeInternal);
        v23 = v22;
        if ( !v22 )
          break;
        v24 = m_ResourcesRaw->m_Globals;
        v22->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
        v22->m_Globals = v24;
        *(_DWORD *)&v22->m_Type = 4119;
        v22->m_SpinLock.m_Lock = 0LL;
        v22->m_SpinLock.m_DbgFlagIsInitialized = 1;
        FxObject::Construct(v22, 0LL);
        v23->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
        *(_OWORD *)&v23[1].__vftable = *(_OWORD *)p_FullCreateOptions;
        LODWORD(v23[1].m_Globals) = p_FullCreateOptions[4];
        FxObject::AssignParentObject(v23, m_ResourcesRaw);
        if ( !FxCollectionInternal::Add(&m_ResourcesRaw->FxCollectionInternal, m_ResourcesRaw->m_Globals, v23) )
          break;
        ++v21;
        p_FullCreateOptions += 5;
        v4 = 0;
        if ( v21 >= DesiredAccess )
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
      v35 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v35 = 0LL;
    v36 = 34;
    goto LABEL_52;
  }
  m_Resources = this->m_Resources;
  v4 = 0;
  while ( m_Resources->m_ListHead.Flink != &m_Resources->m_ListHead )
    FxCollectionInternal::Remove(&m_Resources->FxCollectionInternal, 0);
  m_Resources->m_AccessFlags = 0;
  if ( FileName )
  {
    v25 = *(_DWORD *)&FileName[1].Length;
    v26 = 0;
    v27 = (char *)(&FileName[1].MaximumLength + 1);
    if ( v25 )
    {
      while ( 1 )
      {
        v28 = FxObjectHandleAlloc(
                m_Resources->m_Globals,
                ExDefaultNonPagedPoolType,
                0x90uLL,
                0,
                0LL,
                0,
                FxObjectTypeInternal);
        if ( !v28 )
          break;
        v28[2] = m_Resources->m_Globals;
        *v28 = &FxObject::`vftable';
        *((_DWORD *)v28 + 2) = 4119;
        v28[7] = 0LL;
        *((_BYTE *)v28 + 48) = 1;
        FxObject::Construct((FxObject *)v28, 0LL);
        *v28 = &FxObject::`vftable';
        *(_OWORD *)(v28 + 13) = *(_OWORD *)v27;
        *((_DWORD *)v28 + 30) = *((_DWORD *)v27 + 4);
        FxObject::AssignParentObject((FxObject *)v28, m_Resources);
        if ( !FxCollectionInternal::Add(&m_Resources->FxCollectionInternal, m_Resources->m_Globals, (FxObject *)v28) )
          break;
        ++v26;
        v27 += 20;
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
    v37 = this->m_DeviceBase;
    if ( v37->m_ObjectSize )
      v35 = (const void *)((unsigned __int64)v37 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v35 = 0LL;
    v36 = 35;
LABEL_52:
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, v36, WPP_PnpStateMachine_cpp_Traceguids, v35, v4);
    goto $Done_7;
  }
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
      v29 = *v15;
      v30 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&(*v15)[6].Blink;
      if ( v30->Type == 2 )
      {
        v12 = v12->Flink;
        if ( v12 == p_m_InterruptListHead )
        {
          v32 = this->m_DeviceBase;
          if ( v32->m_ObjectSize )
            v33 = (const void *)((unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v33 = 0LL;
          WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, 0x24u, WPP_PnpStateMachine_cpp_Traceguids, v33);
          break;
        }
        v31 = *p_Blink;
        v40 = *p_Blink;
        Blink_high = HIWORD(v29[6].Blink);
        if ( (BYTE2((*p_Blink)[6].Blink) & 2) != 0 && HIWORD(v29[6].Blink) > 1u )
        {
          v38 = 0;
          do
          {
            if ( v12 == p_m_InterruptListHead )
              break;
            FxInterrupt::AssignResources(
              (FxInterrupt *)&v12[-28].Blink,
              v30,
              (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v31[6].Blink);
            v12 = v12->Flink;
            v31 = v40;
            ++v38;
          }
          while ( v38 < Blink_high );
        }
        else
        {
          FxInterrupt::AssignResources(
            (FxInterrupt *)&v12[-28].Blink,
            v30,
            (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v31[6].Blink);
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
$Done_7:
  v17 = this->m_Globals;
  if ( v17->FxVerboseOn )
    WPP_IFR_SF_d(v17, 5u, 0xCu, 0x25u, WPP_PnpStateMachine_cpp_Traceguids, v4);
  return (unsigned int)v4;
}
