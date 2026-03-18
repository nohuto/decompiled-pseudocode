/*
 * XREFs of ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0020A80
 * Callers:
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C002A430 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C0076EC0 (imp_WdfDeviceMiniportCreate.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0002960 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C002ABEC (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C002ACA0 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C0083648 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 */

__int64 __fastcall FxDeviceBase::AllocateTarget(FxDeviceBase *this, FxIoTarget **Target, unsigned __int8 SelfTarget)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r15
  _FX_DRIVER_GLOBALS *v6; // rbx
  _POOL_TYPE v7; // edi
  ULONG Tag; // r14d
  void *Caller; // rax
  FxIoTarget *v10; // rax
  FxIoTarget *v11; // rdi
  FxIoTarget *v12; // rax
  FxIoTarget *v13; // rbx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  KIRQL v17; // al
  KIRQL v18; // r15
  KIRQL v19; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  FxIoTarget *v23; // rax
  const void *v24; // rsi
  const void *v25; // rsi
  const void *v26; // rsi
  const void *v27; // rsi
  unsigned __int64 Size; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  _FX_DRIVER_GLOBALS **v30; // [rsp+98h] [rbp+20h]

  p_m_Globals = &this->m_Globals;
  v30 = &this->m_Globals;
  if ( !SelfTarget )
  {
    v6 = *p_m_Globals;
    v7 = ExDefaultNonPagedPoolType;
    Tag = (*p_m_Globals)->Tag;
    if ( (int)FxCalculateObjectTotalSize2(*p_m_Globals, 0x158u, 0, 0LL, &Size) >= 0 )
    {
      if ( v6->FxPoolTrackingOn )
        Caller = retaddr;
      else
        Caller = 0LL;
      v10 = (FxIoTarget *)FxPoolAllocator(v6, &v6->FxPoolFrameworks, v7, Size, Tag, Caller);
      v11 = v10;
      if ( v10 )
      {
        if ( v6->FxVerifierHandle )
        {
          memset(v10, 0, 0x20uLL);
          *(_DWORD *)(&v11->m_ObjectState + 1) = 1146058822;
          v11 = (FxIoTarget *)((char *)v11 + 32);
        }
        memset(&v11[1].m_Type, 0, 0x30uLL);
        *(_QWORD *)&v11[1].m_Type = v11;
      }
      if ( v11 )
      {
        FxIoTarget::FxIoTarget(v11, *p_m_Globals, 0x158u);
        v13 = v12;
        goto LABEL_11;
      }
    }
LABEL_47:
    v13 = 0LL;
    goto LABEL_48;
  }
  v23 = (FxIoTarget *)FxObjectHandleAlloc(
                        *p_m_Globals,
                        ExDefaultNonPagedPoolType,
                        0x160uLL,
                        0,
                        0LL,
                        0,
                        FxObjectTypeExternal);
  v13 = v23;
  if ( !v23 )
    goto LABEL_47;
  FxIoTarget::FxIoTarget(v23, *p_m_Globals, 0x160u, 0x1205u);
  v13[1].__vftable = 0LL;
  v13->__vftable = (FxIoTarget_vtbl *)&FxIoTargetSelf::`vftable';
LABEL_11:
  if ( v13 )
  {
    v14 = this->AddIoTarget(this, v13);
    v15 = v14;
    if ( v14 < 0 )
    {
      if ( this->m_ObjectSize )
        v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v24 = 0LL;
      WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0xEu, WPP_FxDeviceBase_cpp_Traceguids, v24, v14);
    }
    else
    {
      v16 = FxIoTarget::Init(v13, this);
      v15 = v16;
      if ( v16 < 0 )
      {
        if ( this->m_ObjectSize )
          v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v25 = 0LL;
        WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0xFu, WPP_FxDeviceBase_cpp_Traceguids, v25, v16);
      }
      else
      {
        if ( v13->m_ObjectSize )
        {
          Size = (unsigned __int64)this;
          v17 = KeAcquireSpinLockRaiseToDpc(&v13->m_SpinLock.m_Lock);
          v18 = v17;
          if ( v13->m_ObjectState == 1 )
          {
            if ( v13->m_ParentObject )
            {
              KeReleaseSpinLock(&v13->m_SpinLock.m_Lock, v17);
              v15 = -1071644147;
            }
            else
            {
              v19 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
              if ( this->m_ObjectState == 1 )
              {
                Blink = this->m_ChildListHead.Blink;
                p_m_ChildEntry = &v13->m_ChildEntry;
                if ( Blink->Flink != &this->m_ChildListHead )
                  __fastfail(3u);
                p_m_ChildEntry->Flink = &this->m_ChildListHead;
                v13->m_ChildEntry.Blink = Blink;
                Blink->Flink = p_m_ChildEntry;
                this->m_ChildListHead.Blink = p_m_ChildEntry;
                if ( !v13->m_DeviceBase )
                  v13->m_DeviceBase = this->m_DeviceBase;
                KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v19);
                v15 = 0;
                v13->m_ParentObject = this;
              }
              else
              {
                FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
                KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v19);
                v15 = -1073741738;
              }
              KeReleaseSpinLock(&v13->m_SpinLock.m_Lock, v18);
              if ( v15 >= 0 )
              {
                v13->m_ObjectFlags |= 8u;
                v15 = 0;
                goto LABEL_24;
              }
            }
          }
          else
          {
            FxObject::TraceDroppedEvent(v13, FxObjectDroppedEventAssignParentObject);
            KeReleaseSpinLock(&v13->m_SpinLock.m_Lock, v18);
            v15 = -1073741738;
          }
          p_m_Globals = v30;
        }
        else
        {
          v15 = -1073741816;
        }
        if ( this->m_ObjectSize )
          v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v26 = 0LL;
        WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0x10u, WPP_FxDeviceBase_cpp_Traceguids, v26, v15);
      }
    }
    FxObject::DeleteFromFailedCreate(v13);
    v13 = 0LL;
    goto LABEL_24;
  }
LABEL_48:
  v15 = -1073741670;
  if ( this->m_ObjectSize )
    v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v27 = 0LL;
  WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0xDu, WPP_FxDeviceBase_cpp_Traceguids, v27, -1073741670);
LABEL_24:
  *Target = v13;
  return (unsigned int)v15;
}
