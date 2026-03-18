/*
 * XREFs of ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C00E0700
 * Callers:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00E07A4 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00E0880 (NtQueryCompositionInputQueueAndTransform.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C003C4EC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0045F60 (-AddRef@CompositionObject@@QEBAJXZ.c)
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
