/*
 * XREFs of ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023148
 * Callers:
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0031564 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     VfAddContextToHandle @ 0x1C00B7A44 (VfAddContextToHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxObject::AddContext(
        FxObject *this,
        FxContextHeader *Header,
        void **Context,
        _WDF_OBJECT_ATTRIBUTES *Attributes)
{
  unsigned __int16 m_ObjectSize; // ax
  unsigned int v5; // ebx
  char *v10; // rdi
  KIRQL v11; // dl
  volatile __int64 *v12; // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rax

  m_ObjectSize = this->m_ObjectSize;
  v5 = 0;
  if ( m_ObjectSize )
    v10 = (char *)this + m_ObjectSize;
  else
    v10 = 0LL;
  v11 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState == 1 && v10 )
  {
    while ( (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)*((_QWORD *)v10 + 4) != Header->ContextTypeInfo )
    {
      v12 = (volatile __int64 *)(v10 + 8);
      v10 = (char *)*((_QWORD *)v10 + 1);
      if ( !v10 )
      {
        _InterlockedExchange64(v12, (__int64)Header);
        if ( Context )
          *Context = Header->Context;
        Header->EvtDestroyCallback = Attributes->EvtDestroyCallback;
        EvtCleanupCallback = Attributes->EvtCleanupCallback;
        if ( EvtCleanupCallback )
        {
          Header->EvtCleanupCallback = EvtCleanupCallback;
          this->m_ObjectFlags |= 0x400u;
        }
        goto LABEL_11;
      }
    }
    if ( Context )
      *Context = v10 + 48;
    v5 = 0x40000000;
  }
  else
  {
    v5 = -1073741738;
  }
LABEL_11:
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v11);
  return v5;
}
