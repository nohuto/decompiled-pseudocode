/*
 * XREFs of ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0026498
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00266B0 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C0015700 (-AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0019900 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C001F684 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpMatchResources(FxPkgPnp *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v3; // r13d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // rdi
  int _a2; // eax
  int _a1; // esi
  _LIST_ENTRY *p_m_InterruptListHead; // rdi
  _LIST_ENTRY *i; // rax
  FxCmResList *m_Resources; // rax
  _LIST_ENTRY *v11; // r14
  _LIST_ENTRY **p_Blink; // r15
  _LIST_ENTRY **j; // rbp
  FxDeviceBase *v14; // rdx
  _FX_DRIVER_GLOBALS *v15; // rcx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v17; // rdx
  _LIST_ENTRY *v18; // rcx
  unsigned int Blink_high; // r12d
  FxDeviceBase *v20; // rax
  const void *v21; // rax
  FxDeviceBase *m_DeviceBase; // rcx
  const void *v23; // rcx
  const void *v24; // rax
  FxDeviceBase *v25; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v26; // [rsp+80h] [rbp+8h]
  _LIST_ENTRY *v27; // [rsp+88h] [rbp+10h]
  FxCollectionInternal *v28; // [rsp+90h] [rbp+18h]

  m_Globals = this->m_Globals;
  v3 = 0;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x1Du, WPP_PnpStateMachine_cpp_Traceguids);
  this->m_PnpStateAndCaps.Value = this->m_PnpStateAndCaps.Value & 0xFFFFF3CF | 0x820;
  CurrentStackLocation = this->m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
  AllocatedResourcesTranslated = CurrentStackLocation->Parameters.StartDevice.AllocatedResourcesTranslated;
  _a2 = FxCmResList::BuildFromWdmList(
          this->m_ResourcesRaw,
          CurrentStackLocation->Parameters.StartDevice.AllocatedResources,
          0);
  _a1 = _a2;
  if ( _a2 < 0 )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v23 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v23 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x1Eu, WPP_PnpStateMachine_cpp_Traceguids, v23, _a2);
  }
  else
  {
    _a1 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 0);
    if ( _a1 < 0 )
    {
      v25 = this->m_DeviceBase;
      if ( v25->m_ObjectSize )
        v24 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v24 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x1Fu, WPP_PnpStateMachine_cpp_Traceguids, v24, _a1);
    }
    else
    {
      p_m_InterruptListHead = &this->m_InterruptListHead;
      for ( i = this->m_InterruptListHead.Flink; i != p_m_InterruptListHead; i = i->Flink )
      {
        i[-5].Blink = 0LL;
        LOWORD(i[-2].Flink) = 0;
        BYTE4(i[-4].Blink) = 0;
        BYTE1(i[-3].Blink) = 0;
        LODWORD(i[-3].Flink) = 0;
        LODWORD(i[-4].Blink) = 0;
        BYTE1(i[-19].Blink) = 0;
      }
      m_Resources = this->m_Resources;
      v11 = &this->m_InterruptListHead;
      p_Blink = &m_Resources->m_ListHead.Flink[-1].Blink;
      v28 = &m_Resources->FxCollectionInternal;
      for ( j = &this->m_ResourcesRaw->m_ListHead.Flink[-1].Blink; p_Blink != (_LIST_ENTRY **)v28; j = &j[1][-1].Blink )
      {
        v17 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&(*j)[6].Blink;
        v26 = v17;
        if ( v17->Type == 2 )
        {
          v11 = v11->Flink;
          if ( v11 == p_m_InterruptListHead )
          {
            v20 = this->m_DeviceBase;
            if ( v20->m_ObjectSize )
              v21 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v21 = 0LL;
            WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, 0x20u, WPP_PnpStateMachine_cpp_Traceguids, v21);
            break;
          }
          v18 = *p_Blink;
          Blink_high = HIWORD((*j)[6].Blink);
          v27 = *p_Blink;
          if ( (BYTE2((*p_Blink)[6].Blink) & 2) != 0 && Blink_high > 1 )
          {
            do
            {
              if ( v11 == p_m_InterruptListHead )
                break;
              FxInterrupt::AssignResources(
                (FxInterrupt *)&v11[-28].Blink,
                v17,
                (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v18[6].Blink);
              v11 = v11->Flink;
              ++v3;
              v17 = v26;
              v18 = v27;
            }
            while ( v3 < Blink_high );
            v3 = 0;
          }
          else
          {
            FxInterrupt::AssignResources(
              (FxInterrupt *)&v11[-28].Blink,
              v17,
              (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v18[6].Blink);
          }
        }
        p_Blink = &p_Blink[1][-1].Blink;
      }
      v14 = this->m_DeviceBase;
      if ( BYTE1(v14[1].m_Globals) )
      {
        if ( (v14->m_AttachedDevice.m_DeviceObject->Characteristics & 1) != 0 )
          v14->m_DeviceObject.m_DeviceObject->Characteristics |= 1u;
        FxDevice::SetFilterIoType(this->m_Device);
      }
    }
  }
  v15 = this->m_Globals;
  if ( v15->FxVerboseOn )
    WPP_IFR_SF_d(v15, 5u, 0xCu, 0x21u, WPP_PnpStateMachine_cpp_Traceguids, _a1);
  return (unsigned int)_a1;
}
