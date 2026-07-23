/*
 * XREFs of RtlReleaseActivationContext @ 0x18003D9D0
 * Callers:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180024D44 (sxsisol_SearchActCtxForDllName.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003DF0C (TppCleanupGroupMemberInitialize.c)
 *     RtlFreeActivationContextStack @ 0x180063A40 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x180063B20 (RtlDeactivateActivationContext.c)
 *     LdrpFindDllActivationContext @ 0x18006A538 (LdrpFindDllActivationContext.c)
 *     LdrRemoveLoadAsDataTable @ 0x18006B740 (LdrRemoveLoadAsDataTable.c)
 *     RtlDispatchAPC @ 0x180077790 (RtlDispatchAPC.c)
 *     RtlpTpWorkCallback @ 0x18007C030 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x18007C2C0 (RtlpTpWorkUnposted.c)
 *     RtlQueueWorkItem @ 0x18007C3C0 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180012600 (RtlCaptureStackBackTrace.c)
 *     RtlpFreeActivationContext @ 0x18007507C (RtlpFreeActivationContext.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800C9C5C (RtlpMoveActCtxToFreeList.c)
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
