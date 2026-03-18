/*
 * XREFs of ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0017B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004A00 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C00264A4 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

FxRegKey *__fastcall FxRegKey::`scalar deleting destructor'(FxRegKey *this, char a2, unsigned int a3)
{
  void *m_Key; // rcx
  MxPagedLock *m_Lock; // rcx
  _POOL_TYPE *v7; // rax
  _POOL_TYPE *v8; // rdi
  _POOL_TYPE *v9; // rcx
  unsigned __int8 IsPagedPoolType; // al
  __int64 v12; // rcx
  __int64 v13; // rcx
  _POOL_TYPE **v14; // rax
  KIRQL v15; // al
  __int64 v16; // rdx
  _POOL_TYPE **v17; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  this->__vftable = (FxRegKey_vtbl *)&FxRegKey::`vftable';
  m_Key = this->m_Key;
  if ( m_Key )
  {
    ZwClose(m_Key);
    this->m_Key = 0LL;
  }
  m_Lock = this->m_Lock;
  this->__vftable = (FxRegKey_vtbl *)&FxPagedObject::`vftable';
  if ( m_Lock )
  {
    FxPoolFree(m_Lock);
    this->m_Lock = 0LL;
  }
  FxObject::~FxObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      v7 = (_POOL_TYPE *)&this[-1].96;
    else
      v7 = (_POOL_TYPE *)this;
    if ( !v7 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v7 & 0xFFF) != 0 )
    {
      v8 = (_POOL_TYPE *)*((_QWORD *)v7 - 2);
      if ( *(_BYTE *)(*((_QWORD *)v7 - 1) + 264LL) )
      {
        IsPagedPoolType = FxIsPagedPoolType(v8[10]);
        v12 = *((_QWORD *)v8 + 2);
        if ( IsPagedPoolType )
        {
          ExAcquireFastMutex((PFAST_MUTEX)(v12 + 40));
          v13 = *(_QWORD *)v8;
          v14 = (_POOL_TYPE **)*((_QWORD *)v8 + 1);
          if ( *(_POOL_TYPE **)(*(_QWORD *)v8 + 8LL) != v8 || *v14 != v8 )
            __fastfail(3u);
          *v14 = (_POOL_TYPE *)v13;
          *(_QWORD *)(v13 + 8) = v14;
          *(_QWORD *)(*((_QWORD *)v8 + 2) + 120LL) -= *((_QWORD *)v8 + 4);
          --*(_DWORD *)(*((_QWORD *)v8 + 2) + 132LL);
          ExReleaseFastMutex((PFAST_MUTEX)(*((_QWORD *)v8 + 2) + 40LL));
        }
        else
        {
          v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 8));
          v16 = *(_QWORD *)v8;
          v17 = (_POOL_TYPE **)*((_QWORD *)v8 + 1);
          if ( *(_POOL_TYPE **)(*(_QWORD *)v8 + 8LL) != v8 || *v17 != v8 )
            __fastfail(3u);
          *v17 = (_POOL_TYPE *)v16;
          *(_QWORD *)(v16 + 8) = v17;
          *(_QWORD *)(*((_QWORD *)v8 + 2) + 112LL) -= *((_QWORD *)v8 + 4);
          --*(_DWORD *)(*((_QWORD *)v8 + 2) + 128LL);
          KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)v8 + 2) + 8LL), v15);
        }
        memset(v8, 0, *((_QWORD *)v8 + 4) + 64LL);
      }
      v9 = v8;
    }
    else
    {
      v9 = v7;
    }
    ExFreePoolWithTag(v9, 0);
  }
  return this;
}
