/*
 * XREFs of ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0078260
 * Callers:
 *     <none>
 * Callees:
 *     ?InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z @ 0x1C00783E8 (-InitPagedAlloc@FxPagedLookasideListFromPool@@IEAAPEAXPEAX@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C0078F24 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     ??0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z @ 0x1C0079194 (--0FxMemoryBufferFromLookaside@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KG@Z.c)
 *     ??0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z @ 0x1C00792AC (--0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z.c)
 *     ??2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0079300 (--2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUT.c)
 */

__int64 __fastcall FxPagedLookasideListFromPool::Allocate(
        FxPagedLookasideListFromPool *this,
        FxMemoryBufferFromLookaside **PPMemory)
{
  _NPAGED_LOOKASIDE_LIST *p_m_ObjectLookaside; // rbx
  PSLIST_ENTRY v5; // rax
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 result; // rax
  FxMemoryBufferFromLookaside *inited; // rsi
  unsigned __int64 v12; // rcx
  PSLIST_ENTRY v13; // rbp
  _WDF_OBJECT_ATTRIBUTES *p_m_MemoryAttributes; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxMemoryBufferFromLookaside *v16; // rax
  FxMemoryBufferFromLookaside *v17; // rsi
  FxDeviceBase *m_MemoryDeviceBase; // rbx
  FxMemoryBufferFromPoolLookaside *v19; // rax
  FxMemoryBufferFromLookaside *v20; // rax
  unsigned __int16 Buffer; // [rsp+20h] [rbp-18h]

  p_m_ObjectLookaside = &this->m_ObjectLookaside;
  ++this->m_ObjectLookaside.L.TotalAllocates;
  v5 = ExpInterlockedPopEntrySList(&this->m_ObjectLookaside.L.ListHead);
  if ( !v5 )
  {
    Size = p_m_ObjectLookaside->L.Size;
    AllocateEx = p_m_ObjectLookaside->L.AllocateEx;
    Tag = p_m_ObjectLookaside->L.Tag;
    Type = (unsigned int)p_m_ObjectLookaside->L.Type;
    ++p_m_ObjectLookaside->L.AllocateMisses;
    v5 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
    if ( !v5 )
      return 3221225626LL;
  }
  inited = (FxMemoryBufferFromLookaside *)FxLookasideList::InitObjectAlloc(this, v5);
  ++this->m_PoolLookaside.L.TotalAllocates;
  v13 = ExpInterlockedPopEntrySList(&this->m_PoolLookaside.L.ListHead);
  if ( !v13 )
  {
    ++this->m_PoolLookaside.L.AllocateMisses;
    v13 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))this->m_PoolLookaside.L.AllocateEx)(
                          (unsigned int)this->m_PoolLookaside.L.Type,
                          this->m_PoolLookaside.L.Size,
                          this->m_PoolLookaside.L.Tag);
  }
  if ( !v13 )
  {
    this->Reclaim(this, inited);
    return 3221225626LL;
  }
  if ( this->m_BufferSize < 0x1000 )
    v13 = (PSLIST_ENTRY)FxPagedLookasideListFromPool::InitPagedAlloc(this, v13);
  p_m_MemoryAttributes = &this->m_MemoryAttributes;
  m_Globals = this->m_Globals;
  if ( !this->m_MemoryDeviceBase )
  {
    v19 = (FxMemoryBufferFromPoolLookaside *)FxMemoryBufferFromPoolLookaside::operator new(
                                               v12,
                                               m_Globals,
                                               inited,
                                               p_m_MemoryAttributes);
    if ( v19 )
    {
      FxMemoryBufferFromPoolLookaside::FxMemoryBufferFromPoolLookaside(
        v19,
        this->m_Globals,
        this,
        this->m_BufferSize,
        v13);
      v17 = v20;
      goto LABEL_16;
    }
LABEL_15:
    v17 = 0LL;
    goto LABEL_16;
  }
  v16 = (FxMemoryBufferFromLookaside *)FxMemoryBufferFromPoolLookaside::operator new(
                                         v12,
                                         m_Globals,
                                         inited,
                                         p_m_MemoryAttributes);
  v17 = v16;
  if ( !v16 )
    goto LABEL_15;
  m_MemoryDeviceBase = this->m_MemoryDeviceBase;
  FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(v16, this->m_Globals, this, this->m_BufferSize, Buffer);
  v17[1].FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)v13;
  v17->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)&FxMemoryBufferFromPoolLookaside::`vftable'{for `FxObject'};
  v17->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBufferFromPoolLookaside::`vftable'{for `IFxMemory'};
  v17->m_DeviceBase = m_MemoryDeviceBase;
LABEL_16:
  v17->m_ObjectFlags |= 0x11u;
  result = 0LL;
  *PPMemory = v17;
  return result;
}
