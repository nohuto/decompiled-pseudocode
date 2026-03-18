/*
 * XREFs of ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0025C00
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00260A0 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 * Callees:
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C000C608 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C0018674 (-AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C001CFE0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C001FD3C (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0030940 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C00309BC (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0030A90 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

__int64 __fastcall FxPkgPnp::PnpMatchResources(FxPkgPnp *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxCmResList *m_ResourcesRaw; // rbp
  int _a2; // edi
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
  unsigned int *p_FullCreateOptions; // r12
  unsigned int v20; // r14d
  _FX_DRIVER_GLOBALS *v21; // rdi
  unsigned __int64 v22; // r9
  void *Caller; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  _FX_DRIVER_GLOBALS *v26; // rax
  unsigned int v27; // r12d
  unsigned int v28; // ebp
  char *v29; // r13
  _FX_DRIVER_GLOBALS *v30; // rdi
  unsigned __int64 v31; // r9
  void *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // r15
  _FX_DRIVER_GLOBALS *v35; // rax
  _LIST_ENTRY *v36; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v37; // r13
  _LIST_ENTRY *v38; // rcx
  FxDeviceBase *v39; // rax
  const void *v40; // rax
  unsigned __int16 v41; // r9
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v44; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int DesiredAccess; // [rsp+80h] [rbp+8h]
  unsigned int v47; // [rsp+80h] [rbp+8h]
  unsigned int Blink_high; // [rsp+88h] [rbp+10h]
  _LIST_ENTRY *v49; // [rsp+90h] [rbp+18h]

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x1Du, WPP_PnpStateMachine_cpp_Traceguids);
  m_ResourcesRaw = this->m_ResourcesRaw;
  this->m_PnpStateAndCaps.Value = this->m_PnpStateAndCaps.Value & 0xFFFFF3CF | 0x820;
  _a2 = 0;
  CurrentStackLocation = this->m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  while ( m_ResourcesRaw->m_ListHead.Flink != &m_ResourcesRaw->m_ListHead )
    FxCollectionInternal::Remove(&m_ResourcesRaw->FxCollectionInternal, 0);
  m_ResourcesRaw->m_AccessFlags = 0;
  if ( SecurityContext )
  {
    p_FullCreateOptions = &SecurityContext->FullCreateOptions;
    DesiredAccess = SecurityContext->DesiredAccess;
    v20 = 0;
    if ( DesiredAccess )
    {
      while ( 1 )
      {
        v21 = m_ResourcesRaw->m_Globals;
        v22 = 144LL;
        if ( v21->FxVerifierHandle )
          v22 = 192LL;
        Caller = v21->FxPoolTrackingOn ? retaddr : 0LL;
        v24 = FxPoolAllocator(v21, &v21->FxPoolFrameworks, ExDefaultNonPagedPoolType, v22, v21->Tag, Caller);
        v25 = v24;
        if ( !v24 )
          break;
        if ( v21->FxVerifierHandle )
        {
          memset(v24, 0, 0x30uLL);
          *((_DWORD *)v25 + 8) = 1146058822;
          v25 += 6;
        }
        if ( !v25 )
          break;
        v26 = m_ResourcesRaw->m_Globals;
        *v25 = &FxObject::`vftable';
        *((_DWORD *)v25 + 2) = 4119;
        v25[2] = v26;
        v25[7] = 0LL;
        *((_BYTE *)v25 + 48) = 1;
        FxObject::Construct((FxObject *)v25, 0LL);
        *v25 = &FxObject::`vftable';
        *(_OWORD *)(v25 + 13) = *(_OWORD *)p_FullCreateOptions;
        *((_DWORD *)v25 + 30) = p_FullCreateOptions[4];
        FxObject::AssignParentObject((FxObject *)v25, m_ResourcesRaw);
        if ( !FxCollectionInternal::Add(
                &m_ResourcesRaw->FxCollectionInternal,
                m_ResourcesRaw->m_Globals,
                (FxObject *)v25) )
          break;
        ++v20;
        p_FullCreateOptions += 5;
        _a2 = 0;
        if ( v20 >= DesiredAccess )
          goto LABEL_6;
      }
      _a2 = -1073741670;
      FxCollectionInternal::Clear(&m_ResourcesRaw->FxCollectionInternal);
    }
  }
LABEL_6:
  if ( _a2 < 0 )
  {
    v41 = 30;
LABEL_63:
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v44 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v44 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, v41, WPP_PnpStateMachine_cpp_Traceguids, v44, _a2);
    goto $Done_18;
  }
  m_Resources = this->m_Resources;
  _a2 = 0;
  while ( m_Resources->m_ListHead.Flink != &m_Resources->m_ListHead )
    FxCollectionInternal::Remove(&m_Resources->FxCollectionInternal, 0);
  m_Resources->m_AccessFlags = 0;
  if ( FileName )
  {
    v27 = *(_DWORD *)&FileName[1].Length;
    v28 = 0;
    v29 = (char *)(&FileName[1].MaximumLength + 1);
    if ( v27 )
    {
      while ( 1 )
      {
        v30 = m_Resources->m_Globals;
        v31 = v30->FxVerifierHandle ? 192LL : 144LL;
        v32 = v30->FxPoolTrackingOn ? retaddr : 0LL;
        v33 = FxPoolAllocator(v30, &v30->FxPoolFrameworks, ExDefaultNonPagedPoolType, v31, v30->Tag, v32);
        v34 = v33;
        if ( !v33 )
          break;
        if ( v30->FxVerifierHandle )
        {
          memset(v33, 0, 0x30uLL);
          *((_DWORD *)v34 + 8) = 1146058822;
          v34 += 6;
        }
        if ( !v34 )
          break;
        v35 = m_Resources->m_Globals;
        *v34 = &FxObject::`vftable';
        *((_DWORD *)v34 + 2) = 4119;
        v34[2] = v35;
        v34[7] = 0LL;
        *((_BYTE *)v34 + 48) = 1;
        FxObject::Construct((FxObject *)v34, 0LL);
        *v34 = &FxObject::`vftable';
        *(_OWORD *)(v34 + 13) = *(_OWORD *)v29;
        *((_DWORD *)v34 + 30) = *((_DWORD *)v29 + 4);
        FxObject::AssignParentObject((FxObject *)v34, m_Resources);
        if ( !FxCollectionInternal::Add(&m_Resources->FxCollectionInternal, m_Resources->m_Globals, (FxObject *)v34) )
          break;
        ++v28;
        v29 += 20;
        _a2 = 0;
        if ( v28 >= v27 )
          goto LABEL_10;
      }
      _a2 = -1073741670;
      FxCollectionInternal::Clear(&m_Resources->FxCollectionInternal);
    }
  }
LABEL_10:
  if ( _a2 < 0 )
  {
    v41 = 31;
    goto LABEL_63;
  }
  p_m_InterruptListHead = &this->m_InterruptListHead;
  Flink = (FxPkgPnp *)this->m_InterruptListHead.Flink;
  if ( Flink != (FxPkgPnp *)&this->m_InterruptListHead )
  {
    do
    {
      Flink[-1].m_DeviceReleaseHardware.m_Device = 0LL;
      *(_WORD *)&Flink[-1].m_DeviceSurpriseRemoval.m_CallbackType = 0;
      BYTE4(Flink[-1].m_DeviceQueryStop.m_Method) = 0;
      BYTE1(Flink[-1].m_DeviceSurpriseRemoval.__vftable) = 0;
      LODWORD(Flink[-1].m_DeviceQueryRemove.m_Method) = 0;
      LODWORD(Flink[-1].m_DeviceQueryStop.m_Method) = 0;
      BYTE1(Flink[-1].m_DeviceUsageNotification.m_Method) = 0;
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
      v36 = *v15;
      v37 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&(*v15)[6].Blink;
      if ( v37->Type == 2 )
      {
        v12 = v12->Flink;
        if ( v12 == p_m_InterruptListHead )
        {
          v39 = this->m_DeviceBase;
          if ( v39->m_ObjectSize )
            v40 = (const void *)((unsigned __int64)v39 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v40 = 0LL;
          WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, 0x20u, WPP_PnpStateMachine_cpp_Traceguids, v40);
          break;
        }
        v38 = *p_Blink;
        v49 = *p_Blink;
        Blink_high = HIWORD(v36[6].Blink);
        if ( (BYTE2((*p_Blink)[6].Blink) & 2) != 0 && HIWORD(v36[6].Blink) > 1u )
        {
          v47 = 0;
          do
          {
            if ( v12 == p_m_InterruptListHead )
              break;
            FxInterrupt::AssignResources(
              (FxInterrupt *)&v12[-28].Blink,
              v37,
              (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v38[6].Blink);
            v12 = v12->Flink;
            v38 = v49;
            ++v47;
          }
          while ( v47 < Blink_high );
        }
        else
        {
          FxInterrupt::AssignResources(
            (FxInterrupt *)&v12[-28].Blink,
            v37,
            (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v38[6].Blink);
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
$Done_18:
  v17 = this->m_Globals;
  if ( v17->FxVerboseOn )
    WPP_IFR_SF_d(v17, 5u, 0xCu, 0x21u, WPP_PnpStateMachine_cpp_Traceguids, _a2);
  return (unsigned int)_a2;
}
