/*
 * XREFs of RtlReleaseActivationContext @ 0x18000CC70
 * Callers:
 *     RtlpTpWorkUnposted @ 0x180008900 (RtlpTpWorkUnposted.c)
 *     RtlpTpWorkCallback @ 0x180008E40 (RtlpTpWorkCallback.c)
 *     RtlQueueWorkItem @ 0x18000BBE0 (RtlQueueWorkItem.c)
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18000D4C8 (TppCleanupGroupMemberInitialize.c)
 *     LdrpFindDllActivationContext @ 0x18000F8A0 (LdrpFindDllActivationContext.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180015A2C (sxsisol_SearchActCtxForDllName.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     RtlFreeActivationContextStack @ 0x180075FF0 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x1800760D0 (RtlDeactivateActivationContext.c)
 *     LdrRemoveLoadAsDataTable @ 0x180076F50 (LdrRemoveLoadAsDataTable.c)
 *     RtlDispatchAPC @ 0x180081AF0 (RtlDispatchAPC.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180032D60 (RtlCaptureStackBackTrace.c)
 *     RtlpFreeActivationContext @ 0x180081CFC (RtlpFreeActivationContext.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800D273C (RtlpMoveActCtxToFreeList.c)
 */

void __cdecl RtlReleaseActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG i; // eax
  int v3; // edi

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && (unsigned int)(ActivationContext->RefCount - 1) <= 0x7FFFFFFD )
  {
    for ( i = ActivationContext->RefCount; i != 0x7FFFFFFF; i = ActivationContext->RefCount )
    {
      v3 = i - 1;
      if ( i == _InterlockedCompareExchange(&ActivationContext->RefCount, i - 1, i) )
        goto LABEL_7;
    }
    v3 = 0x7FFFFFFF;
LABEL_7:
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        &ActivationContext[1].NotificationContext
      + 4
      * (((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&ActivationContext[1].NotificationRoutine,
                             1u)
        + 1) & 3),
        0LL);
    if ( !v3 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(ActivationContext);
      else
        RtlpFreeActivationContext(ActivationContext);
    }
  }
}
