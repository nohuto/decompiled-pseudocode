/*
 * XREFs of ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C000FA70
 * Callers:
 *     imp_WdfDeviceMiniportCreate @ 0x1C0007710 (imp_WdfDeviceMiniportCreate.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C00139FC (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C0014228 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00142DC (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0016050 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C008384C (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 */

__int64 __fastcall FxDeviceBase::AllocateTarget(FxDeviceBase *this, FxIoTarget **Target, unsigned __int8 SelfTarget)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r15
  _FX_DRIVER_GLOBALS *v6; // rbx
  _POOL_TYPE v7; // edi
  ULONG Tag; // r14d
  _LIST_ENTRY *Caller; // rax
  FxIoTarget *v10; // rax
  FxIoTarget *v11; // rdi
  FxIoTarget *v12; // rax
  FxIoTarget *v13; // rbx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  KIRQL v17; // al
  unsigned __int16 m_ObjectState; // dx
  KIRQL v19; // r12
  KIRQL v20; // al
  unsigned __int16 v21; // dx
  KIRQL v22; // r15
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  FxIoTarget *v26; // rax
  const void *v27; // rsi
  const void *v28; // rsi
  const void *v29; // rsi
  const void *v30; // rcx
  const void *v31; // rcx
  const void *v32; // rsi
  unsigned __int64 Size; // [rsp+50h] [rbp-38h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+88h] [rbp+0h]
  _FX_DRIVER_GLOBALS **v35; // [rsp+A8h] [rbp+20h]

  p_m_Globals = &this->m_Globals;
  v35 = &this->m_Globals;
  if ( !SelfTarget )
  {
    v6 = *p_m_Globals;
    v7 = ExDefaultNonPagedPoolType;
    Tag = (*p_m_Globals)->Tag;
    if ( FxCalculateObjectTotalSize2(*p_m_Globals, 0x158u, 0, 0LL, &Size) >= 0 )
    {
      if ( v6->FxPoolTrackingOn )
        Caller = retaddr;
      else
        Caller = 0LL;
      v10 = (FxIoTarget *)FxPoolAllocator(v6, (_LIST_ENTRY *)&v6->FxPoolFrameworks, v7, Size, Tag, Caller);
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
LABEL_57:
    v13 = 0LL;
    goto LABEL_58;
  }
  v26 = (FxIoTarget *)FxObjectHandleAlloc(
                        *p_m_Globals,
                        ExDefaultNonPagedPoolType,
                        0x160uLL,
                        0,
                        0LL,
                        0,
                        FxObjectTypeExternal);
  v13 = v26;
  if ( !v26 )
    goto LABEL_57;
  FxIoTarget::FxIoTarget(v26, *p_m_Globals, 0x160u, 0x1205u);
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
        v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v27 = 0LL;
      WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0xEu, WPP_FxDeviceBase_cpp_Traceguids, v27, v14);
    }
    else
    {
      v16 = FxIoTarget::Init(v13, this);
      v15 = v16;
      if ( v16 < 0 )
      {
        if ( this->m_ObjectSize )
          v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v28 = 0LL;
        WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0xFu, WPP_FxDeviceBase_cpp_Traceguids, v28, v16);
      }
      else
      {
        if ( v13->m_ObjectSize )
        {
          Size = (unsigned __int64)this;
          v17 = KeAcquireSpinLockRaiseToDpc(&v13->m_SpinLock.m_Lock);
          m_ObjectState = v13->m_ObjectState;
          v19 = v17;
          if ( m_ObjectState == 1 )
          {
            if ( v13->m_ParentObject )
            {
              KeReleaseSpinLock(&v13->m_SpinLock.m_Lock, v17);
              v15 = -1071644147;
            }
            else
            {
              v20 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
              v21 = this->m_ObjectState;
              v22 = v20;
              if ( v21 == 1 )
              {
                Blink = this->m_ChildListHead.Blink;
                p_m_ChildEntry = &v13->m_ChildEntry;
                v13->m_ChildEntry.Flink = &this->m_ChildListHead;
                v13->m_ChildEntry.Blink = Blink;
                if ( Blink->Flink != &this->m_ChildListHead )
                  __fastfail(3u);
                Blink->Flink = p_m_ChildEntry;
                this->m_ChildListHead.Blink = p_m_ChildEntry;
                if ( !v13->m_DeviceBase )
                  v13->m_DeviceBase = this->m_DeviceBase;
                KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v22);
                v15 = 0;
                v13->m_ParentObject = this;
              }
              else
              {
                if ( (this->m_ObjectFlags & 0x200) != 0 )
                {
                  if ( this->m_ObjectSize )
                    v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v31 = 0LL;
                  WPP_IFR_SF_qqLL(*v35, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, v31, v21, 1u);
                }
                KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v22);
                v15 = -1073741738;
              }
              KeReleaseSpinLock(&v13->m_SpinLock.m_Lock, v19);
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
            if ( (v13->m_ObjectFlags & 0x200) != 0 )
            {
              if ( v13->m_ObjectSize )
                v30 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v30 = 0LL;
              WPP_IFR_SF_qqLL(v13->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, v13, v30, m_ObjectState, 0);
            }
            KeReleaseSpinLock(&v13->m_SpinLock.m_Lock, v19);
            v15 = -1073741738;
          }
          p_m_Globals = v35;
        }
        else
        {
          v15 = -1073741816;
        }
        if ( this->m_ObjectSize )
          v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v29 = 0LL;
        WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0x10u, WPP_FxDeviceBase_cpp_Traceguids, v29, v15);
      }
    }
    FxObject::DeleteFromFailedCreate(v13);
    v13 = 0LL;
    goto LABEL_24;
  }
LABEL_58:
  v15 = -1073741670;
  if ( this->m_ObjectSize )
    v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v32 = 0LL;
  WPP_IFR_SF_qd(*p_m_Globals, 2u, 0x12u, 0xDu, WPP_FxDeviceBase_cpp_Traceguids, v32, -1073741670);
LABEL_24:
  *Target = v13;
  return (unsigned int)v15;
}
