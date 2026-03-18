/*
 * XREFs of ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C006C710
 * Callers:
 *     <none>
 * Callees:
 *     ??0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z @ 0x1C0004144 (--0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C000433C (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     FxAllocateFromNPagedLookasideList @ 0x1C00336B4 (FxAllocateFromNPagedLookasideList.c)
 *     ?InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z @ 0x1C006C990 (-InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z.c)
 *     ??0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z @ 0x1C006D1D8 (--0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z.c)
 *     ??2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C006D210 (--2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUT.c)
 */

__int64 __fastcall FxPagedLookasideListFromPool::Allocate(
        FxPagedLookasideListFromPool *this,
        FxMemoryBufferFromLookaside **PPMemory)
{
  FX_POOL_TRACKER *v4; // rax
  __int64 result; // rax
  FX_POOL **inited; // rsi
  unsigned __int64 v7; // rcx
  PSLIST_ENTRY Buffer; // rbp
  _WDF_OBJECT_ATTRIBUTES *p_m_MemoryAttributes; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxMemoryBufferFromLookaside *v11; // rax
  FxMemoryBufferFromLookaside *v12; // rsi
  FxDeviceBase *m_MemoryDeviceBase; // rbx
  FxMemoryBufferFromPoolLookaside *v14; // rax
  FxMemoryBufferFromLookaside *v15; // rax

  v4 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(&this->m_ObjectLookaside, (unsigned __int64)PPMemory);
  if ( !v4 )
    return 3221225626LL;
  inited = FxLookasideList::InitObjectAlloc(this, v4);
  ++this->m_PoolLookaside.L.TotalAllocates;
  Buffer = ExpInterlockedPopEntrySList(&this->m_PoolLookaside.L.ListHead);
  if ( !Buffer )
  {
    ++this->m_PoolLookaside.L.AllocateMisses;
    Buffer = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))this->m_PoolLookaside.L.AllocateEx)(
                             (unsigned int)this->m_PoolLookaside.L.Type,
                             this->m_PoolLookaside.L.Size,
                             this->m_PoolLookaside.L.Tag);
  }
  if ( !Buffer )
  {
    this->Reclaim(this, (FxMemoryBufferFromLookaside *)inited);
    return 3221225626LL;
  }
  if ( this->m_BufferSize < 0x1000 )
    Buffer = (PSLIST_ENTRY)FxPagedLookasideListFromPool::InitPagedAlloc(this, Buffer);
  p_m_MemoryAttributes = &this->m_MemoryAttributes;
  m_Globals = this->m_Globals;
  if ( !this->m_MemoryDeviceBase )
  {
    v14 = (FxMemoryBufferFromPoolLookaside *)FxMemoryBufferFromPoolLookaside::operator new(
                                               v7,
                                               m_Globals,
                                               inited,
                                               p_m_MemoryAttributes);
    if ( v14 )
    {
      FxMemoryBufferFromPoolLookaside::FxMemoryBufferFromPoolLookaside(
        v14,
        this->m_Globals,
        this,
        this->m_BufferSize,
        Buffer);
      v12 = v15;
      goto LABEL_15;
    }
LABEL_14:
    v12 = 0LL;
    goto LABEL_15;
  }
  v11 = (FxMemoryBufferFromLookaside *)FxMemoryBufferFromPoolLookaside::operator new(
                                         v7,
                                         m_Globals,
                                         inited,
                                         p_m_MemoryAttributes);
  v12 = v11;
  if ( !v11 )
    goto LABEL_14;
  m_MemoryDeviceBase = this->m_MemoryDeviceBase;
  FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(v11, this->m_Globals, this, this->m_BufferSize);
  v12[1].FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)Buffer;
  v12->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)&FxMemoryBufferFromPoolLookaside::`vftable'{for `FxObject'};
  v12->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBufferFromPoolLookaside::`vftable'{for `IFxMemory'};
  v12->m_DeviceBase = m_MemoryDeviceBase;
LABEL_15:
  v12->m_ObjectFlags |= 0x11u;
  result = 0LL;
  *PPMemory = v12;
  return result;
}
