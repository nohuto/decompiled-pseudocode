/*
 * XREFs of ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0007AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

FxRegKey *__fastcall FxRegKey::`scalar deleting destructor'(FxRegKey *this, char a2)
{
  void *m_Key; // rcx
  MxPagedLock *m_Lock; // rcx
  FxRegKey *v6; // rax
  FX_POOL_TRACKER *v7; // rdi
  FX_POOL_TRACKER *v8; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  this->__vftable = (FxRegKey_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
  m_Key = this->m_Key;
  if ( m_Key )
  {
    ZwClose(m_Key);
    this->m_Key = 0LL;
  }
  m_Lock = this->m_Lock;
  this->__vftable = (FxRegKey_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
  if ( m_Lock )
  {
    FxPoolFree(m_Lock);
    this->m_Lock = 0LL;
  }
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      v6 = (FxRegKey *)((char *)this - 32);
    else
      v6 = this;
    if ( !v6 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v6 & 0xFFF) != 0 )
    {
      v7 = (FX_POOL_TRACKER *)v6[-1].m_Key;
      if ( v6[-1].m_Globals->FxPoolTrackingOn )
      {
        if ( FxIsPagedPoolType(v7->PoolType) )
          FxPoolRemovePagedAllocateTracker(v7);
        else
          FxPoolRemoveNonPagedAllocateTracker(v7);
        memset(v7, 0, v7->Size + 64);
      }
      v8 = v7;
    }
    else
    {
      v8 = (FX_POOL_TRACKER *)v6;
    }
    ExFreePoolWithTag(v8, 0);
  }
  return this;
}
