/*
 * XREFs of ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0047C44
 * Callers:
 *     NtQueryCompositionInputSink @ 0x1C004B4F0 (NtQueryCompositionInputSink.c)
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C004EBE0 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C003C4EC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C004A7C8 (-QueryInputQueueTypes@CInputSink@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::QueryInputQueueTypes(
        CompositionInputObject *this,
        struct COMPOSITION_INPUT_SINK_QUERY_V2 *a2)
{
  int InputQueueTypes; // ebx

  InputQueueTypes = CPushLock::AcquireLockShared((CompositionInputObject *)((char *)this + 32));
  if ( InputQueueTypes >= 0 )
  {
    InputQueueTypes = CInputSink::QueryInputQueueTypes((CompositionInputObject *)((char *)this + 24), a2);
    CPushLock::ReleaseLock((CompositionInputObject *)((char *)this + 32));
  }
  return (unsigned int)InputQueueTypes;
}
