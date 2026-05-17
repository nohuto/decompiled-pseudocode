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

void __fastcall RtlReleaseActivationContext(volatile signed __int32 *a1)
{
  signed __int32 i; // eax
  int v3; // edi

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && (unsigned int)(*a1 - 1) <= 0x7FFFFFFD )
  {
    for ( i = *a1; i != 0x7FFFFFFF; i = *a1 )
    {
      v3 = i - 1;
      if ( i == _InterlockedCompareExchange(a1, i - 1, i) )
        goto LABEL_7;
    }
    v3 = 0x7FFFFFFF;
LABEL_7:
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        (PVOID *)&a1[8 * (((unsigned __int8)_InterlockedExchangeAdd(a1 + 96, 1u) + 1) & 3) + 98],
        0LL);
    if ( !v3 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(a1);
      else
        RtlpFreeActivationContext(a1);
    }
  }
}
