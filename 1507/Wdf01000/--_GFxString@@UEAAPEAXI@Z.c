/*
 * XREFs of ??_GFxString@@UEAAPEAXI@Z @ 0x1C000FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004A00 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C00264A4 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

FxString *__fastcall FxString::`scalar deleting destructor'(FxString *this, char a2, unsigned int a3)
{
  unsigned __int16 *Buffer; // rcx
  _POOL_TYPE *p_m_DisposeSingleEntry; // rax
  _POOL_TYPE *v7; // rdi
  _POOL_TYPE *v8; // rcx
  unsigned __int8 IsPagedPoolType; // al
  __int64 v11; // rcx
  __int64 v12; // rcx
  _POOL_TYPE **v13; // rax
  KIRQL v14; // al
  __int64 v15; // rdx
  _POOL_TYPE **v16; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  this->__vftable = (FxString_vtbl *)&FxString::`vftable';
  Buffer = this->m_UnicodeString.Buffer;
  if ( Buffer )
    FxPoolFree(Buffer);
  FxObject::~FxObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      p_m_DisposeSingleEntry = (_POOL_TYPE *)&this[-1].m_DisposeSingleEntry;
    else
      p_m_DisposeSingleEntry = (_POOL_TYPE *)this;
    if ( !p_m_DisposeSingleEntry )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)p_m_DisposeSingleEntry & 0xFFF) != 0 )
    {
      v7 = (_POOL_TYPE *)*((_QWORD *)p_m_DisposeSingleEntry - 2);
      if ( *(_BYTE *)(*((_QWORD *)p_m_DisposeSingleEntry - 1) + 264LL) )
      {
        IsPagedPoolType = FxIsPagedPoolType(v7[10]);
        v11 = *((_QWORD *)v7 + 2);
        if ( IsPagedPoolType )
        {
          ExAcquireFastMutex((PFAST_MUTEX)(v11 + 40));
          v12 = *(_QWORD *)v7;
          v13 = (_POOL_TYPE **)*((_QWORD *)v7 + 1);
          if ( *(_POOL_TYPE **)(*(_QWORD *)v7 + 8LL) != v7 || *v13 != v7 )
            __fastfail(3u);
          *v13 = (_POOL_TYPE *)v12;
          *(_QWORD *)(v12 + 8) = v13;
          *(_QWORD *)(*((_QWORD *)v7 + 2) + 120LL) -= *((_QWORD *)v7 + 4);
          --*(_DWORD *)(*((_QWORD *)v7 + 2) + 132LL);
          ExReleaseFastMutex((PFAST_MUTEX)(*((_QWORD *)v7 + 2) + 40LL));
        }
        else
        {
          v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 8));
          v15 = *(_QWORD *)v7;
          v16 = (_POOL_TYPE **)*((_QWORD *)v7 + 1);
          if ( *(_POOL_TYPE **)(*(_QWORD *)v7 + 8LL) != v7 || *v16 != v7 )
            __fastfail(3u);
          *v16 = (_POOL_TYPE *)v15;
          *(_QWORD *)(v15 + 8) = v16;
          *(_QWORD *)(*((_QWORD *)v7 + 2) + 112LL) -= *((_QWORD *)v7 + 4);
          --*(_DWORD *)(*((_QWORD *)v7 + 2) + 128LL);
          KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)v7 + 2) + 8LL), v14);
        }
        memset(v7, 0, *((_QWORD *)v7 + 4) + 64LL);
      }
      v8 = v7;
    }
    else
    {
      v8 = p_m_DisposeSingleEntry;
    }
    ExFreePoolWithTag(v8, 0);
  }
  return this;
}
