/*
 * XREFs of ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0019900
 * Callers:
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0026498 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0029810 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0019C80 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C0019D24 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C9490 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxCmResList::BuildFromWdmList(
        FxCmResList *this,
        _CM_RESOURCE_LIST *WdmResourceList,
        unsigned __int8 AccessFlags)
{
  _LIST_ENTRY *p_m_ListHead; // rdi
  unsigned int v4; // esi
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *PartialDescriptors; // r14
  unsigned int v10; // r13d
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  SIZE_T v12; // r9
  void *Caller; // rax
  _QWORD *v14; // rax
  _FX_DRIVER_GLOBALS *v15; // rdx
  _QWORD *v16; // rdi
  _LIST_ENTRY *v17; // rsi
  __int64 v18; // rax
  KIRQL v19; // bp
  KIRQL v20; // r14
  _LIST_ENTRY *Blink; // rcx
  _QWORD *v22; // rax
  _LIST_ENTRY *v23; // r8
  _LIST_ENTRY *v24; // rdx
  unsigned int v25; // edx
  FxTagTracker *v26; // rcx
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int Count; // [rsp+80h] [rbp+8h]
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v29; // [rsp+88h] [rbp+10h]

  p_m_ListHead = &this->m_ListHead;
  v4 = 0;
  while ( p_m_ListHead->Flink != p_m_ListHead )
    FxCollectionInternal::Remove(&this->FxCollectionInternal, 0);
  this->m_AccessFlags = AccessFlags;
  if ( WdmResourceList )
  {
    PartialDescriptors = WdmResourceList->List[0].PartialResourceList.PartialDescriptors;
    v29 = WdmResourceList->List[0].PartialResourceList.PartialDescriptors;
    v10 = 0;
    Count = WdmResourceList->List[0].PartialResourceList.Count;
    if ( Count )
    {
      while ( 1 )
      {
        m_Globals = this->m_Globals;
        v12 = 144LL;
        if ( m_Globals->FxVerifierHandle )
          v12 = 176LL;
        Caller = m_Globals->FxPoolTrackingOn ? retaddr : 0LL;
        v14 = FxPoolAllocator(
                m_Globals,
                &m_Globals->FxPoolFrameworks,
                ExDefaultNonPagedPoolType,
                v12,
                m_Globals->Tag,
                Caller);
        v16 = v14;
        if ( !v14 )
          break;
        if ( m_Globals->FxVerifierHandle )
        {
          memset(v14, 0, 0x20uLL);
          *((_DWORD *)v16 + 7) = 1146058822;
          v16 += 4;
        }
        if ( !v16 )
          break;
        v17 = (_LIST_ENTRY *)(v16 + 9);
        v16[2] = this->m_Globals;
        *v16 = &FxObject::`vftable';
        *((_DWORD *)v16 + 2) = 4119;
        v16[7] = 0LL;
        *((_BYTE *)v16 + 48) = 1;
        *((_DWORD *)v16 + 3) = 1;
        *((_DWORD *)v16 + 6) = 0x10000;
        v16[8] = 0LL;
        v16[5] = v16 + 4;
        v16[4] = v16 + 4;
        v16[10] = v16 + 9;
        v16[9] = v16 + 9;
        v18 = v16[2];
        v16[11] = 0LL;
        v16[12] = 0LL;
        if ( *(_BYTE *)(v18 + 316) )
          FxObject::Vf_VerifyConstruct((FxObject *)v16, v15, 0);
        *v16 = &FxResourceCm::`vftable';
        *(_OWORD *)(v16 + 13) = *(_OWORD *)&PartialDescriptors->Type;
        *((_DWORD *)v16 + 30) = *((_DWORD *)&PartialDescriptors->u.Memory48 + 3);
        v19 = KeAcquireSpinLockRaiseToDpc(v16 + 7);
        if ( *((_WORD *)v16 + 13) == 1 )
        {
          if ( v16[8] )
          {
            KeReleaseSpinLock(v16 + 7, v19);
          }
          else
          {
            v20 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
            if ( this->m_ObjectState == 1 )
            {
              Blink = this->m_ChildListHead.Blink;
              if ( Blink->Flink != &this->m_ChildListHead )
                __fastfail(3u);
              v17->Flink = &this->m_ChildListHead;
              v16[10] = Blink;
              Blink->Flink = v17;
              this->m_ChildListHead.Blink = v17;
              if ( !v16[12] )
                v16[12] = this->m_DeviceBase;
              KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v20);
              v16[8] = this;
            }
            else
            {
              FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
              KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v20);
            }
            KeReleaseSpinLock(v16 + 7, v19);
            PartialDescriptors = v29;
          }
        }
        else
        {
          FxObject::TraceDroppedEvent((FxObject *)v16, FxObjectDroppedEventAssignParentObject);
          KeReleaseSpinLock(v16 + 7, v19);
        }
        v22 = FxPoolAllocator(
                this->m_Globals,
                &this->m_Globals->FxPoolFrameworks,
                ExDefaultNonPagedPoolType,
                0x18uLL,
                this->m_Globals->Tag,
                retaddr);
        if ( !v22 )
          break;
        v23 = this->m_ListHead.Blink;
        v24 = (_LIST_ENTRY *)(v22 + 1);
        if ( v23->Flink != &this->m_ListHead )
          __fastfail(3u);
        v24->Flink = &this->m_ListHead;
        v22[2] = v23;
        v23->Flink = v24;
        this->m_ListHead.Blink = v24;
        *v22 = v16;
        v25 = _InterlockedIncrement((volatile signed __int32 *)v16 + 3);
        if ( *((char *)v16 + 24) < 0 )
        {
          v26 = (FxTagTracker *)*(v16 - 4);
          if ( v26 )
            FxTagTracker::UpdateTagHistory(
              v26,
              &this->FxCollectionInternal,
              185,
              "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp",
              TagAddRef,
              v25);
        }
        ++this->m_Count;
        ++PartialDescriptors;
        ++v10;
        v29 = PartialDescriptors;
        v4 = 0;
        if ( v10 >= Count )
          return v4;
      }
      v4 = -1073741670;
      FxCollectionInternal::Clear(&this->FxCollectionInternal);
    }
  }
  return v4;
}
