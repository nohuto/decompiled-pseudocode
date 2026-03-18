/*
 * XREFs of ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0026420
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004A00 (--1FxObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C00264A4 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

FxMemoryBuffer *__fastcall FxMemoryBuffer::`scalar deleting destructor'(
        FxMemoryBuffer *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // di
  IFxMemory_vtbl *p_m_DisposeSingleEntry; // rax
  IFxMemory_vtbl *Release; // rdi
  IFxMemory_vtbl *v7; // rcx
  unsigned __int8 IsPagedPoolType; // al
  _MDL *(__fastcall *GetMdl)(IFxMemory *); // rcx
  void *(__fastcall *GetBuffer)(IFxMemory *); // rcx
  unsigned __int64 (__fastcall *GetBufferSize)(IFxMemory *); // rax
  KIRQL v13; // al
  void *(__fastcall *v14)(IFxMemory *); // rdx
  unsigned __int64 (__fastcall *v15)(IFxMemory *); // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2;
  this->FxMemoryObject::FxObject::__vftable = (FxMemoryBuffer_vtbl *)&FxMemoryBuffer::`vftable'{for `FxObject'};
  this->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)&FxMemoryBuffer::`vftable'{for `IFxMemory'};
  FxObject::~FxObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      p_m_DisposeSingleEntry = (IFxMemory_vtbl *)&this[-1].m_DisposeSingleEntry;
    else
      p_m_DisposeSingleEntry = (IFxMemory_vtbl *)this;
    if ( !p_m_DisposeSingleEntry )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)p_m_DisposeSingleEntry & 0xFFF) != 0 )
    {
      Release = (IFxMemory_vtbl *)p_m_DisposeSingleEntry[-1].Release;
      if ( *((_BYTE *)p_m_DisposeSingleEntry[-1].Delete + 264) )
      {
        IsPagedPoolType = FxIsPagedPoolType((_POOL_TYPE)Release->GetDriverGlobals);
        GetMdl = Release->GetMdl;
        if ( IsPagedPoolType )
        {
          ExAcquireFastMutex((PFAST_MUTEX)((char *)GetMdl + 40));
          GetBuffer = Release->GetBuffer;
          GetBufferSize = Release->GetBufferSize;
          if ( *((IFxMemory_vtbl **)Release->GetBuffer + 1) != Release || *(IFxMemory_vtbl **)GetBufferSize != Release )
            __fastfail(3u);
          *(_QWORD *)GetBufferSize = GetBuffer;
          *((_QWORD *)GetBuffer + 1) = GetBufferSize;
          *((_QWORD *)Release->GetMdl + 15) -= Release->GetFlags;
          --*((_DWORD *)Release->GetMdl + 33);
          ExReleaseFastMutex((PFAST_MUTEX)((char *)Release->GetMdl + 40));
        }
        else
        {
          v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)GetMdl + 1);
          v14 = Release->GetBuffer;
          v15 = Release->GetBufferSize;
          if ( *((IFxMemory_vtbl **)Release->GetBuffer + 1) != Release || *(IFxMemory_vtbl **)v15 != Release )
            __fastfail(3u);
          *(_QWORD *)v15 = v14;
          *((_QWORD *)v14 + 1) = v15;
          *((_QWORD *)Release->GetMdl + 14) -= Release->GetFlags;
          --*((_DWORD *)Release->GetMdl + 32);
          KeReleaseSpinLock((PKSPIN_LOCK)Release->GetMdl + 1, v13);
        }
        memset(Release, 0, (size_t)Release->GetFlags + 64);
      }
      v7 = Release;
    }
    else
    {
      v7 = p_m_DisposeSingleEntry;
    }
    ExFreePoolWithTag(v7, 0);
  }
  return this;
}
