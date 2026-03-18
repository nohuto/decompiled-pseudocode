/*
 * XREFs of ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0002280
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

FxMemoryBuffer *__fastcall FxMemoryBuffer::`scalar deleting destructor'(FxMemoryBuffer *this, char a2)
{
  FxMemoryBuffer *v4; // rax
  FX_POOL_TRACKER *v5; // rdi
  FX_POOL_TRACKER *v6; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBuffer_vtbl *)&FxMemoryBuffer::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBuffer::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      v4 = (FxMemoryBuffer *)((char *)this - 32);
    else
      v4 = this;
    if ( !v4 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v4 & 0xFFF) != 0 )
    {
      v5 = (FX_POOL_TRACKER *)v4[-1].FxMemoryObject::IFxMemory::__vftable;
      if ( *(_BYTE *)(v4[-1].m_BufferSize + 264) )
      {
        if ( FxIsPagedPoolType(v5->PoolType) )
          FxPoolRemovePagedAllocateTracker(v5);
        else
          FxPoolRemoveNonPagedAllocateTracker(v5);
        memset(v5, 0, v5->Size + 64);
      }
      v6 = v5;
    }
    else
    {
      v6 = (FX_POOL_TRACKER *)v4;
    }
    ExFreePoolWithTag(v6, 0);
  }
  return this;
}
