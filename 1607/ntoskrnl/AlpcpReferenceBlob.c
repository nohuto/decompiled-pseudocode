/*
 * XREFs of AlpcpReferenceBlob @ 0x14040AC0C
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140408318 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateRegion @ 0x140408BF4 (AlpcpCreateRegion.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14040924C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x140409680 (AlpcpFlushQueue.c)
 *     AlpcpFlushResourcesPort @ 0x140409934 (AlpcpFlushResourcesPort.c)
 *     AlpcpPrepareViewForDelivery @ 0x14040A858 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpViewSearchCallbackFunction @ 0x14040AAD4 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcReferenceBlobByHandle @ 0x14040AB18 (AlpcReferenceBlobByHandle.c)
 *     AlpcpReceiveView @ 0x14040BC48 (AlpcpReceiveView.c)
 *     AlpcpCreateView @ 0x14040C0E0 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14040C5E0 (AlpcpCreateSecurityContext.c)
 *     AlpcpExposeAttributes @ 0x140448CF0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x14044BC40 (AlpcpReceiveMessagePort.c)
 *     AlpcpCleanupProcessViews @ 0x14045FE30 (AlpcpCleanupProcessViews.c)
 *     AlpcpCreateSection @ 0x140471738 (AlpcpCreateSection.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateReserve @ 0x1404A036C (AlpcpCreateReserve.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1404C2304 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140655F10 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  __int64 v2; // r8

  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  result = *(_QWORD *)(BugCheckParameter2 - 24);
  while ( result > 0 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 - 24), result + 1, result);
    if ( result == v2 )
      return ++result;
  }
  if ( result )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, result);
  return result;
}
