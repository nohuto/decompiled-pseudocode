/*
 * XREFs of ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C000DA30
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C00090B0 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C002E38C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C0069DBC (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C006C92C (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 */

FxMemoryBuffer *__fastcall FxMemoryBuffer::`scalar deleting destructor'(
        FxMemoryBuffer *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // di
  FxMemoryBuffer *v5; // rax
  FX_POOL_TRACKER *v6; // rdi
  FX_POOL_TRACKER *v7; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2;
  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBuffer_vtbl *)&FxObject::`vftable'.WdfLogHeader;
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      v5 = (FxMemoryBuffer *)((char *)this - 32);
    else
      v5 = this;
    if ( !v5 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v5 & 0xFFF) != 0 )
    {
      v6 = (FX_POOL_TRACKER *)v5[-1].FxMemoryObject::IFxMemory::__vftable;
      if ( *(_BYTE *)(v5[-1].m_BufferSize + 264) )
      {
        if ( FxIsPagedPoolType(v6->PoolType) )
          FxPoolRemovePagedAllocateTracker(v6);
        else
          FxPoolRemoveNonPagedAllocateTracker(v6);
        memset(v6, 0, v6->Size + 64);
      }
      v7 = v6;
    }
    else
    {
      v7 = (FX_POOL_TRACKER *)v5;
    }
    ExFreePoolWithTag(v7, 0);
  }
  return this;
}
