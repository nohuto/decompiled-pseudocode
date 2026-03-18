/*
 * XREFs of ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C00DE950
 * Callers:
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00DE9A8 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00DEAB0 (NtQueryCompositionInputQueueAndTransform.c)
 * Callees:
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0021C80 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionInputObject::LockForRead(char *Object, const struct CInputSink **a2)
{
  NTSTATUS v4; // edi

  *a2 = 0LL;
  v4 = CompositionObject::AddRef((CompositionObject *)Object);
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockShared((CPushLock *)(Object + 32));
    if ( v4 < 0 )
      ObfDereferenceObject(Object);
    else
      *a2 = (const struct CInputSink *)(Object + 24);
  }
  return (unsigned int)v4;
}
