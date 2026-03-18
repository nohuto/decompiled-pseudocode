/*
 * XREFs of ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0010230
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C00264A4 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C00326D4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

FxIoContext *__fastcall FxIoContext::`scalar deleting destructor'(FxIoContext *this, char a2)
{
  void *m_BufferToFree; // rcx
  _MDL *m_MdlToFree; // rcx
  _POOL_TYPE *v6; // rdi
  FxIoContext *v7; // rcx
  unsigned __int8 IsPagedPoolType; // al
  __int64 v10; // rcx
  __int64 v11; // rcx
  _POOL_TYPE **v12; // rax
  KIRQL v13; // al
  __int64 v14; // rdx
  _POOL_TYPE **v15; // rcx

  this->__vftable = (FxIoContext_vtbl *)&FxIoContext::`vftable';
  m_BufferToFree = this->m_BufferToFree;
  if ( m_BufferToFree )
  {
    FxPoolFree(m_BufferToFree);
    this->m_BufferToFree = 0LL;
  }
  m_MdlToFree = this->m_MdlToFree;
  this->m_BufferToFreeLength = 0LL;
  this->m_CopyBackToBuffer = 0;
  if ( m_MdlToFree )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_MdlToFree);
      this->m_UnlockPages = 0;
    }
    if ( BYTE4(this->m_OriginalMdl[6].MappedSystemVa) )
      FxMdlFreeDebug(this->m_DriverGlobals, this->m_MdlToFree);
    else
      IoFreeMdl(this->m_MdlToFree);
    this->m_MdlToFree = 0LL;
  }
  this->__vftable = (FxIoContext_vtbl *)&FxRequestContext::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( ((unsigned __int16)this & 0xFFF) != 0 )
    {
      v6 = *(_POOL_TYPE **)&this[-1].m_CopyBackToBuffer;
      if ( LOBYTE(this[-1].m_OtherMemory[33].__vftable) )
      {
        IsPagedPoolType = FxIsPagedPoolType(v6[10]);
        v10 = *((_QWORD *)v6 + 2);
        if ( IsPagedPoolType )
        {
          ExAcquireFastMutex((PFAST_MUTEX)(v10 + 40));
          v11 = *(_QWORD *)v6;
          v12 = (_POOL_TYPE **)*((_QWORD *)v6 + 1);
          if ( *(_POOL_TYPE **)(*(_QWORD *)v6 + 8LL) != v6 || *v12 != v6 )
            __fastfail(3u);
          *v12 = (_POOL_TYPE *)v11;
          *(_QWORD *)(v11 + 8) = v12;
          *(_QWORD *)(*((_QWORD *)v6 + 2) + 120LL) -= *((_QWORD *)v6 + 4);
          --*(_DWORD *)(*((_QWORD *)v6 + 2) + 132LL);
          ExReleaseFastMutex((PFAST_MUTEX)(*((_QWORD *)v6 + 2) + 40LL));
        }
        else
        {
          v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 8));
          v14 = *(_QWORD *)v6;
          v15 = (_POOL_TYPE **)*((_QWORD *)v6 + 1);
          if ( *(_POOL_TYPE **)(*(_QWORD *)v6 + 8LL) != v6 || *v15 != v6 )
            __fastfail(3u);
          *v15 = (_POOL_TYPE *)v14;
          *(_QWORD *)(v14 + 8) = v15;
          *(_QWORD *)(*((_QWORD *)v6 + 2) + 112LL) -= *((_QWORD *)v6 + 4);
          --*(_DWORD *)(*((_QWORD *)v6 + 2) + 128LL);
          KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)v6 + 2) + 8LL), v13);
        }
        memset(v6, 0, *((_QWORD *)v6 + 4) + 64LL);
      }
      v7 = (FxIoContext *)v6;
    }
    else
    {
      v7 = this;
    }
    ExFreePoolWithTag(v7, 0);
  }
  return this;
}
